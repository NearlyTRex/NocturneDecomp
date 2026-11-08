; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d400(int *param_1)
;
;
; XREF[16]:
;   FUN_0040d300 at 0040d306
;   FUN_0040d320 at 0040d331
;   FUN_00411d70 at 00412272
;   FUN_004133c0 at 0041356d
;   FUN_004a7d70 at 004a7d84
;   FUN_004a8710 at 004a8727
;   FUN_004a9eb0 at 004a9ec9
;   FUN_004ab7a0 at 004ab82c
;   FUN_004abe00 at 004ac1fb
;   FUN_004ac6b0 at 004ac70a
;   ... and 6 more
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d400
        ;   Label: FUN_0040d400
    PUSH ESI                            ; 0040d401
    PUSH EBP                            ; 0040d402
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d403
    MOV EDX,dword ptr [EBX]             ; 0040d407
    TEST EDX,EDX                        ; 0040d409
    JNZ 0x0040d42f                      ; 0040d40b
        ;   XREF to: 0040d42f (CONDITIONAL_JUMP)  ; LAB_0040d42f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040d40d
        ;   Label: LAB_0040d40d
    TEST ESI,ESI                        ; 0040d410
    JZ 0x0040d424                       ; 0040d412
        ;   XREF to: 0040d424 (CONDITIONAL_JUMP)  ; LAB_0040d424
    PUSH ESI                            ; 0040d414
    CALL FUN_005a3770                   ; 0040d415
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0040d41a
    MOV dword ptr [EBX + 0x4],0x0       ; 0040d41d
    MOV EBP,dword ptr [EBX + 0x8]       ; 0040d424
        ;   Label: LAB_0040d424
    TEST EBP,EBP                        ; 0040d427
    JNZ 0x0040d440                      ; 0040d429
        ;   XREF to: 0040d440 (CONDITIONAL_JUMP)  ; LAB_0040d440
    POP EBP                             ; 0040d42b
    POP ESI                             ; 0040d42c
    POP EBX                             ; 0040d42d
    RET                                 ; 0040d42e
    PUSH EDX                            ; 0040d42f
        ;   Label: LAB_0040d42f
    CALL FUN_005a3770                   ; 0040d430
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0040d435
    MOV dword ptr [EBX],0x0             ; 0040d438
    JMP 0x0040d40d                      ; 0040d43e
        ;   XREF to: 0040d40d (UNCONDITIONAL_JUMP)  ; LAB_0040d40d
    PUSH EBP                            ; 0040d440
        ;   Label: LAB_0040d440
    CALL FUN_005a3770                   ; 0040d441
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0040d446
    MOV dword ptr [EBX + 0x8],0x0       ; 0040d449
    POP EBP                             ; 0040d450
    POP ESI                             ; 0040d451
    POP EBX                             ; 0040d452
    RET                                 ; 0040d453

