; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_captureTextures_FUN_00577260(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_00539ee0 at 00539eec
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00606cac
;   undefined4 DAT_00606cc4
;   undefined4 DAT_00606e2c
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577260
        ;   Label: core_water.cpp_CWater_captureTextures_FUN_00577260
    PUSH ESI                            ; 00577261
    MOV EBX,0x606cac                    ; 00577262 | DAT_00606cac
    LEA ESI,[EBX + 0x180]               ; 00577267 | DAT_00606e2c
    PUSH EBX                            ; 0057726d | DAT_00606cac | DAT_00606cc4
        ;   Label: LAB_0057726d
    MOV EDX,dword ptr [0x005f2afc]      ; 0057726e | DAT_005f2afc
    PUSH EDX                            ; 00577274 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00577275
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 0057727a
    ADD ESP,0x8                         ; 0057727d
    CMP EBX,ESI                         ; 00577280
    JNZ 0x0057726d                      ; 00577282
        ;   XREF to: 0057726d (CONDITIONAL_JUMP)  ; LAB_0057726d
    POP ESI                             ; 00577284
    POP EBX                             ; 00577285
    RET                                 ; 00577286

