; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_sort_FUN_004a57f0(CPickList * this_ptr, int sort_type, int sort_order)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sort_type
; int              Stack[0xc]:4   sort_order
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f674
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623db8
;   TerminatedCString s_CPickList_sort_can_t_do__00623dce
;   TerminatedCString s_shape_edittool_cpp_00623e14
;   TerminatedCString s_CPickList_sort_can_t_do__00623e2a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CStrList_sort_FUN_004a2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a57f0
        ;   Label: shape_edittool.cpp_CPickList_sort_FUN_004a57f0
    PUSH EBP                            ; 004a57f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a57f2
    CMP dword ptr [EBX + 0x194],0x0     ; 004a57f6
    JG 0x004a581e                       ; 004a57fd
        ;   XREF to: 004a581e (CONDITIONAL_JUMP)  ; LAB_004a581e
    CMP dword ptr [EBX + 0x19c],0x0     ; 004a57ff
        ;   Label: LAB_004a57ff
    JG 0x004a5845                       ; 004a5806
        ;   XREF to: 004a5845 (CONDITIONAL_JUMP)  ; LAB_004a5845
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a5808
        ;   Label: LAB_004a5808
    PUSH EDX                            ; 004a580c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a580d
    PUSH ECX                            ; 004a5811
    PUSH EBX                            ; 004a5812
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2f00 ; 004a5813
        ;   XREF to: 004a2f00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2f00(CStrList * this_ptr, int sort_type, int sort_order)
    ADD ESP,0xc                         ; 004a5818
    POP EBP                             ; 004a581b
    POP EBX                             ; 004a581c
    RET                                 ; 004a581d
    PUSH ESI                            ; 004a581e
        ;   Label: LAB_004a581e
    MOV ECX,0x623db8                    ; 004a581f | = "..\\shape\\edittool.cpp"
    MOV ESI,0x108d                      ; 004a5824
    PUSH 0x623dce                       ; 004a5829 | = "CPickList::sort - can't do this after..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a582e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a5834 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a583a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a583f
    POP ESI                             ; 004a5842
    JMP 0x004a57ff                      ; 004a5843
        ;   XREF to: 004a57ff (UNCONDITIONAL_JUMP)  ; LAB_004a57ff
    MOV EBP,0x623e14                    ; 004a5845 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a5845
    MOV EAX,0x108e                      ; 004a584a
    PUSH 0x623e2a                       ; 004a584f | = "CPickList::sort - can't do this after..."
    MOV dword ptr [0x02f0ca48],EBP      ; 004a5854 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a585a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a585f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a5864
    JMP 0x004a5808                      ; 004a5867
        ;   XREF to: 004a5808 (UNCONDITIONAL_JUMP)  ; LAB_004a5808

