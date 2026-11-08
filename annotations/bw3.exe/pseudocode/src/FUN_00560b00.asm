; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560b00(undefined4 param_1,undefined4 param_2)
;
;
; XREF[6]:
;   FUN_0047b270 at 0047b2fe
;   FUN_004a5b10 at 004a5f04
;   FUN_004c6eb0 at 004c8b3b
;   FUN_005114f0 at 00511ab2
;   FUN_0055ff40 at 00560584
;   FUN_00560940 at 0056094e
;
; Called Functions:
;   FUN_00556be0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00560b00
        ;   Label: FUN_00560b00
    PUSH EDX                            ; 00560b04
    CALL FUN_00556be0                   ; 00560b05
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 00560b0a
    RET                                 ; 00560b0d

