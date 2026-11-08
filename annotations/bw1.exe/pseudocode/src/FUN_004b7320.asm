; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7320(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005ae190 at 005ae24c
;
; Referenced Globals:
;   undefined4 DAT_01cc010c
;   undefined4 DAT_01cc0134
;   undefined4 DAT_01cc014c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7320
        ;   Label: FUN_004b7320
    PUSH ESI                            ; 004b7321
    MOV EBX,dword ptr [0x01cc010c]      ; 004b7322 | DAT_01cc010c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004b7328
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b732c
    MOV EAX,EBX                         ; 004b7330
    PUSH ECX                            ; 004b7332
    SHL EAX,0x6                         ; 004b7333
    PUSH ESI                            ; 004b7336
    ADD EAX,0x1cc0110                   ; 004b7337
    PUSH EAX                            ; 004b733c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004b733d | DAT_01cc014c
    CALL dword ptr [EDX]                ; 004b7340
    MOV EBX,dword ptr [0x01cc010c]      ; 004b7342 | DAT_01cc010c
    MOV EAX,EBX                         ; 004b7348
    SHL EAX,0x6                         ; 004b734a
    ADD EAX,0x1cc0110                   ; 004b734d
    ADD ESP,0xc                         ; 004b7352
    INC EBX                             ; 004b7355
    MOV dword ptr [EAX + 0x24],0x3e800000 ; 004b7356 | DAT_01cc0134
    CMP EBX,0x100                       ; 004b735d
    JL 0x004b7367                       ; 004b7363
        ;   XREF to: 004b7367 (CONDITIONAL_JUMP)  ; LAB_004b7367
    XOR EBX,EBX                         ; 004b7365
    MOV dword ptr [0x01cc010c],EBX      ; 004b7367 | DAT_01cc010c
        ;   Label: LAB_004b7367
    POP ESI                             ; 004b736d
    POP EBX                             ; 004b736e
    RET                                 ; 004b736f

