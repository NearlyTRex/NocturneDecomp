; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_insert_FUN_004a5670(CPickList * this_ptr, int insert_index, int item_data)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   insert_index
; int              Stack[0xc]:4   item_data
;
; XREF[1]:
;   core_script.cpp_FUN_005677a0 at 005678b4
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623c23
;   TerminatedCString s_CPickList_insert_can_t_d_00623c39
;   TerminatedCString s_shape_edittool_cpp_00623c81
;   TerminatedCString s_CPickList_insert_can_t_d_00623c97
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5670
        ;   Label: shape_edittool.cpp_CPickList_insert_FUN_004a5670
    PUSH EBP                            ; 004a5671
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a5672
    CMP dword ptr [EBX + 0x194],0x0     ; 004a5676
    JG 0x004a569e                       ; 004a567d
        ;   XREF to: 004a569e (CONDITIONAL_JUMP)  ; LAB_004a569e
    CMP dword ptr [EBX + 0x19c],0x0     ; 004a567f
        ;   Label: LAB_004a567f
    JG 0x004a56c5                       ; 004a5686
        ;   XREF to: 004a56c5 (CONDITIONAL_JUMP)  ; LAB_004a56c5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a5688
        ;   Label: LAB_004a5688
    PUSH EDX                            ; 004a568c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a568d
    PUSH ECX                            ; 004a5691
    PUSH EBX                            ; 004a5692
    CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 ; 004a5693
        ;   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insert_FUN_004a2bc0(CStrList * this_ptr, int insert_index, char * string_data)
    ADD ESP,0xc                         ; 004a5698
    POP EBP                             ; 004a569b
    POP EBX                             ; 004a569c
    RET                                 ; 004a569d
    PUSH ESI                            ; 004a569e
        ;   Label: LAB_004a569e
    MOV ECX,0x623c23                    ; 004a569f | = "..\\shape\\edittool.cpp"
    MOV ESI,0x1073                      ; 004a56a4
    PUSH 0x623c39                       ; 004a56a9 | = "CPickList::insert - can't do this aft..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a56ae | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a56b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a56ba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a56bf
    POP ESI                             ; 004a56c2
    JMP 0x004a567f                      ; 004a56c3
        ;   XREF to: 004a567f (UNCONDITIONAL_JUMP)  ; LAB_004a567f
    MOV EBP,0x623c81                    ; 004a56c5 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a56c5
    MOV EAX,0x1074                      ; 004a56ca
    PUSH 0x623c97                       ; 004a56cf | = "CPickList::insert - can't do this aft..."
    MOV dword ptr [0x02f0ca48],EBP      ; 004a56d4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a56da | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a56df
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a56e4
    JMP 0x004a5688                      ; 004a56e7
        ;   XREF to: 004a5688 (UNCONDITIONAL_JUMP)  ; LAB_004a5688

