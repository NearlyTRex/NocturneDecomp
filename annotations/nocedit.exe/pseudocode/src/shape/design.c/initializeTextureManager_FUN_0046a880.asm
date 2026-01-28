; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_initializeTextureManager_FUN_0046a880(int initialization_mode)
;
; Parameters:
; int              Stack[0x4]:4   initialization_mode
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a3f1
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dbc2
;   core_skeledit.cpp_FUN_0058c190 at 0058cb84
;   core_skeledit.cpp_FUN_0058de70 at 0058de86
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a22a
;
; Referenced Globals:
;   int g_TextureProcessedCount
;   STextureAtlasEntry[250] g_TextureAtlasEntries
;   int g_TextureManagerMode
;
; Called Functions:
;   shape_design.c_setTextureQualityParameter_FUN_0046a8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a880
        ;   Label: shape_design.c_initializeTextureManager_FUN_0046a880
    PUSH ESI                            ; 0046a881
    PUSH EDI                            ; 0046a882
    PUSH EBP                            ; 0046a883
    MOV EBP,ESP                         ; 0046a884
    SUB ESP,0x1c                        ; 0046a886
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046a88c
    MOV [0x01eb1484],EAX                ; 0046a88f | g_TextureManagerMode
    MOV dword ptr [0x01e8d260],0x0      ; 0046a894 | g_TextureProcessedCount
    MOV dword ptr [EBP + -0x4],0x0      ; 0046a89e
    JMP 0x0046a8ad                      ; 0046a8a5
        ;   XREF to: 0046a8ad (UNCONDITIONAL_JUMP)  ; LAB_0046a8ad
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a8a7
        ;   Label: LAB_0046a8a7
    INC dword ptr [EBP + -0x4]          ; 0046a8aa
    CMP dword ptr [EBP + -0x4],0xfa     ; 0046a8ad
        ;   Label: LAB_0046a8ad
    JGE 0x0046a8c6                      ; 0046a8b4
        ;   XREF to: 0046a8c6 (CONDITIONAL_JUMP)  ; LAB_0046a8c6
    IMUL EAX,dword ptr [EBP + -0x4],0x250 ; 0046a8b6
    MOV byte ptr [EAX + 0x1e8d264],0x0  ; 0046a8bd | g_TextureAtlasEntries
    JMP 0x0046a8a7                      ; 0046a8c4
        ;   XREF to: 0046a8a7 (UNCONDITIONAL_JUMP)  ; LAB_0046a8a7
    PUSH 0x10                           ; 0046a8c6
        ;   Label: LAB_0046a8c6
    CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0 ; 0046a8c8
        ;   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
    ADD ESP,0x4                         ; 0046a8cd
    MOV ESP,EBP                         ; 0046a8d0
    POP EBP                             ; 0046a8d2
    POP EDI                             ; 0046a8d3
    POP ESI                             ; 0046a8d4
    POP EBX                             ; 0046a8d5
    RET                                 ; 0046a8d6

