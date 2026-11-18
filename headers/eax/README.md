# EAX reference header

`eax1.h` describes EAX 1.0 listener reverb as the engine uses it. Its GUIDs, struct layout,
environment order and preset values are taken from nocedit.exe and bw1.exe. See
[research/04-mp3_audio_system/eax.md](../../research/04-mp3_audio_system/eax.md).

It is written for this project and is 0BSD. Creative's own `eax.h` is not included: the copies in
circulation (for example in Doom 3's GPL source, which OpenAL Soft's `al/eax/api.h` is based on)
carry Creative's file comment with no licence grant.
