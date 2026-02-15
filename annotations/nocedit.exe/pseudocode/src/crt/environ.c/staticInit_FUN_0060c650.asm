; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_environ_c_staticInit_FUN_0060c650(void)
;
;
; Referenced Globals:
;   char* g_EnvironmentStrings = 00000000
;   char** g_EnvironStringArea
;   char** g_EnvironmentBlock
;   int INT_03f9c150
;
; Called Functions:
;   crt_io.c_parseFileInfo_FUN_0060e3b0
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_memset_FUN_005fde40
;   crt_unknown.c_FUN_0060c640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c650
        ;   Label: crt_environ.c_staticInit_FUN_0060c650
    PUSH ESI                            ; 0060c651
    PUSH EDI                            ; 0060c652
    PUSH EBP                            ; 0060c653
    MOV EDI,dword ptr [0x03f9b864]      ; 0060c654 | g_EnvironmentBlock
    TEST EDI,EDI                        ; 0060c65a
    JNZ 0x0060c72e                      ; 0060c65c
        ;   XREF to: 0060c72e (CONDITIONAL_JUMP)  ; LAB_0060c72e
    MOV EBP,dword ptr [0x00685011]      ; 0060c662 | g_EnvironmentStrings
    XOR ESI,ESI                         ; 0060c668
    MOV DL,byte ptr [EBP]               ; 0060c66a
    MOV EAX,EBP                         ; 0060c66d
    TEST DL,DL                          ; 0060c66f
    JZ 0x0060c689                       ; 0060c671
        ;   XREF to: 0060c689 (CONDITIONAL_JUMP)  ; LAB_0060c689
    MOV DH,byte ptr [EAX]               ; 0060c673
        ;   Label: LAB_0060c673
    LEA EBX,[EAX + 0x1]                 ; 0060c675
    TEST DH,DH                          ; 0060c678
    JZ 0x0060c680                       ; 0060c67a
        ;   XREF to: 0060c680 (CONDITIONAL_JUMP)  ; LAB_0060c680
    MOV EAX,EBX                         ; 0060c67c
    JMP 0x0060c673                      ; 0060c67e
        ;   XREF to: 0060c673 (UNCONDITIONAL_JUMP)  ; LAB_0060c673
    INC ESI                             ; 0060c680
        ;   Label: LAB_0060c680
    MOV DH,byte ptr [EBX]               ; 0060c681
    MOV EAX,EBX                         ; 0060c683
    TEST DH,DH                          ; 0060c685
    JNZ 0x0060c673                      ; 0060c687
        ;   XREF to: 0060c673 (CONDITIONAL_JUMP)  ; LAB_0060c673
    MOV dword ptr [0x03f9b864],EDI      ; 0060c689 | g_EnvironmentBlock
        ;   Label: LAB_0060c689
    SUB EAX,EBP                         ; 0060c68f
    JNZ 0x0060c698                      ; 0060c691
        ;   XREF to: 0060c698 (CONDITIONAL_JUMP)  ; LAB_0060c698
    MOV EAX,0x1                         ; 0060c693
    PUSH EAX                            ; 0060c698
        ;   Label: LAB_0060c698
    CALL crt_unknown.c_FUN_0060c640     ; 0060c699
        ;   XREF to: 0060c640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060c640()
    MOV EBX,EAX                         ; 0060c69e
    ADD ESP,0x4                         ; 0060c6a0
    TEST EAX,EAX                        ; 0060c6a3
    JZ 0x0060c729                       ; 0060c6a5
        ;   XREF to: 0060c729 (CONDITIONAL_JUMP)  ; LAB_0060c729
    MOV [0x03f9c150],EAX                ; 0060c6ab | INT_03f9c150
    LEA EAX,[ESI*0x4 + 0x0]             ; 0060c6b0
    ADD EAX,0x4                         ; 0060c6b7
    ADD ESI,EAX                         ; 0060c6ba
    PUSH ESI                            ; 0060c6bc
    CALL crt_unknown.c_FUN_0060c640     ; 0060c6bd
        ;   XREF to: 0060c640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060c640()
    ADD ESP,0x4                         ; 0060c6c2
    TEST EAX,EAX                        ; 0060c6c5
    JZ 0x0060c720                       ; 0060c6c7
        ;   XREF to: 0060c720 (CONDITIONAL_JUMP)  ; LAB_0060c720
    MOV EDI,EAX                         ; 0060c6c9
    MOV DL,byte ptr [EBP]               ; 0060c6cb
    XOR ESI,ESI                         ; 0060c6ce
    XOR ECX,ECX                         ; 0060c6d0
    MOV EAX,EBP                         ; 0060c6d2
    TEST DL,DL                          ; 0060c6d4
    JZ 0x0060c6f2                       ; 0060c6d6
        ;   XREF to: 0060c6f2 (CONDITIONAL_JUMP)  ; LAB_0060c6f2
    MOV EDX,EDI                         ; 0060c6d8
        ;   Label: LAB_0060c6d8
    MOV dword ptr [ECX + EDX*0x1],EBX   ; 0060c6da
    INC EBX                             ; 0060c6dd
        ;   Label: LAB_0060c6dd
    MOV DL,byte ptr [EAX]               ; 0060c6de
    INC EAX                             ; 0060c6e0
    MOV byte ptr [EBX + -0x1],DL        ; 0060c6e1
    TEST DL,DL                          ; 0060c6e4
    JNZ 0x0060c6dd                      ; 0060c6e6
        ;   XREF to: 0060c6dd (CONDITIONAL_JUMP)  ; LAB_0060c6dd
    ADD ECX,0x4                         ; 0060c6e8
    MOV DL,byte ptr [EAX]               ; 0060c6eb
    INC ESI                             ; 0060c6ed
    TEST DL,DL                          ; 0060c6ee
    JNZ 0x0060c6d8                      ; 0060c6f0
        ;   XREF to: 0060c6d8 (CONDITIONAL_JUMP)  ; LAB_0060c6d8
    MOV EAX,EDI                         ; 0060c6f2
        ;   Label: LAB_0060c6f2
    PUSH ESI                            ; 0060c6f4
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 0060c6f5
    ADD ECX,0x4                         ; 0060c6fc
    PUSH 0x0                            ; 0060c6ff
    LEA EAX,[EDI + ECX*0x1]             ; 0060c701
    PUSH EAX                            ; 0060c704
    MOV [0x03f9b860],EAX                ; 0060c705 | g_EnvironStringArea
    MOV dword ptr [0x03f9b864],EDI      ; 0060c70a | g_EnvironmentBlock
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060c710
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDI,dword ptr [0x03f9b864]      ; 0060c715 | g_EnvironmentBlock
    ADD ESP,0xc                         ; 0060c71b
    JMP 0x0060c729                      ; 0060c71e
        ;   XREF to: 0060c729 (UNCONDITIONAL_JUMP)  ; LAB_0060c729
    PUSH EBX                            ; 0060c720
        ;   Label: LAB_0060c720
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060c721
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060c726
    CALL crt_io.c_parseFileInfo_FUN_0060e3b0 ; 0060c729
        ;   XREF to: 0060e3b0 (UNCONDITIONAL_CALL)  ; void crt_io.c_parseFileInfo_FUN_0060e3b0()
        ;   Label: LAB_0060c729
    MOV EDI,dword ptr [0x03f9b864]      ; 0060c72e | g_EnvironmentBlock
        ;   Label: LAB_0060c72e
    POP EBP                             ; 0060c734
    POP EDI                             ; 0060c735
    POP ESI                             ; 0060c736
    POP EBX                             ; 0060c737
    RET                                 ; 0060c738

