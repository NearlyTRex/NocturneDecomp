; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0 at 00586ca2
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061f193
;   TerminatedCString s_core_dlight_cpp_0061f1a6
;   TerminatedCString s_CDemonLight_allocateFilt_0061f1b9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH 0x53f                          ; 00474720
        ;   Label: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
    PUSH 0x61f193                       ; 00474725 | = "..\\core\\dlight.cpp"
    PUSH 0x10000                        ; 0047472a
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0047472f
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00474734
    MOV EDX,dword ptr [ESP + 0x4]       ; 00474737
    MOV dword ptr [EDX + 0x1c6c],EAX    ; 0047473b
    TEST EAX,EAX                        ; 00474741
    JZ 0x00474746                       ; 00474743
        ;   XREF to: 00474746 (CONDITIONAL_JUMP)  ; LAB_00474746
    RET                                 ; 00474745
    PUSH EBX                            ; 00474746
        ;   Label: LAB_00474746
    MOV ECX,0x61f1a6                    ; 00474747 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00474747
    MOV EBX,0x541                       ; 0047474c
    PUSH 0x61f1b9                       ; 00474751 | = "CDemonLight::allocateFilter - Out of ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00474756 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0047475c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00474762
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00474767
    POP EBX                             ; 0047476a
    RET                                 ; 0047476b

