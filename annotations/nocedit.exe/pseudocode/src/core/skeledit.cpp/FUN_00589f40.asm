; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_00589f40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_s_s_already_exists_in_a__0064a0c6
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsInstance
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;
; *****************************************************************************

section .text

    PUSH 0x20                           ; 00589f40
        ;   Label: core_skeledit.cpp_FUN_00589f40
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00589f45
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 00589f4a
    PUSH EBP                            ; 00589f4b
    PUSH 0x0                            ; 00589f4c
    MOV EDX,dword ptr [ESP + 0x14]      ; 00589f4e
    PUSH EDX                            ; 00589f52
    MOV ECX,dword ptr [ESP + 0x14]      ; 00589f53
    PUSH ECX                            ; 00589f57
    MOV EBX,dword ptr [0x00680cdc]      ; 00589f58 | g_CDemonPodPtr
    PUSH EBX                            ; 00589f5e | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 00589f5f
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
    ADD ESP,0x10                        ; 00589f64
    TEST EAX,EAX                        ; 00589f67
    JNZ 0x00589f6e                      ; 00589f69
        ;   XREF to: 00589f6e (CONDITIONAL_JUMP)  ; LAB_00589f6e
    POP EBP                             ; 00589f6b
    POP EBX                             ; 00589f6c
    RET                                 ; 00589f6d
    PUSH EDI                            ; 00589f6e
        ;   Label: LAB_00589f6e
    PUSH ESI                            ; 00589f6f
    ADD EAX,0x4                         ; 00589f70
    PUSH EAX                            ; 00589f73
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00589f74
    PUSH ESI                            ; 00589f78
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00589f79
    PUSH EDI                            ; 00589f7d
    PUSH 0x64a0c6                       ; 00589f7e | = "%s\\%s already exists in a mounted po..."
    MOV EBP,dword ptr [0x00678a60]      ; 00589f83 | g_CEditorToolsPtr
    PUSH EBP                            ; 00589f89 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589f8a
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00589f8f
    POP ESI                             ; 00589f92
    POP EDI                             ; 00589f93
    POP EBP                             ; 00589f94
    POP EBX                             ; 00589f95
    RET                                 ; 00589f96

