; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 (CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_fire.cpp_CFireball_initRender_FUN_004c0d80 at 004c0de1
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c654c
;   core_fire.cpp_CRainDrop_render_FUN_004c6830 at 004c68bf
;   core_fire.cpp_CSmokeParticle_initRender_FUN_004bf1f0 at 004bf251
;   core_fire.cpp_CSpark_initRender_FUN_004c0300 at 004c039b
;   core_flame.cpp_FUN_004ca110 at 004ca219
;   core_gore.cpp_FUN_004eb9d0 at 004eba31
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_0050e2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c7e0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
    PUSH EDI                            ; 0048c7e1
    SUB ESP,0xc                         ; 0048c7e2
    MOV EBX,ESI                         ; 0048c7e5
    MOV ESI,ESP                         ; 0048c7e7
    MOV EDI,EBX                         ; 0048c7e9
    CALL engine_matrix.c_getCameraRotation_FUN_0050e2f0 ; 0048c7eb
        ;   XREF to: 0050e2f0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraRotation_FUN_0050e2f0(CVector3i * output)
    MOV ESI,ESP                         ; 0048c7f0
    MOVSD ES:EDI,ESI                    ; 0048c7f2
    MOVSD ES:EDI,ESI                    ; 0048c7f3
    MOVSD ES:EDI,ESI                    ; 0048c7f4
    MOV EAX,EBX                         ; 0048c7f5
    ADD ESP,0xc                         ; 0048c7f7
    POP EDI                             ; 0048c7fa
    POP EBX                             ; 0048c7fb
    RET                                 ; 0048c7fc

