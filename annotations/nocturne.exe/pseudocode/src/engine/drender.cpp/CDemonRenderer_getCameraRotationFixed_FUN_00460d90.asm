; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90(CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_fire.cpp_CFireball_setupRenderState_FUN_004842a0 at 00484301
;   core_fire.cpp_CPopcorn_render_FUN_00489990 at 00489a1c
;   core_fire.cpp_CRainDrop_render_FUN_00489d00 at 00489d8f
;   core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680 at 004826e1
;   core_fire.cpp_CSpark_setupRenderState_FUN_004837a0 at 0048383b
;   core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0 at 0048d6bf
;   core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0 at 004ae101
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_004ce790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460d90
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90
    PUSH EDI                            ; 00460d91
    SUB ESP,0xc                         ; 00460d92
    MOV EBX,ESI                         ; 00460d95
    MOV ESI,ESP                         ; 00460d97
    MOV EDI,EBX                         ; 00460d99
    CALL engine_matrix.c_getCameraRotation_FUN_004ce790 ; 00460d9b
        ;   XREF to: 004ce790 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraRotation_FUN_004ce790(CVector3i * output)
    MOV ESI,ESP                         ; 00460da0
    MOVSD ES:EDI,ESI                    ; 00460da2
    MOVSD ES:EDI,ESI                    ; 00460da3
    MOVSD ES:EDI,ESI                    ; 00460da4
    MOV EAX,EBX                         ; 00460da5
    ADD ESP,0xc                         ; 00460da7
    POP EDI                             ; 00460daa
    POP EBX                             ; 00460dab
    RET                                 ; 00460dac

