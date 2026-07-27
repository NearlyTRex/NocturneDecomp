; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   core_stranger.cpp_FUN_005402f0 at 0054043a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057af91
;   TerminatedCString s_CCloth_grabCloth_Can_t_f_0057afa3
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004386b0
        ;   Label: core_cloth.cpp_CCloth_grabCloth_FUN_004386b0
    PUSH ESI                            ; 004386b1
    PUSH EDI                            ; 004386b2
    PUSH EBP                            ; 004386b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004386b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004386b8
    MOV EDX,dword ptr [EDI + 0x37b4c]   ; 004386bc
    XOR EBX,EBX                         ; 004386c2
    TEST EDX,EDX                        ; 004386c4
    JLE 0x004386dc                      ; 004386c6
        ;   XREF to: 004386dc (CONDITIONAL_JUMP)  ; LAB_004386dc
    LEA ESI,[EDI + 0x37b50]             ; 004386c8
    PUSH ESI                            ; 004386ce
        ;   Label: LAB_004386ce
    PUSH EBP                            ; 004386cf
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004386d0
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004386d5
    TEST EAX,EAX                        ; 004386d8
    JNZ 0x0043870d                      ; 004386da
        ;   XREF to: 0043870d (CONDITIONAL_JUMP)  ; LAB_0043870d
    CMP EBX,dword ptr [EDI + 0x37b4c]   ; 004386dc
        ;   Label: LAB_004386dc
    JZ 0x00438720                       ; 004386e2
        ;   XREF to: 00438720 (CONDITIONAL_JUMP)  ; LAB_00438720
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004386e4
        ;   Label: LAB_004386e4
    LEA EAX,[ESI*0x8 + 0x0]             ; 004386e8
    ADD EAX,ESI                         ; 004386ef
    SHL EAX,0x3                         ; 004386f1
    SUB EAX,ESI                         ; 004386f4
    MOV dword ptr [EDI + EAX*0x4 + 0x40c],0x1 ; 004386f6
    MOV dword ptr [EDI + EAX*0x4 + 0x470],EBX ; 00438701
    POP EBP                             ; 00438708
    POP EDI                             ; 00438709
    POP ESI                             ; 0043870a
    POP EBX                             ; 0043870b
    RET                                 ; 0043870c
    INC EBX                             ; 0043870d
        ;   Label: LAB_0043870d
    MOV ECX,dword ptr [EDI + 0x37b4c]   ; 0043870e
    ADD ESI,0xac                        ; 00438714
    CMP EBX,ECX                         ; 0043871a
    JL 0x004386ce                       ; 0043871c
        ;   XREF to: 004386ce (CONDITIONAL_JUMP)  ; LAB_004386ce
    JMP 0x004386dc                      ; 0043871e
        ;   XREF to: 004386dc (UNCONDITIONAL_JUMP)  ; LAB_004386dc
    PUSH EBP                            ; 00438720
        ;   Label: LAB_00438720
    MOV EAX,0x57af91                    ; 00438721 | = "..\\core\\cloth.cpp"
    MOV EDX,0xaa7                       ; 00438726
    PUSH 0x57afa3                       ; 0043872b | = "CCloth::grabCloth - Can't find bone %s"
    MOV [0x01cc4800],EAX                ; 00438730 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00438735 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0043873b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00438740
    JMP 0x004386e4                      ; 00438743
        ;   XREF to: 004386e4 (UNCONDITIONAL_JUMP)  ; LAB_004386e4

