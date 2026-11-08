; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_004431b0(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00443730 at 00443763
;
; Called Functions:
;   FUN_00442490
;   FUN_004425b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004431b0
        ;   Label: FUN_004431b0
    PUSH ESI                            ; 004431b1
    PUSH EDI                            ; 004431b2
    PUSH EBP                            ; 004431b3
    SUB ESP,0x8                         ; 004431b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004431b7
    MOV EBX,0x1                         ; 004431bb
    MOV ECX,dword ptr [EAX + 0x8]       ; 004431c0
    XOR EDX,EDX                         ; 004431c3
    XOR EBP,EBP                         ; 004431c5
    XOR EDI,EDI                         ; 004431c7
    DEC ECX                             ; 004431c9
    MOV EAX,dword ptr [EAX + 0xc]       ; 004431ca
    MOV dword ptr [ESP + 0x4],EDX       ; 004431cd
    DEC EAX                             ; 004431d1
    SHL EBX,CL                          ; 004431d2
    MOV dword ptr [ESP],EAX             ; 004431d4
    TEST EBX,EBX                        ; 004431d7
    JZ 0x00443205                       ; 004431d9
        ;   XREF to: 00443205 (CONDITIONAL_JUMP)  ; LAB_00443205
    TEST dword ptr [ESP],EBX            ; 004431db
        ;   Label: LAB_004431db
    JZ 0x00443230                       ; 004431de
        ;   XREF to: 00443230 (CONDITIONAL_JUMP)  ; LAB_00443230
    MOV ESI,dword ptr [ESP + 0x24]      ; 004431e0
    PUSH ESI                            ; 004431e4
    PUSH 0x1                            ; 004431e5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004431e7
    PUSH EAX                            ; 004431eb
    CALL FUN_00442490                   ; 004431ec
        ;   XREF to: 00442490 (UNCONDITIONAL_CALL)  ; undefined FUN_00442490()
    MOV ESI,EAX                         ; 004431f1
    ADD ESP,0xc                         ; 004431f3
    TEST EAX,EAX                        ; 004431f6
    JL 0x00443219                       ; 004431f8
        ;   XREF to: 00443219 (CONDITIONAL_JUMP)  ; LAB_00443219
    ADD EDI,EDI                         ; 004431fa
    INC EBP                             ; 004431fc
    OR EDI,EAX                          ; 004431fd
    TEST EAX,EAX                        ; 004431ff
    JNZ 0x0044322c                      ; 00443201
        ;   XREF to: 0044322c (CONDITIONAL_JUMP)  ; LAB_0044322c
    SAR EBX,0x1                         ; 00443203
    MOV ESI,dword ptr [ESP + 0x24]      ; 00443205
        ;   Label: LAB_00443205
    TEST EBX,EBX                        ; 00443209
    JNZ 0x00443238                      ; 0044320b
        ;   XREF to: 00443238 (CONDITIONAL_JUMP)  ; LAB_00443238
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044320d
    ADD ESP,0x8                         ; 00443211
        ;   Label: LAB_00443211
    POP EBP                             ; 00443214
    POP EDI                             ; 00443215
    POP ESI                             ; 00443216
    POP EBX                             ; 00443217
    RET                                 ; 00443218
    PUSH EDI                            ; 00443219
        ;   Label: LAB_00443219
    PUSH EBP                            ; 0044321a
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044321b
    PUSH ECX                            ; 0044321f
    CALL FUN_004425b0                   ; 00443220
        ;   XREF to: 004425b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004425b0()
    ADD ESP,0xc                         ; 00443225
    MOV EAX,ESI                         ; 00443228
    JMP 0x00443211                      ; 0044322a
        ;   XREF to: 00443211 (UNCONDITIONAL_JUMP)  ; LAB_00443211
    OR dword ptr [ESP + 0x4],EBX        ; 0044322c
        ;   Label: LAB_0044322c
    SAR EBX,0x1                         ; 00443230
        ;   Label: LAB_00443230
    TEST EBX,EBX                        ; 00443232
    JNZ 0x004431db                      ; 00443234
        ;   XREF to: 004431db (CONDITIONAL_JUMP)  ; LAB_004431db
    JMP 0x00443205                      ; 00443236
        ;   XREF to: 00443205 (UNCONDITIONAL_JUMP)  ; LAB_00443205
    PUSH ESI                            ; 00443238
        ;   Label: LAB_00443238
    PUSH 0x1                            ; 00443239
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044323b
    PUSH EAX                            ; 0044323f
    CALL FUN_00442490                   ; 00443240
        ;   XREF to: 00442490 (UNCONDITIONAL_CALL)  ; undefined FUN_00442490()
    ADD ESP,0xc                         ; 00443245
    TEST EAX,EAX                        ; 00443248
    JL 0x00443267                       ; 0044324a
        ;   XREF to: 00443267 (CONDITIONAL_JUMP)  ; LAB_00443267
    ADD EDI,EDI                         ; 0044324c
    INC EBP                             ; 0044324e
    OR EDI,EAX                          ; 0044324f
    TEST EAX,EAX                        ; 00443251
    JNZ 0x00443283                      ; 00443253
        ;   XREF to: 00443283 (CONDITIONAL_JUMP)  ; LAB_00443283
    SAR EBX,0x1                         ; 00443255
        ;   Label: LAB_00443255
    TEST EBX,EBX                        ; 00443257
    JNZ 0x00443238                      ; 00443259
        ;   XREF to: 00443238 (CONDITIONAL_JUMP)  ; LAB_00443238
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044325b
    ADD ESP,0x8                         ; 0044325f
    POP EBP                             ; 00443262
    POP EDI                             ; 00443263
    POP ESI                             ; 00443264
    POP EBX                             ; 00443265
    RET                                 ; 00443266
    PUSH EDI                            ; 00443267
        ;   Label: LAB_00443267
    PUSH EBP                            ; 00443268
    MOV ECX,dword ptr [ESP + 0x28]      ; 00443269
    PUSH ECX                            ; 0044326d
    CALL FUN_004425b0                   ; 0044326e
        ;   XREF to: 004425b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004425b0()
    MOV EAX,0xffffffff                  ; 00443273
    ADD ESP,0xc                         ; 00443278
    ADD ESP,0x8                         ; 0044327b
    POP EBP                             ; 0044327e
    POP EDI                             ; 0044327f
    POP ESI                             ; 00443280
    POP EBX                             ; 00443281
    RET                                 ; 00443282
    OR dword ptr [ESP + 0x4],EBX        ; 00443283
        ;   Label: LAB_00443283
    JMP 0x00443255                      ; 00443287
        ;   XREF to: 00443255 (UNCONDITIONAL_JUMP)  ; LAB_00443255

