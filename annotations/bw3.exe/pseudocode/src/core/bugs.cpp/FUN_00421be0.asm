; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421be0(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00421b00 at 00421b49
;
; Referenced Globals:
;   TerminatedCString s_core_bugs_cpp_005b77f0
;   TerminatedCString s_CBugs_addSwarmGraphEdge_005b7801
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421be0
        ;   Label: FUN_00421be0
    PUSH ESI                            ; 00421be1
    PUSH EDI                            ; 00421be2
    PUSH EBP                            ; 00421be3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00421be4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00421be8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00421bec
    CMP EDI,dword ptr [ESI + 0x13858]   ; 00421bf0
    JGE 0x00421c54                      ; 00421bf6
        ;   XREF to: 00421c54 (CONDITIONAL_JUMP)  ; LAB_00421c54
    CMP dword ptr [ESI + 0x13858],0x352 ; 00421bf8
        ;   Label: LAB_00421bf8
    JLE 0x00421c26                      ; 00421c02
        ;   XREF to: 00421c26 (CONDITIONAL_JUMP)  ; LAB_00421c26
    MOV EBP,0x5b77f0                    ; 00421c04 | = "..\\core\\bugs.cpp"
    MOV EAX,0x20d                       ; 00421c09
    PUSH 0x5b7801                       ; 00421c0e | = "CBugs::addSwarmGraphEdge - Too many v..."
    MOV dword ptr [0x01d71de0],EBP      ; 00421c13 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00421c19 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00421c1e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00421c23
    LEA EAX,[EDI*0x4 + 0x0]             ; 00421c26
        ;   Label: LAB_00421c26
    ADD EAX,EDI                         ; 00421c2d
    LEA ECX,[ESI + 0x1385c]             ; 00421c2f
    SHL EAX,0x3                         ; 00421c35
    ADD ECX,EAX                         ; 00421c38
    MOV EDX,dword ptr [ECX]             ; 00421c3a
    TEST EDX,EDX                        ; 00421c3c
    JNZ 0x00421c5f                      ; 00421c3e
        ;   XREF to: 00421c5f (CONDITIONAL_JUMP)  ; LAB_00421c5f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00421c40
    MOV dword ptr [ECX + 0x4],EAX       ; 00421c44
    MOV EAX,dword ptr [ECX]             ; 00421c47
        ;   Label: LAB_00421c47
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 00421c49
    INC dword ptr [ECX]                 ; 00421c4d
    POP EBP                             ; 00421c4f
        ;   Label: LAB_00421c4f
    POP EDI                             ; 00421c50
    POP ESI                             ; 00421c51
    POP EBX                             ; 00421c52
    RET                                 ; 00421c53
    LEA EAX,[EDI + 0x1]                 ; 00421c54
        ;   Label: LAB_00421c54
    MOV dword ptr [ESI + 0x13858],EAX   ; 00421c57
    JMP 0x00421bf8                      ; 00421c5d
        ;   XREF to: 00421bf8 (UNCONDITIONAL_JUMP)  ; LAB_00421bf8
    CMP EDX,0x8                         ; 00421c5f
        ;   Label: LAB_00421c5f
    JGE 0x00421c4f                      ; 00421c62
        ;   XREF to: 00421c4f (CONDITIONAL_JUMP)  ; LAB_00421c4f
    XOR EAX,EAX                         ; 00421c64
    TEST EDX,EDX                        ; 00421c66
    JLE 0x00421c47                      ; 00421c68
        ;   XREF to: 00421c47 (CONDITIONAL_JUMP)  ; LAB_00421c47
    MOV EDX,ECX                         ; 00421c6a
    CMP EBX,dword ptr [EDX + 0x8]       ; 00421c6c
        ;   Label: LAB_00421c6c
    JZ 0x00421c4f                       ; 00421c6f
        ;   XREF to: 00421c4f (CONDITIONAL_JUMP)  ; LAB_00421c4f
    INC EAX                             ; 00421c71
    MOV EBP,dword ptr [ECX]             ; 00421c72
    ADD EDX,0x4                         ; 00421c74
    CMP EAX,EBP                         ; 00421c77
    JL 0x00421c6c                       ; 00421c79
        ;   XREF to: 00421c6c (CONDITIONAL_JUMP)  ; LAB_00421c6c
    MOV EAX,dword ptr [ECX]             ; 00421c7b
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 00421c7d
    INC dword ptr [ECX]                 ; 00421c81
    POP EBP                             ; 00421c83
    POP EDI                             ; 00421c84
    POP ESI                             ; 00421c85
    POP EBX                             ; 00421c86
    RET                                 ; 00421c87

