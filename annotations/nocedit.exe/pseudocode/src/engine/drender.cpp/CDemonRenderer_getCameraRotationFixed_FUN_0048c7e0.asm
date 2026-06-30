; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0048c7e0(CDemonRenderer *this_ptr,CVector3i *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_fire.cpp_CFireball_setupRenderState_FUN_004c0d80 at 004c0de1
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c654c
;   core_fire.cpp_CRainDrop_render_FUN_004c6830 at 004c68bf
;   core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0 at 004bf251
;   core_fire.cpp_CSpark_setupRenderState_FUN_004c0300 at 004c039b
;   core_flame.cpp_CFlame_renderTransparent_FUN_004ca110 at 004ca219
;   core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0 at 004eba31
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_0050e2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c7e0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0048c7e0
    PUSH EDI                            ; 0048c7e1
    SUB ESP,0xc                         ; 0048c7e2
    MOV EBX,ESI                         ; 0048c7e5
    MOV ESI,ESP                         ; 0048c7e7
    MOV EDI,EBX                         ; 0048c7e9
    CALL engine_matrix.c_getCameraRotation_FUN_0050e2f0 ; 0048c7eb
        ;   XREF to: 0050e2f0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraRotation_FUN_0050e2f0(CVector3i * output)
    MOV ESI,ESP                         ; 0048c7f0
    JMP 0x00608c88                      ; 0048c7f2
        ;   XREF to: 00608c88 (UNCONDITIONAL_JUMP)  ; LAB_00608c88
    ADD ESP,0xc                         ; 0048c7f7
        ;   Label: LAB_0048c7f7
    POP EDI                             ; 0048c7fa
    POP EBX                             ; 0048c7fb
    RET                                 ; 0048c7fc
    MOV ECX,dword ptr [ESI]             ; 00608c88
        ;   Label: LAB_00608c88
    MOV dword ptr [EDI],ECX             ; 00608c8a
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608c8c
    MOV dword ptr [EDI + 0x4],ECX       ; 00608c8f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608c92
    MOV dword ptr [EDI + 0x8],ECX       ; 00608c95
    ADD ESI,0xc                         ; 00608c98
    ADD EDI,0xc                         ; 00608c9b
    MOV EAX,EBX                         ; 00608c9e
    JMP 0x0048c7f7                      ; 00608ca0
        ;   XREF to: 0048c7f7 (UNCONDITIONAL_JUMP)  ; LAB_0048c7f7

