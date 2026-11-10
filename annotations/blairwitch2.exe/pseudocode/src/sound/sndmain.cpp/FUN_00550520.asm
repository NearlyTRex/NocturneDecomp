; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00550520(char *param_1,int param_2,int param_3,byte param_4)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550520
        ;   Label: sound_sndmain.cpp_FUN_00550520
    PUSH ESI                            ; 00550521
    PUSH EDI                            ; 00550522
    PUSH EBP                            ; 00550523
    MOV EDI,dword ptr [ESP + 0x14]      ; 00550524
    MOV EAX,dword ptr [ESP + 0x18]      ; 00550528
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0055052c
    MOV EBX,EDI                         ; 00550530
    TEST EAX,EAX                        ; 00550532
    JNZ 0x00550678                      ; 00550534
        ;   XREF to: 00550678 (CONDITIONAL_JUMP)  ; LAB_00550678
    MOV byte ptr [EDI],0x0              ; 0055053a
    TEST byte ptr [ESP + 0x20],0x1      ; 0055053d
        ;   Label: LAB_0055053d
    JZ 0x00550557                       ; 00550542
        ;   XREF to: 00550557 (CONDITIONAL_JUMP)  ; LAB_00550557
    MOV EDX,dword ptr [ESI]             ; 00550544
    PUSH EDX                            ; 00550546
    PUSH 0x5e8c87                       ; 00550547
    PUSH EBX                            ; 0055054c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0055054d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00550552
    ADD EBX,EAX                         ; 00550555
    TEST byte ptr [ESP + 0x20],0x2      ; 00550557
        ;   Label: LAB_00550557
    JZ 0x005505c0                       ; 0055055c
        ;   XREF to: 005505c0 (CONDITIONAL_JUMP)  ; LAB_005505c0
    CMP dword ptr [ESI + 0x20],0x0      ; 0055055e
    JNZ 0x0055058c                      ; 00550562
        ;   XREF to: 0055058c (CONDITIONAL_JUMP)  ; LAB_0055058c
    MOV EDI,dword ptr [ESI + 0x18]      ; 00550564
    PUSH EDI                            ; 00550567
    MOV EBP,dword ptr [ESI + 0x14]      ; 00550568
    PUSH EBP                            ; 0055056b
    MOV EAX,dword ptr [ESI + 0x10]      ; 0055056c
    PUSH EAX                            ; 0055056f
    MOV EDX,dword ptr [ESI + 0xc]       ; 00550570
    PUSH EDX                            ; 00550573
    MOV ECX,dword ptr [ESI + 0x8]       ; 00550574
    PUSH ECX                            ; 00550577
    MOV EDI,dword ptr [ESI + 0x4]       ; 00550578
    PUSH EDI                            ; 0055057b
    PUSH 0x5e8c95                       ; 0055057c
    PUSH EBX                            ; 00550581
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00550582
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x20                        ; 00550587
    ADD EBX,EAX                         ; 0055058a
    CMP dword ptr [ESI + 0x20],0x1      ; 0055058c
        ;   Label: LAB_0055058c
    JNZ 0x005505a6                      ; 00550590
        ;   XREF to: 005505a6 (CONDITIONAL_JUMP)  ; LAB_005505a6
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00550592
    PUSH EAX                            ; 00550595
    PUSH 0x5e8ca6                       ; 00550596
    PUSH EBX                            ; 0055059b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0055059c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 005505a1
    ADD EBX,EAX                         ; 005505a4
    CMP dword ptr [ESI + 0x20],0x2      ; 005505a6
        ;   Label: LAB_005505a6
    JNZ 0x005505c0                      ; 005505aa
        ;   XREF to: 005505c0 (CONDITIONAL_JUMP)  ; LAB_005505c0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 005505ac
    PUSH ECX                            ; 005505af
    PUSH 0x5e8cb6                       ; 005505b0
    PUSH EBX                            ; 005505b5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005505b6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 005505bb
    ADD EBX,EAX                         ; 005505be
    TEST byte ptr [ESP + 0x20],0x4      ; 005505c0
        ;   Label: LAB_005505c0
    JZ 0x0055062c                       ; 005505c5
        ;   XREF to: 0055062c (CONDITIONAL_JUMP)  ; LAB_0055062c
    CMP dword ptr [ESI + 0x34],0x0      ; 005505c7
    JNZ 0x005505f8                      ; 005505cb
        ;   XREF to: 005505f8 (CONDITIONAL_JUMP)  ; LAB_005505f8
    SUB ESP,0x8                         ; 005505cd
    FLD float ptr [ESI + 0x2c]          ; 005505d0
    FSTP double ptr [ESP]               ; 005505d3
    SUB ESP,0x8                         ; 005505d6
    FLD float ptr [ESI + 0x28]          ; 005505d9
    FSTP double ptr [ESP]               ; 005505dc
    SUB ESP,0x8                         ; 005505df
    FLD float ptr [ESI + 0x24]          ; 005505e2
    FSTP double ptr [ESP]               ; 005505e5
    PUSH 0x5e8cc7                       ; 005505e8
    PUSH EBX                            ; 005505ed
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005505ee
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x20                        ; 005505f3
    ADD EBX,EAX                         ; 005505f6
    CMP dword ptr [ESI + 0x34],0x1      ; 005505f8
        ;   Label: LAB_005505f8
    JNZ 0x00550612                      ; 005505fc
        ;   XREF to: 00550612 (CONDITIONAL_JUMP)  ; LAB_00550612
    MOV EAX,dword ptr [ESI + 0x30]      ; 005505fe
    PUSH EAX                            ; 00550601
    PUSH 0x5e8cd8                       ; 00550602
    PUSH EBX                            ; 00550607
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00550608
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055060d
    ADD EBX,EAX                         ; 00550610
    CMP dword ptr [ESI + 0x34],0x2      ; 00550612
        ;   Label: LAB_00550612
    JNZ 0x0055062c                      ; 00550616
        ;   XREF to: 0055062c (CONDITIONAL_JUMP)  ; LAB_0055062c
    MOV ECX,dword ptr [ESI + 0x30]      ; 00550618
    PUSH ECX                            ; 0055061b
    PUSH 0x5e8ce8                       ; 0055061c
    PUSH EBX                            ; 00550621
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00550622
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00550627
    ADD EBX,EAX                         ; 0055062a
    TEST byte ptr [ESP + 0x20],0x8      ; 0055062c
        ;   Label: LAB_0055062c
    JZ 0x0055064c                       ; 00550631
        ;   XREF to: 0055064c (CONDITIONAL_JUMP)  ; LAB_0055064c
    SUB ESP,0x8                         ; 00550633
    FLD float ptr [ESI + 0x38]          ; 00550636
    FSTP double ptr [ESP]               ; 00550639
    PUSH 0x5e8cf9                       ; 0055063c
    PUSH EBX                            ; 00550641
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00550642
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00550647
    ADD EBX,EAX                         ; 0055064a
    TEST byte ptr [ESP + 0x20],0x10     ; 0055064c
        ;   Label: LAB_0055064c
    JZ 0x0055066c                       ; 00550651
        ;   XREF to: 0055066c (CONDITIONAL_JUMP)  ; LAB_0055066c
    SUB ESP,0x8                         ; 00550653
    FLD float ptr [ESI + 0x3c]          ; 00550656
    FSTP double ptr [ESP]               ; 00550659
    PUSH 0x5e8d01                       ; 0055065c
    PUSH EBX                            ; 00550661
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00550662
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00550667
    ADD EBX,EAX                         ; 0055066a
    TEST byte ptr [ESP + 0x20],0x20     ; 0055066c
        ;   Label: LAB_0055066c
    JNZ 0x0055068f                      ; 00550671
        ;   XREF to: 0055068f (CONDITIONAL_JUMP)  ; LAB_0055068f
    POP EBP                             ; 00550673
    POP EDI                             ; 00550674
    POP ESI                             ; 00550675
    POP EBX                             ; 00550676
    RET                                 ; 00550677
    PUSH EAX                            ; 00550678
        ;   Label: LAB_00550678
    PUSH 0x5e8c84                       ; 00550679
    PUSH EDI                            ; 0055067e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0055067f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00550684
    LEA EBX,[EDI + EAX*0x1]             ; 00550687
    JMP 0x0055053d                      ; 0055068a
        ;   XREF to: 0055053d (UNCONDITIONAL_JUMP)  ; LAB_0055053d
    SUB ESP,0x8                         ; 0055068f
        ;   Label: LAB_0055068f
    FLD float ptr [ESI + 0x40]          ; 00550692
    FSTP double ptr [ESP]               ; 00550695
    PUSH 0x5e8d0a                       ; 00550698
    PUSH EBX                            ; 0055069d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0055069e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 005506a3
    POP EBP                             ; 005506a6
    POP EDI                             ; 005506a7
    POP ESI                             ; 005506a8
    POP EBX                             ; 005506a9
    RET                                 ; 005506aa

