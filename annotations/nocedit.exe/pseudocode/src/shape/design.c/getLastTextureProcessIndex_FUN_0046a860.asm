; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_getLastTextureProcessIndex_FUN_0046a860(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a784
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c51a
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bb22
;
; Referenced Globals:
;   int g_LastTextureProcessIndex
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a860
        ;   Label: shape_design.c_getLastTextureProcessIndex_FUN_0046a860
    PUSH ESI                            ; 0046a861
    PUSH EDI                            ; 0046a862
    PUSH EBP                            ; 0046a863
    MOV EBP,ESP                         ; 0046a864
    SUB ESP,0x4                         ; 0046a866
    MOV EAX,[0x01eb17b8]                ; 0046a86c | g_LastTextureProcessIndex
    MOV dword ptr [EBP + -0x4],EAX      ; 0046a871
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a874
    MOV ESP,EBP                         ; 0046a877
    POP EBP                             ; 0046a879
    POP EDI                             ; 0046a87a
    POP ESI                             ; 0046a87b
    POP EBX                             ; 0046a87c
    RET                                 ; 0046a87d

