; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_00510610(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510610
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610
    PUSH ESI                            ; 00510611
    PUSH EDI                            ; 00510612
    MOV EAX,dword ptr [ESP + 0x10]      ; 00510613
    MOV EDX,dword ptr [EAX + 0x4]       ; 00510617
    MOV EDX,dword ptr [EDX + 0x18]      ; 0051061a
    MOV dword ptr [EAX + 0x1c],EDX      ; 0051061d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00510620
    MOV EDX,dword ptr [EDX + 0x1c]      ; 00510623
    MOV dword ptr [EAX + 0x20],EDX      ; 00510626
    MOV ECX,0x1                         ; 00510629
    CMP ECX,dword ptr [EAX]             ; 0051062e
    JGE 0x00510660                      ; 00510630
        ;   XREF to: 00510660 (CONDITIONAL_JUMP)  ; LAB_00510660
    MOV EDX,0x24                        ; 00510632
    MOV EBX,dword ptr [EAX + 0x4]       ; 00510637
        ;   Label: LAB_00510637
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0051063a
    CMP ESI,dword ptr [EDX + EBX*0x1 + 0x18] ; 0051063d
    JNZ 0x00510664                      ; 00510641
        ;   XREF to: 00510664 (CONDITIONAL_JUMP)  ; LAB_00510664
    MOV EBX,dword ptr [EAX + 0x4]       ; 00510643
        ;   Label: LAB_00510643
    MOV EDI,dword ptr [EAX + 0x20]      ; 00510646
    CMP EDI,dword ptr [EDX + EBX*0x1 + 0x1c] ; 00510649
    JZ 0x00510656                       ; 0051064d
        ;   XREF to: 00510656 (CONDITIONAL_JUMP)  ; LAB_00510656
    MOV dword ptr [EAX + 0x20],0x0      ; 0051064f
    INC ECX                             ; 00510656
        ;   Label: LAB_00510656
    MOV EBX,dword ptr [EAX]             ; 00510657
    ADD EDX,0x24                        ; 00510659
    CMP ECX,EBX                         ; 0051065c
    JL 0x00510637                       ; 0051065e
        ;   XREF to: 00510637 (CONDITIONAL_JUMP)  ; LAB_00510637
    POP EDI                             ; 00510660
        ;   Label: LAB_00510660
    POP ESI                             ; 00510661
    POP EBX                             ; 00510662
    RET                                 ; 00510663
    MOV dword ptr [EAX + 0x1c],0x0      ; 00510664
        ;   Label: LAB_00510664
    JMP 0x00510643                      ; 0051066b
        ;   XREF to: 00510643 (UNCONDITIONAL_JUMP)  ; LAB_00510643

