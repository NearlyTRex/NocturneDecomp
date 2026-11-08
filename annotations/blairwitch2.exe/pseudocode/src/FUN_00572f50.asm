; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00572f50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   FUN_004254b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572f50
        ;   Label: FUN_00572f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572f51
    PUSH EBX                            ; 00572f55
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00572f56
    CALL dword ptr [EAX + 0x78]         ; 00572f5c
    ADD ESP,0x4                         ; 00572f5f
    TEST EAX,EAX                        ; 00572f62
    JZ 0x00572f78                       ; 00572f64
        ;   XREF to: 00572f78 (CONDITIONAL_JUMP)  ; LAB_00572f78
    MOV EAX,[0x00618170]                ; 00572f66 | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 00572f6b | DAT_01d192f8
    JNZ 0x00572f78                      ; 00572f72
        ;   XREF to: 00572f78 (CONDITIONAL_JUMP)  ; LAB_00572f78
    XOR EAX,EAX                         ; 00572f74
    POP EBX                             ; 00572f76
    RET                                 ; 00572f77
    PUSH EBX                            ; 00572f78
        ;   Label: LAB_00572f78
    CALL FUN_004254b0                   ; 00572f79
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254b0()
    ADD ESP,0x4                         ; 00572f7e
    POP EBX                             ; 00572f81
    RET                                 ; 00572f82

