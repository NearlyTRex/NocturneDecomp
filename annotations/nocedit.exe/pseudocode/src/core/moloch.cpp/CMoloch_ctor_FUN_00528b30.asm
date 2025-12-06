; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_00528b30(CMoloch * this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_moloch.cpp_FUN_00528af0 at 00528b0a
;
; Referenced Globals:
;   TerminatedCString s_moloch_h_dfm_00639d48
;   TerminatedCString s_molochToDemon_00639d55
;   undefined4 s_olochToDemon_00639d56
;   undefined4 s_lochToDemon_00639d57
;   undefined4 s_ochToDemon_00639d58
;   TerminatedCString s_molochToHuman_00639d63
;   undefined4 s_olochToHuman_00639d64
;   undefined4 s_lochToHuman_00639d65
;   undefined4 s_ochToHuman_00639d66
;   CDemonActor_vtable PTR_core_moloch.cpp_FUN_00528c70_00661944
;
; Called Functions:
;   core_hero.cpp_FUN_004f2340
;   core_morph.cpp_FUN_0052b310
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528b30
        ;   Label: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
    PUSH ESI                            ; 00528b31
    PUSH EDI                            ; 00528b32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00528b33
    PUSH EBX                            ; 00528b37
    CALL core_hero.cpp_FUN_004f2340     ; 00528b38 | undefined core_hero.cpp_FUN_004f2340()
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00528b3d
    ADD EAX,0x1fbd4                     ; 00528b40
    PUSH EAX                            ; 00528b45
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 00528b46 | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00528b4b
    ADD EAX,0x2388                      ; 00528b4e
    PUSH EAX                            ; 00528b53
    CALL core_morph.cpp_FUN_0052b310    ; 00528b54 | undefined core_morph.cpp_FUN_0052b310()
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00528b59
    LEA EBX,[EAX + 0xfffde0a4]          ; 00528b5c
    PUSH 0x639d48                       ; 00528b62 | = "moloch_h.dfm" | s_moloch_h_dfm_00639d48 = moloch_h.dfm
    LEA EAX,[EBX + 0x158]               ; 00528b67
    PUSH EAX                            ; 00528b6d
    MOV dword ptr [EBX + 0x154],0x661944 ; 00528b6e | CDemonActor_vtable PTR_core_moloch.cpp_FUN_00528c70_00661944
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00528b78 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00528b7d
    MOV ESI,0x639d55                    ; 00528b80 | = "molochToDemon" | s_molochToDemon_00639d55 = molochToDemon
    LEA EDI,[EBX + 0x21e94]             ; 00528b85
    PUSH EDI                            ; 00528b8b
    MOV AL,byte ptr [ESI]               ; 00528b8c | = "molochToDemon" | s_molochToDemon_00639d55 = molochToDemon
        ;   Label: LAB_00528b8c
    MOV byte ptr [EDI],AL               ; 00528b8e
    CMP AL,0x0                          ; 00528b90
    JZ 0x00528ba4                       ; 00528b92 | LAB_00528ba4
        ;   XREF to: 00528ba4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00528b94 | s_olochToDemon_00639d56
    ADD ESI,0x2                         ; 00528b97
    MOV byte ptr [EDI + 0x1],AL         ; 00528b9a
    ADD EDI,0x2                         ; 00528b9d
    CMP AL,0x0                          ; 00528ba0
    JNZ 0x00528b8c                      ; 00528ba2 | LAB_00528b8c
        ;   XREF to: 00528b8c (CONDITIONAL_JUMP)
    POP EDI                             ; 00528ba4
        ;   Label: LAB_00528ba4
    MOV ESI,0x639d63                    ; 00528ba5 | = "molochToHuman" | s_molochToHuman_00639d63 = molochToHuman
    LEA EDI,[EBX + 0x21ef8]             ; 00528baa
    PUSH EDI                            ; 00528bb0
    MOV AL,byte ptr [ESI]               ; 00528bb1 | = "molochToHuman" | s_molochToHuman_00639d63 = molochToHuman
        ;   Label: LAB_00528bb1
    MOV byte ptr [EDI],AL               ; 00528bb3
    CMP AL,0x0                          ; 00528bb5
    JZ 0x00528bc9                       ; 00528bb7 | LAB_00528bc9
        ;   XREF to: 00528bc9 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00528bb9 | s_olochToHuman_00639d64
    ADD ESI,0x2                         ; 00528bbc
    MOV byte ptr [EDI + 0x1],AL         ; 00528bbf
    ADD EDI,0x2                         ; 00528bc2
    CMP AL,0x0                          ; 00528bc5
    JNZ 0x00528bb1                      ; 00528bc7 | LAB_00528bb1
        ;   XREF to: 00528bb1 (CONDITIONAL_JUMP)
    POP EDI                             ; 00528bc9
        ;   Label: LAB_00528bc9
    MOV dword ptr [EBX + 0x21e88],0x1   ; 00528bca
    MOV dword ptr [EBX + 0x21e8c],0x0   ; 00528bd4
    MOV EAX,EBX                         ; 00528bde
    MOV dword ptr [EBX + 0x21e90],0x0   ; 00528be0
    POP EDI                             ; 00528bea
    POP ESI                             ; 00528beb
    POP EBX                             ; 00528bec
    RET                                 ; 00528bed

