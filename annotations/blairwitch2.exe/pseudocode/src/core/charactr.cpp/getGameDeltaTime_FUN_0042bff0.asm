; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_0042bff0(CGame *game_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   game_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_process_FUN_005216e0 at 00521726
;   core_script.cpp_CScript_renderSubtitles_FUN_005218a0 at 005218bf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042bff0
        ;   Label: core_charactr.cpp_getGameDeltaTime_FUN_0042bff0
    MOV EAX,dword ptr [EAX + 0x284]     ; 0042bff4
    RET                                 ; 0042bffa

