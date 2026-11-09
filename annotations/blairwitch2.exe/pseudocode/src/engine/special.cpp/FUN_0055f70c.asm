; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0055f70c(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c8
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbec
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0055f70c
        ;   Label: engine_special.cpp_FUN_0055f70c
    CMP dword ptr [0x01c37788],0x0      ; 0055f710 | DAT_01c37788
    JZ 0x0055f722                       ; 0055f717
        ;   XREF to: 0055f722 (CONDITIONAL_JUMP)  ; LAB_0055f722
    CMP dword ptr [0x0264bbec],0x0      ; 0055f719 | DAT_0264bbec
    JNZ 0x0055f725                      ; 0055f720
        ;   XREF to: 0055f725 (CONDITIONAL_JUMP)  ; LAB_0055f725
    XOR EAX,EAX                         ; 0055f722
        ;   Label: LAB_0055f722
    RET                                 ; 0055f724
    PUSH EDI                            ; 0055f725
        ;   Label: LAB_0055f725
    PUSH ESI                            ; 0055f726
    PUSH EBX                            ; 0055f727
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055f728
    PUSH EBX                            ; 0055f72c
    MOV ESI,dword ptr [0x006141c8]      ; 0055f72d | DAT_006141c8
    PUSH ESI                            ; 0055f733
    MOV EDI,dword ptr [ESP + 0x18]      ; 0055f734
    PUSH EDI                            ; 0055f738
    CALL dword ptr [0x0264bbec]         ; 0055f739 | DAT_0264bbec
    ADD ESP,0xc                         ; 0055f73f
    POP EBX                             ; 0055f742
    POP ESI                             ; 0055f743
    POP EDI                             ; 0055f744
    RET                                 ; 0055f745

