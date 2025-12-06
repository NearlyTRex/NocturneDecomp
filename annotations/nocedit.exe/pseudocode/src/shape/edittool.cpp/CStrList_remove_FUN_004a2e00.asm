; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_remove_FUN_004a2e00(CStrList * this_ptr, int start_index, int end_index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_index
; int              Stack[0xc]:4   end_index
;
; XREF[2]:
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564d22
;   shape_edittool.cpp_CPickList_remove_FUN_004a56f0 at 004a5713
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_006237ee
;   TerminatedCString s_CStrList_remove_invalid__00623804
;   TerminatedCString s_shape_edittool_cpp_00623825
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2e00
        ;   Label: shape_edittool.cpp_CStrList_remove_FUN_004a2e00
    PUSH ESI                            ; 004a2e01
    PUSH EDI                            ; 004a2e02
    PUSH EBP                            ; 004a2e03
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a2e04
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a2e08
    TEST EBP,EBP                        ; 004a2e0c
    JL 0x004a2e1c                       ; 004a2e0e | LAB_004a2e1c
        ;   XREF to: 004a2e1c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2e10
    CMP EAX,dword ptr [ESI]             ; 004a2e14
    JL 0x004a2eb2                       ; 004a2e16 | LAB_004a2eb2
        ;   XREF to: 004a2eb2 (CONDITIONAL_JUMP)
    MOV EBX,0x6237ee                    ; 004a2e1c | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_006237ee = ..\shape\edittool.cpp
        ;   Label: LAB_004a2e1c
    MOV EDI,0xb7b                       ; 004a2e21
    PUSH 0x623804                       ; 004a2e26 | = "CStrList::remove - invalid range" | s_CStrList_remove_invalid__00623804 = CStrList::remove - invalid range
    MOV dword ptr [0x02f0ca48],EBX      ; 004a2e2b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a2e31 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2e37 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a2e3c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2e3f
        ;   Label: LAB_004a2e3f
    CMP EBP,EAX                         ; 004a2e43
    JG 0x004a2e7a                       ; 004a2e45 | LAB_004a2e7a
        ;   XREF to: 004a2e7a (CONDITIONAL_JUMP)
    LEA EDI,[EAX*0x4 + 0x0]             ; 004a2e47
    LEA EBX,[EBP*0x4 + 0x0]             ; 004a2e4e
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a2e55
        ;   Label: LAB_004a2e55
    ADD EAX,EBX                         ; 004a2e58
    MOV EDX,dword ptr [EAX]             ; 004a2e5a
    TEST EDX,EDX                        ; 004a2e5c
    JZ 0x004a2e73                       ; 004a2e5e | LAB_004a2e73
        ;   XREF to: 004a2e73 (CONDITIONAL_JUMP)
    PUSH 0xb80                          ; 004a2e60
    PUSH 0x623825                       ; 004a2e65 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623825 = ..\shape\edittool.cpp
    PUSH EDX                            ; 004a2e6a
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a2e6b | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a2e70
    ADD EBX,0x4                         ; 004a2e73
        ;   Label: LAB_004a2e73
    CMP EBX,EDI                         ; 004a2e76
    JLE 0x004a2e55                      ; 004a2e78 | LAB_004a2e55
        ;   XREF to: 004a2e55 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2e7a
        ;   Label: LAB_004a2e7a
    SUB EAX,EBP                         ; 004a2e7e
    MOV EBX,dword ptr [ESI]             ; 004a2e80
    INC EAX                             ; 004a2e82
    SUB EBX,EAX                         ; 004a2e83
    MOV EAX,EBX                         ; 004a2e85
    MOV dword ptr [ESI],EBX             ; 004a2e87
    SUB EAX,EBP                         ; 004a2e89
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a2e8b
    SHL EAX,0x2                         ; 004a2e8f
    SHL EBX,0x2                         ; 004a2e92
    PUSH EAX                            ; 004a2e95
    ADD EBX,0x4                         ; 004a2e96
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a2e99
    ADD EBX,EAX                         ; 004a2e9c
    SHL EBP,0x2                         ; 004a2e9e
    PUSH EBX                            ; 004a2ea1
    ADD EAX,EBP                         ; 004a2ea2
    PUSH EAX                            ; 004a2ea4
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004a2ea5 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a2eaa
    POP EBP                             ; 004a2ead
    POP EDI                             ; 004a2eae
    POP ESI                             ; 004a2eaf
    POP EBX                             ; 004a2eb0
    RET                                 ; 004a2eb1
    CMP EBP,EAX                         ; 004a2eb2
        ;   Label: LAB_004a2eb2
    JG 0x004a2e1c                       ; 004a2eb4 | LAB_004a2e1c
        ;   XREF to: 004a2e1c (CONDITIONAL_JUMP)
    JMP 0x004a2e3f                      ; 004a2eba | LAB_004a2e3f
        ;   XREF to: 004a2e3f (UNCONDITIONAL_JUMP)

