; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425a50(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00425970 at 004259b9
;
; Referenced Globals:
;   TerminatedCString s_core_bugs_cpp_005d50af
;   TerminatedCString s_CBugs_addSwarmGraphEdge_005d50c0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425a50
        ;   Label: FUN_00425a50
    PUSH ESI                            ; 00425a51
    PUSH EDI                            ; 00425a52
    PUSH EBP                            ; 00425a53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00425a54
    MOV EDI,dword ptr [ESP + 0x18]      ; 00425a58
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00425a5c
    CMP EDI,dword ptr [ESI + 0x12ee0]   ; 00425a60
    JGE 0x00425ac4                      ; 00425a66
        ;   XREF to: 00425ac4 (CONDITIONAL_JUMP)  ; LAB_00425ac4
    CMP dword ptr [ESI + 0x12ee0],0x2bc ; 00425a68
        ;   Label: LAB_00425a68
    JLE 0x00425a96                      ; 00425a72
        ;   XREF to: 00425a96 (CONDITIONAL_JUMP)  ; LAB_00425a96
    MOV EBP,0x5d50af                    ; 00425a74 | = "..\\core\\bugs.cpp"
    MOV EAX,0x1bd                       ; 00425a79
    PUSH 0x5d50c0                       ; 00425a7e | = "CBugs::addSwarmGraphEdge - Too many v..."
    MOV dword ptr [0x01d1d400],EBP      ; 00425a83 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00425a89 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00425a8e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00425a93
    LEA EAX,[EDI*0x4 + 0x0]             ; 00425a96
        ;   Label: LAB_00425a96
    ADD EAX,EDI                         ; 00425a9d
    LEA ECX,[ESI + 0x12ee4]             ; 00425a9f
    SHL EAX,0x3                         ; 00425aa5
    ADD ECX,EAX                         ; 00425aa8
    MOV EDX,dword ptr [ECX]             ; 00425aaa
    TEST EDX,EDX                        ; 00425aac
    JNZ 0x00425acf                      ; 00425aae
        ;   XREF to: 00425acf (CONDITIONAL_JUMP)  ; LAB_00425acf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00425ab0
    MOV dword ptr [ECX + 0x4],EAX       ; 00425ab4
    MOV EAX,dword ptr [ECX]             ; 00425ab7
        ;   Label: LAB_00425ab7
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 00425ab9
    INC dword ptr [ECX]                 ; 00425abd
    POP EBP                             ; 00425abf
        ;   Label: LAB_00425abf
    POP EDI                             ; 00425ac0
    POP ESI                             ; 00425ac1
    POP EBX                             ; 00425ac2
    RET                                 ; 00425ac3
    LEA EAX,[EDI + 0x1]                 ; 00425ac4
        ;   Label: LAB_00425ac4
    MOV dword ptr [ESI + 0x12ee0],EAX   ; 00425ac7
    JMP 0x00425a68                      ; 00425acd
        ;   XREF to: 00425a68 (UNCONDITIONAL_JUMP)  ; LAB_00425a68
    CMP EDX,0x8                         ; 00425acf
        ;   Label: LAB_00425acf
    JGE 0x00425abf                      ; 00425ad2
        ;   XREF to: 00425abf (CONDITIONAL_JUMP)  ; LAB_00425abf
    XOR EAX,EAX                         ; 00425ad4
    TEST EDX,EDX                        ; 00425ad6
    JLE 0x00425ab7                      ; 00425ad8
        ;   XREF to: 00425ab7 (CONDITIONAL_JUMP)  ; LAB_00425ab7
    MOV EDX,ECX                         ; 00425ada
    CMP EBX,dword ptr [EDX + 0x8]       ; 00425adc
        ;   Label: LAB_00425adc
    JZ 0x00425abf                       ; 00425adf
        ;   XREF to: 00425abf (CONDITIONAL_JUMP)  ; LAB_00425abf
    INC EAX                             ; 00425ae1
    MOV EBP,dword ptr [ECX]             ; 00425ae2
    ADD EDX,0x4                         ; 00425ae4
    CMP EAX,EBP                         ; 00425ae7
    JL 0x00425adc                       ; 00425ae9
        ;   XREF to: 00425adc (CONDITIONAL_JUMP)  ; LAB_00425adc
    MOV EAX,dword ptr [ECX]             ; 00425aeb
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 00425aed
    INC dword ptr [ECX]                 ; 00425af1
    POP EBP                             ; 00425af3
    POP EDI                             ; 00425af4
    POP ESI                             ; 00425af5
    POP EBX                             ; 00425af6
    RET                                 ; 00425af7

