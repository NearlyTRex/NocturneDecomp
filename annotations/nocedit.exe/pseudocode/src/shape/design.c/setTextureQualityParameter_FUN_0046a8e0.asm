; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
;
; Parameters:
; int              Stack[0x4]:4   texture_quality_param
; Local Variables:
; SCram            Stack[-0x8c]:116  local_8c
; SCram *          Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a3fb
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dbcc
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058cb8e
;   core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70 at 0058de90
;   shape_design.c_initializeTextureManager_FUN_0046a880 at 0046a8c8
;
; Referenced Globals:
;   int g_TextureQualityLevel
;
; Called Functions:
;   shape_design.c_initializeCram_FUN_0046b6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a8e0
        ;   Label: shape_design.c_setTextureQualityParameter_FUN_0046a8e0
    PUSH ESI                            ; 0046a8e1
    PUSH EDI                            ; 0046a8e2
    PUSH EBP                            ; 0046a8e3
    MOV EBP,ESP                         ; 0046a8e4
    SUB ESP,0x7c                        ; 0046a8e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046a8ec
    MOV [0x01eb1488],EAX                ; 0046a8ef | g_TextureQualityLevel
    LEA EAX,[EBP + -0x7c]               ; 0046a8f4
    MOV dword ptr [EBP + -0x8],EAX      ; 0046a8f7
    LEA EAX,[EBP + -0x7c]               ; 0046a8fa
    PUSH EAX                            ; 0046a8fd
    CALL shape_design.c_initializeCram_FUN_0046b6e0 ; 0046a8fe
        ;   XREF to: 0046b6e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeCram_FUN_0046b6e0(SCram * cram)
    ADD ESP,0x4                         ; 0046a903
    LEA EAX,[EBP + -0x7c]               ; 0046a906
    MOV dword ptr [EBP + -0x4],EAX      ; 0046a909
    CMP dword ptr [0x01eb1488],0x50     ; 0046a90c | g_TextureQualityLevel
    JBE 0x0046a91f                      ; 0046a913
        ;   XREF to: 0046a91f (CONDITIONAL_JUMP)  ; LAB_0046a91f
    MOV dword ptr [0x01eb1488],0x50     ; 0046a915 | g_TextureQualityLevel
    MOV ESP,EBP                         ; 0046a91f
        ;   Label: LAB_0046a91f
    POP EBP                             ; 0046a921
    POP EDI                             ; 0046a922
    POP ESI                             ; 0046a923
    POP EBX                             ; 0046a924
    RET                                 ; 0046a925

