; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00575010(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004ee3f0 at 004ee492
;   core_mission.cpp_FUN_004fcf50 at 004fcf50
;   engine_mini3d.cpp_FUN_004f3420 at 004f3420
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;   undefined4 DAT_02652eb4
;
; Called Functions:
;   engine_texture.cpp_FUN_005739b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02652eb0]      ; 00575010 | DAT_02652eb0
        ;   Label: engine_texture.cpp_FUN_00575010
    PUSH EDX                            ; 00575016
    CALL engine_texture.cpp_FUN_005739b0 ; 00575017
        ;   XREF to: 005739b0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005739b0(CTextureCache * this_ptr)
    XOR ECX,ECX                         ; 0057501c
    ADD ESP,0x4                         ; 0057501e
    MOV dword ptr [0x02652eb4],ECX      ; 00575021 | DAT_02652eb4
    LEA EAX,[EAX]                       ; 00575027
    LEA EDX,[EDX]                       ; 0057502d
    RET                                 ; 00575030

