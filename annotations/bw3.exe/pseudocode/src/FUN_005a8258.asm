; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8258(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d252b4
;   undefined4 DAT_02d252b8
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a8258
        ;   Label: FUN_005a8258
    PUSH EBP                            ; 005a8259
    MOV EDX,dword ptr [0x02d252b4]      ; 005a825a | DAT_02d252b4
    TEST EDX,EDX                        ; 005a8260
    JZ 0x005a8275                       ; 005a8262
        ;   XREF to: 005a8275 (CONDITIONAL_JUMP)  ; LAB_005a8275
    PUSH EDX                            ; 005a8264
    CALL FUN_005a3770                   ; 005a8265
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    XOR ECX,ECX                         ; 005a826a
    ADD ESP,0x4                         ; 005a826c
    MOV dword ptr [0x02d252b4],ECX      ; 005a826f | DAT_02d252b4
    MOV ESI,dword ptr [0x02d252b8]      ; 005a8275 | DAT_02d252b8
        ;   Label: LAB_005a8275
    TEST ESI,ESI                        ; 005a827b
    JZ 0x005a8290                       ; 005a827d
        ;   XREF to: 005a8290 (CONDITIONAL_JUMP)  ; LAB_005a8290
    PUSH ESI                            ; 005a827f
    CALL FUN_005a3770                   ; 005a8280
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    XOR EBP,EBP                         ; 005a8285
    ADD ESP,0x4                         ; 005a8287
    MOV dword ptr [0x02d252b8],EBP      ; 005a828a | DAT_02d252b8
    POP EBP                             ; 005a8290
        ;   Label: LAB_005a8290
    POP ESI                             ; 005a8291
    RET                                 ; 005a8292

