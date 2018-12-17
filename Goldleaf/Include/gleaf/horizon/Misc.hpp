
/*

    Goldleaf - Nintendo Switch title manager homebrew (open-source)

    Copyright 2018 - Goldleaf project, developed and managed by XorTroll
    This project is under the terms of GPLv3 license: https://github.com/XorTroll/Goldleaf/blob/master/LICENSE

*/

#pragma once
#include <switch.h>
#include <string>
#include <ctime>
#include <cstdio>

namespace gleaf::horizon
{
    struct FwVersion
    {
        u8 Major;
        u8 Minor;
        u8 Micro;
        std::string DisplayName;
        std::string ToString();
    };

    u32 GetBatteryLevel();
    bool IsCharging();
    std::string GetOpenedUserName();
    bool IsUserSelected();
    std::string GetCurrentTime();
    bool HasInternetConnection();
    FwVersion GetFwVersion();
}