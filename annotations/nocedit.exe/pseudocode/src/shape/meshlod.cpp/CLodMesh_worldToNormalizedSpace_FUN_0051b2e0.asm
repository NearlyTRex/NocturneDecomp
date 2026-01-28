; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0 (CLodMesh *this_ptr,CVector3f *output_point,CVector3f *input_point)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_point
; CVector3f *      Stack[0xc]:4   input_point
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051da1f
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d704
;   shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0 at 0051e6e3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b2e0
        ;   Label: shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
    SUB ESP,0xc                         ; 0051b2e1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051b2e4
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051b2e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0051b2ec
    LEA EAX,[EDX + 0x70]                ; 0051b2f0
    FLD float ptr [EBX]                 ; 0051b2f3
    FDIV float ptr [EAX]                ; 0051b2f5
    FSTP float ptr [ESP]                ; 0051b2f7
    FLD float ptr [EBX + 0x4]           ; 0051b2fa
    FDIV float ptr [EAX]                ; 0051b2fd
    FSTP float ptr [ESP + 0x4]          ; 0051b2ff
    FLD float ptr [EBX + 0x8]           ; 0051b303
    FDIV float ptr [EAX]                ; 0051b306
    FSTP float ptr [ESP + 0x8]          ; 0051b308
    FLD float ptr [EDX + 0x64]          ; 0051b30c
    FSUBR float ptr [ESP]               ; 0051b30f
    FSTP float ptr [ECX]                ; 0051b312
    FLD float ptr [EDX + 0x68]          ; 0051b314
    FSUBR float ptr [ESP + 0x4]         ; 0051b317
    FSTP float ptr [ECX + 0x4]          ; 0051b31b
    FLD float ptr [EDX + 0x6c]          ; 0051b31e
    FSUBR float ptr [ESP + 0x8]         ; 0051b321
    MOV EAX,ECX                         ; 0051b325
    FSTP float ptr [ECX + 0x8]          ; 0051b327
    ADD ESP,0xc                         ; 0051b32a
    POP EBX                             ; 0051b32d
    RET                                 ; 0051b32e

