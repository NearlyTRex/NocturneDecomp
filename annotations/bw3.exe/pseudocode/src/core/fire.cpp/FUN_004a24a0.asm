; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a24a0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004bd430 at 004bd447
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a4
;   undefined4 DAT_005fc5bc
;   undefined4 DAT_005fc964
;   undefined4 DAT_005fc97c
;   undefined4 DAT_005fc994
;   undefined4 DAT_005fc9ac
;   undefined4 DAT_005fc9c4
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_fire.cpp_FUN_0049f380
;   core_fire.cpp_loadDebrisAssets_FUN_0049c680
;   core_fire.cpp_loadFireBallAssets_FUN_004992f0
;   core_fire.cpp_loadGunFlashAssets_FUN_0049a630
;   core_fire.cpp_loadLeafAssets_FUN_0049a170
;   core_fire.cpp_loadLightningBoltAssets_FUN_0049e170
;   core_fire.cpp_loadRockAssets_FUN_0049a000
;   core_fire.cpp_loadStakeAssets_FUN_00497a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a24a0
        ;   Label: core_fire.cpp_FUN_004a24a0
    PUSH ESI                            ; 004a24a1
    PUSH EDI                            ; 004a24a2
    PUSH EBP                            ; 004a24a3
    PUSH 0x5fc964                       ; 004a24a4 | DAT_005fc964
    MOV EDX,dword ptr [0x005f2afc]      ; 004a24a9 | DAT_005f2afc
    PUSH EDX                            ; 004a24af | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a24b0
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a24b5
    PUSH 0x5fc97c                       ; 004a24b8 | DAT_005fc97c
    MOV ECX,dword ptr [0x005f2afc]      ; 004a24bd | DAT_005f2afc
    PUSH ECX                            ; 004a24c3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a24c4
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a24c9
    PUSH 0x5fc994                       ; 004a24cc | DAT_005fc994
    MOV EBX,dword ptr [0x005f2afc]      ; 004a24d1 | DAT_005f2afc
    PUSH EBX                            ; 004a24d7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a24d8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a24dd
    PUSH 0x5fc9ac                       ; 004a24e0 | DAT_005fc9ac
    MOV ESI,dword ptr [0x005f2afc]      ; 004a24e5 | DAT_005f2afc
    PUSH ESI                            ; 004a24eb | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a24ec
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a24f1
    PUSH 0x5fc9c4                       ; 004a24f4 | DAT_005fc9c4
    MOV EDI,dword ptr [0x005f2afc]      ; 004a24f9 | DAT_005f2afc
    MOV EBX,0x5fc5a4                    ; 004a24ff | DAT_005fc5a4
    PUSH EDI                            ; 004a2504 | DAT_01bdd7e4
    LEA ESI,[EBX + 0x3c0]               ; 004a2505 | DAT_005fc964
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a250b
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a2510
    PUSH EBX                            ; 004a2513 | DAT_005fc5a4 | DAT_005fc5bc
        ;   Label: LAB_004a2513
    MOV EBP,dword ptr [0x005f2afc]      ; 004a2514 | DAT_005f2afc
    PUSH EBP                            ; 004a251a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a251b
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004a2520
    ADD ESP,0x8                         ; 004a2523
    CMP EBX,ESI                         ; 004a2526
    JNZ 0x004a2513                      ; 004a2528
        ;   XREF to: 004a2513 (CONDITIONAL_JUMP)  ; LAB_004a2513
    CALL core_fire.cpp_loadStakeAssets_FUN_00497a30 ; 004a252a
        ;   XREF to: 00497a30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadStakeAssets_FUN_00497a30()
    CALL core_fire.cpp_loadFireBallAssets_FUN_004992f0 ; 004a252f
        ;   XREF to: 004992f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadFireBallAssets_FUN_004992f0()
    CALL core_fire.cpp_loadRockAssets_FUN_0049a000 ; 004a2534
        ;   XREF to: 0049a000 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadRockAssets_FUN_0049a000()
    CALL core_fire.cpp_loadLeafAssets_FUN_0049a170 ; 004a2539
        ;   XREF to: 0049a170 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_loadLeafAssets_FUN_0049a170()
    CALL core_fire.cpp_loadLightningBoltAssets_FUN_0049e170 ; 004a253e
        ;   XREF to: 0049e170 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadLightningBoltAssets_FUN_0049e170()
    CALL core_fire.cpp_loadGunFlashAssets_FUN_0049a630 ; 004a2543
        ;   XREF to: 0049a630 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadGunFlashAssets_FUN_0049a630()
    PUSH 0x1                            ; 004a2548
    CALL core_fire.cpp_FUN_0049f380     ; 004a254a
        ;   XREF to: 0049f380 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049f380()
    ADD ESP,0x4                         ; 004a254f
    CALL core_fire.cpp_loadDebrisAssets_FUN_0049c680 ; 004a2552
        ;   XREF to: 0049c680 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadDebrisAssets_FUN_0049c680()
    POP EBP                             ; 004a2557
    POP EDI                             ; 004a2558
    POP ESI                             ; 004a2559
    POP EBX                             ; 004a255a
    RET                                 ; 004a255b

