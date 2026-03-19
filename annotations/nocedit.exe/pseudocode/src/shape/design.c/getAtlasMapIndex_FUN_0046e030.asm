; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
;
; Parameters:
; int              Stack[0x4]:4   texture_entry_index
;
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a72d
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a5c4
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bc5d
;   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 at 0051ec0d
;
; Referenced Globals:
;   undefined4 g_TextureAtlasEntries[0].atlas_map_index
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e030
        ;   Label: shape_design.c_getAtlasMapIndex_FUN_0046e030
    PUSH ESI                            ; 0046e031
    PUSH EDI                            ; 0046e032
    PUSH EBP                            ; 0046e033
    MOV EBP,ESP                         ; 0046e034
    SUB ESP,0x4                         ; 0046e036
    IMUL EAX,dword ptr [EBP + 0x14],0x250 ; 0046e03c
    MOV EAX,dword ptr [EAX + 0x1e8d474] ; 0046e043 | g_TextureAtlasEntries[0].atlas_map_index
    MOV dword ptr [EBP + -0x4],EAX      ; 0046e049
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e04c
    MOV ESP,EBP                         ; 0046e04f
    POP EBP                             ; 0046e051
    POP EDI                             ; 0046e052
    POP ESI                             ; 0046e053
    POP EBX                             ; 0046e054
    RET                                 ; 0046e055

