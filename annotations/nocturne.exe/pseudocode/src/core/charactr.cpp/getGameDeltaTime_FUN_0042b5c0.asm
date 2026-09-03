; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_0042b5c0(CGame *game_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   game_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_process_FUN_004fe5b0 at 004fe5f6
;   core_script.cpp_CScript_renderSubtitles_FUN_004fe770 at 004fe78f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b5c0
        ;   Label: core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0
    MOV EAX,dword ptr [EAX + 0x264]     ; 0042b5c4
    RET                                 ; 0042b5ca

