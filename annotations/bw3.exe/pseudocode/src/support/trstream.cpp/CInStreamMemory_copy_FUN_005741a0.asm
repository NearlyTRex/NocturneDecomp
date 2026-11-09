; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * support_trstream_cpp_CInStreamMemory_copy_FUN_005741a0(CInStreamMemory *this_ptr,CInStreamMemory *other)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; CInStreamMemory * Stack[0x8]:4   other
;
; Called Functions:
;   unkafter_turret.cpp_FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005741a0
        ;   Label: support_trstream.cpp_CInStreamMemory_copy_FUN_005741a0
    PUSH EDX                            ; 005741a4
    CALL unkafter_turret.cpp_FUN_00572530 ; 005741a5
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00572530()
    ADD ESP,0x4                         ; 005741aa
    MOV dword ptr [EAX],0x5e5ac4        ; 005741ad
    RET                                 ; 005741b3

