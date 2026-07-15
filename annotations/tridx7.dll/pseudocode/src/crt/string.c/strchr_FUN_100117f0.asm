; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strchr_FUN_100117f0(char *s,int c)
;
; Parameters:
; char *           Stack[0x4]:4   s
; int              Stack[0x8]:4   c
;
; XREF[1]:
;   crt_string.c__mbschr_FUN_100116f0 at 10011706
;
; *****************************************************************************

section .text

    LEA EAX,[EDX + -0x1]                ; 100117e0
        ;   Label: LAB_100117e0
    POP EBX                             ; 100117e3
    RET                                 ; 100117e4
    XOR EAX,EAX                         ; 100117f0
        ;   Label: crt_string.c_strchr_FUN_100117f0
    MOV AL,byte ptr [ESP + 0x8]         ; 100117f2
    PUSH EBX                            ; 100117f6
    MOV EBX,EAX                         ; 100117f7
    SHL EAX,0x8                         ; 100117f9
    MOV EDX,dword ptr [ESP + 0x8]       ; 100117fc
    TEST EDX,0x3                        ; 10011800
    JZ 0x1001181b                       ; 10011806
        ;   XREF to: 1001181b (CONDITIONAL_JUMP)  ; LAB_1001181b
    MOV CL,byte ptr [EDX]               ; 10011808
        ;   Label: LAB_10011808
    INC EDX                             ; 1001180a
    CMP CL,BL                           ; 1001180b
    JZ 0x100117e0                       ; 1001180d
        ;   XREF to: 100117e0 (CONDITIONAL_JUMP)  ; LAB_100117e0
    TEST CL,CL                          ; 1001180f
    JZ 0x10011864                       ; 10011811
        ;   XREF to: 10011864 (CONDITIONAL_JUMP)  ; LAB_10011864
    TEST EDX,0x3                        ; 10011813
    JNZ 0x10011808                      ; 10011819
        ;   XREF to: 10011808 (CONDITIONAL_JUMP)  ; LAB_10011808
    OR EBX,EAX                          ; 1001181b
        ;   Label: LAB_1001181b
    PUSH EDI                            ; 1001181d
    MOV EAX,EBX                         ; 1001181e
    SHL EBX,0x10                        ; 10011820
    PUSH ESI                            ; 10011823
    OR EBX,EAX                          ; 10011824
    MOV ECX,dword ptr [EDX]             ; 10011826
        ;   Label: LAB_10011826
    MOV EDI,0x7efefeff                  ; 10011828
    MOV EAX,ECX                         ; 1001182d
    MOV ESI,EDI                         ; 1001182f
    XOR ECX,EBX                         ; 10011831
    ADD ESI,EAX                         ; 10011833
    ADD EDI,ECX                         ; 10011835
    XOR ECX,0xffffffff                  ; 10011837
    XOR EAX,0xffffffff                  ; 1001183a
    XOR ECX,EDI                         ; 1001183d
    XOR EAX,ESI                         ; 1001183f
    ADD EDX,0x4                         ; 10011841
    AND ECX,0x81010100                  ; 10011844
    JNZ 0x10011868                      ; 1001184a
        ;   XREF to: 10011868 (CONDITIONAL_JUMP)  ; LAB_10011868
    AND EAX,0x81010100                  ; 1001184c
    JZ 0x10011826                       ; 10011851
        ;   XREF to: 10011826 (CONDITIONAL_JUMP)  ; LAB_10011826
    AND EAX,0x1010100                   ; 10011853
    JNZ 0x10011862                      ; 10011858
        ;   XREF to: 10011862 (CONDITIONAL_JUMP)  ; LAB_10011862
    AND ESI,0x80000000                  ; 1001185a
    JNZ 0x10011826                      ; 10011860
        ;   XREF to: 10011826 (CONDITIONAL_JUMP)  ; LAB_10011826
    POP ESI                             ; 10011862
        ;   Label: LAB_10011862
    POP EDI                             ; 10011863
    POP EBX                             ; 10011864
        ;   Label: LAB_10011864
    XOR EAX,EAX                         ; 10011865
    RET                                 ; 10011867
    MOV EAX,dword ptr [EDX + -0x4]      ; 10011868
        ;   Label: LAB_10011868
    CMP AL,BL                           ; 1001186b
    JZ 0x100118a5                       ; 1001186d
        ;   XREF to: 100118a5 (CONDITIONAL_JUMP)  ; LAB_100118a5
    TEST AL,AL                          ; 1001186f
    JZ 0x10011862                       ; 10011871
        ;   XREF to: 10011862 (CONDITIONAL_JUMP)  ; LAB_10011862
    CMP AH,BL                           ; 10011873
    JZ 0x1001189e                       ; 10011875
        ;   XREF to: 1001189e (CONDITIONAL_JUMP)  ; LAB_1001189e
    TEST AH,AH                          ; 10011877
    JZ 0x10011862                       ; 10011879
        ;   XREF to: 10011862 (CONDITIONAL_JUMP)  ; LAB_10011862
    SHR EAX,0x10                        ; 1001187b
    CMP AL,BL                           ; 1001187e
    JZ 0x10011897                       ; 10011880
        ;   XREF to: 10011897 (CONDITIONAL_JUMP)  ; LAB_10011897
    TEST AL,AL                          ; 10011882
    JZ 0x10011862                       ; 10011884
        ;   XREF to: 10011862 (CONDITIONAL_JUMP)  ; LAB_10011862
    CMP AH,BL                           ; 10011886
    JZ 0x10011890                       ; 10011888
        ;   XREF to: 10011890 (CONDITIONAL_JUMP)  ; LAB_10011890
    TEST AH,AH                          ; 1001188a
    JZ 0x10011862                       ; 1001188c
        ;   XREF to: 10011862 (CONDITIONAL_JUMP)  ; LAB_10011862
    JMP 0x10011826                      ; 1001188e
        ;   XREF to: 10011826 (UNCONDITIONAL_JUMP)  ; LAB_10011826
    POP ESI                             ; 10011890
        ;   Label: LAB_10011890
    POP EDI                             ; 10011891
    LEA EAX,[EDX + -0x1]                ; 10011892
    POP EBX                             ; 10011895
    RET                                 ; 10011896
    LEA EAX,[EDX + -0x2]                ; 10011897
        ;   Label: LAB_10011897
    POP ESI                             ; 1001189a
    POP EDI                             ; 1001189b
    POP EBX                             ; 1001189c
    RET                                 ; 1001189d
    LEA EAX,[EDX + -0x3]                ; 1001189e
        ;   Label: LAB_1001189e
    POP ESI                             ; 100118a1
    POP EDI                             ; 100118a2
    POP EBX                             ; 100118a3
    RET                                 ; 100118a4
    LEA EAX,[EDX + -0x4]                ; 100118a5
        ;   Label: LAB_100118a5
    POP ESI                             ; 100118a8
    POP EDI                             ; 100118a9
    POP EBX                             ; 100118aa
    RET                                 ; 100118ab

