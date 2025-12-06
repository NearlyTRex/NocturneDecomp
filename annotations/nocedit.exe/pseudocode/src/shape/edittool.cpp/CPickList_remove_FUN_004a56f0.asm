; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_remove_FUN_004a56f0(CPickList * this_ptr, int start_index, int end_index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_index
; int              Stack[0xc]:4   end_index
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623cd5
;   TerminatedCString s_CPickList_remove_can_t_d_00623ceb
;   TerminatedCString s_shape_edittool_cpp_00623d33
;   TerminatedCString s_CPickList_removeRange_ca_00623d49
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CStrList_remove_FUN_004a2e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a56f0
        ;   Label: shape_edittool.cpp_CPickList_remove_FUN_004a56f0
    PUSH EBP                            ; 004a56f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a56f2
    CMP dword ptr [EBX + 0x194],0x0     ; 004a56f6
    JG 0x004a571e                       ; 004a56fd | LAB_004a571e
        ;   XREF to: 004a571e (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x19c],0x0     ; 004a56ff
        ;   Label: LAB_004a56ff
    JG 0x004a5745                       ; 004a5706 | LAB_004a5745
        ;   XREF to: 004a5745 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a5708
        ;   Label: LAB_004a5708
    PUSH EDX                            ; 004a570c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a570d
    PUSH ECX                            ; 004a5711
    PUSH EBX                            ; 004a5712
    CALL shape_edittool.cpp_CStrList_remove_FUN_004a2e00 ; 004a5713 | void shape_edittool.cpp_CStrList_remove_FUN_004a2e00(CStrList * this_ptr, int start_index, int end_index)
        ;   XREF to: 004a2e00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a5718
    POP EBP                             ; 004a571b
    POP EBX                             ; 004a571c
    RET                                 ; 004a571d
    PUSH ESI                            ; 004a571e
        ;   Label: LAB_004a571e
    MOV ECX,0x623cd5                    ; 004a571f | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623cd5 = ..\shape\edittool.cpp
    MOV ESI,0x1079                      ; 004a5724
    PUSH 0x623ceb                       ; 004a5729 | = "CPickList::remove - can't do this aft..." | s_CPickList_remove_can_t_d_00623ceb = CPickList::remove - can't do this after enableing/disabling items (yet)
    MOV dword ptr [0x02f0ca48],ECX      ; 004a572e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a5734 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a573a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a573f
    POP ESI                             ; 004a5742
    JMP 0x004a56ff                      ; 004a5743 | LAB_004a56ff
        ;   XREF to: 004a56ff (UNCONDITIONAL_JUMP)
    MOV EBP,0x623d33                    ; 004a5745 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623d33 = ..\shape\edittool.cpp
        ;   Label: LAB_004a5745
    MOV EAX,0x107a                      ; 004a574a
    PUSH 0x623d49                       ; 004a574f | = "CPickList::removeRange - can't do thi..." | s_CPickList_removeRange_ca_00623d49 = CPickList::removeRange - can't do this after setting hotkeys (yet)
    MOV dword ptr [0x02f0ca48],EBP      ; 004a5754 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a575a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a575f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a5764
    JMP 0x004a5708                      ; 004a5767 | LAB_004a5708
        ;   XREF to: 004a5708 (UNCONDITIONAL_JUMP)

