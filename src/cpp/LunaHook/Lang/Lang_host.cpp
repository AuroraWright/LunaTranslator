#include "Lang_private.h"

std::unordered_map<LANG_STRINGS_HOST, i18nString<wchar_t>>
    _internal_lang_strings_host = {
    {T_WARNING, L"Warning"},
    {ALREADY_INJECTED, L"Already injected"},
    {INJECT_FAILED, L"Injection failed"},
    {INVALID_CODEPAGE, L"Unable to convert text (invalid code page?)"},
    {PROC_CONN, L"Process %d is connected"},
    {PROC_DISCONN, L"Process %d has disconnected."},
    {UNMATCHABLEVERSION, L"The file version does not match and may not function properly. Please download it again!"},
};

DEFINEFUNCTION(LANG_STRINGS_HOST, _internal_lang_strings_host, wchar_t, get_host)
