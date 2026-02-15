; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_design_c_getTextureName_FUN_0046e060(int texture_index)
;
; Parameters:
; int              Stack[0x4]:4   texture_index
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a7a6
;   core_skeledit.cpp_FUN_0058c190 at 0058d53a
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a5cd
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bca8
;   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 at 0051ec16
;
; Referenced Globals:
;   char[9][80] g_TextureNameArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e060
        ;   Label: shape_design.c_getTextureName_FUN_0046e060
    PUSH ESI                            ; 0046e061
    PUSH EDI                            ; 0046e062
    PUSH EBP                            ; 0046e063
    MOV EBP,ESP                         ; 0046e064
    SUB ESP,0x4                         ; 0046e066
    IMUL EAX,dword ptr [EBP + 0x14],0x50 ; 0046e06c
    MOV EDX,0x1eb1490                   ; 0046e070 | g_TextureNameArray
    ADD EDX,EAX                         ; 0046e075
    MOV dword ptr [EBP + -0x4],EDX      ; 0046e077
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e07a
    MOV ESP,EBP                         ; 0046e07d
    POP EBP                             ; 0046e07f
    POP EDI                             ; 0046e080
    POP ESI                             ; 0046e081
    POP EBX                             ; 0046e082
    RET                                 ; 0046e083

