; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af270(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_004207b0
;   FUN_00467270
;   FUN_004837b0
;   FUN_00483800
;   FUN_00483de0
;   FUN_00551c30
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af270
        ;   Label: FUN_004af270
    PUSH ESI                            ; 004af271
    PUSH EDI                            ; 004af272
    PUSH EBP                            ; 004af273
    SUB ESP,0x18                        ; 004af274
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004af277
    PUSH EBX                            ; 004af27b
    MOV EDX,dword ptr [0x00612560]      ; 004af27c | DAT_00612560
    PUSH EDX                            ; 004af282 | DAT_01bc120c
    CALL FUN_004837b0                   ; 004af283
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004af288
    PUSH 0x0                            ; 004af28b
    LEA EAX,[EBX + 0x44]                ; 004af28d
    PUSH EAX                            ; 004af290
    MOV ECX,dword ptr [0x00612560]      ; 004af291 | DAT_00612560
    PUSH ECX                            ; 004af297 | DAT_01bc120c
    LEA EDI,[ESP + 0xc]                 ; 004af298
    CALL FUN_00483800                   ; 004af29c
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; undefined FUN_00483800()
    ADD ESP,0xc                         ; 004af2a1
    MOV ECX,0x6                         ; 004af2a4
    MOV ESI,dword ptr [EBX + 0x50]      ; 004af2a9
    PUSH 0x0                            ; 004af2ac
    LEA EAX,[ESP + 0x4]                 ; 004af2ae
    MOV ESI,dword ptr [ESI + 0x350]     ; 004af2b2
    PUSH EAX                            ; 004af2b8
    MOVSD.REP ES:EDI,ESI                ; 004af2b9
    CALL FUN_004207b0                   ; 004af2bb
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004af2c0
    TEST EAX,EAX                        ; 004af2c3
    JNZ 0x004af2dd                      ; 004af2c5
        ;   XREF to: 004af2dd (CONDITIONAL_JUMP)  ; LAB_004af2dd
    MOV EAX,[0x00612560]                ; 004af2c7 | DAT_00612560
        ;   Label: LAB_004af2c7
    PUSH EAX                            ; 004af2cc | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004af2cd
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004af2d2
    ADD ESP,0x18                        ; 004af2d5
    POP EBP                             ; 004af2d8
    POP EDI                             ; 004af2d9
    POP ESI                             ; 004af2da
    POP EBX                             ; 004af2db
    RET                                 ; 004af2dc
    PUSH 0x0                            ; 004af2dd
        ;   Label: LAB_004af2dd
    LEA EAX,[ESP + 0x10]                ; 004af2df
    PUSH EAX                            ; 004af2e3
    LEA EAX,[ESP + 0x8]                 ; 004af2e4
    PUSH EAX                            ; 004af2e8
    PUSH 0x2c8af28                      ; 004af2e9 | DAT_02c8af28
    PUSH EBX                            ; 004af2ee
    MOV ESI,dword ptr [0x00622c18]      ; 004af2ef | DAT_00622c18
    PUSH ESI                            ; 004af2f5 | DAT_01e82168
    CALL FUN_00551c30                   ; 004af2f6
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 004af2fb
    PUSH 0xffff                         ; 004af2fe
    MOV EDI,dword ptr [0x00612560]      ; 004af303 | DAT_00612560
    PUSH EDI                            ; 004af309 | DAT_01bc120c
    CALL FUN_00483de0                   ; 004af30a
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 004af30f
    PUSH 0x2e7                          ; 004af312
    PUSH 0x0                            ; 004af317
    PUSH 0x0                            ; 004af319
    MOV EBP,dword ptr [EBX + 0x50]      ; 004af31b
    PUSH EBP                            ; 004af31e
    CALL FUN_00467270                   ; 004af31f
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; undefined FUN_00467270()
    ADD ESP,0x10                        ; 004af324
    JMP 0x004af2c7                      ; 004af327
        ;   XREF to: 004af2c7 (UNCONDITIONAL_JUMP)  ; LAB_004af2c7

