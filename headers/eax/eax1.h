/*
 * eax1.h - EAX 1.0 listener reverb, as the Nocturne engine uses it.
 *
 * SPDX-License-Identifier: 0BSD
 *
 * Written for this project; not Creative's eax.h. Every value is one the
 * engine's binaries carry or one recorded in research/04-mp3_audio_system/eax.md:
 * the GUIDs and preset values are read from nocedit.exe and bw1.exe, and the
 * layout from the 16-byte payload setReverb sends. Identifiers follow the
 * names EAX 1.0 code uses, so the decomp and existing documentation line up.
 *
 * Requires DEFINE_GUID (objbase.h / initguid.h) before inclusion. Written for
 * the 32-bit target, where unsigned long is 4 bytes and the struct is 16.
 */
#ifndef EAX1_H
#define EAX1_H

/* {4A4E6FC1-C341-11D1-B73A-444553540000}: g_DSPROPSETID_EAX_ReverbProperties
 * (nocedit 00681df0, bw1 006235c0).
 * Obtained by querying a DSBCAPS_CTRL3D buffer's IDirectSound3DBuffer for
 * IKsPropertySet. */
DEFINE_GUID(DSPROPSETID_EAX_ReverbProperties,
    0x4A4E6FC1, 0xC341, 0x11D1, 0xB7, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

/* Properties of DSPROPSETID_EAX_ReverbProperties. The engine only sends
 * DSPROPERTY_EAX_ALL, with a whole EAX_REVERBPROPERTIES. */
typedef enum {
    DSPROPERTY_EAX_ALL,             /* EAX_REVERBPROPERTIES, 16 bytes */
    DSPROPERTY_EAX_ENVIRONMENT,     /* unsigned long */
    DSPROPERTY_EAX_VOLUME,          /* float */
    DSPROPERTY_EAX_DECAYTIME,       /* float */
    DSPROPERTY_EAX_DAMPING          /* float */
} DSPROPERTY_EAX_REVERBPROPERTY;

typedef struct {
    unsigned long environment;      /* 0x0  EAX_ENVIRONMENT_*; the engine always sends 0 */
    float fVolume;                  /* 0x4  reverb level, 0.0 (off) to 1.0 */
    float fDecayTime_sec;           /* 0x8  0.1 to 20.0 seconds */
    float fDamping;                 /* 0xc  0.0 highs decay fastest, 1.0 even, 2.0 lows fastest */
} EAX_REVERBPROPERTIES;

#define EAX_MINVOLUME       0.0f
#define EAX_MAXVOLUME       1.0f
#define EAX_MINDECAYTIME    0.1f
#define EAX_MAXDECAYTIME    20.0f
#define EAX_MINDAMPING      0.0f
#define EAX_MAXDAMPING      2.0f

/* In g_ReverbPresetTable order, which is entry n = environment n - 1
 * (entry 0 is OFF, all zero). */
enum {
    EAX_ENVIRONMENT_GENERIC,
    EAX_ENVIRONMENT_PADDEDCELL,
    EAX_ENVIRONMENT_ROOM,
    EAX_ENVIRONMENT_BATHROOM,
    EAX_ENVIRONMENT_LIVINGROOM,
    EAX_ENVIRONMENT_STONEROOM,
    EAX_ENVIRONMENT_AUDITORIUM,
    EAX_ENVIRONMENT_CONCERTHALL,
    EAX_ENVIRONMENT_CAVE,
    EAX_ENVIRONMENT_ARENA,
    EAX_ENVIRONMENT_HANGAR,
    EAX_ENVIRONMENT_CARPETEDHALLWAY,
    EAX_ENVIRONMENT_HALLWAY,
    EAX_ENVIRONMENT_STONECORRIDOR,
    EAX_ENVIRONMENT_ALLEY,
    EAX_ENVIRONMENT_FOREST,
    EAX_ENVIRONMENT_CITY,
    EAX_ENVIRONMENT_MOUNTAINS,
    EAX_ENVIRONMENT_QUARRY,
    EAX_ENVIRONMENT_PLAIN,
    EAX_ENVIRONMENT_PARKINGLOT,
    EAX_ENVIRONMENT_SEWERPIPE,
    EAX_ENVIRONMENT_UNDERWATER,
    EAX_ENVIRONMENT_DRUGGED,
    EAX_ENVIRONMENT_DIZZY,
    EAX_ENVIRONMENT_PSYCHOTIC,
    EAX_ENVIRONMENT_COUNT
};

/* Initializers for EAX_REVERBPROPERTIES: environment, volume, decay, damping.
 * Values from g_ReverbPresetTable (nocedit 00681efc), identical in every build.
 * The engine sends each with environment 0, not the one named here. */
#define EAX_PRESET_GENERIC          EAX_ENVIRONMENT_GENERIC,          0.5f,   1.493f,  0.5f
#define EAX_PRESET_PADDEDCELL       EAX_ENVIRONMENT_PADDEDCELL,       0.25f,  0.1f,    0.0f
#define EAX_PRESET_ROOM             EAX_ENVIRONMENT_ROOM,             0.417f, 0.4f,    0.666f
#define EAX_PRESET_BATHROOM         EAX_ENVIRONMENT_BATHROOM,         0.653f, 1.499f,  0.166f
#define EAX_PRESET_LIVINGROOM       EAX_ENVIRONMENT_LIVINGROOM,       0.208f, 0.478f,  0.0f
#define EAX_PRESET_STONEROOM        EAX_ENVIRONMENT_STONEROOM,        0.5f,   2.309f,  0.888f
#define EAX_PRESET_AUDITORIUM       EAX_ENVIRONMENT_AUDITORIUM,       0.403f, 4.279f,  0.5f
#define EAX_PRESET_CONCERTHALL      EAX_ENVIRONMENT_CONCERTHALL,      0.5f,   3.961f,  0.5f
#define EAX_PRESET_CAVE             EAX_ENVIRONMENT_CAVE,             0.5f,   2.886f,  1.304f
#define EAX_PRESET_ARENA            EAX_ENVIRONMENT_ARENA,            0.361f, 7.284f,  0.332f
#define EAX_PRESET_HANGAR           EAX_ENVIRONMENT_HANGAR,           0.5f,   10.0f,   0.3f
#define EAX_PRESET_CARPETEDHALLWAY  EAX_ENVIRONMENT_CARPETEDHALLWAY,  0.153f, 0.259f,  2.0f
#define EAX_PRESET_HALLWAY          EAX_ENVIRONMENT_HALLWAY,          0.361f, 1.493f,  0.0f
#define EAX_PRESET_STONECORRIDOR    EAX_ENVIRONMENT_STONECORRIDOR,    0.444f, 2.697f,  0.638f
#define EAX_PRESET_ALLEY            EAX_ENVIRONMENT_ALLEY,            0.25f,  1.752f,  0.776f
#define EAX_PRESET_FOREST           EAX_ENVIRONMENT_FOREST,           0.111f, 3.145f,  0.472f
#define EAX_PRESET_CITY             EAX_ENVIRONMENT_CITY,             0.111f, 2.767f,  0.224f
#define EAX_PRESET_MOUNTAINS        EAX_ENVIRONMENT_MOUNTAINS,        0.194f, 7.841f,  0.472f
#define EAX_PRESET_QUARRY           EAX_ENVIRONMENT_QUARRY,           1.0f,   1.499f,  0.5f
#define EAX_PRESET_PLAIN            EAX_ENVIRONMENT_PLAIN,            0.097f, 2.767f,  0.224f
#define EAX_PRESET_PARKINGLOT       EAX_ENVIRONMENT_PARKINGLOT,       0.208f, 1.652f,  1.5f
#define EAX_PRESET_SEWERPIPE        EAX_ENVIRONMENT_SEWERPIPE,        0.652f, 2.886f,  0.25f
#define EAX_PRESET_UNDERWATER       EAX_ENVIRONMENT_UNDERWATER,       1.0f,   1.499f,  0.0f
#define EAX_PRESET_DRUGGED          EAX_ENVIRONMENT_DRUGGED,          0.875f, 8.392f,  1.388f
#define EAX_PRESET_DIZZY            EAX_ENVIRONMENT_DIZZY,            0.139f, 17.234f, 0.666f
#define EAX_PRESET_PSYCHOTIC        EAX_ENVIRONMENT_PSYCHOTIC,        0.486f, 7.563f,  0.806f

/* Not EAX: DirectSound's voice manager, which setMode sets through the same
 * IKsPropertySet (property 0, DWORD 1). g_DSPROPSETID_VoiceManager
 * (nocedit 00681de0, bw1 006235b0); nocedit once mislabelled it
 * g_KSPROPSETID_DirectSound3DListener. */
DEFINE_GUID(DSPROPSETID_VoiceManager,
    0x62A69BAE, 0xDF9D, 0x11D1, 0x99, 0xA6, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x46);

#endif /* EAX1_H */
