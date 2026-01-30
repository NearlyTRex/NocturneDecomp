; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CCloth_load_FUN_00438cf0 at 00438f4a
;   core_cloth.cpp_FUN_0043dcc0 at 0043dd71
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_00618162
;   TerminatedCString s_core_cloth_cpp_00618174
;   TerminatedCString s_CCloth_allocMemory_Out_o_00618186
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438c50
        ;   Label: core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438c51
    PUSH EBX                            ; 00438c55
    CALL core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0 ; 00438c56
        ;   XREF to: 00438cb0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0()
    ADD ESP,0x4                         ; 00438c5b
    PUSH 0x76                           ; 00438c5e
    MOV EAX,dword ptr [EBX + 0x104]     ; 00438c60
    PUSH 0x618162                       ; 00438c66 | = "..\\core\\cloth.cpp"
    SHL EAX,0x2                         ; 00438c6b
    PUSH EAX                            ; 00438c6e
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00438c6f
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00438c74
    MOV dword ptr [EBX + 0x3fe3c],EAX   ; 00438c77
    TEST EAX,EAX                        ; 00438c7d
    JZ 0x00438c83                       ; 00438c7f
        ;   XREF to: 00438c83 (CONDITIONAL_JUMP)  ; LAB_00438c83
    POP EBX                             ; 00438c81
    RET                                 ; 00438c82
    MOV ECX,0x618174                    ; 00438c83 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_00438c83
    MOV EBX,0x77                        ; 00438c88
    PUSH 0x618186                       ; 00438c8d | = "CCloth::allocMemory - Out of memory"
    MOV dword ptr [0x02f0ca48],ECX      ; 00438c92 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00438c98 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00438c9e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00438ca3
    POP EBX                             ; 00438ca6
    RET                                 ; 00438ca7

