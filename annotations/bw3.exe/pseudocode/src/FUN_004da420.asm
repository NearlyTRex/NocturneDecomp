; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004da420(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d2620 at 004d264a
;
; Called Functions:
;   FUN_004da440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da420
        ;   Label: FUN_004da420
    MOV EBX,dword ptr [ESP + 0x8]       ; 004da421
    PUSH EBX                            ; 004da425
    CALL FUN_004da440                   ; 004da426
        ;   XREF to: 004da440 (UNCONDITIONAL_CALL)  ; undefined FUN_004da440()
    ADD ESP,0x4                         ; 004da42b
    MOV EAX,EBX                         ; 004da42e
    POP EBX                             ; 004da430
    RET                                 ; 004da431

