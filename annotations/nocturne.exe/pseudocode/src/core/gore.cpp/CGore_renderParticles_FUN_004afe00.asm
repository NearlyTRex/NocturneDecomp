; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(void)
;
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 00509943
;   core_set.cpp_FUN_00509a80 at 00509d6c
;   core_set.cpp_FUN_0050a260 at 0050a457
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c78d04
;   undefined4 DAT_01c78d20
;   undefined4 DAT_01c78d44
;   undefined4 DAT_01c78d60
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afe00
        ;   Label: core_gore.cpp_CGore_renderParticles_FUN_004afe00
    PUSH ESI                            ; 004afe01
    PUSH EBP                            ; 004afe02
    MOV EBP,ESP                         ; 004afe03
    AND ESP,0xfffffff8                  ; 004afe05
    MOV EAX,[0x005b9354]                ; 004afe08 | DAT_005b9354
    CMP dword ptr [EAX + 0x14],0x0      ; 004afe0d | DAT_01c77600
    JNZ 0x004afe19                      ; 004afe11
        ;   XREF to: 004afe19 (CONDITIONAL_JUMP)  ; LAB_004afe19
    MOV ESP,EBP                         ; 004afe13
        ;   Label: LAB_004afe13
    POP EBP                             ; 004afe15
    POP ESI                             ; 004afe16
    POP EBX                             ; 004afe17
    RET                                 ; 004afe18
    MOV ECX,dword ptr [0x005ae704]      ; 004afe19 | DAT_005ae704
        ;   Label: LAB_004afe19
    PUSH ECX                            ; 004afe1f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004afe20
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004afe25
    TEST EAX,EAX                        ; 004afe28
    JNZ 0x004afe13                      ; 004afe2a
        ;   XREF to: 004afe13 (CONDITIONAL_JUMP)  ; LAB_004afe13
    PUSH EAX                            ; 004afe2c
    PUSH EAX                            ; 004afe2d
    PUSH EAX                            ; 004afe2e
    PUSH EAX                            ; 004afe2f
    PUSH EAX                            ; 004afe30
    MOV EBX,dword ptr [0x005be368]      ; 004afe31 | DAT_005be368
    PUSH EBX                            ; 004afe37 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 004afe38
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0()
    ADD ESP,0x18                        ; 004afe3d
    PUSH 0x1c78cec                      ; 004afe40
    MOV EBX,0x1c78cec                   ; 004afe45
    CALL core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0 ; 004afe4a
        ;   XREF to: 004ae0a0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0()
    LEA ESI,[EBX + 0x4000]              ; 004afe4f
    ADD ESP,0x4                         ; 004afe55
    FLD float ptr [EBX + 0x18]          ; 004afe58 | DAT_01c78d04 | DAT_01c78d44
        ;   Label: LAB_004afe58
    FLDZ                                ; 004afe5b
    FCOMPP                              ; 004afe5d
    FNSTSW AX                           ; 004afe5f
    SAHF                                ; 004afe61
    JNC 0x004afe6e                      ; 004afe62
        ;   XREF to: 004afe6e (CONDITIONAL_JUMP)  ; LAB_004afe6e
    PUSH EBX                            ; 004afe64
    MOV EAX,dword ptr [EBX + 0x34]      ; 004afe65 | DAT_01c78d20 | DAT_01c78d60
    CALL dword ptr [EAX + 0x8]          ; 004afe68
    ADD ESP,0x4                         ; 004afe6b
    ADD EBX,0x40                        ; 004afe6e
        ;   Label: LAB_004afe6e
    CMP EBX,ESI                         ; 004afe71
    JZ 0x004afe13                       ; 004afe73
        ;   XREF to: 004afe13 (CONDITIONAL_JUMP)  ; LAB_004afe13
    JMP 0x004afe58                      ; 004afe75
        ;   XREF to: 004afe58 (UNCONDITIONAL_JUMP)  ; LAB_004afe58

