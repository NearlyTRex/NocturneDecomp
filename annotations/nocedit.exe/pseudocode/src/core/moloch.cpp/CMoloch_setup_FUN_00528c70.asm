; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_moloch_h_dfm_00639d71
;   TerminatedCString s_moloch_d_dfm_00639d7e
;   TerminatedCString s_moloch_d_dfm_00639d8b
;   TerminatedCString s_moloch_h_dfm_00639d98
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004f2540
;   core_morph.cpp_CMorph_FUN_0052b430
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528c70
        ;   Label: core_moloch.cpp_CMoloch_setup_FUN_00528c70
    PUSH ESI                            ; 00528c71
    PUSH EDI                            ; 00528c72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00528c73
    LEA ESI,[EBX + 0x1fbd4]             ; 00528c77
    MOV EDX,dword ptr [EBX + 0x21e88]   ; 00528c7d
    LEA EAX,[EBX + 0x158]               ; 00528c83
    TEST EDX,EDX                        ; 00528c89
    JZ 0x00528d05                       ; 00528c8b
        ;   XREF to: 00528d05 (CONDITIONAL_JUMP)  ; LAB_00528d05
    PUSH 0x639d71                       ; 00528c8d | = "moloch_h.dfm"
    PUSH EAX                            ; 00528c92
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00528c93
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00528c98
    PUSH 0x639d7e                       ; 00528c9b | = "moloch_d.dfm"
    PUSH ESI                            ; 00528ca0
        ;   Label: LAB_00528ca0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00528ca1
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00528ca6
    LEA ESI,[EBX + 0x158]               ; 00528ca9
    PUSH ESI                            ; 00528caf
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00528cb0
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00528cb5
    LEA EDI,[EBX + 0x1fbd4]             ; 00528cb8
    PUSH EDI                            ; 00528cbe
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00528cbf
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00528cc4
    PUSH ESI                            ; 00528cc7
    PUSH 0x0                            ; 00528cc8
    LEA ESI,[EBX + 0x21f5c]             ; 00528cca
    PUSH ESI                            ; 00528cd0
    MOV dword ptr [EBX + 0x22b84],0x0   ; 00528cd1
    CALL core_morph.cpp_CMorph_FUN_0052b430 ; 00528cdb
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b430(CMorph * this_ptr, int model_index)
    ADD ESP,0xc                         ; 00528ce0
    PUSH EDI                            ; 00528ce3
    PUSH 0x1                            ; 00528ce4
    PUSH ESI                            ; 00528ce6
    CALL core_morph.cpp_CMorph_FUN_0052b430 ; 00528ce7
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b430(CMorph * this_ptr, int model_index)
    ADD ESP,0xc                         ; 00528cec
    PUSH ESI                            ; 00528cef
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 00528cf0
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00528cf5
    PUSH EBX                            ; 00528cf8
    CALL core_hero.cpp_CHero_setup_FUN_004f2540 ; 00528cf9
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 00528cfe
    POP EDI                             ; 00528d01
    POP ESI                             ; 00528d02
    POP EBX                             ; 00528d03
    RET                                 ; 00528d04
    PUSH 0x639d8b                       ; 00528d05 | = "moloch_d.dfm"
        ;   Label: LAB_00528d05
    PUSH EAX                            ; 00528d0a
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00528d0b
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00528d10
    PUSH 0x639d98                       ; 00528d13 | = "moloch_h.dfm"
    JMP 0x00528ca0                      ; 00528d18
        ;   XREF to: 00528ca0 (UNCONDITIONAL_JUMP)  ; LAB_00528ca0

