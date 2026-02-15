; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_swap_FUN_004a5870(CPickList *this_ptr,int index1,int index2)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index1
; int              Stack[0xc]:4   index2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623e66
;   TerminatedCString s_CPickList_swap_can_t_do__00623e7c
;   TerminatedCString s_shape_edittool_cpp_00623ec2
;   TerminatedCString s_CPickList_swap_can_t_do__00623ed8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CStrList_swap_FUN_004a31f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5870
        ;   Label: shape_edittool.cpp_CPickList_swap_FUN_004a5870
    PUSH EBP                            ; 004a5871
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a5872
    CMP dword ptr [EBX + 0x194],0x0     ; 004a5876
    JG 0x004a589e                       ; 004a587d
        ;   XREF to: 004a589e (CONDITIONAL_JUMP)  ; LAB_004a589e
    CMP dword ptr [EBX + 0x19c],0x0     ; 004a587f
        ;   Label: LAB_004a587f
    JG 0x004a58c5                       ; 004a5886
        ;   XREF to: 004a58c5 (CONDITIONAL_JUMP)  ; LAB_004a58c5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a5888
        ;   Label: LAB_004a5888
    PUSH EDX                            ; 004a588c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a588d
    PUSH ECX                            ; 004a5891
    PUSH EBX                            ; 004a5892
    CALL shape_edittool.cpp_CStrList_swap_FUN_004a31f0 ; 004a5893
        ;   XREF to: 004a31f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_swap_FUN_004a31f0(CStrList * this_ptr, int index1, int index2)
    ADD ESP,0xc                         ; 004a5898
    POP EBP                             ; 004a589b
    POP EBX                             ; 004a589c
    RET                                 ; 004a589d
    PUSH ESI                            ; 004a589e
        ;   Label: LAB_004a589e
    MOV ECX,0x623e66                    ; 004a589f | = "..\\shape\\edittool.cpp"
    MOV ESI,0x1093                      ; 004a58a4
    PUSH 0x623e7c                       ; 004a58a9 | = "CPickList::swap - can't do this after..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a58ae | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a58b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a58ba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a58bf
    POP ESI                             ; 004a58c2
    JMP 0x004a587f                      ; 004a58c3
        ;   XREF to: 004a587f (UNCONDITIONAL_JUMP)  ; LAB_004a587f
    MOV EBP,0x623ec2                    ; 004a58c5 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a58c5
    MOV EAX,0x1094                      ; 004a58ca
    PUSH 0x623ed8                       ; 004a58cf | = "CPickList::swap - can't do this after..."
    MOV dword ptr [0x02f0ca48],EBP      ; 004a58d4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a58da | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a58df
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a58e4
    JMP 0x004a5888                      ; 004a58e7
        ;   XREF to: 004a5888 (UNCONDITIONAL_JUMP)  ; LAB_004a5888

