; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00538450(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005386a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538450
        ;   Label: FUN_00538450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00538451
    PUSH EBX                            ; 00538455
    CALL FUN_005386a0                   ; 00538456
        ;   XREF to: 005386a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005386a0()
    ADD ESP,0x4                         ; 0053845b
    MOV EAX,EBX                         ; 0053845e
    POP EBX                             ; 00538460
    RET                                 ; 00538461

