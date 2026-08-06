; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_remove_FUN_00476100(CPickList *this_ptr,int start_index,int end_index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_index
; int              Stack[0xc]:4   end_index
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ef58
;   TerminatedCString s_CPickList_remove_can_t_d_0057ef6e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   shape_edittool.cpp_CStrList_remove_FUN_00473f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00476100
        ;   Label: shape_edittool.cpp_CPickList_remove_FUN_00476100
    PUSH EDI                            ; 00476101
    PUSH EBP                            ; 00476102
    MOV EAX,dword ptr [ESP + 0x10]      ; 00476103
    CMP dword ptr [EAX + 0x130],0x0     ; 00476107
    JG 0x0047612b                       ; 0047610e
        ;   XREF to: 0047612b (CONDITIONAL_JUMP)  ; LAB_0047612b
    MOV ESI,dword ptr [ESP + 0x18]      ; 00476110
        ;   Label: LAB_00476110
    PUSH ESI                            ; 00476114
    MOV EDI,dword ptr [ESP + 0x18]      ; 00476115
    PUSH EDI                            ; 00476119
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047611a
    PUSH EBP                            ; 0047611e
    CALL shape_edittool.cpp_CStrList_remove_FUN_00473f10 ; 0047611f
        ;   XREF to: 00473f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_remove_FUN_00473f10(CStrList * this_ptr, int start_index, int end_index)
    ADD ESP,0xc                         ; 00476124
    POP EBP                             ; 00476127
    POP EDI                             ; 00476128
    POP ESI                             ; 00476129
    RET                                 ; 0047612a
    PUSH EBX                            ; 0047612b
        ;   Label: LAB_0047612b
    MOV ECX,0x57ef58                    ; 0047612c | = "..\\shape\\edittool.cpp"
    MOV EBX,0xe22                       ; 00476131
    PUSH 0x57ef6e                       ; 00476136 | = "CPickList::remove - can't do this aft..."
    MOV dword ptr [0x01cc4800],ECX      ; 0047613b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00476141 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00476147
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0047614c
    POP EBX                             ; 0047614f
    JMP 0x00476110                      ; 00476150
        ;   XREF to: 00476110 (UNCONDITIONAL_JUMP)  ; LAB_00476110

