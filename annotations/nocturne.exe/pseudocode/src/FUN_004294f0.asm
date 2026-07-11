; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004294f0(int param_1)
;
;
; XREF[2]:
;   FUN_004b54c0 at 004b54d0
;   FUN_004b5750 at 004b5760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004294f0
        ;   Label: FUN_004294f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004294f1
    MOV EDX,ECX                         ; 004294f5
    MOV EBX,dword ptr [ECX + 0x24ac]    ; 004294f7
    XOR EAX,EAX                         ; 004294fd
    TEST EBX,EBX                        ; 004294ff
    JNZ 0x00429515                      ; 00429501
        ;   XREF to: 00429515 (CONDITIONAL_JUMP)  ; LAB_00429515
    INC EAX                             ; 00429503
        ;   Label: LAB_00429503
    ADD EDX,0x44                        ; 00429504
    CMP EAX,0x2                         ; 00429507
    JGE 0x0042951c                      ; 0042950a
        ;   XREF to: 0042951c (CONDITIONAL_JUMP)  ; LAB_0042951c
    CMP dword ptr [EDX + 0x24ac],0x0    ; 0042950c
    JZ 0x00429503                       ; 00429513
        ;   XREF to: 00429503 (CONDITIONAL_JUMP)  ; LAB_00429503
    MOV EAX,0x1                         ; 00429515
        ;   Label: LAB_00429515
    POP EBX                             ; 0042951a
    RET                                 ; 0042951b
    XOR EAX,EAX                         ; 0042951c
        ;   Label: LAB_0042951c
    POP EBX                             ; 0042951e
    RET                                 ; 0042951f

