; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004b5ac0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004d5e40 at 004d5e57
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c3d4
;   undefined4 DAT_0061c3ec
;   undefined4 DAT_0061c404
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_fire.cpp_FUN_004acad0
;   core_fire.cpp_FUN_004aefb0
;   core_fire.cpp_FUN_004af120
;   core_fire.cpp_FUN_004af5e0
;   core_fire.cpp_FUN_004b1f80
;   core_fire.cpp_loadDebrisAssets_FUN_004b1630
;   core_fire.cpp_loadFireBallAssets_FUN_004ae2a0
;   core_fire.cpp_loadGunFlameAssets_FUN_004b2af0
;   core_fire.cpp_loadLightningBoltAssets_FUN_004b3450
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5ac0
        ;   Label: core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0
    PUSH 0x61c3d4                       ; 004b5ac1 | DAT_0061c3d4
    MOV EDX,dword ptr [0x00612560]      ; 004b5ac6 | DAT_00612560
    PUSH EDX                            ; 004b5acc | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b5acd
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b5ad2
    PUSH 0x61c3ec                       ; 004b5ad5 | DAT_0061c3ec
    MOV ECX,dword ptr [0x00612560]      ; 004b5ada | DAT_00612560
    PUSH ECX                            ; 004b5ae0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b5ae1
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b5ae6
    PUSH 0x61c404                       ; 004b5ae9 | DAT_0061c404
    MOV EBX,dword ptr [0x00612560]      ; 004b5aee | DAT_00612560
    PUSH EBX                            ; 004b5af4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b5af5
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b5afa
    CALL core_fire.cpp_FUN_004acad0     ; 004b5afd
        ;   XREF to: 004acad0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004acad0()
    CALL core_fire.cpp_loadFireBallAssets_FUN_004ae2a0 ; 004b5b02
        ;   XREF to: 004ae2a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadFireBallAssets_FUN_004ae2a0()
    CALL core_fire.cpp_FUN_004aefb0     ; 004b5b07
        ;   XREF to: 004aefb0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004aefb0()
    CALL core_fire.cpp_FUN_004af120     ; 004b5b0c
        ;   XREF to: 004af120 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004af120()
    CALL core_fire.cpp_FUN_004b1f80     ; 004b5b11
        ;   XREF to: 004b1f80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b1f80()
    CALL core_fire.cpp_loadGunFlameAssets_FUN_004b2af0 ; 004b5b16
        ;   XREF to: 004b2af0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadGunFlameAssets_FUN_004b2af0()
    CALL core_fire.cpp_FUN_004af5e0     ; 004b5b1b
        ;   XREF to: 004af5e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004af5e0()
    CALL core_fire.cpp_loadLightningBoltAssets_FUN_004b3450 ; 004b5b20
        ;   XREF to: 004b3450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadLightningBoltAssets_FUN_004b3450()
    CALL core_fire.cpp_loadDebrisAssets_FUN_004b1630 ; 004b5b25
        ;   XREF to: 004b1630 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadDebrisAssets_FUN_004b1630()
    POP EBX                             ; 004b5b2a
    RET                                 ; 004b5b2b

