; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   fudge_target
; float            Stack[0xc]:4   fudge_step
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004c9cf0 at 004c9df3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049b240
        ;   Label: core_game.cpp_CGame_setFudgeTarget_FUN_0049b240
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049b244
    MOV dword ptr [EAX + 0x9bc],EDX     ; 0049b248
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049b24e
    MOV dword ptr [EAX + 0x9c0],EDX     ; 0049b252
    RET                                 ; 0049b258

