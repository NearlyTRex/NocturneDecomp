; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_captureTextures_FUN_00585de0(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_005332a0 at 005332ac
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061e52c
;   undefined4 DAT_0061e544
;   undefined4 DAT_0061e6ac
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585de0
        ;   Label: core_water.cpp_CWater_captureTextures_FUN_00585de0
    PUSH ESI                            ; 00585de1
    MOV EBX,0x61e52c                    ; 00585de2 | DAT_0061e52c
    LEA ESI,[EBX + 0x180]               ; 00585de7 | DAT_0061e6ac
    PUSH EBX                            ; 00585ded | DAT_0061e52c | DAT_0061e544
        ;   Label: LAB_00585ded
    MOV EDX,dword ptr [0x0060b280]      ; 00585dee | DAT_0060b280
    PUSH EDX                            ; 00585df4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00585df5
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 00585dfa
    ADD ESP,0x8                         ; 00585dfd
    CMP EBX,ESI                         ; 00585e00
    JNZ 0x00585ded                      ; 00585e02
        ;   XREF to: 00585ded (CONDITIONAL_JUMP)  ; LAB_00585ded
    POP ESI                             ; 00585e04
    POP EBX                             ; 00585e05
    RET                                 ; 00585e06

