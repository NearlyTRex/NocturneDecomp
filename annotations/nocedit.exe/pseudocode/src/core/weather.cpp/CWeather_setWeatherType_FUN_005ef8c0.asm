; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather *this_ptr,int type)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   type
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ad2b5
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004dfda9
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ac2e
;   core_weather.cpp_CWeather_ctor_FUN_005eead0 at 005eead8
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ef8c0
        ;   Label: core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0
    SUB ESP,0x4                         ; 005ef8c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ef8c4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ef8c8
    MOV dword ptr [EBX],EAX             ; 005ef8cc
    CMP EAX,0x1                         ; 005ef8ce
    JNZ 0x005ef92c                      ; 005ef8d1
        ;   XREF to: 005ef92c (CONDITIONAL_JUMP)  ; LAB_005ef92c
    MOV dword ptr [EBX + 0x4],0x42200000 ; 005ef8d3
    PUSH 0x41a00000                     ; 005ef8da
        ;   Label: LAB_005ef8da
    PUSH 0x41200000                     ; 005ef8df
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005ef8e4
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 005ef92c
        ;   Label: LAB_005ef92c
    JMP 0x005ef8da                      ; 005ef933
        ;   XREF to: 005ef8da (UNCONDITIONAL_JUMP)  ; LAB_005ef8da

