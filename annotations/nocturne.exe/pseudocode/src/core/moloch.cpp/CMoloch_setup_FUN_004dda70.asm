; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moloch_cpp_CMoloch_setup_FUN_004dda70(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_moloch_h_dfm_0058a73b
;   TerminatedCString s_moloch_d_dfm_0058a748
;   TerminatedCString s_moloch_d_dfm_0058a755
;   TerminatedCString s_moloch_h_dfm_0058a762
;
; Called Functions:
;   core_hero.cpp_FUN_004b48d0
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dda70
        ;   Label: core_moloch.cpp_CMoloch_setup_FUN_004dda70
    PUSH ESI                            ; 004dda71
    PUSH EDI                            ; 004dda72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004dda73
    LEA ESI,[EBX + 0x1fa3c]             ; 004dda77
    MOV EDX,dword ptr [EBX + 0x21cf0]   ; 004dda7d
    LEA EAX,[EBX + 0x150]               ; 004dda83
    TEST EDX,EDX                        ; 004dda89
    JZ 0x004ddb05                       ; 004dda8b
        ;   XREF to: 004ddb05 (CONDITIONAL_JUMP)  ; LAB_004ddb05
    PUSH 0x58a73b                       ; 004dda8d | = "moloch_h.dfm"
    PUSH EAX                            ; 004dda92
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004dda93
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004dda98
    PUSH 0x58a748                       ; 004dda9b | = "moloch_d.dfm"
    PUSH ESI                            ; 004ddaa0
        ;   Label: LAB_004ddaa0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004ddaa1
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004ddaa6
    LEA ESI,[EBX + 0x150]               ; 004ddaa9
    PUSH ESI                            ; 004ddaaf
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004ddab0
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 004ddab5
    LEA EDI,[EBX + 0x1fa3c]             ; 004ddab8
    PUSH EDI                            ; 004ddabe
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004ddabf
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 004ddac4
    PUSH ESI                            ; 004ddac7
    PUSH 0x0                            ; 004ddac8
    LEA ESI,[EBX + 0x21dc4]             ; 004ddaca
    PUSH ESI                            ; 004ddad0
    MOV dword ptr [EBX + 0x229ec],0x0   ; 004ddad1
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004ddadb
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170()
    ADD ESP,0xc                         ; 004ddae0
    PUSH EDI                            ; 004ddae3
    PUSH 0x1                            ; 004ddae4
    PUSH ESI                            ; 004ddae6
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004ddae7
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170()
    ADD ESP,0xc                         ; 004ddaec
    PUSH ESI                            ; 004ddaef
    CALL core_morph.cpp_CMorph_getReady_FUN_004e03c0 ; 004ddaf0
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_getReady_FUN_004e03c0()
    ADD ESP,0x4                         ; 004ddaf5
    PUSH EBX                            ; 004ddaf8
    CALL core_hero.cpp_FUN_004b48d0     ; 004ddaf9
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b48d0()
    ADD ESP,0x4                         ; 004ddafe
    POP EDI                             ; 004ddb01
    POP ESI                             ; 004ddb02
    POP EBX                             ; 004ddb03
    RET                                 ; 004ddb04
    PUSH 0x58a755                       ; 004ddb05 | = "moloch_d.dfm"
        ;   Label: LAB_004ddb05
    PUSH EAX                            ; 004ddb0a
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004ddb0b
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004ddb10
    PUSH 0x58a762                       ; 004ddb13 | = "moloch_h.dfm"
    JMP 0x004ddaa0                      ; 004ddb18
        ;   XREF to: 004ddaa0 (UNCONDITIONAL_JUMP)  ; LAB_004ddaa0

