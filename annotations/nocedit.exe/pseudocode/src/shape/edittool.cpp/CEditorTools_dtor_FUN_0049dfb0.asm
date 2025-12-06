; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEditorTools * shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0(CEditorTools * this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622f94
;   char* g_ClipboardBackupText
;   int g_WindowStackCount
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dfb0
        ;   Label: shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0
    PUSH ESI                            ; 0049dfb1
    PUSH EBP                            ; 0049dfb2
    MOV EDX,dword ptr [0x02cf1cdc]      ; 0049dfb3 | int g_WindowStackCount
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049dfb9
    TEST EDX,EDX                        ; 0049dfbd
    JLE 0x0049dfe0                      ; 0049dfbf | LAB_0049dfe0
        ;   XREF to: 0049dfe0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0049dfc1
        ;   Label: LAB_0049dfc1
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0 ; 0049dfc2 | void shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools * this_ptr)
        ;   XREF to: 004a0ea0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02cf1cdc]      ; 0049dfc7 | int g_WindowStackCount
    ADD ESP,0x4                         ; 0049dfcd
    TEST ECX,ECX                        ; 0049dfd0
    JG 0x0049dfc1                       ; 0049dfd2 | LAB_0049dfc1
        ;   XREF to: 0049dfc1 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0049dfd4
    LEA EDX,[EDX]                       ; 0049dfda
    MOV ESI,dword ptr [0x02cf1cd8]      ; 0049dfe0 | char * g_ClipboardBackupText
        ;   Label: LAB_0049dfe0
    TEST ESI,ESI                        ; 0049dfe6
    JNZ 0x0049dff0                      ; 0049dfe8 | LAB_0049dff0
        ;   XREF to: 0049dff0 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0049dfea
    POP EBP                             ; 0049dfec
    POP ESI                             ; 0049dfed
    POP EBX                             ; 0049dfee
    RET                                 ; 0049dfef
    PUSH 0x2bd                          ; 0049dff0
        ;   Label: LAB_0049dff0
    PUSH 0x622f94                       ; 0049dff5 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00622f94 = ..\shape\edittool.cpp
    PUSH ESI                            ; 0049dffa
    XOR EBP,EBP                         ; 0049dffb
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0049dffd | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049e002
    MOV dword ptr [0x02cf1cd8],EBP      ; 0049e005 | char * g_ClipboardBackupText
    MOV EAX,EBX                         ; 0049e00b
    POP EBP                             ; 0049e00d
    POP ESI                             ; 0049e00e
    POP EBX                             ; 0049e00f
    RET                                 ; 0049e010

