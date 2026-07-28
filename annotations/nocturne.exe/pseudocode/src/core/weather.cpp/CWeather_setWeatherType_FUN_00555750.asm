; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_00555750(CWeather *this_ptr,EWeatherType type)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; EWeatherType     Stack[0x8]:4   type
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047d245
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a2a7c
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 005086de
;   core_weather.cpp_CWeather_ctor_FUN_00554960 at 00554968
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555750
        ;   Label: core_weather.cpp_CWeather_setWeatherType_FUN_00555750
    SUB ESP,0x4                         ; 00555751
    MOV EBX,dword ptr [ESP + 0xc]       ; 00555754
    MOV EAX,dword ptr [ESP + 0x10]      ; 00555758
    MOV dword ptr [EBX],EAX             ; 0055575c
    CMP EAX,0x1                         ; 0055575e
    JNZ 0x005557bc                      ; 00555761
        ;   XREF to: 005557bc (CONDITIONAL_JUMP)  ; LAB_005557bc
    MOV dword ptr [EBX + 0x4],0x42200000 ; 00555763
    PUSH 0x41a00000                     ; 0055576a
        ;   Label: LAB_0055576a
    PUSH 0x41200000                     ; 0055576f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00555774
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00555779
    MOV dword ptr [EBX + 0x24],0x0      ; 0055577d
    FLD float ptr [ESP + 0x8]           ; 00555784
    ADD ESP,0x8                         ; 00555788
    MOV dword ptr [EBX + 0x34],0x41200000 ; 0055578b
    PUSH dword ptr [EBX + 0x34]         ; 00555792
    MOV dword ptr [EBX + 0x28],0x0      ; 00555795
    PUSH 0x40000000                     ; 0055579c
    FSTP float ptr [EBX + 0x20]         ; 005557a1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 005557a4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 005557a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005557ad
    MOV dword ptr [EBX + 0x2c],EAX      ; 005557b1
    ADD ESP,0x8                         ; 005557b4
    ADD ESP,0x4                         ; 005557b7
    POP EBX                             ; 005557ba
    RET                                 ; 005557bb
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 005557bc
        ;   Label: LAB_005557bc
    JMP 0x0055576a                      ; 005557c3
        ;   XREF to: 0055576a (UNCONDITIONAL_JUMP)  ; LAB_0055576a

