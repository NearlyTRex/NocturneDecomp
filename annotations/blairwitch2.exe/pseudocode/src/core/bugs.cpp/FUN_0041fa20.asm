; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041fa20(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_0041f940 at 0041f989
;
; Referenced Globals:
;   TerminatedCString s_core_bugs_cpp_005cc9c0
;   TerminatedCString s_CBugs_addSwarmGraphEdge_005cc9d1
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fa20
        ;   Label: FUN_0041fa20
    PUSH ESI                            ; 0041fa21
    PUSH EDI                            ; 0041fa22
    PUSH EBP                            ; 0041fa23
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041fa24
    MOV EDI,dword ptr [ESP + 0x18]      ; 0041fa28
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041fa2c
    CMP EDI,dword ptr [ESI + 0x17770]   ; 0041fa30
    JGE 0x0041fa94                      ; 0041fa36
        ;   XREF to: 0041fa94 (CONDITIONAL_JUMP)  ; LAB_0041fa94
    CMP dword ptr [ESI + 0x17770],0x2bc ; 0041fa38
        ;   Label: LAB_0041fa38
    JLE 0x0041fa66                      ; 0041fa42
        ;   XREF to: 0041fa66 (CONDITIONAL_JUMP)  ; LAB_0041fa66
    MOV EBP,0x5cc9c0                    ; 0041fa44 | = "..\\core\\bugs.cpp"
    MOV EAX,0x1bd                       ; 0041fa49
    PUSH 0x5cc9d1                       ; 0041fa4e | = "CBugs::addSwarmGraphEdge - Too many v..."
    MOV dword ptr [0x01d046a0],EBP      ; 0041fa53 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0041fa59 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0041fa5e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0041fa63
    LEA EAX,[EDI*0x4 + 0x0]             ; 0041fa66
        ;   Label: LAB_0041fa66
    ADD EAX,EDI                         ; 0041fa6d
    LEA ECX,[ESI + 0x17774]             ; 0041fa6f
    SHL EAX,0x3                         ; 0041fa75
    ADD ECX,EAX                         ; 0041fa78
    MOV EDX,dword ptr [ECX]             ; 0041fa7a
    TEST EDX,EDX                        ; 0041fa7c
    JNZ 0x0041fa9f                      ; 0041fa7e
        ;   XREF to: 0041fa9f (CONDITIONAL_JUMP)  ; LAB_0041fa9f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041fa80
    MOV dword ptr [ECX + 0x4],EAX       ; 0041fa84
    MOV EAX,dword ptr [ECX]             ; 0041fa87
        ;   Label: LAB_0041fa87
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 0041fa89
    INC dword ptr [ECX]                 ; 0041fa8d
    POP EBP                             ; 0041fa8f
        ;   Label: LAB_0041fa8f
    POP EDI                             ; 0041fa90
    POP ESI                             ; 0041fa91
    POP EBX                             ; 0041fa92
    RET                                 ; 0041fa93
    LEA EAX,[EDI + 0x1]                 ; 0041fa94
        ;   Label: LAB_0041fa94
    MOV dword ptr [ESI + 0x17770],EAX   ; 0041fa97
    JMP 0x0041fa38                      ; 0041fa9d
        ;   XREF to: 0041fa38 (UNCONDITIONAL_JUMP)  ; LAB_0041fa38
    CMP EDX,0x8                         ; 0041fa9f
        ;   Label: LAB_0041fa9f
    JGE 0x0041fa8f                      ; 0041faa2
        ;   XREF to: 0041fa8f (CONDITIONAL_JUMP)  ; LAB_0041fa8f
    XOR EAX,EAX                         ; 0041faa4
    TEST EDX,EDX                        ; 0041faa6
    JLE 0x0041fa87                      ; 0041faa8
        ;   XREF to: 0041fa87 (CONDITIONAL_JUMP)  ; LAB_0041fa87
    MOV EDX,ECX                         ; 0041faaa
    CMP EBX,dword ptr [EDX + 0x8]       ; 0041faac
        ;   Label: LAB_0041faac
    JZ 0x0041fa8f                       ; 0041faaf
        ;   XREF to: 0041fa8f (CONDITIONAL_JUMP)  ; LAB_0041fa8f
    INC EAX                             ; 0041fab1
    MOV EBP,dword ptr [ECX]             ; 0041fab2
    ADD EDX,0x4                         ; 0041fab4
    CMP EAX,EBP                         ; 0041fab7
    JL 0x0041faac                       ; 0041fab9
        ;   XREF to: 0041faac (CONDITIONAL_JUMP)  ; LAB_0041faac
    MOV EAX,dword ptr [ECX]             ; 0041fabb
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 0041fabd
    INC dword ptr [ECX]                 ; 0041fac1
    POP EBP                             ; 0041fac3
    POP EDI                             ; 0041fac4
    POP ESI                             ; 0041fac5
    POP EBX                             ; 0041fac6
    RET                                 ; 0041fac7

