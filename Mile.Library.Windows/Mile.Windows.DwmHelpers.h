﻿/*
 * PROJECT:   Mouri Internal Library Essentials
 * FILE:      Mile.Windows.DwmHelpers.h
 * PURPOSE:   Definition for Windows DWM Helpers
 *
 * LICENSE:   The MIT License
 *
 * DEVELOPER: Mouri_Naruto (Mouri_Naruto AT Outlook.com)
 */

#pragma once

#ifndef MILE_WINDOWS_DWMHELPERS
#define MILE_WINDOWS_DWMHELPERS

#include <Windows.h>

/**
 * @brief Retrieves or specifies the system-drawn backdrop material of a
 *        window, including behind the non-client area.
 * @param WindowHandle The handle to the window for which the attribute value
 *                     is to be set.
 * @return If the function succeeds, it returns S_OK. Otherwise, it returns an
 *         HRESULT error code.
*/
EXTERN_C HRESULT WINAPI MileDisableSystemBackdrop(
    _In_ HWND WindowHandle);

/**
 * @brief Tests if the dark mode system setting is enabled on the computer.
 * @return True if the dark mode system setting is enabled. Otherwise, this
 *         function returns false.
*/
EXTERN_C BOOL WINAPI MileShouldAppsUseImmersiveDarkMode();

#endif // !MILE_WINDOWS_DWMHELPERS
