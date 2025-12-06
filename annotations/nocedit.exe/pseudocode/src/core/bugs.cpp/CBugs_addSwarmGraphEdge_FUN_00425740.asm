; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
;
;
; XREF[1]:
;   core_bugs.cpp_FUN_00425660 at 004256c1
;
; Referenced Globals:
;   TerminatedCString s_core_bugs_cpp_00616d92
;   TerminatedCString s_CBugs_addSwarmGraphEdge__00616da3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425740
        ;   Label: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
    PUSH ESI                            ; 00425741
    PUSH EDI                            ; 00425742
    PUSH EBP                            ; 00425743
    MOV ESI,dword ptr [ESP + 0x14]      ; 00425744
    MOV EDI,dword ptr [ESP + 0x18]      ; 00425748
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042574c
    CMP EDI,dword ptr [ESI + 0x12b34]   ; 00425750
    JGE 0x004257b4                      ; 00425756 | LAB_004257b4
        ;   XREF to: 004257b4 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x12b34],0x2bc ; 00425758
        ;   Label: LAB_00425758
    JLE 0x00425786                      ; 00425762 | LAB_00425786
        ;   XREF to: 00425786 (CONDITIONAL_JUMP)
    MOV EBP,0x616d92                    ; 00425764 | = "..\\core\\bugs.cpp" | s_core_bugs_cpp_00616d92 = ..\core\bugs.cpp
    MOV EAX,0x1b8                       ; 00425769
    PUSH 0x616da3                       ; 0042576e | = "CBugs::addSwarmGraphEdge - Too many v..." | s_CBugs_addSwarmGraphEdge__00616da3 = CBugs::addSwarmGraphEdge - Too many verts in swarm graph.
    MOV dword ptr [0x02f0ca48],EBP      ; 00425773 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00425779 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042577e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00425783
    LEA EAX,[EDI*0x4 + 0x0]             ; 00425786
        ;   Label: LAB_00425786
    ADD EAX,EDI                         ; 0042578d
    LEA ECX,[ESI + 0x12b38]             ; 0042578f
    SHL EAX,0x3                         ; 00425795
    ADD ECX,EAX                         ; 00425798
    MOV EDX,dword ptr [ECX]             ; 0042579a
    TEST EDX,EDX                        ; 0042579c
    JNZ 0x004257bf                      ; 0042579e | LAB_004257bf
        ;   XREF to: 004257bf (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 004257a0
    MOV dword ptr [ECX + 0x4],EAX       ; 004257a4
    MOV EAX,dword ptr [ECX]             ; 004257a7
        ;   Label: LAB_004257a7
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 004257a9
    INC dword ptr [ECX]                 ; 004257ad
    POP EBP                             ; 004257af
        ;   Label: LAB_004257af
    POP EDI                             ; 004257b0
    POP ESI                             ; 004257b1
    POP EBX                             ; 004257b2
    RET                                 ; 004257b3
    LEA EAX,[EDI + 0x1]                 ; 004257b4
        ;   Label: LAB_004257b4
    MOV dword ptr [ESI + 0x12b34],EAX   ; 004257b7
    JMP 0x00425758                      ; 004257bd | LAB_00425758
        ;   XREF to: 00425758 (UNCONDITIONAL_JUMP)
    CMP EDX,0x8                         ; 004257bf
        ;   Label: LAB_004257bf
    JGE 0x004257af                      ; 004257c2 | LAB_004257af
        ;   XREF to: 004257af (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004257c4
    TEST EDX,EDX                        ; 004257c6
    JLE 0x004257a7                      ; 004257c8 | LAB_004257a7
        ;   XREF to: 004257a7 (CONDITIONAL_JUMP)
    MOV EDX,ECX                         ; 004257ca
    CMP EBX,dword ptr [EDX + 0x8]       ; 004257cc
        ;   Label: LAB_004257cc
    JZ 0x004257af                       ; 004257cf | LAB_004257af
        ;   XREF to: 004257af (CONDITIONAL_JUMP)
    INC EAX                             ; 004257d1
    MOV EBP,dword ptr [ECX]             ; 004257d2
    ADD EDX,0x4                         ; 004257d4
    CMP EAX,EBP                         ; 004257d7
    JL 0x004257cc                       ; 004257d9 | LAB_004257cc
        ;   XREF to: 004257cc (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ECX]             ; 004257db
    MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX ; 004257dd
    INC dword ptr [ECX]                 ; 004257e1
    POP EBP                             ; 004257e3
    POP EDI                             ; 004257e4
    POP ESI                             ; 004257e5
    POP EBX                             ; 004257e6
    RET                                 ; 004257e7

