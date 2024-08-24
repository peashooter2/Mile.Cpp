/*
 * PROJECT:   Simple Native Project
 * FILE:      SimpleNativeProject.cpp
 * PURPOSE:   Implementation for Simple Native Project
 *
 * LICENSE:   The MIT License
 *
 * DEVELOPER: MouriNaruto (KurikoMouri@outlook.jp)
 */

#include <Mile.Internal.h>

void EntryPoint()
{
    //::DbgBreakPoint();

    BOOLEAN WasEnabled;
    ::RtlAdjustPrivilege(SE_TCB_PRIVILEGE, TRUE, FALSE, &WasEnabled);

    ::NtSerializeBoot();

    ::DbgPrint("For presentation purposes only.\n");
    ::DbgPrint("For presentation purposes only.\n");
    ::DbgPrint("For presentation purposes only.\n");
    ::DbgPrint("For presentation purposes only.\n");
    ::DbgPrint("For presentation purposes only.\n");

    UNICODE_STRING OutputString;
    ::RtlInitUnicodeString(
        &OutputString,
        L"For presentation purposes only.\n");
    ::NtDisplayString(&OutputString);

    ::NtWaitForSingleObject(NtCurrentProcess(), FALSE, nullptr);
}

#pragma comment(linker, "/entry:EntryPoint")
