; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_skeledit.cpp_FUN_0058c190 at 0058c60b
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051e66b
;   shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50 at 00516fae
;   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 at 00515a96
;   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 at 0051edbc
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_free_FUN_00515970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515950
        ;   Label: shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515951
    PUSH EBX                            ; 00515955
    CALL shape_meshlod.cpp_CLodMesh_free_FUN_00515970 ; 00515956
        ;   XREF to: 00515970 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_free_FUN_00515970(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051595b
    MOV EAX,EBX                         ; 0051595e
    POP EBX                             ; 00515960
    RET                                 ; 00515961

