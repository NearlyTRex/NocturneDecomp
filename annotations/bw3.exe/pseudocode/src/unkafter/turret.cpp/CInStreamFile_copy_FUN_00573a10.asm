; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * unkafter_turret_cpp_CInStreamFile_copy_FUN_00573a10(CInStreamFile *this_ptr,CInStreamFile *other)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; CInStreamFile *  Stack[0x8]:4   other
;
; Called Functions:
;   unkafter_turret.cpp_FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00573a10
        ;   Label: unkafter_turret.cpp_CInStreamFile_copy_FUN_00573a10
    PUSH EDX                            ; 00573a14
    CALL unkafter_turret.cpp_FUN_00572530 ; 00573a15
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00572530()
    ADD ESP,0x4                         ; 00573a1a
    MOV dword ptr [EAX],0x5e5a84        ; 00573a1d
    RET                                 ; 00573a23

