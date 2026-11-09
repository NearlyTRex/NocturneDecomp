; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_004b3450(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0 at 004b5b20
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061caac
;   undefined4 DAT_0061cac4
;   undefined4 DAT_0061cb3c
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3450
        ;   Label: core_fire.cpp_loadLightningBoltAssets_FUN_004b3450
    PUSH ESI                            ; 004b3451
    MOV EBX,0x61caac                    ; 004b3452 | DAT_0061caac
    LEA ESI,[EBX + 0x90]                ; 004b3457 | DAT_0061cb3c
    PUSH EBX                            ; 004b345d | DAT_0061caac | DAT_0061cac4
        ;   Label: LAB_004b345d
    MOV EDX,dword ptr [0x00612560]      ; 004b345e | DAT_00612560
    PUSH EDX                            ; 004b3464 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b3465
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004b346a
    ADD ESP,0x8                         ; 004b346d
    CMP EBX,ESI                         ; 004b3470
    JNZ 0x004b345d                      ; 004b3472
        ;   XREF to: 004b345d (CONDITIONAL_JUMP)  ; LAB_004b345d
    POP ESI                             ; 004b3474
    POP EBX                             ; 004b3475
    RET                                 ; 004b3476

