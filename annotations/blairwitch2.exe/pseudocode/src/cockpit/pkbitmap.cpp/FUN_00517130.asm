; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517130(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005171e0 at 005171eb
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00460c70
;   FUN_004e4500
;   FUN_00516200
;   FUN_00516270
;   FUN_00516d60
;   FUN_00516f30
;   FUN_005b7790
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517130
        ;   Label: FUN_00517130
    PUSH ESI                            ; 00517131
    SUB ESP,0x64                        ; 00517132
    MOV EBX,dword ptr [ESP + 0x70]      ; 00517135
    PUSH EBX                            ; 00517139
    CALL FUN_00516200                   ; 0051713a
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined FUN_00516200()
    ADD ESP,0x4                         ; 0051713f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00517142
    PUSH EDX                            ; 00517146
    PUSH EBX                            ; 00517147
    CALL FUN_00516270                   ; 00517148
        ;   XREF to: 00516270 (UNCONDITIONAL_CALL)  ; undefined FUN_00516270()
    ADD ESP,0x8                         ; 0051714d
    PUSH 0x5e1d60                       ; 00517150
    PUSH EBX                            ; 00517155
    PUSH 0x5e1d63                       ; 00517156
    CALL FUN_00460c70                   ; 0051715b
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 00517160
    MOV ESI,EAX                         ; 00517163
    TEST EAX,EAX                        ; 00517165
    JNZ 0x005171a1                      ; 00517167
        ;   XREF to: 005171a1 (CONDITIONAL_JUMP)  ; LAB_005171a1
    PUSH EDI                            ; 00517169
    PUSH EBX                            ; 0051716a
    PUSH 0x5e1d67                       ; 0051716b
    LEA EAX,[ESP + 0xc]                 ; 00517170
    PUSH EAX                            ; 00517174
    MOV EDI,0x51a                       ; 00517175
    CALL FUN_005b7790                   ; 0051717a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0051717f
    LEA EAX,[ESP + 0x4]                 ; 00517182
    MOV ECX,0x5e1d82                    ; 00517186
    PUSH EAX                            ; 0051718b
    MOV dword ptr [0x01d046a4],EDI      ; 0051718c | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 00517192 | DAT_01d046a0
    CALL FUN_004e4500                   ; 00517198
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0051719d
    POP EDI                             ; 005171a0
    PUSH 0x0                            ; 005171a1
        ;   Label: LAB_005171a1
    PUSH ESI                            ; 005171a3
    PUSH EBX                            ; 005171a4
    CALL FUN_00516f30                   ; 005171a5
        ;   XREF to: 00516f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00516f30()
    ADD ESP,0xc                         ; 005171aa
    PUSH ESI                            ; 005171ad
    CALL FUN_005b89c0                   ; 005171ae
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 005171b3
    CMP dword ptr [ESP + 0x78],0x0      ; 005171b6
    JNZ 0x005171c3                      ; 005171bb
        ;   XREF to: 005171c3 (CONDITIONAL_JUMP)  ; LAB_005171c3
    ADD ESP,0x64                        ; 005171bd
    POP ESI                             ; 005171c0
    POP EBX                             ; 005171c1
    RET                                 ; 005171c2
    PUSH EBX                            ; 005171c3
        ;   Label: LAB_005171c3
    CALL FUN_00516d60                   ; 005171c4
        ;   XREF to: 00516d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00516d60()
    ADD ESP,0x4                         ; 005171c9
    ADD ESP,0x64                        ; 005171cc
    POP ESI                             ; 005171cf
    POP EBX                             ; 005171d0
    RET                                 ; 005171d1

