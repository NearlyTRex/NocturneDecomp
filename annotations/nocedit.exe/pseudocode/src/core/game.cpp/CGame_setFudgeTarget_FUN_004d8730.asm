; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004d8730(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   fudge_target
; float            Stack[0xc]:4   fudge_step
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0 at 005092d3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d8730
        ;   Label: core_game.cpp_CGame_setFudgeTarget_FUN_004d8730
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d8734
    MOV dword ptr [EAX + 0x9bc],EDX     ; 004d8738
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d873e
    MOV dword ptr [EAX + 0x9c0],EDX     ; 004d8742
    RET                                 ; 004d8748

