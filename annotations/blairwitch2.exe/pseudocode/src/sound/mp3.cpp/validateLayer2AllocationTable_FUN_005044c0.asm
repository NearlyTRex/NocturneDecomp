; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_005044c0(SMpegFrame *frame)
;
; Parameters:
; SMpegFrame *     Stack[0x4]:4   frame
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005044c0
        ;   Label: sound_mp3.cpp_validateLayer2AllocationTable_FUN_005044c0
    PUSH ESI                            ; 005044c1
    PUSH EDI                            ; 005044c2
    PUSH EBP                            ; 005044c3
    SUB ESP,0xc                         ; 005044c4
    MOV ESI,dword ptr [ESP + 0x20]      ; 005044c7
    MOV ECX,dword ptr [ESI]             ; 005044cb
    MOV EAX,dword ptr [ECX + 0x4]       ; 005044cd
    DEC EAX                             ; 005044d0
    MOV dword ptr [ESP],EAX             ; 005044d1
    MOV EAX,dword ptr [ECX + 0xc]       ; 005044d4
    MOV EBX,dword ptr [ECX]             ; 005044d7
    MOV dword ptr [ESP + 0x4],EAX       ; 005044d9
    LEA EAX,[EBX*0x4 + 0x0]             ; 005044dd
    SUB EAX,EBX                         ; 005044e4
    SHL EAX,0x2                         ; 005044e6
    MOV EBP,EAX                         ; 005044e9
    SHL EBP,0x4                         ; 005044eb
    SUB EBP,EAX                         ; 005044ee
    MOV EAX,dword ptr [ESP]             ; 005044f0
    SHL EAX,0x2                         ; 005044f3
    MOV EDX,EAX                         ; 005044f6
    SHL EAX,0x4                         ; 005044f8
    SUB EAX,EDX                         ; 005044fb
    ADD EBP,EAX                         ; 005044fd
    MOV EAX,dword ptr [ESP + 0x4]       ; 005044ff
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x618ec8] ; 00504503
    MOV EAX,EDX                         ; 0050450a
    MOV EBP,dword ptr [ESI + 0x10]      ; 0050450c
    SAR EDX,0x1f                        ; 0050450f
    IDIV EBP                            ; 00504512
    MOV EDX,EAX                         ; 00504514
    MOV EAX,dword ptr [ECX + 0x10]      ; 00504516
    MOV ECX,EBX                         ; 00504519
    SHL ECX,0x5                         ; 0050451b
    MOV EDI,dword ptr [ESI + 0x18]      ; 0050451e
    FLD double ptr [ECX + EAX*0x8 + 0x618e88] ; 00504521
    CALL crt_math.c_round_FUN_005b7ff0  ; 00504528
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0050452d
    CMP EBX,0x1                         ; 00504531
    JNZ 0x005045b9                      ; 00504534
        ;   XREF to: 005045b9 (CONDITIONAL_JUMP)  ; LAB_005045b9
    CMP dword ptr [ESP + 0x8],0x30      ; 0050453a
    JNZ 0x0050455b                      ; 0050453f
        ;   XREF to: 0050455b (CONDITIONAL_JUMP)  ; LAB_0050455b
    CMP EDX,0x38                        ; 00504541
    JL 0x0050455b                       ; 00504544
        ;   XREF to: 0050455b (CONDITIONAL_JUMP)  ; LAB_0050455b
    XOR EAX,EAX                         ; 00504546
        ;   Label: LAB_00504546
    CMP EAX,dword ptr [ESI + 0xc]       ; 00504548
    JNZ 0x005045cd                      ; 0050454b
        ;   XREF to: 005045cd (CONDITIONAL_JUMP)  ; LAB_005045cd
    MOV EAX,EDI                         ; 00504551
    ADD ESP,0xc                         ; 00504553
    POP EBP                             ; 00504556
    POP EDI                             ; 00504557
    POP ESI                             ; 00504558
    POP EBX                             ; 00504559
    RET                                 ; 0050455a
    CMP EDX,0x38                        ; 0050455b
        ;   Label: LAB_0050455b
    JL 0x00504565                       ; 0050455e
        ;   XREF to: 00504565 (CONDITIONAL_JUMP)  ; LAB_00504565
    CMP EDX,0x50                        ; 00504560
    JLE 0x00504546                      ; 00504563
        ;   XREF to: 00504546 (CONDITIONAL_JUMP)  ; LAB_00504546
    CMP dword ptr [ESP + 0x8],0x30      ; 00504565
        ;   Label: LAB_00504565
    JZ 0x00504585                       ; 0050456a
        ;   XREF to: 00504585 (CONDITIONAL_JUMP)  ; LAB_00504585
    CMP EDX,0x60                        ; 0050456c
    JL 0x00504585                       ; 0050456f
        ;   XREF to: 00504585 (CONDITIONAL_JUMP)  ; LAB_00504585
    MOV EAX,0x1                         ; 00504571
    CMP EAX,dword ptr [ESI + 0xc]       ; 00504576
    JNZ 0x005045cd                      ; 00504579
        ;   XREF to: 005045cd (CONDITIONAL_JUMP)  ; LAB_005045cd
    MOV EAX,EDI                         ; 0050457b
    ADD ESP,0xc                         ; 0050457d
    POP EBP                             ; 00504580
    POP EDI                             ; 00504581
    POP ESI                             ; 00504582
    POP EBX                             ; 00504583
    RET                                 ; 00504584
    CMP dword ptr [ESP + 0x8],0x20      ; 00504585
        ;   Label: LAB_00504585
    JZ 0x005045a5                       ; 0050458a
        ;   XREF to: 005045a5 (CONDITIONAL_JUMP)  ; LAB_005045a5
    CMP EDX,0x30                        ; 0050458c
    JG 0x005045a5                       ; 0050458f
        ;   XREF to: 005045a5 (CONDITIONAL_JUMP)  ; LAB_005045a5
    MOV EAX,0x2                         ; 00504591
    CMP EAX,dword ptr [ESI + 0xc]       ; 00504596
    JNZ 0x005045cd                      ; 00504599
        ;   XREF to: 005045cd (CONDITIONAL_JUMP)  ; LAB_005045cd
    MOV EAX,EDI                         ; 0050459b
    ADD ESP,0xc                         ; 0050459d
    POP EBP                             ; 005045a0
    POP EDI                             ; 005045a1
    POP ESI                             ; 005045a2
    POP EBX                             ; 005045a3
    RET                                 ; 005045a4
    MOV EAX,0x3                         ; 005045a5
        ;   Label: LAB_005045a5
    CMP EAX,dword ptr [ESI + 0xc]       ; 005045aa
    JNZ 0x005045cd                      ; 005045ad
        ;   XREF to: 005045cd (CONDITIONAL_JUMP)  ; LAB_005045cd
    MOV EAX,EDI                         ; 005045af
    ADD ESP,0xc                         ; 005045b1
    POP EBP                             ; 005045b4
    POP EDI                             ; 005045b5
    POP ESI                             ; 005045b6
    POP EBX                             ; 005045b7
    RET                                 ; 005045b8
    MOV EAX,0x4                         ; 005045b9
        ;   Label: LAB_005045b9
    CMP EAX,dword ptr [ESI + 0xc]       ; 005045be
    JNZ 0x005045cd                      ; 005045c1
        ;   XREF to: 005045cd (CONDITIONAL_JUMP)  ; LAB_005045cd
    MOV EAX,EDI                         ; 005045c3
    ADD ESP,0xc                         ; 005045c5
    POP EBP                             ; 005045c8
    POP EDI                             ; 005045c9
    POP ESI                             ; 005045ca
    POP EBX                             ; 005045cb
    RET                                 ; 005045cc
    PUSH 0x1d23558                      ; 005045cd
        ;   Label: LAB_005045cd
    MOV EAX,0x5dfe5b                    ; 005045d2
    MOV EDX,0x1d8                       ; 005045d7
    PUSH 0x5dfe6c                       ; 005045dc
    MOV [0x01d046a0],EAX                ; 005045e1 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005045e6 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 005045ec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x8                         ; 005045f1
    MOV EAX,EDI                         ; 005045f4
    ADD ESP,0xc                         ; 005045f6
    POP EBP                             ; 005045f9
    POP EDI                             ; 005045fa
    POP ESI                             ; 005045fb
    POP EBX                             ; 005045fc
    RET                                 ; 005045fd

