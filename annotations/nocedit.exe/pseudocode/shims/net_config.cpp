// =============================================================================
// NETPLAY CONFIGURATION — implementation
// =============================================================================
//
// See net_config.h for the file format and why it exists.

#include "net_config.h"
#include "shim_config.h"

#include "debug_log.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

// Defined in shims/crt.cpp — declared here rather than including
// stream_compat.h, which needs <fstream> pulled in ahead of it.
std::string watcom_resolve_fs_path(const char *path);

#define NET_INI_PATH    "system\\netplay.ini"
#define NET_INI_SECTION "Network"

static int  s_loaded = 0;
static char s_bind_address[64];
static char s_server_address[100];
static char s_player_name[20];      // CNetGame::player_name is char[20]
static int  s_port;                 // 0 until the ini names one

#if NOCTURNE_NETPLAY_INI
// Written out the first time the game looks for the file, so the settings are
// discoverable without anyone having to know they exist. Every value here is
// the one already compiled in, so a freshly created file changes nothing.
static const char NET_INI_TEMPLATE[] =
    "; Nocturne netplay settings.\n"
    ";\n"
    "; Every key is optional. Delete this file, or comment a key out, and the\n"
    "; game falls back to the value built into the original executable.\n"
    "\n"
    "[Network]\n"
    "\n"
    "; Local address to bind the game's UDP socket to.\n"
    "; Blank (the default) binds every interface, as the shipped game does.\n"
    ";\n"
    "; Its main use is running two copies on one machine: the port below is\n"
    "; fixed for host and client alike, so a second copy would fail to bind\n"
    "; with \"Can't bind UDP socket\". Give each copy its own loopback address:\n"
    ";   copy 1 -> bindAddress = 127.0.0.1   (host, Ctrl+H)\n"
    ";   copy 2 -> bindAddress = 127.0.0.2   (client, Ctrl+J, joins 127.0.0.1)\n"
    "; The NOCTURNE_NET_BIND environment variable overrides this key, which is\n"
    "; handy when both copies share one directory and therefore one ini.\n"
    "bindAddress =\n"
    "\n"
    "; UDP port used by host and client. Must match on both ends.\n"
    "; The shipped game hardcodes 7647.\n"
    "port = 7647\n"
    "\n"
    "; Pre-fills the \"Enter Server IP\" prompt on Ctrl+J. Blank uses 127.0.0.1,\n"
    "; which is where a second copy on this machine will be. Set it to the\n"
    "; host's address to join over a network.\n"
    "serverAddress =\n"
    "\n"
    "; Name shown for you in the lobby, up to 19 characters. Blank keeps the\n"
    "; game's built-in name, which is \"MyComputer\" for everyone -- so set this\n"
    "; if you want to tell players apart. NOCTURNE_NET_NAME overrides it.\n"
    "playerName =\n";

static void net_write_template(const char *resolved_path) {
    FILE *f = fopen(resolved_path, "w");
    if (f == nullptr) {
        // Read-only install, or no system directory — nothing to do but keep
        // the built-in defaults.
        DLOG_EX("net", "netplay.ini: could not create '%s'", resolved_path);
        return;
    }
    fputs(NET_INI_TEMPLATE, f);
    fclose(f);
    DLOG_EX("net", "netplay.ini: created '%s' with the shipped defaults",
            resolved_path);
}
#endif

static char *net_trim(char *s) {
    while (*s == ' ' || *s == '\t') { s++; }
    char *end = s + strlen(s);
    while (end > s && (end[-1] == ' ' || end[-1] == '\t' ||
                       end[-1] == '\r' || end[-1] == '\n')) {
        end--;
    }
    *end = '\0';
    return s;
}

static void net_store(const char *key, const char *value) {
    if (strcasecmp(key, "bindAddress") == 0) {
        snprintf(s_bind_address, sizeof(s_bind_address), "%s", value);
    }
    else if (strcasecmp(key, "serverAddress") == 0) {
        snprintf(s_server_address, sizeof(s_server_address), "%s", value);
    }
    else if (strcasecmp(key, "playerName") == 0) {
        // Truncated to the game's field width here rather than at the call
        // site, so the caller can copy it without a length check.
        snprintf(s_player_name, sizeof(s_player_name), "%s", value);
    }
    else if (strcasecmp(key, "port") == 0) {
        int port = atoi(value);
        // Leave s_port at 0 (meaning "use the caller's default") for anything
        // that is not a usable UDP port, rather than binding something absurd.
        if (port > 0 && port < 65536) { s_port = port; }
    }
}

static void net_load(void) {
    s_loaded = 1;
    s_bind_address[0] = '\0';
    s_server_address[0] = '\0';
    s_player_name[0] = '\0';
    s_port = 0;

#if NOCTURNE_NETPLAY_INI
    // The path is written Windows-style for consistency with the rest of the
    // game's file access; watcom_resolve_fs_path does the \ -> / translation
    // and the case-insensitive component walk, as it does for render.ini.
    const std::string resolved = watcom_resolve_fs_path(NET_INI_PATH);
    FILE *f = fopen(resolved.c_str(), "r");
    if (f == nullptr) {
        // For a file that does not exist yet the resolver still resolves the
        // directory component case-insensitively, so this lands inside the
        // real system directory whatever its case.
        net_write_template(resolved.c_str());
        return;
    }

    char line[512];
    int in_section = 0;
    while (fgets(line, sizeof(line), f) != nullptr) {
        char *p = net_trim(line);
        if (*p == '\0' || *p == ';' || *p == '#') { continue; }
        if (*p == '[') {
            char *end = strchr(p, ']');
            if (end == nullptr) { continue; }
            *end = '\0';
            in_section = (strcasecmp(p + 1, NET_INI_SECTION) == 0);
            continue;
        }
        if (!in_section) { continue; }
        char *eq = strchr(p, '=');
        if (eq == nullptr) { continue; }
        *eq = '\0';
        net_store(net_trim(p), net_trim(eq + 1));
    }
    fclose(f);

    DLOG_EX("net",
            "netplay.ini: bindAddress='%s' serverAddress='%s' port=%d playerName='%s'",
            s_bind_address, s_server_address, s_port, s_player_name);
#endif
}

static void net_ensure_loaded(void) {
    if (!s_loaded) { net_load(); }
}

void nocturne_net_reload(void) {
    s_loaded = 0;
}

const char *nocturne_net_bind_address(void) {
    // The environment variable wins, so two instances can be started from one
    // directory (and therefore one ini) without editing anything between runs.
    const char *env = getenv("NOCTURNE_NET_BIND");
    if (env != nullptr && *env != '\0') {
        return env;
    }
    net_ensure_loaded();
    return s_bind_address;
}

const char *nocturne_net_server_address(void) {
    net_ensure_loaded();
    if (s_server_address[0] == '\0') {
        return "127.0.0.1";
    }
    return s_server_address;
}

const char *nocturne_net_player_name(void) {
    const char *env = getenv("NOCTURNE_NET_NAME");
    if (env != nullptr && *env != '\0') {
        // Truncated to the same width as the ini key: the caller copies this
        // straight into CNetGame::player_name, which is char[20], so the
        // accessor — not the call site — has to guarantee it fits.
        static char s_env_name[sizeof(s_player_name)];
        snprintf(s_env_name, sizeof(s_env_name), "%s", env);
        return s_env_name;
    }
    net_ensure_loaded();
    return s_player_name;
}

int nocturne_net_port(int game_default) {
    net_ensure_loaded();
    return (s_port != 0) ? s_port : game_default;
}
