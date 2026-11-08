; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_0047dc40 at 0047ddf7
;   FUN_0047e870 at 0047e9bc
;   FUN_00484440 at 004844ec
;
; Called Functions:
;   FUN_004f9390
;   FUN_004f93b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9340
        ;   Label: FUN_004f9340
    PUSH ESI                            ; 004f9341
    PUSH EDI                            ; 004f9342
    PUSH EBP                            ; 004f9343
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9344
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f9348
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f934c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f9350
    PUSH EBP                            ; 004f9354
    PUSH ESI                            ; 004f9355
    PUSH EBX                            ; 004f9356
    CALL FUN_004f9390                   ; 004f9357
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9390()
    ADD ESP,0xc                         ; 004f935c
    PUSH EBP                            ; 004f935f
    PUSH EDI                            ; 004f9360
    PUSH EBX                            ; 004f9361
    CALL FUN_004f9390                   ; 004f9362
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9390()
    ADD ESP,0xc                         ; 004f9367
    PUSH EDI                            ; 004f936a
    PUSH ESI                            ; 004f936b
    PUSH EBX                            ; 004f936c
    CALL FUN_004f93b0                   ; 004f936d
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f93b0()
    ADD ESP,0xc                         ; 004f9372
    PUSH EDI                            ; 004f9375
    PUSH ESI                            ; 004f9376
    PUSH EBP                            ; 004f9377
    CALL FUN_004f93b0                   ; 004f9378
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f93b0()
    ADD ESP,0xc                         ; 004f937d
    POP EBP                             ; 004f9380
    POP EDI                             ; 004f9381
    POP ESI                             ; 004f9382
    POP EBX                             ; 004f9383
    RET                                 ; 004f9384

