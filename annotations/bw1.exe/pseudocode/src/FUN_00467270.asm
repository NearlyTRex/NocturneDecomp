; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00467270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[8]:
;   FUN_004688a0 at 004688c9
;   FUN_004af040 at 004af0d9
;   FUN_004af270 at 004af31f
;   FUN_004afcf0 at 004affdb
;   FUN_004b4090 at 004b416d
;   FUN_004fe9c0 at 004fedef
;   FUN_00521e40 at 00521f97
;   FUN_0054e3c0 at 0054e4cf
;
; Called Functions:
;   FUN_004672f0
;   FUN_004673a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467270
        ;   Label: FUN_00467270
    PUSH EBP                            ; 00467271
    MOV EBX,dword ptr [ESP + 0xc]       ; 00467272
    CMP dword ptr [EBX + 0x110],0x1     ; 00467276
    JGE 0x00467282                      ; 0046727d
        ;   XREF to: 00467282 (CONDITIONAL_JUMP)  ; LAB_00467282
    POP EBP                             ; 0046727f
    POP EBX                             ; 00467280
    RET                                 ; 00467281
    PUSH EDI                            ; 00467282
        ;   Label: LAB_00467282
    PUSH ESI                            ; 00467283
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00467284
    PUSH ECX                            ; 00467288
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00467289
    PUSH ESI                            ; 0046728d
    PUSH EBX                            ; 0046728e
    CALL FUN_004672f0                   ; 0046728f
        ;   XREF to: 004672f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004672f0()
    ADD ESP,0xc                         ; 00467294
    MOV EDI,dword ptr [ESP + 0x20]      ; 00467297
    PUSH EDI                            ; 0046729b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0046729c
    PUSH EBP                            ; 004672a0
    PUSH EBX                            ; 004672a1
    CALL FUN_004673a0                   ; 004672a2
        ;   XREF to: 004673a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004673a0()
    ADD ESP,0xc                         ; 004672a7
    POP ESI                             ; 004672aa
    POP EDI                             ; 004672ab
    POP EBP                             ; 004672ac
    POP EBX                             ; 004672ad
    RET                                 ; 004672ae

