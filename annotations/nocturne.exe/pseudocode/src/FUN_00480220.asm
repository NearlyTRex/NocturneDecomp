; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00480220(undefined4 param_1,int param_2,int *param_3)
;
;
; XREF[2]:
;   FUN_0047dd10 at 0047dd2f
;   FUN_0047e0d0 at 0047e18f
;
; Called Functions:
;   FUN_0047e0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480220
        ;   Label: FUN_00480220
    PUSH ESI                            ; 00480221
    PUSH EDI                            ; 00480222
    PUSH EBP                            ; 00480223
    MOV EBP,dword ptr [ESP + 0x14]      ; 00480224
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480228
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048022c
    PUSH EBX                            ; 00480230
    PUSH ESI                            ; 00480231
    PUSH EBP                            ; 00480232
    CALL FUN_0047e0d0                   ; 00480233
        ;   XREF to: 0047e0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e0d0()
    ADD ESP,0xc                         ; 00480238
    MOV EDI,EAX                         ; 0048023b
    TEST EAX,EAX                        ; 0048023d
    JL 0x0047e14d                       ; 0048023f
        ;   XREF to: 0047e14d (CONDITIONAL_JUMP)  ; LAB_0047e14d
    MOV EAX,dword ptr [EBX]             ; 00480245
        ;   Label: LAB_00480245
    ADD EAX,ESI                         ; 00480247
    MOV DL,byte ptr [EAX]               ; 00480249
    TEST DL,DL                          ; 0048024b
    JZ 0x004802d3                       ; 0048024d
        ;   XREF to: 004802d3 (CONDITIONAL_JUMP)  ; LAB_004802d3
    CMP DL,0x7c                         ; 00480253
    JZ 0x00480295                       ; 00480256
        ;   XREF to: 00480295 (CONDITIONAL_JUMP)  ; LAB_00480295
    CMP DL,0x26                         ; 00480258
    JNZ 0x004802d3                      ; 0048025b
        ;   XREF to: 004802d3 (CONDITIONAL_JUMP)  ; LAB_004802d3
    MOV EDX,dword ptr [EBX]             ; 00480261
    INC EDX                             ; 00480263
    MOV EAX,EDX                         ; 00480264
    MOV dword ptr [EBX],EDX             ; 00480266
    CMP byte ptr [ESI + EAX*0x1],0x26   ; 00480268
    JNZ 0x00480273                      ; 0048026c
        ;   XREF to: 00480273 (CONDITIONAL_JUMP)  ; LAB_00480273
    LEA ECX,[EDX + 0x1]                 ; 0048026e
    MOV dword ptr [EBX],ECX             ; 00480271
    PUSH EBX                            ; 00480273
        ;   Label: LAB_00480273
    PUSH ESI                            ; 00480274
    PUSH EBP                            ; 00480275
    CALL FUN_0047e0d0                   ; 00480276
        ;   XREF to: 0047e0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e0d0()
    ADD ESP,0xc                         ; 0048027b
    TEST EAX,EAX                        ; 0048027e
    JL 0x0047e14d                       ; 00480280
        ;   XREF to: 0047e14d (CONDITIONAL_JUMP)  ; LAB_0047e14d
    TEST EDI,EDI                        ; 00480286
    JZ 0x004802cc                       ; 00480288
        ;   XREF to: 004802cc (CONDITIONAL_JUMP)  ; LAB_004802cc
    TEST EAX,EAX                        ; 0048028a
    JZ 0x004802cc                       ; 0048028c
        ;   XREF to: 004802cc (CONDITIONAL_JUMP)  ; LAB_004802cc
    MOV EDI,0x1                         ; 0048028e
    JMP 0x00480245                      ; 00480293
        ;   XREF to: 00480245 (UNCONDITIONAL_JUMP)  ; LAB_00480245
    MOV EAX,dword ptr [EBX]             ; 00480295
        ;   Label: LAB_00480295
    INC EAX                             ; 00480297
    MOV dword ptr [EBX],EAX             ; 00480298
    CMP byte ptr [ESI + EAX*0x1],0x7c   ; 0048029a
    JNZ 0x004802a5                      ; 0048029e
        ;   XREF to: 004802a5 (CONDITIONAL_JUMP)  ; LAB_004802a5
    LEA EDX,[EAX + 0x1]                 ; 004802a0
    MOV dword ptr [EBX],EDX             ; 004802a3
    PUSH EBX                            ; 004802a5
        ;   Label: LAB_004802a5
    PUSH ESI                            ; 004802a6
    PUSH EBP                            ; 004802a7
    CALL FUN_0047e0d0                   ; 004802a8
        ;   XREF to: 0047e0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e0d0()
    ADD ESP,0xc                         ; 004802ad
    TEST EAX,EAX                        ; 004802b0
    JL 0x0047e14d                       ; 004802b2
        ;   XREF to: 0047e14d (CONDITIONAL_JUMP)  ; LAB_0047e14d
    TEST EDI,EDI                        ; 004802b8
    JZ 0x004802c3                       ; 004802ba
        ;   XREF to: 004802c3 (CONDITIONAL_JUMP)  ; LAB_004802c3
    MOV EDI,0x1                         ; 004802bc
        ;   Label: LAB_004802bc
    JMP 0x00480245                      ; 004802c1
        ;   XREF to: 00480245 (UNCONDITIONAL_JUMP)  ; LAB_00480245
    TEST EAX,EAX                        ; 004802c3
        ;   Label: LAB_004802c3
    JNZ 0x004802bc                      ; 004802c5
        ;   XREF to: 004802bc (CONDITIONAL_JUMP)  ; LAB_004802bc
    JMP 0x00480245                      ; 004802c7
        ;   XREF to: 00480245 (UNCONDITIONAL_JUMP)  ; LAB_00480245
    XOR EDI,EDI                         ; 004802cc
        ;   Label: LAB_004802cc
    JMP 0x00480245                      ; 004802ce
        ;   XREF to: 00480245 (UNCONDITIONAL_JUMP)  ; LAB_00480245
    MOV EAX,EDI                         ; 004802d3
        ;   Label: LAB_004802d3
    POP EBP                             ; 004802d5
    POP EDI                             ; 004802d6
    POP ESI                             ; 004802d7
    POP EBX                             ; 004802d8
    RET                                 ; 004802d9

