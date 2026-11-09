; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_00574120(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   unkafter_turret.cpp_FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574120
        ;   Label: support_trstream.cpp_CInStreamMemory_ctor_FUN_00574120
    PUSH EDX                            ; 00574124
    CALL unkafter_turret.cpp_FUN_00572530 ; 00574125
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00572530()
    MOV dword ptr [EAX],0x5e5ac4        ; 0057412a
    MOV dword ptr [EAX + 0x4],0x0       ; 00574130
    MOV dword ptr [EAX + 0x8],0x0       ; 00574137
    MOV dword ptr [EAX + 0xc],0x0       ; 0057413e
    ADD ESP,0x4                         ; 00574145
    MOV dword ptr [EAX + 0x10],0x0      ; 00574148
    RET                                 ; 0057414f

