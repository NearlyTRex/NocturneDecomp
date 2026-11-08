; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00466290(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00473530 at 0047358b
;
; Called Functions:
;   FUN_004663b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466290
        ;   Label: FUN_00466290
    MOV EBX,dword ptr [ESP + 0x8]       ; 00466291
    PUSH EBX                            ; 00466295
    CALL FUN_004663b0                   ; 00466296
        ;   XREF to: 004663b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004663b0()
    ADD ESP,0x4                         ; 0046629b
    MOV EAX,EBX                         ; 0046629e
    POP EBX                             ; 004662a0
    RET                                 ; 004662a1

