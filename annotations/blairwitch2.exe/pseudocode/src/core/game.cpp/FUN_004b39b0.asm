; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b39b0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   fudge_target
; float            Stack[0xc]:4   fudge_step
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004e57f0 at 004e58f3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b39b0
        ;   Label: core_game.cpp_FUN_004b39b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b39b4
    MOV dword ptr [EAX + 0x9e0],EDX     ; 004b39b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b39be
    MOV dword ptr [EAX + 0x9e4],EDX     ; 004b39c2
    RET                                 ; 004b39c8

