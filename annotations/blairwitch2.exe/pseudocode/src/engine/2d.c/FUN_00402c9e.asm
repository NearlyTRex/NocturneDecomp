; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402c9e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   engine_2d.c_FUN_00402cf0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00402c9e
        ;   Label: engine_2d.c_FUN_00402c9e
    PUSH EBX                            ; 00402ca0
    PUSH ESI                            ; 00402ca1
    PUSH EDI                            ; 00402ca2
    PUSH EBP                            ; 00402ca3
    MOV EDX,dword ptr [0x01c35e54]      ; 00402ca4 | DAT_01c35e54
    PUSH EDX                            ; 00402caa
    MOV ECX,dword ptr [0x01c35e50]      ; 00402cab | DAT_01c35e50
    PUSH ECX                            ; 00402cb1
    MOV EBX,dword ptr [0x01c35e4c]      ; 00402cb2 | DAT_01c35e4c
    PUSH EBX                            ; 00402cb8
    MOV ESI,dword ptr [0x01c35e48]      ; 00402cb9 | DAT_01c35e48
    PUSH ESI                            ; 00402cbf
    MOV EDI,dword ptr [ESP + 0x30]      ; 00402cc0
    PUSH EDI                            ; 00402cc4
    MOV EBP,dword ptr [ESP + 0x30]      ; 00402cc5
    PUSH EBP                            ; 00402cc9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00402cca
    PUSH EAX                            ; 00402cce
    MOV EDX,dword ptr [ESP + 0x30]      ; 00402ccf
    PUSH EDX                            ; 00402cd3
    CALL engine_2d.c_FUN_00402cf0       ; 00402cd4
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00402cf0()
    ADD ESP,0x20                        ; 00402cd9
    POP EBP                             ; 00402cdc
    POP EDI                             ; 00402cdd
    POP ESI                             ; 00402cde
    POP EBX                             ; 00402cdf
    RET                                 ; 00402ce0

