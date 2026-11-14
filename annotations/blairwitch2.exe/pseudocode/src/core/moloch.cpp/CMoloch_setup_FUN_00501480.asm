; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00501480(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_moloch_h_dfm_005df1a2
;   TerminatedCString s_moloch_d_dfm_005df1af
;   TerminatedCString s_moloch_d_dfm_005df1bc
;   TerminatedCString s_moloch_h_dfm_005df1c9
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_morph.cpp_CMorph_getReady_FUN_005b71d0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501480
        ;   Label: core_moloch.cpp_CMoloch_setup_FUN_00501480
    PUSH ESI                            ; 00501481
    PUSH EDI                            ; 00501482
    MOV EBX,dword ptr [ESP + 0x10]      ; 00501483
    LEA ESI,[EBX + 0x25640]             ; 00501487
    MOV EDX,dword ptr [EBX + 0x278f4]   ; 0050148d
    LEA EAX,[EBX + 0x2b4]               ; 00501493
    TEST EDX,EDX                        ; 00501499
    JZ 0x00501515                       ; 0050149b
        ;   XREF to: 00501515 (CONDITIONAL_JUMP)  ; LAB_00501515
    PUSH 0x5df1a2                       ; 0050149d | = "moloch_h.dfm"
    PUSH EAX                            ; 005014a2
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005014a3
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005014a8
    PUSH 0x5df1af                       ; 005014ab | = "moloch_d.dfm"
    PUSH ESI                            ; 005014b0
        ;   Label: LAB_005014b0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005014b1
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005014b6
    LEA ESI,[EBX + 0x2b4]               ; 005014b9
    PUSH ESI                            ; 005014bf
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 005014c0
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005014c5
    LEA EDI,[EBX + 0x25640]             ; 005014c8
    PUSH EDI                            ; 005014ce
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 005014cf
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005014d4
    PUSH ESI                            ; 005014d7
    PUSH 0x0                            ; 005014d8
    LEA ESI,[EBX + 0x279c8]             ; 005014da
    PUSH ESI                            ; 005014e0
    MOV dword ptr [EBX + 0x285f0],0x0   ; 005014e1
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 ; 005014eb
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005014f0
    PUSH EDI                            ; 005014f3
    PUSH 0x1                            ; 005014f4
    PUSH ESI                            ; 005014f6
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 ; 005014f7
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005014fc
    PUSH ESI                            ; 005014ff
    CALL core_morph.cpp_CMorph_getReady_FUN_005b71d0 ; 00501500
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_005b71d0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00501505
    PUSH EBX                            ; 00501508
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 00501509
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0050150e
    POP EDI                             ; 00501511
    POP ESI                             ; 00501512
    POP EBX                             ; 00501513
    RET                                 ; 00501514
    PUSH 0x5df1bc                       ; 00501515 | = "moloch_d.dfm"
        ;   Label: LAB_00501515
    PUSH EAX                            ; 0050151a
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0050151b
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00501520
    PUSH 0x5df1c9                       ; 00501523 | = "moloch_h.dfm"
    JMP 0x005014b0                      ; 00501528
        ;   XREF to: 005014b0 (UNCONDITIONAL_JUMP)  ; LAB_005014b0

