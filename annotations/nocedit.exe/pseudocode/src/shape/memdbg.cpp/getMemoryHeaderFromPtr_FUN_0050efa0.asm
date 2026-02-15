; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMemHead * __cdecl shape_memdbg_cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void *user_ptr)
;
; Parameters:
; void *           Stack[0x4]:4   user_ptr
;
; Referenced Globals:
;   TerminatedCString s_shape_memdbg_cpp_00635e2f
;   TerminatedCString s_headFromPtr_NULL_ptr_00635e43
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 0050efa0
        ;   Label: shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0
    JZ 0x0050efaf                       ; 0050efa5
        ;   XREF to: 0050efaf (CONDITIONAL_JUMP)  ; LAB_0050efaf
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050efa7
    SUB EAX,0x28                        ; 0050efab
    RET                                 ; 0050efae
    PUSH EBX                            ; 0050efaf
        ;   Label: LAB_0050efaf
    MOV ECX,0x635e2f                    ; 0050efb0 | = "..\\shape\\memdbg.cpp"
    MOV EBX,0x99                        ; 0050efb5
    PUSH 0x635e43                       ; 0050efba | = "headFromPtr - NULL ptr"
    MOV dword ptr [0x02f0ca48],ECX      ; 0050efbf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0050efc5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050efcb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050efd0
    POP EBX                             ; 0050efd3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050efd4
    SUB EAX,0x28                        ; 0050efd8
    RET                                 ; 0050efdb

