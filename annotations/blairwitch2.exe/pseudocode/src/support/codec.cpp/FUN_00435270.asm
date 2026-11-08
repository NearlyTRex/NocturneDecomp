; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00435270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 )
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004351e0
;   FUN_004e4500
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435270
        ;   Label: FUN_00435270
    PUSH EBP                            ; 00435271
    MOV EBX,dword ptr [ESP + 0xc]       ; 00435272
    PUSH EBX                            ; 00435276
    CALL FUN_004351e0                   ; 00435277
        ;   XREF to: 004351e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004351e0()
    ADD ESP,0x4                         ; 0043527c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043527f
    MOV dword ptr [EBX + 0x4],EAX       ; 00435283
    MOV EAX,dword ptr [ESP + 0x14]      ; 00435286
    MOV dword ptr [EBX + 0x8],EAX       ; 0043528a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043528d
    MOV dword ptr [EBX + 0xc],EAX       ; 00435291
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00435294
    PUSH EAX                            ; 00435298
    MOV dword ptr [EBX + 0x14],EAX      ; 00435299
    CALL FUN_005b8580                   ; 0043529c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 004352a1
    MOV dword ptr [EBX + 0x10],EAX      ; 004352a4
    TEST EAX,EAX                        ; 004352a7
    JZ 0x004352d1                       ; 004352a9
        ;   XREF to: 004352d1 (CONDITIONAL_JUMP)  ; LAB_004352d1
    MOV dword ptr [EBX + 0x18],0x0      ; 004352ab
        ;   Label: LAB_004352ab
    MOV dword ptr [EBX + 0x1c],0x0      ; 004352b2
    MOV dword ptr [EBX + 0x20],0x0      ; 004352b9
    MOV EBX,dword ptr [EBX + 0x4]       ; 004352c0
    PUSH EBX                            ; 004352c3
    MOV EAX,dword ptr [EBX]             ; 004352c4
    CALL dword ptr [EAX + 0x4]          ; 004352c6
    ADD ESP,0x4                         ; 004352c9
    POP EBP                             ; 004352cc
    POP EBX                             ; 004352cd
    MOV EAX,EAX                         ; 004352ce
    RET                                 ; 004352d0
    PUSH EDI                            ; 004352d1
        ;   Label: LAB_004352d1
    PUSH ESI                            ; 004352d2
    MOV EBP,dword ptr [EBX + 0x14]      ; 004352d3
    PUSH EBP                            ; 004352d6
    MOV ESI,0x5cda61                    ; 004352d7
    MOV EDI,0x87b                       ; 004352dc
    PUSH 0x5cda76                       ; 004352e1
    MOV dword ptr [0x01d046a0],ESI      ; 004352e6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004352ec | DAT_01d046a4
    CALL FUN_004e4500                   ; 004352f2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 004352f7
    POP ESI                             ; 004352fa
    POP EDI                             ; 004352fb
    JMP 0x004352ab                      ; 004352fc
        ;   XREF to: 004352ab (UNCONDITIONAL_JUMP)  ; LAB_004352ab

