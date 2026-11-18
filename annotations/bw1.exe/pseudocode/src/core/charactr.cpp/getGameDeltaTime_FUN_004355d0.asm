; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_004355d0(CGame *game_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   game_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_process_FUN_005437f0 at 00543836
;   core_script.cpp_CScript_renderSubtitles_FUN_005439b0 at 005439cf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004355d0
        ;   Label: core_charactr.cpp_getGameDeltaTime_FUN_004355d0
    MOV EAX,dword ptr [EAX + 0x294]     ; 004355d4
    RET                                 ; 004355da

