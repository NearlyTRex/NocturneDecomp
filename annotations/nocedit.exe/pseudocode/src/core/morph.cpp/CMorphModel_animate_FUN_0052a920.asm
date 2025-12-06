; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_morph.cpp_CMorphModel_FUN_0052a710 at 0052a801
;   core_morph.cpp_CMorphModel_FUN_0052aa00 at 0052aa1d
;   core_morph.cpp_CMorphModel_addPart_FUN_0052a580 at 0052a69b
;   core_morph.cpp_FUN_0052aa30 at 0052aa71
;   core_morph.cpp_FUN_0052aa80 at 0052aaa8
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a229
;   TerminatedCString s_CMorphModel_animate_inva_0063a23b
;   TerminatedCString s_core_morph_cpp_0063a265
;   TerminatedCString s_CMorphModel_animate_inva_0063a277
;   float FLOAT_00661b48 = 0.00390625
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a920
        ;   Label: core_morph.cpp_CMorphModel_animate_FUN_0052a920
    PUSH ESI                            ; 0052a921
    PUSH EDI                            ; 0052a922
    PUSH EBP                            ; 0052a923
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052a924
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052a928
    MOV EBP,dword ptr [ESP + 0x24]      ; 0052a92c
    TEST EBX,EBX                        ; 0052a930
    JL 0x0052a93c                       ; 0052a932 | LAB_0052a93c
        ;   XREF to: 0052a93c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052a934
    CMP EBX,dword ptr [EDX]             ; 0052a938
    JL 0x0052a95e                       ; 0052a93a | LAB_0052a95e
        ;   XREF to: 0052a95e (CONDITIONAL_JUMP)
    MOV ESI,0x63a229                    ; 0052a93c | = "..\\core\\morph.cpp" | s_core_morph_cpp_0063a229 = ..\core\morph.cpp
        ;   Label: LAB_0052a93c
    MOV EAX,0x112                       ; 0052a941
    PUSH 0x63a23b                       ; 0052a946 | = "CMorphModel::animate - invalid part i..." | s_CMorphModel_animate_inva_0063a23b = CMorphModel::animate - invalid part index
    MOV dword ptr [0x02f0ca48],ESI      ; 0052a94b | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052a951 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052a956 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052a95b
    MOV ECX,EBX                         ; 0052a95e
        ;   Label: LAB_0052a95e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052a960
    SHL ECX,0x4                         ; 0052a964
    ADD ECX,EDX                         ; 0052a967
    MOV EBX,dword ptr [ECX + 0xc]       ; 0052a969
    MOV ESI,dword ptr [ECX + 0x4]       ; 0052a96c
    ADD EDI,EBX                         ; 0052a96f
    LEA EDX,[EBX + ESI*0x1]             ; 0052a971
    LEA ECX,[EDI + EBP*0x1]             ; 0052a974
    CMP ECX,EDX                         ; 0052a977
    JLE 0x0052a99d                      ; 0052a979 | LAB_0052a99d
        ;   XREF to: 0052a99d (CONDITIONAL_JUMP)
    MOV EAX,0x63a265                    ; 0052a97b | = "..\\core\\morph.cpp" | s_core_morph_cpp_0063a265 = ..\core\morph.cpp
    MOV EDX,0x119                       ; 0052a980
    PUSH 0x63a277                       ; 0052a985 | = "CMorphModel::animate - invalid vertex..." | s_CMorphModel_animate_inva_0063a277 = CMorphModel::animate - invalid vertex range
    MOV [0x02f0ca48],EAX                ; 0052a98a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0052a98f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052a995 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052a99a
    XOR ECX,ECX                         ; 0052a99d
        ;   Label: LAB_0052a99d
    TEST EBP,EBP                        ; 0052a99f
    JLE 0x0052a9f0                      ; 0052a9a1 | LAB_0052a9f0
        ;   XREF to: 0052a9f0 (CONDITIONAL_JUMP)
    MOV ESI,EDI                         ; 0052a9a3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052a9a5
    SHL ESI,0x4                         ; 0052a9a9
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052a9ac
        ;   Label: LAB_0052a9ac
    MOV EAX,EDX                         ; 0052a9b0
    MOV EBX,dword ptr [EBX + 0x58]      ; 0052a9b2
    INC EDI                             ; 0052a9b5
    ADD EBX,ESI                         ; 0052a9b6
    INC ECX                             ; 0052a9b8
    ADD EBX,0x4                         ; 0052a9b9
    ADD EDX,0xc                         ; 0052a9bc
    FILD dword ptr [EAX]                ; 0052a9bf
    FMUL float ptr [0x00661b48]         ; 0052a9c1 | float FLOAT_00661b48
    FSTP float ptr [EBX]                ; 0052a9c7
    FILD dword ptr [EAX + 0x4]          ; 0052a9c9
    FMUL float ptr [0x00661b48]         ; 0052a9cc | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x4]          ; 0052a9d2
    FILD dword ptr [EAX + 0x8]          ; 0052a9d5
    FMUL float ptr [0x00661b48]         ; 0052a9d8 | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x8]          ; 0052a9de
    ADD ESI,0x10                        ; 0052a9e1
    CMP ECX,EBP                         ; 0052a9e4
    JL 0x0052a9ac                       ; 0052a9e6 | LAB_0052a9ac
        ;   XREF to: 0052a9ac (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0052a9e8
    MOV EDX,EDX                         ; 0052a9ee
    POP EBP                             ; 0052a9f0
        ;   Label: LAB_0052a9f0
    POP EDI                             ; 0052a9f1
    POP ESI                             ; 0052a9f2
    POP EBX                             ; 0052a9f3
    RET                                 ; 0052a9f4

