; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_005175e0(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005175e0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0
    PUSH ESI                            ; 005175e1
    PUSH EDI                            ; 005175e2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005175e3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005175e7
    MOV EDX,dword ptr [EDX + 0x18]      ; 005175ea
    MOV dword ptr [EAX + 0x1c],EDX      ; 005175ed
    MOV EDX,dword ptr [EAX + 0x4]       ; 005175f0
    MOV EDX,dword ptr [EDX + 0x1c]      ; 005175f3
    MOV dword ptr [EAX + 0x20],EDX      ; 005175f6
    MOV ECX,0x1                         ; 005175f9
    CMP ECX,dword ptr [EAX]             ; 005175fe
    JGE 0x00517630                      ; 00517600
        ;   XREF to: 00517630 (CONDITIONAL_JUMP)  ; LAB_00517630
    MOV EDX,0x24                        ; 00517602
    MOV EBX,dword ptr [EAX + 0x4]       ; 00517607
        ;   Label: LAB_00517607
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0051760a
    CMP ESI,dword ptr [EDX + EBX*0x1 + 0x18] ; 0051760d
    JNZ 0x00517634                      ; 00517611
        ;   XREF to: 00517634 (CONDITIONAL_JUMP)  ; LAB_00517634
    MOV EBX,dword ptr [EAX + 0x4]       ; 00517613
        ;   Label: LAB_00517613
    MOV EDI,dword ptr [EAX + 0x20]      ; 00517616
    CMP EDI,dword ptr [EDX + EBX*0x1 + 0x1c] ; 00517619
    JZ 0x00517626                       ; 0051761d
        ;   XREF to: 00517626 (CONDITIONAL_JUMP)  ; LAB_00517626
    MOV dword ptr [EAX + 0x20],0x0      ; 0051761f
    INC ECX                             ; 00517626
        ;   Label: LAB_00517626
    MOV EBX,dword ptr [EAX]             ; 00517627
    ADD EDX,0x24                        ; 00517629
    CMP ECX,EBX                         ; 0051762c
    JL 0x00517607                       ; 0051762e
        ;   XREF to: 00517607 (CONDITIONAL_JUMP)  ; LAB_00517607
    POP EDI                             ; 00517630
        ;   Label: LAB_00517630
    POP ESI                             ; 00517631
    POP EBX                             ; 00517632
    RET                                 ; 00517633
    MOV dword ptr [EAX + 0x1c],0x0      ; 00517634
        ;   Label: LAB_00517634
    JMP 0x00517613                      ; 0051763b
        ;   XREF to: 00517613 (UNCONDITIONAL_JUMP)  ; LAB_00517613

