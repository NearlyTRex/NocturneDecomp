; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodMesh * shape_meshlod.cpp_CLodMesh_copy_FUN_00515860(CLodMesh * this_ptr, CLodMesh * other)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CLodMesh *       Stack[0x8]:4   other
;
; XREF[1]:
;   core_skeledit.cpp_FUN_0058c190 at 0058d08a
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
;   shape_meshlod.cpp_CLodMesh_init_FUN_00515880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515860
        ;   Label: shape_meshlod.cpp_CLodMesh_copy_FUN_00515860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515861
    PUSH EBX                            ; 00515865
    CALL shape_meshlod.cpp_CLodMesh_init_FUN_00515880 ; 00515866
        ;   XREF to: 00515880 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_init_FUN_00515880(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051586b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051586e
    PUSH EDX                            ; 00515872
    PUSH EBX                            ; 00515873
    CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 ; 00515874
        ;   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh * this_ptr, CLodMesh * source_mesh)
    ADD ESP,0x8                         ; 00515879
    MOV EAX,EBX                         ; 0051587c
    POP EBX                             ; 0051587e
    RET                                 ; 0051587f

