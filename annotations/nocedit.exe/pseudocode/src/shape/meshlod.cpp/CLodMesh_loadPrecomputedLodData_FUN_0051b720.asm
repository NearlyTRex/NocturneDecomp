; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_rt_00637d0d
;   TerminatedCString s_shape_meshlod_cpp_00637d10
;
; Called Functions:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0
;   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b720
        ;   Label: shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720
    PUSH ESI                            ; 0051b721
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051b722
    PUSH 0x637d0d                       ; 0051b726 | = "rt"
    PUSH ESI                            ; 0051b72b
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 0051b72c
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)  ; _FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
    MOV EBX,EAX                         ; 0051b731
    ADD ESP,0x8                         ; 0051b733
    TEST EAX,EAX                        ; 0051b736
    JNZ 0x0051b73d                      ; 0051b738
        ;   XREF to: 0051b73d (CONDITIONAL_JUMP)  ; LAB_0051b73d
    POP ESI                             ; 0051b73a
    POP EBX                             ; 0051b73b
    RET                                 ; 0051b73c
    PUSH EAX                            ; 0051b73d
        ;   Label: LAB_0051b73d
    PUSH ESI                            ; 0051b73e
    CALL shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0 ; 0051b73f
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051b744
    PUSH 0x121e                         ; 0051b747
    PUSH 0x637d10                       ; 0051b74c | = "..\\shape\\meshlod.cpp"
    PUSH EBX                            ; 0051b751
    MOV ESI,EAX                         ; 0051b752
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0051b754
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0051b759
    MOV EAX,ESI                         ; 0051b75c
    POP ESI                             ; 0051b75e
    POP EBX                             ; 0051b75f
    RET                                 ; 0051b760

