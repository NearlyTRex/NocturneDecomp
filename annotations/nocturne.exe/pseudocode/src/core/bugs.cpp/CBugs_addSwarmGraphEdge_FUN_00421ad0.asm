; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
; int              Stack[0xc]:4   neighbor_index
; int              Stack[0x10]:4   first_edge_data
;
; XREF[1]:
;   core_bugs.cpp_FUN_004219f0 at 00421a39
;
; Referenced Globals:
;   TerminatedCString s_core_bugs_cpp_00579cbc
;   TerminatedCString s_CBugs_addSwarmGraphEdge_00579ccd
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421ad0
        ;   Label: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
    PUSH ESI                            ; 00421ad1
    PUSH EDI                            ; 00421ad2
    PUSH EBP                            ; 00421ad3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00421ad4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00421ad8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00421adc
    CMP EDI,dword ptr [ESI + 0x1299c]   ; 00421ae0
    JGE 0x00421b44                      ; 00421ae6
        ;   XREF to: 00421b44 (CONDITIONAL_JUMP)  ; LAB_00421b44
    CMP dword ptr [ESI + 0x1299c],0x2bc ; 00421ae8
        ;   Label: LAB_00421ae8
    JLE 0x00421b16                      ; 00421af2
        ;   XREF to: 00421b16 (CONDITIONAL_JUMP)  ; LAB_00421b16
    MOV EBP,0x579cbc                    ; 00421af4 | = "..\\core\\bugs.cpp"
    MOV EAX,0x1b8                       ; 00421af9
    PUSH 0x579ccd                       ; 00421afe | = "CBugs::addSwarmGraphEdge - Too many v..."
    MOV dword ptr [0x01cc4800],EBP      ; 00421b03 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00421b09 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00421b0e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00421b13
    LEA EAX,[EDI*0x4 + 0x0]             ; 00421b16
        ;   Label: LAB_00421b16
    ADD EAX,EDI                         ; 00421b1d
    LEA ECX,[ESI + 0x129a0]             ; 00421b1f
    SHL EAX,0x3                         ; 00421b25
    ADD ECX,EAX                         ; 00421b28
    MOV EDX,dword ptr [ECX]             ; 00421b2a
    TEST EDX,EDX                        ; 00421b2c
    JNZ 0x00421b4f                      ; 00421b2e
        ;   XREF to: 00421b4f (CONDITIONAL_JUMP)  ; LAB_00421b4f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00421b30
    MOV dword ptr [ECX + 0x4],EAX       ; 00421b34
    MOV EAX,dword ptr [ECX]             ; 00421b37
        ;   Label: LAB_00421b37
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 00421b39
    INC dword ptr [ECX]                 ; 00421b3d
    POP EBP                             ; 00421b3f
        ;   Label: LAB_00421b3f
    POP EDI                             ; 00421b40
    POP ESI                             ; 00421b41
    POP EBX                             ; 00421b42
    RET                                 ; 00421b43
    LEA EAX,[EDI + 0x1]                 ; 00421b44
        ;   Label: LAB_00421b44
    MOV dword ptr [ESI + 0x1299c],EAX   ; 00421b47
    JMP 0x00421ae8                      ; 00421b4d
        ;   XREF to: 00421ae8 (UNCONDITIONAL_JUMP)  ; LAB_00421ae8
    CMP EDX,0x8                         ; 00421b4f
        ;   Label: LAB_00421b4f
    JGE 0x00421b3f                      ; 00421b52
        ;   XREF to: 00421b3f (CONDITIONAL_JUMP)  ; LAB_00421b3f
    XOR EAX,EAX                         ; 00421b54
    TEST EDX,EDX                        ; 00421b56
    JLE 0x00421b37                      ; 00421b58
        ;   XREF to: 00421b37 (CONDITIONAL_JUMP)  ; LAB_00421b37
    MOV EDX,ECX                         ; 00421b5a
    CMP EBX,dword ptr [EDX + 0x8]       ; 00421b5c
        ;   Label: LAB_00421b5c
    JZ 0x00421b3f                       ; 00421b5f
        ;   XREF to: 00421b3f (CONDITIONAL_JUMP)  ; LAB_00421b3f
    INC EAX                             ; 00421b61
    MOV EBP,dword ptr [ECX]             ; 00421b62
    ADD EDX,0x4                         ; 00421b64
    CMP EAX,EBP                         ; 00421b67
    JL 0x00421b5c                       ; 00421b69
        ;   XREF to: 00421b5c (CONDITIONAL_JUMP)  ; LAB_00421b5c
    MOV EAX,dword ptr [ECX]             ; 00421b6b
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 00421b6d
    INC dword ptr [ECX]                 ; 00421b71
    POP EBP                             ; 00421b73
    POP EDI                             ; 00421b74
    POP ESI                             ; 00421b75
    POP EBX                             ; 00421b76
    RET                                 ; 00421b77

