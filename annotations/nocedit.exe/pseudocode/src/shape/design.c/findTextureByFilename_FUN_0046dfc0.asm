; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_findTextureByFilename_FUN_0046dfc0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a634
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a4fb
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bb53
;   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 at 0051ec77
;
; Referenced Globals:
;   int g_TextureProcessedCount
;   STextureAtlasEntry[250] g_TextureAtlasEntries
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046dfc0
        ;   Label: shape_design.c_findTextureByFilename_FUN_0046dfc0
    PUSH ESI                            ; 0046dfc1
    PUSH EDI                            ; 0046dfc2
    PUSH EBP                            ; 0046dfc3
    MOV EBP,ESP                         ; 0046dfc4
    SUB ESP,0x8                         ; 0046dfc6
    MOV dword ptr [EBP + -0x4],0x0      ; 0046dfcc
    JMP 0x0046dfdb                      ; 0046dfd3
        ;   XREF to: 0046dfdb (UNCONDITIONAL_JUMP)  ; LAB_0046dfdb
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046dfd5
        ;   Label: LAB_0046dfd5
    INC dword ptr [EBP + -0x4]          ; 0046dfd8
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046dfdb
        ;   Label: LAB_0046dfdb
    CMP EAX,dword ptr [0x01e8d260]      ; 0046dfde | g_TextureProcessedCount
    JGE 0x0046e014                      ; 0046dfe4
        ;   XREF to: 0046e014 (CONDITIONAL_JUMP)  ; LAB_0046e014
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046dfe6
    PUSH EAX                            ; 0046dfe9
    IMUL EAX,dword ptr [EBP + -0x4],0x250 ; 0046dfea
    MOV EDX,0x1e8d264                   ; 0046dff1 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046dff6
    ADD EAX,0x100                       ; 0046dff8
    PUSH EAX                            ; 0046dffd
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0046dffe
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0046e003
    TEST EAX,EAX                        ; 0046e006
    JNZ 0x0046e012                      ; 0046e008
        ;   XREF to: 0046e012 (CONDITIONAL_JUMP)  ; LAB_0046e012
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e00a
    MOV dword ptr [EBP + -0x8],EAX      ; 0046e00d
    JMP 0x0046e01b                      ; 0046e010
        ;   XREF to: 0046e01b (UNCONDITIONAL_JUMP)  ; LAB_0046e01b
    JMP 0x0046dfd5                      ; 0046e012
        ;   XREF to: 0046dfd5 (UNCONDITIONAL_JUMP)  ; LAB_0046dfd5
        ;   Label: LAB_0046e012
    MOV dword ptr [EBP + -0x8],0xffffffff ; 0046e014
        ;   Label: LAB_0046e014
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046e01b
        ;   Label: LAB_0046e01b
    MOV ESP,EBP                         ; 0046e01e
    POP EBP                             ; 0046e020
    POP EDI                             ; 0046e021
    POP ESI                             ; 0046e022
    POP EBX                             ; 0046e023
    RET                                 ; 0046e024

