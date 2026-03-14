; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodMeshPrecomputeEntry * __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0(CLodMeshPrecomputeEntry *this_ptr)
;
; Parameters:
; CLodMeshPrecomputeEntry * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 at 00589da4
;
; Called Functions:
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0
;
; *****************************************************************************

section .text

    NOP                                 ; 00589fa0
        ;   Label: core_skeledit.cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0
    NOP                                 ; 00589fa1
    NOP                                 ; 00589fa2
    NOP                                 ; 00589fa3
    NOP                                 ; 00589fa4
    NOP                                 ; 00589fa5
    NOP                                 ; 00589fa6
    NOP                                 ; 00589fa7
    NOP                                 ; 00589fa8
    NOP                                 ; 00589fa9
    PUSH EBX                            ; 00589faa
    MOV EBX,dword ptr [ESP + 0x8]       ; 00589fab
    PUSH EBX                            ; 00589faf
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0 ; 00589fb0
        ;   XREF to: 00589fc0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0(CLodMeshPrecomputeEntry * this_ptr)
    ADD ESP,0x4                         ; 00589fb5
    MOV EAX,EBX                         ; 00589fb8
    POP EBX                             ; 00589fba
    RET                                 ; 00589fbb

