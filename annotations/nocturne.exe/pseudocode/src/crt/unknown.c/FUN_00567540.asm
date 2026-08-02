; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00567540(undefined4 *param_1)
;
;
; XREF[8]:
;   crt_unknown.c_FUN_00567560 at 005675c2
;   crt_unknown.c_FUN_00567928 at 00567931
;   crt_unknown.c_FUN_00567964 at 005679c8
;   crt_unknown.c_FUN_00567a5c at 00567ac2
;   crt_unknown.c_FUN_00567c74 at 00567cfd
;   crt_unknown.c_FUN_00567d88 at 00567da0
;   crt_unknown.c_FUN_0056808c at 005680b0
;   crt_unknown.c_FUN_00568528 at 0056853b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00567540
        ;   Label: crt_unknown.c_FUN_00567540
    PUSH EAX                            ; 00567544
    CALL dword ptr [EAX]                ; 00567545
    ADD ESP,0x4                         ; 00567547
    RET                                 ; 0056754a

