// =============================================================================
// ADVAPI32 — the user's name, and a registry with nothing in it
// =============================================================================
//
// The game asks for the user's name for the lobby, and reads and writes a
// registry key it can do without. The name comes from the environment; the
// registry answers that nothing is stored and accepts what is written.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/advapi32.h"
#include "win32/shim_init.h"

#include <cstdlib>
#include <string>

namespace {

#if defined(_WIN32)
const char *const kUserVariable = "USERNAME";
#else
const char *const kUserVariable = "USER";
#endif

void set_user(const char *value) {
#if defined(_WIN32)
    _putenv_s(kUserVariable, value == nullptr ? "" : value);
#else
    if (value == nullptr) {
        unsetenv(kUserVariable);
    } else {
        setenv(kUserVariable, value, 1);
    }
#endif
}

std::string user_name(DWORD *length, BOOL *ok) {
    char buffer[64] = {};
    *ok = g_GetUserNameAFunc(buffer, length);
    return buffer;
}

} // namespace

// As Win32's: the length counts the terminator.
NOCTURNE_TEST(the_user_is_named_by_the_environment) {
    shims_init_advapi32();
    set_user("gabriel");
    DWORD length = 64;
    BOOL ok = 0;
    CHECK_EQ(user_name(&length, &ok), std::string("gabriel"));
    CHECK(ok);
    CHECK_EQ(length, (DWORD)8);
}

// A process with no name set is "User", as one with an empty one is.
NOCTURNE_TEST(no_name_in_the_environment_is_user) {
    shims_init_advapi32();
    BOOL ok = 0;
    DWORD length = 64;
    set_user(nullptr);
    CHECK_EQ(user_name(&length, &ok), std::string("User"));
    CHECK_EQ(length, (DWORD)5);
    set_user("");
    length = 64;
    CHECK_EQ(user_name(&length, &ok), std::string("User"));
}

// Too small a buffer is told the size it needs and filled with nothing; no
// buffer or length is no answer.
NOCTURNE_TEST(a_buffer_too_small_is_told_what_it_needs) {
    shims_init_advapi32();
    set_user("gabriel");
    char buffer[4] = {};
    DWORD length = 4;
    CHECK(!g_GetUserNameAFunc(buffer, &length));
    CHECK_EQ(length, (DWORD)8);
    CHECK_EQ(buffer[0], '\0');
    CHECK(!g_GetUserNameAFunc(nullptr, &length));
    CHECK(!g_GetUserNameAFunc(buffer, nullptr));
}

NOCTURNE_TEST(the_registry_holds_nothing_and_takes_anything) {
    shims_init_advapi32();
    HKEY key = nullptr;
    CHECK_EQ(g_RegOpenKeyExAFunc(0x80000001ul, "Software\\Gathering", 0, 0, &key), 2L);
    CHECK_EQ(g_RegOpenKeyExAFunc(0x80000001ul, "Software\\Gathering", 0, 0, nullptr), 2L);
    DWORD disposition = 0;
    CHECK_EQ(g_RegCreateKeyExAFunc(0x80000001ul, "Software\\Gathering", 0, nullptr, 0, 0, nullptr,
                                   &key, &disposition),
             0L);
    CHECK(key != nullptr);
    CHECK_EQ(disposition, (DWORD)1); // REG_CREATED_NEW_KEY
    CHECK_EQ(g_RegCreateKeyExAFunc(0x80000001ul, "x", 0, nullptr, 0, 0, nullptr, nullptr, nullptr),
             0L);
    BYTE data[4] = {1, 2, 3, 4};
    DWORD size = sizeof(data);
    CHECK_EQ(g_RegQueryValueExAFunc(key, "Path", nullptr, nullptr, data, &size), 2L);
    CHECK_EQ(g_RegSetValueExAFunc(key, "Path", 0, 1, data, sizeof(data)), 0L);
    CHECK_EQ(g_RegCloseKeyFunc(key), 0L);
}

// Signing in as someone else is something the game asks for and does not need:
// every step succeeds and changes nothing.
NOCTURNE_TEST(impersonation_succeeds_and_changes_nothing) {
    shims_init_advapi32();
    HANDLE token = nullptr;
    CHECK(g_LogonUserAFunc("user", ".", "secret", 2, 0, &token));
    CHECK(token != nullptr);
    CHECK(g_LogonUserAFunc("user", ".", "secret", 2, 0, nullptr));
    CHECK(g_ImpersonateLoggedOnUserFunc(token));
    CHECK(g_RevertToSelfFunc());
}

NOCTURNE_TEST_MAIN()
