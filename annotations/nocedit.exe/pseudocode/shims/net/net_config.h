#pragma once

// =============================================================================
// NETPLAY CONFIGURATION — system/netplay.ini
// =============================================================================
//
// An addition, not a reconstruction. Every network parameter in the shipped
// game is a compile-time constant: the UDP port is the literal 0x1ddf (7647)
// in four places, the socket binds INADDR_ANY, and the "Enter Server IP"
// dialog is pre-filled from g_IpAddress — which is baked into the binary as
// one of the original developers' LAN addresses,. There is no menu for any of it,
// so a player cannot point the game at another machine without editing the executable.
//
// This reads those values from their own ini instead, in the same spirit as
// the renderer's system/render.ini: a separate file, read on first use, with
// every key optional.
//
//   [Network]
//   bindAddress  = 127.0.0.1   ; local address to bind (blank = all)
//   port         = 7647        ; UDP port; must match on host and client
//   serverAddress= 192.168.1.5 ; pre-fills the Ctrl+J "Enter Server IP" prompt
//
// bindAddress and port fall back to the shipped constant, so leaving them out
// changes nothing. serverAddress does not: with no key it offers 127.0.0.1
// rather than the baked-in address, which belongs to a machine that has not
// existed for twenty-five years and could only ever be a wrong answer. Ctrl+J
// therefore finds a host on this machine with no ini at all. Setting the key,
// or just typing over the prompt, reaches anywhere else.
//
// bindAddress exists mainly so two instances can run on one machine: the game
// binds a fixed port, so a second copy would collide on INADDR_ANY. Giving each
// its own loopback address (127.0.0.1, 127.0.0.2, ...) lets both hold 7647.
// The NOCTURNE_NET_BIND environment variable overrides this key, so a pair of
// instances can be launched from one directory without two ini files.
//
// Gated by NOCTURNE_NETPLAY_INI in shim_config_netplay.h.
//
// The host-scheduled safe respawn lives next door in net_respawn.h.

#ifdef __cplusplus
extern "C" {
#endif

// Drop the cached settings so the next query re-reads the file. Called when a
// session starts, so editing the ini takes effect on the next host/join rather
// than needing a restart.
void nocturne_net_reload(void);

// Local address to bind, or "" to leave the game's INADDR_ANY alone.
const char *nocturne_net_bind_address(void);

// Address to offer in the join prompt. Never blank: with no serverAddress key
// this is 127.0.0.1, so Ctrl+J finds a host on this machine without anything
// being configured. The address baked into the executable is a developer's old
// LAN machine and is never offered while NOCTURNE_NETPLAY_INI is on.
const char *nocturne_net_server_address(void);

// Name this player appears under in the lobby, or "" to keep the game's own.
// CNetGame's constructor hardcodes "MyComputer" and nothing else ever writes
// the field, so without this every player in a session has the same name.
// NOCTURNE_NET_NAME overrides the key, for the same reason NOCTURNE_NET_BIND
// does: two instances launched from one directory share one ini.
const char *nocturne_net_player_name(void);

// UDP port for host and client. Returns game_default (the shipped 7647) unless
// the ini overrides it, so every call site can pass its own literal and stay
// readable.
int nocturne_net_port(int game_default);

#ifdef __cplusplus
}
#endif
