; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0(void)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ac2bc
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 005065b6
;   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 at 005eedc3
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eeeb0
        ;   Label: core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
    PUSH EDI                            ; 005eeeb1
    PUSH EBP                            ; 005eeeb2
    MOV EBP,ESP                         ; 005eeeb3
    SUB ESP,0x88                        ; 005eeeb5
    AND ESP,0xfffffff8                  ; 005eeebb
    MOV EBX,dword ptr [EBP + 0x10]      ; 005eeebe
    PUSH 0x41a00000                     ; 005eeec1
    PUSH 0x41200000                     ; 005eeec6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005eeecb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

