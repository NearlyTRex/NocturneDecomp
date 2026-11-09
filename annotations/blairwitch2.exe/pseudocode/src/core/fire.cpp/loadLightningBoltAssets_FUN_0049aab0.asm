; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_0049aab0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0 at 0049d21b
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006157cc
;   undefined4 DAT_006157e4
;   undefined4 DAT_0061585c
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049aab0
        ;   Label: core_fire.cpp_loadLightningBoltAssets_FUN_0049aab0
    PUSH ESI                            ; 0049aab1
    MOV EBX,0x6157cc                    ; 0049aab2 | DAT_006157cc
    LEA ESI,[EBX + 0x90]                ; 0049aab7 | DAT_0061585c
    PUSH EBX                            ; 0049aabd | DAT_006157cc | DAT_006157e4
        ;   Label: LAB_0049aabd
    MOV EDX,dword ptr [0x0060b280]      ; 0049aabe | DAT_0060b280
    PUSH EDX                            ; 0049aac4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049aac5
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 0049aaca
    ADD ESP,0x8                         ; 0049aacd
    CMP EBX,ESI                         ; 0049aad0
    JNZ 0x0049aabd                      ; 0049aad2
        ;   XREF to: 0049aabd (CONDITIONAL_JUMP)  ; LAB_0049aabd
    POP ESI                             ; 0049aad4
    POP EBX                             ; 0049aad5
    RET                                 ; 0049aad6

