; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_createMeshPrecomputeFile_FUN_00589bb0(CLodMesh *mesh_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   mesh_ptr
;
; Referenced Globals:
;   TerminatedCString s_wt_00649e31
;   TerminatedCString s_core_skeledit_cpp_00649e34
;   TerminatedCString s_Can_t_create_mesh_precom_00649e49
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0
;   crt_stack.c___STK_FUN_005ff9f3
;   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
;
; *****************************************************************************

section .text

    PUSH 0x18                           ; 00589bb0
        ;   Label: core_skeledit.cpp_createMeshPrecomputeFile_FUN_00589bb0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589bb5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 00589bba
    PUSH EDI                            ; 00589bbb
    PUSH EBP                            ; 00589bbc
    MOV EBX,dword ptr [ESP + 0x10]      ; 00589bbd
    PUSH 0x649e31                       ; 00589bc1 | = "wt"
    PUSH EBX                            ; 00589bc6
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 00589bc7
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)  ; _FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
    ADD ESP,0x8                         ; 00589bcc
    MOV dword ptr [EBX + 0x38],EAX      ; 00589bcf
    TEST EAX,EAX                        ; 00589bd2
    JZ 0x00589beb                       ; 00589bd4
        ;   XREF to: 00589beb (CONDITIONAL_JUMP)  ; LAB_00589beb
    MOV EDI,dword ptr [EBX + 0x38]      ; 00589bd6
        ;   Label: LAB_00589bd6
    PUSH EDI                            ; 00589bd9
    MOV EBP,dword ptr [ESP + 0x18]      ; 00589bda
    PUSH EBP                            ; 00589bde
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0 ; 00589bdf
        ;   XREF to: 0058a0f0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00589be4
    POP EBP                             ; 00589be7
    POP EDI                             ; 00589be8
    POP EBX                             ; 00589be9
    RET                                 ; 00589bea
    PUSH ESI                            ; 00589beb
        ;   Label: LAB_00589beb
    MOV ECX,0x649e34                    ; 00589bec | = "..\\core\\skeledit.cpp"
    MOV ESI,0x179                       ; 00589bf1
    PUSH 0x649e49                       ; 00589bf6 | = "Can't create mesh precompute file."
    MOV dword ptr [0x02f0ca48],ECX      ; 00589bfb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00589c01 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00589c07
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00589c0c
    POP ESI                             ; 00589c0f
    JMP 0x00589bd6                      ; 00589c10
        ;   XREF to: 00589bd6 (UNCONDITIONAL_JUMP)  ; LAB_00589bd6

