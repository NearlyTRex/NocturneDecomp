; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004cc9a0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   fudge_target
; float            Stack[0xc]:4   fudge_step
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_00504400 at 00504503
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc9a0
        ;   Label: core_game.cpp_CGame_setFudgeTarget_FUN_004cc9a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cc9a4
    MOV dword ptr [EAX + 0x9f0],EDX     ; 004cc9a8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc9ae
    MOV dword ptr [EAX + 0x9f4],EDX     ; 004cc9b2
    RET                                 ; 004cc9b8

