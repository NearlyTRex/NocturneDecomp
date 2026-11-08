; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00487d30(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6030
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487d30
        ;   Label: FUN_00487d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00487d31
    TEST byte ptr [ESP + 0xc],0x4       ; 00487d35
    JNZ 0x00487d56                      ; 00487d3a
        ;   XREF to: 00487d56 (CONDITIONAL_JUMP)  ; LAB_00487d56
    PUSH 0x1                            ; 00487d3c
    PUSH EBX                            ; 00487d3e
    CALL FUN_00408930                   ; 00487d3f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00487d44
    MOV DL,byte ptr [ESP + 0xc]         ; 00487d47
    MOV EBX,EAX                         ; 00487d4b
    TEST DL,0x2                         ; 00487d4d
    JNZ 0x00487d71                      ; 00487d50
        ;   XREF to: 00487d71 (CONDITIONAL_JUMP)  ; LAB_00487d71
    MOV EAX,EBX                         ; 00487d52
    POP EBX                             ; 00487d54
    RET                                 ; 00487d55
    PUSH 0x5f6030                       ; 00487d56 | DAT_005f6030
        ;   Label: LAB_00487d56
    PUSH EBX                            ; 00487d5b
    CALL FUN_005b7fa7                   ; 00487d5c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00487d61
    PUSH EAX                            ; 00487d64
    CALL FUN_005b7fce                   ; 00487d65
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00487d6a
    MOV EAX,EBX                         ; 00487d6d
    POP EBX                             ; 00487d6f
    RET                                 ; 00487d70
    PUSH EAX                            ; 00487d71
        ;   Label: LAB_00487d71
    CALL FUN_005b7fdc                   ; 00487d72
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00487d77
    MOV EAX,EBX                         ; 00487d7a
    POP EBX                             ; 00487d7c
    RET                                 ; 00487d7d

