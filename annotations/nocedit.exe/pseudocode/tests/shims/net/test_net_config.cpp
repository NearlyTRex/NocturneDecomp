// =============================================================================
// NET CONFIG — system\netplay.ini, and the environment over it
// =============================================================================
//
// The bind address, port, server address and player name, from [Network] in
// the file; the file written with the built-in values the first time it is
// looked for. Each case runs in a game directory of its own.

#include "net/net_config.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

namespace {

namespace fs = std::filesystem;
using net_support::net;

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value != nullptr ? value : "");
#else
    if (value != nullptr) {
        setenv(name, value, 1);
    } else {
        unsetenv(name);
    }
#endif
}

void enter_game_directory(bool with_system) {
    std::error_code ec;
    const fs::path dir = fs::temp_directory_path(ec) / "nocturne_net_config_test";
    fs::current_path(fs::temp_directory_path(ec), ec);
    fs::remove_all(dir, ec);
    fs::create_directories(with_system ? dir / "system" : dir, ec);
    fs::current_path(dir, ec);
    set_env("NOCTURNE_NET_BIND", nullptr);
    set_env("NOCTURNE_NET_NAME", nullptr);
    nocturne_net_reload();
}

void write_ini(const char *text) {
    std::ofstream out("system/netplay.ini", std::ios::binary);
    out << text;
}

} // namespace

// With no system directory there is nowhere to write the file: the built-in
// values stand.
NOCTURNE_TEST(with_nowhere_to_write_the_built_in_values_stand) {
    enter_game_directory(false);
    CHECK_EQ(nocturne_net_port(7647), 7647);
    CHECK_EQ(std::string(nocturne_net_bind_address()), std::string());
    std::error_code ec;
    CHECK(!fs::exists("system/netplay.ini", ec));
}

// The first look writes the file, every key at its built-in value, and reading
// it back changes nothing.
NOCTURNE_TEST(the_first_look_writes_the_file_with_the_built_in_values) {
    enter_game_directory(true);
    CHECK_EQ(std::string(nocturne_net_server_address()), std::string("127.0.0.1"));
    std::error_code ec;
    CHECK(fs::exists("system/netplay.ini", ec));
    nocturne_net_reload();
    CHECK_EQ(nocturne_net_port(1), 7647);
    CHECK_EQ(std::string(nocturne_net_bind_address()), std::string());
    CHECK_EQ(std::string(nocturne_net_player_name()), std::string());
    CHECK_EQ(std::string(nocturne_net_server_address()), std::string("127.0.0.1"));
}

// Only [Network] is read, in any case, with comments, blank lines and stray
// text passed over, and the values trimmed; the name is cut to the game's field.
NOCTURNE_TEST(the_network_section_is_read) {
    enter_game_directory(true);
    write_ini("port = 1000\r\n"
              "[Other]\n"
              "port = 2000\n"
              "[network\n"
              "[NETWORK]\n"
              "; a comment\n"
              "# another\n"
              "\n"
              "no equals here\n"
              "\tbindAddress =\t127.0.0.2 \r\n"
              "SERVERADDRESS = 10.0.0.5\t\n"
              "playerName = A name far longer than nineteen\n"
              "colour = blue\n"
              "port = 3000\n");
    CHECK_EQ(std::string(nocturne_net_bind_address()), std::string("127.0.0.2"));
    CHECK_EQ(std::string(nocturne_net_server_address()), std::string("10.0.0.5"));
    CHECK_EQ(std::string(nocturne_net_player_name()), std::string("A name far longer t"));
    CHECK_EQ(nocturne_net_port(7647), 3000);
}

// A port that is not one leaves the caller's; the environment's bind address
// and name win over the file's, and an empty one does not.
NOCTURNE_TEST(the_environment_wins_and_a_bad_port_is_the_callers) {
    enter_game_directory(true);
    write_ini("[Network]\nport = 70000\nbindAddress = 127.0.0.3\nplayerName = Ini\n");
    CHECK_EQ(nocturne_net_port(7647), 7647);
    write_ini("[Network]\nport = 0\nbindAddress = 127.0.0.3\nplayerName = Ini\n");
    nocturne_net_reload();
    CHECK_EQ(nocturne_net_port(7647), 7647);

    set_env("NOCTURNE_NET_BIND", "127.0.0.9");
    set_env("NOCTURNE_NET_NAME", "Environment name, long");
    CHECK_EQ(std::string(nocturne_net_bind_address()), std::string("127.0.0.9"));
    CHECK_EQ(std::string(nocturne_net_player_name()), std::string("Environment name, l"));

#if !defined(_WIN32)
    // Windows has no empty environment variable to set.
    set_env("NOCTURNE_NET_BIND", "");
    set_env("NOCTURNE_NET_NAME", "");
    CHECK_EQ(std::string(nocturne_net_bind_address()), std::string("127.0.0.3"));
    CHECK_EQ(std::string(nocturne_net_player_name()), std::string("Ini"));
#endif
    set_env("NOCTURNE_NET_BIND", nullptr);
    set_env("NOCTURNE_NET_NAME", nullptr);
}

// Applying the settings names the player, if a name is set, and answers the port.
NOCTURNE_TEST(applying_the_settings_names_the_player) {
    enter_game_directory(true);
    write_ini("[Network]\nport = 4000\n");
    snprintf(net.player_name, sizeof(net.player_name), "MyComputer");
    CHECK_EQ(nocturne_net_apply_config(&net, 7647), 4000);
    CHECK_EQ(std::string(net.player_name), std::string("MyComputer"));

    write_ini("[Network]\nplayerName = Pat\n");
    nocturne_net_reload();
    CHECK_EQ(nocturne_net_apply_config(&net, 7647), 7647);
    CHECK_EQ(std::string(net.player_name), std::string("Pat"));
}

NOCTURNE_TEST_MAIN()
