; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569f50(int param_1,char *param_2)
;
;
; XREF[63]:
;   FUN_0040b7f0 at 0040b821
;   FUN_0040e9e0 at 0040ea0d
;   FUN_0040f210 at 0040f234
;   FUN_00411210 at 00411232
;   FUN_00412780 at 004127af
;   FUN_004146f0 at 00414712
;   FUN_004149f0 at 00414a38
;   FUN_004151f0 at 00415287
;   FUN_0041b750 at 0041b794
;   FUN_004238c0 at 004238e2
;   ... and 53 more
;
; Called Functions:
;   FUN_00569ae0
;   FUN_00569b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569f50
        ;   Label: FUN_00569f50
    PUSH ESI                            ; 00569f51
    PUSH EDI                            ; 00569f52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569f53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00569f57
    LEA EDI,[EBX + 0x2350]              ; 00569f5b
    PUSH EDI                            ; 00569f61
    MOV AL,byte ptr [ESI]               ; 00569f62
        ;   Label: LAB_00569f62
    MOV byte ptr [EDI],AL               ; 00569f64
    CMP AL,0x0                          ; 00569f66
    JZ 0x00569f7a                       ; 00569f68
        ;   XREF to: 00569f7a (CONDITIONAL_JUMP)  ; LAB_00569f7a
    MOV AL,byte ptr [ESI + 0x1]         ; 00569f6a
    ADD ESI,0x2                         ; 00569f6d
    MOV byte ptr [EDI + 0x1],AL         ; 00569f70
    ADD EDI,0x2                         ; 00569f73
    CMP AL,0x0                          ; 00569f76
    JNZ 0x00569f62                      ; 00569f78
        ;   XREF to: 00569f62 (CONDITIONAL_JUMP)  ; LAB_00569f62
    POP EDI                             ; 00569f7a
        ;   Label: LAB_00569f7a
    PUSH EBX                            ; 00569f7b
    MOV dword ptr [EBX + 0x23a0],0x0    ; 00569f7c
    CALL FUN_00569ae0                   ; 00569f86
        ;   XREF to: 00569ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569ae0()
    ADD ESP,0x4                         ; 00569f8b
    PUSH EBX                            ; 00569f8e
    CALL FUN_00569b00                   ; 00569f8f
        ;   XREF to: 00569b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b00()
    ADD ESP,0x4                         ; 00569f94
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 00569f97
    POP EDI                             ; 00569fa1
    POP ESI                             ; 00569fa2
    POP EBX                             ; 00569fa3
    RET                                 ; 00569fa4

