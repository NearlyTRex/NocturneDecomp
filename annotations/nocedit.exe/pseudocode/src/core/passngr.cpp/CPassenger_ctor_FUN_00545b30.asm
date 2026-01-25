; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_00545b30(CPassenger * this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_passngr.cpp_FUN_00545af0 at 00545b0a
;
; Referenced Globals:
;   TerminatedCString s_wolfbrn_dfm_0063e784
;   undefined4 s_olfbrn.dfm_0063e785
;   undefined4 s_lfbrn.dfm_0063e786
;   undefined4 s_fbrn.dfm_0063e787
;   TerminatedCString s_false_0063e790
;   undefined4 s_alse_0063e791
;   undefined4 s_lse_0063e792
;   undefined4 s_se_0063e793
;   TerminatedCString s_trainman_dfm_0063e796
;   TerminatedCString s_nameMePlease_0063e7a3
;   undefined4 s_ameMePlease_0063e7a4
;   undefined4 s_meMePlease_0063e7a5
;   undefined4 s_eMePlease_0063e7a6
;   CDemonActor_vtable g_CPassengerVTable
;
; Called Functions:
;   core_morph.cpp_FUN_0052b310
;   core_npc.cpp_CNPC_ctor_FUN_005447e0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545b30
        ;   Label: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
    PUSH ESI                            ; 00545b31
    PUSH EDI                            ; 00545b32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00545b33
    PUSH EBX                            ; 00545b37
    CALL core_npc.cpp_CNPC_ctor_FUN_005447e0 ; 00545b38
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00545b3d
    ADD EAX,0x1f814                     ; 00545b40
    PUSH EAX                            ; 00545b45
    MOV ESI,0x63e784                    ; 00545b46 | = "wolfbrn.dfm"
    CALL core_morph.cpp_FUN_0052b310    ; 00545b4b
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_0052b310()
    LEA EBX,[EAX + 0xfffe07ec]          ; 00545b50
    ADD ESP,0x4                         ; 00545b56
    LEA EDI,[EBX + 0x1f76c]             ; 00545b59
    MOV dword ptr [EBX + 0x154],0x661f64 ; 00545b5f | g_CPassengerVTable
    PUSH EDI                            ; 00545b69
    MOV AL,byte ptr [ESI]               ; 00545b6a | = "wolfbrn.dfm" | s_lfbrn.dfm_0063e786
        ;   Label: LAB_00545b6a
    MOV byte ptr [EDI],AL               ; 00545b6c
    CMP AL,0x0                          ; 00545b6e
    JZ 0x00545b82                       ; 00545b70
        ;   XREF to: 00545b82 (CONDITIONAL_JUMP)  ; LAB_00545b82
    MOV AL,byte ptr [ESI + 0x1]         ; 00545b72 | s_olfbrn.dfm_0063e785 | s_fbrn.dfm_0063e787
    ADD ESI,0x2                         ; 00545b75
    MOV byte ptr [EDI + 0x1],AL         ; 00545b78
    ADD EDI,0x2                         ; 00545b7b
    CMP AL,0x0                          ; 00545b7e
    JNZ 0x00545b6a                      ; 00545b80
        ;   XREF to: 00545b6a (CONDITIONAL_JUMP)  ; LAB_00545b6a
    POP EDI                             ; 00545b82
        ;   Label: LAB_00545b82
    MOV ESI,0x63e790                    ; 00545b83 | = "false"
    LEA EDI,[EBX + 0x1f708]             ; 00545b88
    PUSH EDI                            ; 00545b8e
    MOV AL,byte ptr [ESI]               ; 00545b8f | = "false" | s_lse_0063e792
        ;   Label: LAB_00545b8f
    MOV byte ptr [EDI],AL               ; 00545b91
    CMP AL,0x0                          ; 00545b93
    JZ 0x00545ba7                       ; 00545b95
        ;   XREF to: 00545ba7 (CONDITIONAL_JUMP)  ; LAB_00545ba7
    MOV AL,byte ptr [ESI + 0x1]         ; 00545b97 | s_alse_0063e791 | s_se_0063e793
    ADD ESI,0x2                         ; 00545b9a
    MOV byte ptr [EDI + 0x1],AL         ; 00545b9d
    ADD EDI,0x2                         ; 00545ba0
    CMP AL,0x0                          ; 00545ba3
    JNZ 0x00545b8f                      ; 00545ba5
        ;   XREF to: 00545b8f (CONDITIONAL_JUMP)  ; LAB_00545b8f
    POP EDI                             ; 00545ba7
        ;   Label: LAB_00545ba7
    PUSH 0x63e796                       ; 00545ba8 | = "trainman.dfm"
    LEA EAX,[EBX + 0x158]               ; 00545bad
    PUSH EAX                            ; 00545bb3
    MOV ESI,0x63e7a3                    ; 00545bb4 | = "nameMePlease"
    MOV dword ptr [EBX + 0x1f810],0x0   ; 00545bb9
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00545bc3
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00545bc8
    LEA EDI,[EBX + 0x1f78c]             ; 00545bcb
    MOV dword ptr [EBX + 0x20444],0x3f800000 ; 00545bd1
    PUSH EDI                            ; 00545bdb
    MOV AL,byte ptr [ESI]               ; 00545bdc | = "nameMePlease" | s_meMePlease_0063e7a5
        ;   Label: LAB_00545bdc
    MOV byte ptr [EDI],AL               ; 00545bde
    CMP AL,0x0                          ; 00545be0
    JZ 0x00545bf4                       ; 00545be2
        ;   XREF to: 00545bf4 (CONDITIONAL_JUMP)  ; LAB_00545bf4
    MOV AL,byte ptr [ESI + 0x1]         ; 00545be4 | s_ameMePlease_0063e7a4 | s_eMePlease_0063e7a6
    ADD ESI,0x2                         ; 00545be7
    MOV byte ptr [EDI + 0x1],AL         ; 00545bea
    ADD EDI,0x2                         ; 00545bed
    CMP AL,0x0                          ; 00545bf0
    JNZ 0x00545bdc                      ; 00545bf2
        ;   XREF to: 00545bdc (CONDITIONAL_JUMP)  ; LAB_00545bdc
    POP EDI                             ; 00545bf4
        ;   Label: LAB_00545bf4
    MOV EAX,EBX                         ; 00545bf5
    MOV byte ptr [EBX + 0x1f7ac],0x0    ; 00545bf7
    POP EDI                             ; 00545bfe
    POP ESI                             ; 00545bff
    POP EBX                             ; 00545c00
    RET                                 ; 00545c01

