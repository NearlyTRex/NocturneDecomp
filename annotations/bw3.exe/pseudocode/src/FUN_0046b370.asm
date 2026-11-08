; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b370(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f5610 at 004f579e
;
; Referenced Globals:
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b370
        ;   Label: FUN_0046b370
    PUSH ESI                            ; 0046b371
    PUSH EDI                            ; 0046b372
    PUSH EBP                            ; 0046b373
    SUB ESP,0x8                         ; 0046b374
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046b377
    MOV EBP,dword ptr [ESP + 0x20]      ; 0046b37b
    CMP dword ptr [EDI + 0xc],0x0       ; 0046b37f
    JNZ 0x0046b432                      ; 0046b383
        ;   XREF to: 0046b432 (CONDITIONAL_JUMP)  ; LAB_0046b432
    MOV EBX,0xffffffff                  ; 0046b389
        ;   Label: LAB_0046b389
    MOV ESI,dword ptr [EBP + 0x4]       ; 0046b38e
    XOR ECX,ECX                         ; 0046b391
    XOR EDX,EDX                         ; 0046b393
    MOV dword ptr [ESP + 0x4],EBX       ; 0046b395
    MOV dword ptr [ESP],ECX             ; 0046b399
    TEST ESI,ESI                        ; 0046b39c
    JLE 0x0046b3d6                      ; 0046b39e
        ;   XREF to: 0046b3d6 (CONDITIONAL_JUMP)  ; LAB_0046b3d6
    MOV ECX,EBP                         ; 0046b3a0
    XOR EAX,EAX                         ; 0046b3a2
    MOV EBX,dword ptr [ECX + 0x18]      ; 0046b3a4
        ;   Label: LAB_0046b3a4
    MOV dword ptr [EAX + 0x1bdd818],EBX ; 0046b3a7 | DAT_01bdd818 | DAT_01bdd81c
    IMUL ESI,EBX,0x30                   ; 0046b3ad
    MOV EBX,dword ptr [EDI]             ; 0046b3b0
    ADD EBX,ESI                         ; 0046b3b2
    MOV ESI,dword ptr [EBX + 0x10]      ; 0046b3b4
    AND dword ptr [ESP + 0x4],ESI       ; 0046b3b7
    TEST byte ptr [EBX + 0x13],0x80     ; 0046b3bb
    JZ 0x0046b3c8                       ; 0046b3bf
        ;   XREF to: 0046b3c8 (CONDITIONAL_JUMP)  ; LAB_0046b3c8
    MOV dword ptr [ESP],0x1             ; 0046b3c1
    ADD EAX,0x4                         ; 0046b3c8
        ;   Label: LAB_0046b3c8
    INC EDX                             ; 0046b3cb
    MOV EBX,dword ptr [EBP + 0x4]       ; 0046b3cc
    ADD ECX,0xc                         ; 0046b3cf
    CMP EDX,EBX                         ; 0046b3d2
    JL 0x0046b3a4                       ; 0046b3d4
        ;   XREF to: 0046b3a4 (CONDITIONAL_JUMP)  ; LAB_0046b3a4
    TEST byte ptr [ESP + 0x7],0x80      ; 0046b3d6
        ;   Label: LAB_0046b3d6
    JZ 0x0046b3e4                       ; 0046b3db
        ;   XREF to: 0046b3e4 (CONDITIONAL_JUMP)  ; LAB_0046b3e4
    TEST byte ptr [ESP + 0x4],0x1f      ; 0046b3dd
    JNZ 0x0046b42a                      ; 0046b3e2
        ;   XREF to: 0046b42a (CONDITIONAL_JUMP)  ; LAB_0046b42a
    MOV EBX,dword ptr [EDI + 0x10]      ; 0046b3e4
        ;   Label: LAB_0046b3e4
    TEST EBX,EBX                        ; 0046b3e7
    JZ 0x0046b3f7                       ; 0046b3e9
        ;   XREF to: 0046b3f7 (CONDITIONAL_JUMP)  ; LAB_0046b3f7
    CMP dword ptr [EDI + 0x4],0x0       ; 0046b3eb
    JZ 0x0046b3f7                       ; 0046b3ef
        ;   XREF to: 0046b3f7 (CONDITIONAL_JUMP)  ; LAB_0046b3f7
    MOV EAX,dword ptr [ESP]             ; 0046b3f1
    MOV dword ptr [EDI + 0x10],EAX      ; 0046b3f4
    CMP dword ptr [EDI + 0x4],0x0       ; 0046b3f7
        ;   Label: LAB_0046b3f7
    JZ 0x0046b447                       ; 0046b3fb
        ;   XREF to: 0046b447 (CONDITIONAL_JUMP)  ; LAB_0046b447
    XOR EDX,EDX                         ; 0046b3fd
    MOV EAX,0x46f9f4                    ; 0046b3ff | LAB_0046f9f4
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046b404 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046b40a | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046b410 | DAT_01c6b5cc
    PUSH 0x1bdd818                      ; 0046b415 | DAT_01bdd818
        ;   Label: LAB_0046b415
    MOV ESI,dword ptr [EBP + 0x4]       ; 0046b41a
    PUSH ESI                            ; 0046b41d
    PUSH EDI                            ; 0046b41e
    CALL FUN_0046b160                   ; 0046b41f
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b160()
    ADD ESP,0xc                         ; 0046b424
    MOV dword ptr [EDI + 0x10],EBX      ; 0046b427
    ADD ESP,0x8                         ; 0046b42a
        ;   Label: LAB_0046b42a
    POP EBP                             ; 0046b42d
    POP EDI                             ; 0046b42e
    POP ESI                             ; 0046b42f
    POP EBX                             ; 0046b430
    RET                                 ; 0046b431
    LEA EAX,[EBP + 0x8]                 ; 0046b432
        ;   Label: LAB_0046b432
    PUSH EAX                            ; 0046b435
    CALL FUN_00403920                   ; 0046b436
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 0046b43b
    TEST EAX,EAX                        ; 0046b43e
    JZ 0x0046b42a                       ; 0046b440
        ;   XREF to: 0046b42a (CONDITIONAL_JUMP)  ; LAB_0046b42a
    JMP 0x0046b389                      ; 0046b442
        ;   XREF to: 0046b389 (UNCONDITIONAL_JUMP)  ; LAB_0046b389
    MOV ECX,0x90                        ; 0046b447
        ;   Label: LAB_0046b447
    MOV ESI,0x6                         ; 0046b44c
    MOV EDX,0x46fb72                    ; 0046b451 | LAB_0046fb72
    MOV dword ptr [0x01c6e2b4],ECX      ; 0046b456 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ESI      ; 0046b45c | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDX      ; 0046b462 | DAT_01c6b5cc
    JMP 0x0046b415                      ; 0046b468
        ;   XREF to: 0046b415 (UNCONDITIONAL_JUMP)  ; LAB_0046b415

