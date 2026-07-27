; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(int param_1)
;
;
; Referenced Globals:
;   double DOUBLE_005821fa = 0.900000000000000
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 g_CDynamiteActorType_01bca088.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;   core_cloth.cpp_CCloth_render_FUN_00437db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498cc0
        ;   Label: core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0
    PUSH ESI                            ; 00498cc1
    PUSH EDI                            ; 00498cc2
    PUSH EBP                            ; 00498cc3
    MOV EBP,ESP                         ; 00498cc4
    MOV EBX,dword ptr [EBP + 0x14]      ; 00498cc6
    PUSH EBX                            ; 00498cc9
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 00498cca
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440()
    ADD ESP,0x4                         ; 00498ccf
    MOV ESI,EAX                         ; 00498cd2
    TEST EAX,EAX                        ; 00498cd4
    JNZ 0x00498cf3                      ; 00498cd6
        ;   XREF to: 00498cf3 (CONDITIONAL_JUMP)  ; LAB_00498cf3
    TEST ESI,ESI                        ; 00498cd8
        ;   Label: LAB_00498cd8
    JZ 0x00498cec                       ; 00498cda
        ;   XREF to: 00498cec (CONDITIONAL_JUMP)  ; LAB_00498cec
    LEA EDI,[EBX + 0x1f5a0]             ; 00498cdc
    MOV EAX,dword ptr [EDI + 0x330]     ; 00498ce2
    TEST EAX,EAX                        ; 00498ce8
    JNZ 0x00498d1e                      ; 00498cea
        ;   XREF to: 00498d1e (CONDITIONAL_JUMP)  ; LAB_00498d1e
    MOV EAX,ESI                         ; 00498cec
        ;   Label: LAB_00498cec
    POP EBP                             ; 00498cee
    POP EDI                             ; 00498cef
    POP ESI                             ; 00498cf0
    POP EBX                             ; 00498cf1
    RET                                 ; 00498cf2
    PUSH EBX                            ; 00498cf3
        ;   Label: LAB_00498cf3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00498cf4
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 00498cf9
    PUSH 0x0                            ; 00498cfc
    LEA EAX,[EBX + 0x1fa7c]             ; 00498cfe
    PUSH EAX                            ; 00498d04
    CALL core_cloth.cpp_CCloth_render_FUN_00437db0 ; 00498d05
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_render_FUN_00437db0()
    ADD ESP,0x8                         ; 00498d0a
    MOV EDX,dword ptr [0x005ae704]      ; 00498d0d | DAT_005ae704
    PUSH EDX                            ; 00498d13 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00498d14
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00498d19
    JMP 0x00498cd8                      ; 00498d1c
        ;   XREF to: 00498cd8 (UNCONDITIONAL_JUMP)  ; LAB_00498cd8
    PUSH EAX                            ; 00498d1e
        ;   Label: LAB_00498d1e
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00498d1f
    CALL dword ptr [EDX + 0x8]          ; 00498d25
    FLD float ptr [EBX + 0x1fa44]       ; 00498d28
    ADD ESP,0x4                         ; 00498d2e
    FCOMP double ptr [0x005821fa]       ; 00498d31 | DOUBLE_005821fa
    FNSTSW AX                           ; 00498d37
    SAHF                                ; 00498d39
    JBE 0x00498cec                      ; 00498d3a
        ;   XREF to: 00498cec (CONDITIONAL_JUMP)  ; LAB_00498cec
    MOV ECX,dword ptr [0x01bca0c0]      ; 00498d3c | g_CDynamiteActorType_01bca088.name_hash
    PUSH ECX                            ; 00498d42
    MOV EAX,dword ptr [EDI + 0x330]     ; 00498d43
    PUSH EAX                            ; 00498d49
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00498d4a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00498d4f
    TEST EAX,EAX                        ; 00498d52
    JZ 0x00498d81                       ; 00498d54
        ;   XREF to: 00498d81 (CONDITIONAL_JUMP)  ; LAB_00498d81
    FLD float ptr [EAX + 0x578]         ; 00498d56
    FMUL ST0                            ; 00498d5c
    FLD float ptr [EAX + 0x574]         ; 00498d5e
    FMUL ST0                            ; 00498d64
    FADDP                               ; 00498d66
    FLD float ptr [EAX + 0x57c]         ; 00498d68
    FMUL ST0                            ; 00498d6e
    FADDP                               ; 00498d70
    FSQRT                               ; 00498d72
    FLDZ                                ; 00498d74
    FCOMPP                              ; 00498d76
    FNSTSW AX                           ; 00498d78
    SAHF                                ; 00498d7a
    JNC 0x00498cec                      ; 00498d7b
        ;   XREF to: 00498cec (CONDITIONAL_JUMP)  ; LAB_00498cec
    LEA EAX,[EBX + 0x1f5a0]             ; 00498d81
        ;   Label: LAB_00498d81
    MOV EAX,dword ptr [EAX + 0x330]     ; 00498d87
    PUSH EAX                            ; 00498d8d
    MOV EBX,dword ptr [EAX + 0x14c]     ; 00498d8e
    CALL dword ptr [EBX + 0xe8]         ; 00498d94
    ADD ESP,0x4                         ; 00498d9a
    MOV EAX,ESI                         ; 00498d9d
    POP EBP                             ; 00498d9f
    POP EDI                             ; 00498da0
    POP ESI                             ; 00498da1
    POP EBX                             ; 00498da2
    RET                                 ; 00498da3

