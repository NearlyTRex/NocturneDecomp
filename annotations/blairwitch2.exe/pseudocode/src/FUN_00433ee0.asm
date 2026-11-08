; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00433ee0(undefined4 param_1,int *param_2,int *param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433ee0
        ;   Label: FUN_00433ee0
    PUSH ESI                            ; 00433ee1
    PUSH EDI                            ; 00433ee2
    PUSH EBP                            ; 00433ee3
    MOV EDI,dword ptr [ESP + 0x18]      ; 00433ee4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00433ee8
    PUSH EDI                            ; 00433eec
        ;   Label: LAB_00433eec
    MOV EAX,dword ptr [EDI]             ; 00433eed
    CALL dword ptr [EAX + 0x4]          ; 00433eef
    MOV EBX,EAX                         ; 00433ef2
    ADD ESP,0x4                         ; 00433ef4
    MOV EDX,EAX                         ; 00433ef7
    CMP EAX,-0x1                        ; 00433ef9
    JZ 0x00433f09                       ; 00433efc
        ;   XREF to: 00433f09 (CONDITIONAL_JUMP)  ; LAB_00433f09
    TEST EAX,EAX                        ; 00433efe
    JGE 0x00433f13                      ; 00433f00
        ;   XREF to: 00433f13 (CONDITIONAL_JUMP)  ; LAB_00433f13
    XOR EAX,EAX                         ; 00433f02
        ;   Label: LAB_00433f02
    POP EBP                             ; 00433f04
    POP EDI                             ; 00433f05
    POP ESI                             ; 00433f06
    POP EBX                             ; 00433f07
    RET                                 ; 00433f08
    MOV EAX,0x1                         ; 00433f09
        ;   Label: LAB_00433f09
    POP EBP                             ; 00433f0e
    POP EDI                             ; 00433f0f
    POP ESI                             ; 00433f10
    POP EBX                             ; 00433f11
    RET                                 ; 00433f12
    MOVZX ESI,DL                        ; 00433f13
        ;   Label: LAB_00433f13
    PUSH ESI                            ; 00433f16
    MOV EAX,dword ptr [EBP]             ; 00433f17
    PUSH EBP                            ; 00433f1a
    CALL dword ptr [EAX + 0x4]          ; 00433f1b
    MOV ESI,EAX                         ; 00433f1e
    ADD ESP,0x8                         ; 00433f20
    TEST EAX,EAX                        ; 00433f23
    JGE 0x00433eec                      ; 00433f25
        ;   XREF to: 00433eec (CONDITIONAL_JUMP)  ; LAB_00433eec
    PUSH EBX                            ; 00433f27
    MOV EAX,dword ptr [EDI]             ; 00433f28
    PUSH EDI                            ; 00433f2a
    CALL dword ptr [EAX + 0x8]          ; 00433f2b
    ADD ESP,0x8                         ; 00433f2e
    TEST EAX,EAX                        ; 00433f31
    JZ 0x00433f02                       ; 00433f33
        ;   XREF to: 00433f02 (CONDITIONAL_JUMP)  ; LAB_00433f02
    CMP ESI,-0x1                        ; 00433f35
    JNZ 0x00433f02                      ; 00433f38
        ;   XREF to: 00433f02 (CONDITIONAL_JUMP)  ; LAB_00433f02
    MOV EAX,0x2                         ; 00433f3a
    POP EBP                             ; 00433f3f
    POP EDI                             ; 00433f40
    POP ESI                             ; 00433f41
    POP EBX                             ; 00433f42
    RET                                 ; 00433f43

