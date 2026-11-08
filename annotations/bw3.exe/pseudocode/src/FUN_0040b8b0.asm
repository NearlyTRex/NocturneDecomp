; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b8b0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[62]:
;   FUN_0040c280 at 0040c2ec
;   FUN_0040e000 at 0040e042
;   FUN_0040e8f0 at 0040e932
;   FUN_0040ebd0 at 0040ec1f
;   FUN_0040ff80 at 0040ffe5
;   FUN_00414fd0 at 00414ff0
;   FUN_00419070 at 00419125
;   FUN_0041fb90 at 0041fc3b
;   FUN_004207f0 at 0042080e
;   FUN_00421960 at 0042197d
;   ... and 52 more
;
; Referenced Globals:
;   undefined4 DAT_005b5af5
;   undefined4 DAT_005b5af8
;   TerminatedCString s_Integer_value_005f0978
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   FUN_0040b2d0
;   FUN_0040b350
;   FUN_005a3140
;   FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b8b0
        ;   Label: FUN_0040b8b0
    PUSH EDI                            ; 0040b8b1
    PUSH EBP                            ; 0040b8b2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b8b3
    CMP dword ptr [0x007df9b8],0x1      ; 0040b8b7 | DAT_007df9b8
    JNZ 0x0040b904                      ; 0040b8be
        ;   XREF to: 0040b904 (CONDITIONAL_JUMP)  ; LAB_0040b904
    PUSH EAX                            ; 0040b8c0
    PUSH 0x5b5af5                       ; 0040b8c1 | DAT_005b5af5
    MOV ESI,dword ptr [0x007df9b4]      ; 0040b8c6 | DAT_007df9b4
    PUSH ESI                            ; 0040b8cc
    CALL FUN_005a3230                   ; 0040b8cd
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 0040b8d2
    CMP EAX,0x1                         ; 0040b8d5
    JNZ 0x0040b8f0                      ; 0040b8d8
        ;   XREF to: 0040b8f0 (CONDITIONAL_JUMP)  ; LAB_0040b8f0
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b8da
        ;   Label: LAB_0040b8da
    PUSH EBP                            ; 0040b8de
    PUSH 0x5f0978                       ; 0040b8df | = "Integer value"
    CALL FUN_0040b350                   ; 0040b8e4
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b350()
    ADD ESP,0x8                         ; 0040b8e9
    POP EBP                             ; 0040b8ec
    POP EDI                             ; 0040b8ed
    POP ESI                             ; 0040b8ee
    RET                                 ; 0040b8ef
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b8f0
        ;   Label: LAB_0040b8f0
    PUSH EDI                            ; 0040b8f4
    PUSH 0x5f0978                       ; 0040b8f5 | = "Integer value"
    CALL FUN_0040b2d0                   ; 0040b8fa
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040b8ff
    JMP 0x0040b8da                      ; 0040b902
        ;   XREF to: 0040b8da (UNCONDITIONAL_JUMP)  ; LAB_0040b8da
    PUSH EBX                            ; 0040b904
        ;   Label: LAB_0040b904
    MOV ECX,dword ptr [EAX]             ; 0040b905
    PUSH ECX                            ; 0040b907
    PUSH 0x5f0990                       ; 0040b908 | DAT_005f0990
    PUSH 0x5b5af8                       ; 0040b90d | DAT_005b5af8
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b912 | DAT_007df9b4
    PUSH EBX                            ; 0040b918
    CALL FUN_005a3140                   ; 0040b919
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 0040b91e
    POP EBX                             ; 0040b921
    JMP 0x0040b8da                      ; 0040b922
        ;   XREF to: 0040b8da (UNCONDITIONAL_JUMP)  ; LAB_0040b8da

