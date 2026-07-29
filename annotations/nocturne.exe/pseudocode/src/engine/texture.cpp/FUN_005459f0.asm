; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_005459f0(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004d23d0 at 004d2472
;   core_mission.cpp_FUN_004d9900 at 004d9900
;   engine_pod.cpp_FUN_004f8a10 at 004f8ace
;
; Referenced Globals:
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dd0f84]      ; 005459f0 | DAT_02dd0f84
        ;   Label: engine_texture.cpp_FUN_005459f0
    PUSH EDX                            ; 005459f6
    CALL engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60 ; 005459f7
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005459fc
    NOP                                 ; 005459ff
    RET                                 ; 00545a00

