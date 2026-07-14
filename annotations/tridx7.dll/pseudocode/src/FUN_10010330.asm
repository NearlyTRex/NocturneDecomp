; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10010330(undefined4 param_1)
;
;
; Called Functions:
;   __lock
;   FUN_10005a10
;   FUN_10010360
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10010330
        ;   Label: FUN_10010330
    PUSH 0xb                            ; 10010331
    CALL __lock                         ; 10010333
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV EAX,dword ptr [ESP + 0xc]       ; 10010338
    ADD ESP,0x4                         ; 1001033c
    PUSH EAX                            ; 1001033f
    CALL FUN_10010360                   ; 10010340
        ;   XREF to: 10010360 (UNCONDITIONAL_CALL)  ; undefined FUN_10010360()
    ADD ESP,0x4                         ; 10010345
    MOV ESI,EAX                         ; 10010348
    PUSH 0xb                            ; 1001034a
    CALL FUN_10005a10                   ; 1001034c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10010351
    MOV EAX,ESI                         ; 10010354
    POP ESI                             ; 10010356
    RET                                 ; 10010357

