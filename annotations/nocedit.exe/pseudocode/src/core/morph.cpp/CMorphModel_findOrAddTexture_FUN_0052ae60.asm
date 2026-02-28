; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0 at 0052ab77
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0 at 0052ad69
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a3a7
;   TerminatedCString s_CMorphModel_findOrAddTex_0063a3b9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ae60
        ;   Label: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
    PUSH ESI                            ; 0052ae61
    PUSH EDI                            ; 0052ae62
    PUSH EBP                            ; 0052ae63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052ae64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052ae68
    MOV EDX,dword ptr [EBX + 0x64]      ; 0052ae6c
    XOR ESI,ESI                         ; 0052ae6f
    TEST EDX,EDX                        ; 0052ae71
    JLE 0x0052ae95                      ; 0052ae73
        ;   XREF to: 0052ae95 (CONDITIONAL_JUMP)  ; LAB_0052ae95
    LEA EDI,[EBX + 0x70]                ; 0052ae75
    PUSH EBP                            ; 0052ae78
        ;   Label: LAB_0052ae78
    PUSH EDI                            ; 0052ae79
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0052ae7a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052ae7f
    TEST EAX,EAX                        ; 0052ae82
    JZ 0x0052af1c                       ; 0052ae84
        ;   XREF to: 0052af1c (CONDITIONAL_JUMP)  ; LAB_0052af1c
    INC ESI                             ; 0052ae8a
    MOV ECX,dword ptr [EBX + 0x64]      ; 0052ae8b
    ADD EDI,0x48                        ; 0052ae8e
    CMP ESI,ECX                         ; 0052ae91
    JL 0x0052ae78                       ; 0052ae93
        ;   XREF to: 0052ae78 (CONDITIONAL_JUMP)  ; LAB_0052ae78
    CMP dword ptr [EBX + 0x64],0x14     ; 0052ae95
        ;   Label: LAB_0052ae95
    JL 0x0052aebd                       ; 0052ae99
        ;   XREF to: 0052aebd (CONDITIONAL_JUMP)  ; LAB_0052aebd
    MOV EDI,0x63a3a7                    ; 0052ae9b | = "..\\core\\morph.cpp"
    MOV EAX,0x1d0                       ; 0052aea0
    PUSH 0x63a3b9                       ; 0052aea5 | = "CMorphModel::findOrAddTexture - too m..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0052aeaa | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052aeb0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052aeb5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052aeba
    MOV ESI,dword ptr [EBX + 0x64]      ; 0052aebd
        ;   Label: LAB_0052aebd
    LEA EAX,[ESI*0x8 + 0x0]             ; 0052aec0
    PUSH 0x48                           ; 0052aec7
    ADD EAX,ESI                         ; 0052aec9
    LEA EDI,[EBX + 0x68]                ; 0052aecb
    SHL EAX,0x3                         ; 0052aece
    PUSH 0x0                            ; 0052aed1
    ADD EAX,EDI                         ; 0052aed3
    PUSH EAX                            ; 0052aed5
    CALL crt_memory.c_memset_FUN_005fde40 ; 0052aed6
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x64]      ; 0052aedb
    LEA EAX,[ESI*0x8 + 0x0]             ; 0052aede
    ADD EAX,ESI                         ; 0052aee5
    SHL EAX,0x3                         ; 0052aee7
    ADD ESP,0xc                         ; 0052aeea
    ADD EDI,EAX                         ; 0052aeed
    MOV ESI,EBP                         ; 0052aeef
    ADD EDI,0x8                         ; 0052aef1
    PUSH EDI                            ; 0052aef4
    MOV AL,byte ptr [ESI]               ; 0052aef5
        ;   Label: LAB_0052aef5
    MOV byte ptr [EDI],AL               ; 0052aef7
    CMP AL,0x0                          ; 0052aef9
    JZ 0x0052af0d                       ; 0052aefb
        ;   XREF to: 0052af0d (CONDITIONAL_JUMP)  ; LAB_0052af0d
    MOV AL,byte ptr [ESI + 0x1]         ; 0052aefd
    ADD ESI,0x2                         ; 0052af00
    MOV byte ptr [EDI + 0x1],AL         ; 0052af03
    ADD EDI,0x2                         ; 0052af06
    CMP AL,0x0                          ; 0052af09
    JNZ 0x0052aef5                      ; 0052af0b
        ;   XREF to: 0052aef5 (CONDITIONAL_JUMP)  ; LAB_0052aef5
    POP EDI                             ; 0052af0d
        ;   Label: LAB_0052af0d
    MOV EAX,dword ptr [EBX + 0x64]      ; 0052af0e
    LEA ESI,[EAX + 0x1]                 ; 0052af11
    MOV dword ptr [EBX + 0x64],ESI      ; 0052af14
    POP EBP                             ; 0052af17
    POP EDI                             ; 0052af18
    POP ESI                             ; 0052af19
    POP EBX                             ; 0052af1a
    RET                                 ; 0052af1b
    MOV EAX,ESI                         ; 0052af1c
        ;   Label: LAB_0052af1c
    POP EBP                             ; 0052af1e
    POP EDI                             ; 0052af1f
    POP ESI                             ; 0052af20
    POP EBX                             ; 0052af21
    RET                                 ; 0052af22

