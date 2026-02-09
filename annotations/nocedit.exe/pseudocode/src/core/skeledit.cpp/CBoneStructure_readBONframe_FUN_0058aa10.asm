; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10 (CBoneStructure *this_ptr,_FILE *file,int mirror_flag)
;
; Parameters:
; CBoneStructure * Stack[0x8]:4   this_ptr
; _FILE *          Stack[0xc]:4   file
; int              Stack[0x10]:4   mirror_flag
;
; XREF[3]:
;   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 at 0058a44b
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 0059548b
;   core_skeledit.cpp_FUN_0058c190 at 0058c245
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0064a3db
;   TerminatedCString s_core_skeledit_cpp_0064a3e5
;   TerminatedCString s_CBoneStructure_readBONfr_0064a3fa
;   TerminatedCString s_f_f_f_0064a42a
;   TerminatedCString s_f_f_f_0064a434
;   TerminatedCString s_f_f_f_0064a43e
;   TerminatedCString s_core_skeledit_cpp_0064a448
;   TerminatedCString s_CBoneStructure_readBONfr_0064a45d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_FUN_0058ac80
;   core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
;   core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH 0x28                           ; 0058aa10
        ;   Label: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058aa15
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058aa1a
    PUSH ESI                            ; 0058aa1b
    PUSH EDI                            ; 0058aa1c
    PUSH EBP                            ; 0058aa1d
    MOV EBP,dword ptr [ESP + 0x14]      ; 0058aa1e
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058aa22
    XOR ESI,ESI                         ; 0058aa26
    CMP ESI,dword ptr [EBP]             ; 0058aa28
        ;   Label: LAB_0058aa28
    JGE 0x0058ab6b                      ; 0058aa2b
        ;   XREF to: 0058ab6b (CONDITIONAL_JUMP)  ; LAB_0058ab6b
    MOV EAX,dword ptr [EBP + ESI*0x4 + 0x3394] ; 0058aa31
    MOV EBX,EAX                         ; 0058aa38
    SHL EBX,0x5                         ; 0058aa3a
    ADD EBX,EAX                         ; 0058aa3d
    SHL EBX,0x2                         ; 0058aa3f
    LEA EAX,[EBP + 0x4]                 ; 0058aa42
    ADD EAX,EBX                         ; 0058aa45
    LEA EBX,[EAX + 0x54]                ; 0058aa47
    LEA EDX,[EAX + 0x74]                ; 0058aa4a
    PUSH EDX                            ; 0058aa4d
    ADD EAX,0x64                        ; 0058aa4e
    PUSH EAX                            ; 0058aa51
    PUSH EBX                            ; 0058aa52
    PUSH 0x64a3db                       ; 0058aa53 | = "%f,%f,%f\n"
    PUSH EDI                            ; 0058aa58
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058aa59
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0058aa5e
    CMP EAX,0x3                         ; 0058aa61
    JZ 0x0058aa88                       ; 0058aa64
        ;   XREF to: 0058aa88 (CONDITIONAL_JUMP)  ; LAB_0058aa88
    MOV EAX,0x64a3e5                    ; 0058aa66 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058aa66
    MOV EDX,0x310                       ; 0058aa6b
    PUSH 0x64a3fa                       ; 0058aa70 | = "CBoneStructure::readBONframe - file i..."
    MOV [0x02f0ca48],EAX                ; 0058aa75 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0058aa7a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058aa80
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058aa85
    LEA EAX,[EBX + 0x24]                ; 0058aa88
        ;   Label: LAB_0058aa88
    PUSH EAX                            ; 0058aa8b
    LEA EAX,[EBX + 0x14]                ; 0058aa8c
    PUSH EAX                            ; 0058aa8f
    LEA EAX,[EBX + 0x4]                 ; 0058aa90
    PUSH EAX                            ; 0058aa93
    PUSH 0x64a42a                       ; 0058aa94 | = "%f,%f,%f\n"
    PUSH EDI                            ; 0058aa99
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058aa9a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0058aa9f
    CMP EAX,0x3                         ; 0058aaa2
    JNZ 0x0058aa66                      ; 0058aaa5
        ;   XREF to: 0058aa66 (CONDITIONAL_JUMP)  ; LAB_0058aa66
    LEA EAX,[EBX + 0x28]                ; 0058aaa7
    PUSH EAX                            ; 0058aaaa
    LEA EAX,[EBX + 0x18]                ; 0058aaab
    PUSH EAX                            ; 0058aaae
    LEA EAX,[EBX + 0x8]                 ; 0058aaaf
    PUSH EAX                            ; 0058aab2
    PUSH 0x64a434                       ; 0058aab3 | = "%f,%f,%f\n"
    PUSH EDI                            ; 0058aab8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058aab9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0058aabe
    CMP EAX,0x3                         ; 0058aac1
    JNZ 0x0058aa66                      ; 0058aac4
        ;   XREF to: 0058aa66 (CONDITIONAL_JUMP)  ; LAB_0058aa66
    LEA EAX,[EBX + 0x2c]                ; 0058aac6
    PUSH EAX                            ; 0058aac9
    LEA EAX,[EBX + 0x1c]                ; 0058aaca
    PUSH EAX                            ; 0058aacd
    LEA EAX,[EBX + 0xc]                 ; 0058aace
    PUSH EAX                            ; 0058aad1
    PUSH 0x64a43e                       ; 0058aad2 | = "%f,%f,%f\n"
    PUSH EDI                            ; 0058aad7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058aad8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0058aadd
    CMP EAX,0x3                         ; 0058aae0
    JNZ 0x0058aa66                      ; 0058aae3
        ;   XREF to: 0058aa66 (CONDITIONAL_JUMP)  ; LAB_0058aa66
    CMP dword ptr [ESP + 0x1c],0x0      ; 0058aae5
    JZ 0x0058ab33                       ; 0058aaea
        ;   XREF to: 0058ab33 (CONDITIONAL_JUMP)  ; LAB_0058ab33
    MOV DL,byte ptr [EBX + 0x3]         ; 0058aaec
    XOR DL,0x80                         ; 0058aaef
    MOV CL,byte ptr [EBX + 0xb]         ; 0058aaf2
    MOV byte ptr [EBX + 0x3],DL         ; 0058aaf5
    XOR CL,0x80                         ; 0058aaf8
    MOV AL,byte ptr [EBX + 0x23]        ; 0058aafb
    MOV byte ptr [EBX + 0xb],CL         ; 0058aafe
    XOR AL,0x80                         ; 0058ab01
    MOV DH,byte ptr [EBX + 0x7]         ; 0058ab03
    MOV byte ptr [EBX + 0x23],AL        ; 0058ab06
    XOR DH,0x80                         ; 0058ab09
    MOV CH,byte ptr [EBX + 0xf]         ; 0058ab0c
    MOV byte ptr [EBX + 0x7],DH         ; 0058ab0f
    XOR CH,0x80                         ; 0058ab12
    MOV DL,byte ptr [EBX + 0x2b]        ; 0058ab15
    MOV byte ptr [EBX + 0xf],CH         ; 0058ab18
    XOR DL,0x80                         ; 0058ab1b
    MOV AH,byte ptr [EBX + 0x27]        ; 0058ab1e
    MOV byte ptr [EBX + 0x2b],DL        ; 0058ab21
    XOR AH,0x80                         ; 0058ab24
    MOV DH,byte ptr [EBX + 0x2f]        ; 0058ab27
    MOV byte ptr [EBX + 0x27],AH        ; 0058ab2a
    XOR DH,0x80                         ; 0058ab2d
    MOV byte ptr [EBX + 0x2f],DH        ; 0058ab30
    PUSH EBX                            ; 0058ab33
        ;   Label: LAB_0058ab33
    CALL core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0 ; 0058ab34
        ;   XREF to: 005f6be0 (UNCONDITIONAL_CALL)  ; int core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 0058ab39
    TEST EAX,EAX                        ; 0058ab3c
    JZ 0x0058ab5a                       ; 0058ab3e
        ;   XREF to: 0058ab5a (CONDITIONAL_JUMP)  ; LAB_0058ab5a
    MOV CL,byte ptr [EBX + 0x3]         ; 0058ab40
    XOR CL,0x80                         ; 0058ab43
    MOV AL,byte ptr [EBX + 0xb]         ; 0058ab46
    MOV byte ptr [EBX + 0x3],CL         ; 0058ab49
    XOR AL,0x80                         ; 0058ab4c
    MOV CH,byte ptr [EBX + 0x7]         ; 0058ab4e
    MOV byte ptr [EBX + 0xb],AL         ; 0058ab51
    XOR CH,0x80                         ; 0058ab54
    MOV byte ptr [EBX + 0x7],CH         ; 0058ab57
    PUSH 0x1                            ; 0058ab5a
        ;   Label: LAB_0058ab5a
    PUSH EBX                            ; 0058ab5c
    INC ESI                             ; 0058ab5d
    CALL core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690 ; 0058ab5e
        ;   XREF to: 005f6690 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f * matrix, int preserve_scale)
    ADD ESP,0x8                         ; 0058ab63
    JMP 0x0058aa28                      ; 0058ab66
        ;   XREF to: 0058aa28 (UNCONDITIONAL_JUMP)  ; LAB_0058aa28
    PUSH EBP                            ; 0058ab6b
        ;   Label: LAB_0058ab6b
    CALL core_skeledit.cpp_FUN_0058ac80 ; 0058ab6c
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_FUN_0058ac80()
    MOV AH,byte ptr [EDI + 0xc]         ; 0058ab71
    ADD ESP,0x4                         ; 0058ab74
    TEST AH,0x20                        ; 0058ab77
    JNZ 0x0058ab81                      ; 0058ab7a
        ;   XREF to: 0058ab81 (CONDITIONAL_JUMP)  ; LAB_0058ab81
    POP EBP                             ; 0058ab7c
    POP EDI                             ; 0058ab7d
    POP ESI                             ; 0058ab7e
    POP EBX                             ; 0058ab7f
    RET                                 ; 0058ab80
    MOV ECX,0x64a448                    ; 0058ab81 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058ab81
    MOV EBX,0x33b                       ; 0058ab86
    PUSH 0x64a45d                       ; 0058ab8b | = "CBoneStructure::readBONframe - error ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0058ab90 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058ab96 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ab9c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058aba1
    POP EBP                             ; 0058aba4
    POP EDI                             ; 0058aba5
    POP ESI                             ; 0058aba6
    POP EBX                             ; 0058aba7
    RET                                 ; 0058aba8

