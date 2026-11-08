; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00403250 at 00403297
;
; Called Functions:
;   FUN_00402f30
;   FUN_00403040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403170
        ;   Label: FUN_00403170
    PUSH ESI                            ; 00403171
    PUSH EDI                            ; 00403172
    PUSH EBP                            ; 00403173
    MOV EBX,dword ptr [ESP + 0x14]      ; 00403174
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403178
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040317c
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403180
    PUSH EBP                            ; 00403184
    PUSH ESI                            ; 00403185
    PUSH EBX                            ; 00403186
    CALL FUN_00402f30                   ; 00403187
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 0040318c
    PUSH EBP                            ; 0040318f
    PUSH EDI                            ; 00403190
    PUSH EBX                            ; 00403191
    CALL FUN_00402f30                   ; 00403192
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 00403197
    PUSH EDI                            ; 0040319a
    PUSH ESI                            ; 0040319b
    PUSH EBX                            ; 0040319c
    CALL FUN_00403040                   ; 0040319d
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    ADD ESP,0xc                         ; 004031a2
    PUSH EDI                            ; 004031a5
    PUSH ESI                            ; 004031a6
    PUSH EBP                            ; 004031a7
    CALL FUN_00403040                   ; 004031a8
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    ADD ESP,0xc                         ; 004031ad
    POP EBP                             ; 004031b0
    POP EDI                             ; 004031b1
    POP ESI                             ; 004031b2
    POP EBX                             ; 004031b3
    RET                                 ; 004031b4

