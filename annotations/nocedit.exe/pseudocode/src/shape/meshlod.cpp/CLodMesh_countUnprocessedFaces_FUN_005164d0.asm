; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051d9c8
;   shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100 at 0051c12b
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516bc7
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b96a
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d6ab
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005164d0
        ;   Label: shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
    PUSH ESI                            ; 005164d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005164d2
    MOV EDX,dword ptr [EBX + 0x8]       ; 005164d6
    XOR EAX,EAX                         ; 005164d9
    XOR ECX,ECX                         ; 005164db
    TEST EDX,EDX                        ; 005164dd
    JLE 0x005164f8                      ; 005164df
        ;   XREF to: 005164f8 (CONDITIONAL_JUMP)  ; LAB_005164f8
    MOV EDX,dword ptr [EBX + 0xc]       ; 005164e1
    CMP dword ptr [EDX + 0x40],0x0      ; 005164e4
        ;   Label: LAB_005164e4
    JZ 0x005164fd                       ; 005164e8
        ;   XREF to: 005164fd (CONDITIONAL_JUMP)  ; LAB_005164fd
    INC EAX                             ; 005164ea
        ;   Label: LAB_005164ea
    MOV ESI,dword ptr [EBX + 0x8]       ; 005164eb
    ADD EDX,0x8c                        ; 005164ee
    CMP EAX,ESI                         ; 005164f4
    JL 0x005164e4                       ; 005164f6
        ;   XREF to: 005164e4 (CONDITIONAL_JUMP)  ; LAB_005164e4
    MOV EAX,ECX                         ; 005164f8
        ;   Label: LAB_005164f8
    POP ESI                             ; 005164fa
    POP EBX                             ; 005164fb
    RET                                 ; 005164fc
    INC ECX                             ; 005164fd
        ;   Label: LAB_005164fd
    JMP 0x005164ea                      ; 005164fe
        ;   XREF to: 005164ea (UNCONDITIONAL_JUMP)  ; LAB_005164ea

