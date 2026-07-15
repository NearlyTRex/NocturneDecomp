; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_string_c_strlen_FUN_100118b0(char *s)
;
; Parameters:
; char *           Stack[0x4]:4   s
;
; XREF[1]:
;   crt_string.c__strdup_FUN_100117b0 at 100117b8
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 100118b0
        ;   Label: crt_string.c_strlen_FUN_100118b0
    TEST ECX,0x3                        ; 100118b4
    JZ 0x100118d0                       ; 100118ba
        ;   XREF to: 100118d0 (CONDITIONAL_JUMP)  ; LAB_100118d0
    MOV AL,byte ptr [ECX]               ; 100118bc
        ;   Label: LAB_100118bc
    INC ECX                             ; 100118be
    TEST AL,AL                          ; 100118bf
    JZ 0x10011903                       ; 100118c1
        ;   XREF to: 10011903 (CONDITIONAL_JUMP)  ; LAB_10011903
    TEST ECX,0x3                        ; 100118c3
    JNZ 0x100118bc                      ; 100118c9
        ;   XREF to: 100118bc (CONDITIONAL_JUMP)  ; LAB_100118bc
    ADD EAX,0x0                         ; 100118cb
    MOV EAX,dword ptr [ECX]             ; 100118d0
        ;   Label: LAB_100118d0
    MOV EDX,0x7efefeff                  ; 100118d2
    ADD EDX,EAX                         ; 100118d7
    XOR EAX,0xffffffff                  ; 100118d9
    XOR EAX,EDX                         ; 100118dc
    ADD ECX,0x4                         ; 100118de
    TEST EAX,0x81010100                 ; 100118e1
    JZ 0x100118d0                       ; 100118e6
        ;   XREF to: 100118d0 (CONDITIONAL_JUMP)  ; LAB_100118d0
    MOV EAX,dword ptr [ECX + -0x4]      ; 100118e8
    TEST AL,AL                          ; 100118eb
    JZ 0x10011921                       ; 100118ed
        ;   XREF to: 10011921 (CONDITIONAL_JUMP)  ; LAB_10011921
    TEST AH,AH                          ; 100118ef
    JZ 0x10011917                       ; 100118f1
        ;   XREF to: 10011917 (CONDITIONAL_JUMP)  ; LAB_10011917
    TEST EAX,0xff0000                   ; 100118f3
    JZ 0x1001190d                       ; 100118f8
        ;   XREF to: 1001190d (CONDITIONAL_JUMP)  ; LAB_1001190d
    TEST EAX,0xff000000                 ; 100118fa
    JZ 0x10011903                       ; 100118ff
        ;   XREF to: 10011903 (CONDITIONAL_JUMP)  ; LAB_10011903
    JMP 0x100118d0                      ; 10011901
        ;   XREF to: 100118d0 (UNCONDITIONAL_JUMP)  ; LAB_100118d0
    LEA EAX,[ECX + -0x1]                ; 10011903
        ;   Label: LAB_10011903
    MOV ECX,dword ptr [ESP + 0x4]       ; 10011906
    SUB EAX,ECX                         ; 1001190a
    RET                                 ; 1001190c
    LEA EAX,[ECX + -0x2]                ; 1001190d
        ;   Label: LAB_1001190d
    MOV ECX,dword ptr [ESP + 0x4]       ; 10011910
    SUB EAX,ECX                         ; 10011914
    RET                                 ; 10011916
    LEA EAX,[ECX + -0x3]                ; 10011917
        ;   Label: LAB_10011917
    MOV ECX,dword ptr [ESP + 0x4]       ; 1001191a
    SUB EAX,ECX                         ; 1001191e
    RET                                 ; 10011920
    LEA EAX,[ECX + -0x4]                ; 10011921
        ;   Label: LAB_10011921
    MOV ECX,dword ptr [ESP + 0x4]       ; 10011924
    SUB EAX,ECX                         ; 10011928
    RET                                 ; 1001192a

