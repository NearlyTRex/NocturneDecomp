; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2cac(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[21]:
;   FUN_00495da0 at 00495e0c
;   FUN_00495e70 at 00495eea
;   FUN_00495f70 at 00495ff6
;   FUN_00499c80 at 00499cff
;   FUN_004a14a0 at 004a14dd
;   FUN_004a1d00 at 004a1fb9
;   FUN_004a70d0 at 004a7323
;   FUN_004bb6f0 at 004bb809
;   FUN_004bcba0 at 004bd614
;   FUN_004f4d10 at 004f4d5e
;   ... and 11 more
;
; Called Functions:
;   FUN_005c2c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2cac
        ;   Label: FUN_005c2cac
    SUB ESP,0x4                         ; 005c2cad
    LEA EAX,[ESP + 0x14]                ; 005c2cb0
    MOV dword ptr [ESP],EAX             ; 005c2cb4
    MOV EAX,ESP                         ; 005c2cb7
    PUSH EAX                            ; 005c2cb9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c2cba
    PUSH EDX                            ; 005c2cbe
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c2cbf
    PUSH EBX                            ; 005c2cc3
    CALL FUN_005c2c70                   ; 005c2cc4
        ;   XREF to: 005c2c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2c70()
    ADD ESP,0xc                         ; 005c2cc9
    ADD ESP,0x4                         ; 005c2ccc
    POP EBX                             ; 005c2ccf
    RET                                 ; 005c2cd0

