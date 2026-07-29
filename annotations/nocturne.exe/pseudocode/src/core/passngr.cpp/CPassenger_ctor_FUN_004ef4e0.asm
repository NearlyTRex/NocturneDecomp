; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_passngr.cpp_FUN_004ef4b0 at 004ef4c3
;
; Referenced Globals:
;   TerminatedCString s_wolfbrn_dfm_0058cbd0
;   undefined4 s_wolfbrn_dfm_0058cbd0+1
;   undefined4 s_wolfbrn_dfm_0058cbd0+2
;   undefined4 s_wolfbrn_dfm_0058cbd0+3
;   TerminatedCString s_false_0058cbdc
;   undefined4 s_alse_0058cbdc+1
;   undefined4 s_lse_0058cbdc+2
;   undefined4 s_se_0058cbdc+3
;   TerminatedCString s_trainman_dfm_0058cbe2
;   TerminatedCString s_nameMePlease_0058cbef
;   undefined4 s_ameMePlease_0058cbef+1
;   undefined4 s_meMePlease_0058cbef+2
;   undefined4 s_eMePlease_0058cbef+3
;   CCharacter_full_vtable g_CPassengerVTable
;
; Called Functions:
;   core_morph.cpp_CMorph_ctor_FUN_004e0050
;   core_npc.cpp_FUN_004ee950
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef4e0
        ;   Label: core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0
    PUSH ESI                            ; 004ef4e1
    PUSH EDI                            ; 004ef4e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ef4e3
    PUSH EBX                            ; 004ef4e7
    CALL core_npc.cpp_FUN_004ee950      ; 004ef4e8
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_FUN_004ee950(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004ef4ed
    ADD EAX,0x1f67c                     ; 004ef4f0
    PUSH EAX                            ; 004ef4f5
    MOV ESI,0x58cbd0                    ; 004ef4f6 | = "wolfbrn.dfm"
    CALL core_morph.cpp_CMorph_ctor_FUN_004e0050 ; 004ef4fb
        ;   XREF to: 004e0050 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004e0050(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffe0984]          ; 004ef500
    ADD ESP,0x4                         ; 004ef506
    LEA EDI,[EBX + 0x1f5d4]             ; 004ef509
    MOV dword ptr [EBX + 0x14c],0x5a1074 ; 004ef50f | g_CPassengerVTable
    PUSH EDI                            ; 004ef519
    MOV AL,byte ptr [ESI]               ; 004ef51a | = "wolfbrn.dfm" | s_wolfbrn_dfm_0058cbd0+2
        ;   Label: LAB_004ef51a
    MOV byte ptr [EDI],AL               ; 004ef51c
    CMP AL,0x0                          ; 004ef51e
    JZ 0x004ef532                       ; 004ef520
        ;   XREF to: 004ef532 (CONDITIONAL_JUMP)  ; LAB_004ef532
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef522 | s_wolfbrn_dfm_0058cbd0+1 | s_wolfbrn_dfm_0058cbd0+3
    ADD ESI,0x2                         ; 004ef525
    MOV byte ptr [EDI + 0x1],AL         ; 004ef528
    ADD EDI,0x2                         ; 004ef52b
    CMP AL,0x0                          ; 004ef52e
    JNZ 0x004ef51a                      ; 004ef530
        ;   XREF to: 004ef51a (CONDITIONAL_JUMP)  ; LAB_004ef51a
    POP EDI                             ; 004ef532
        ;   Label: LAB_004ef532
    MOV ESI,0x58cbdc                    ; 004ef533 | = "false"
    LEA EDI,[EBX + 0x1f570]             ; 004ef538
    PUSH EDI                            ; 004ef53e
    MOV AL,byte ptr [ESI]               ; 004ef53f | = "false" | s_lse_0058cbdc+2
        ;   Label: LAB_004ef53f
    MOV byte ptr [EDI],AL               ; 004ef541
    CMP AL,0x0                          ; 004ef543
    JZ 0x004ef557                       ; 004ef545
        ;   XREF to: 004ef557 (CONDITIONAL_JUMP)  ; LAB_004ef557
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef547 | s_alse_0058cbdc+1 | s_se_0058cbdc+3
    ADD ESI,0x2                         ; 004ef54a
    MOV byte ptr [EDI + 0x1],AL         ; 004ef54d
    ADD EDI,0x2                         ; 004ef550
    CMP AL,0x0                          ; 004ef553
    JNZ 0x004ef53f                      ; 004ef555
        ;   XREF to: 004ef53f (CONDITIONAL_JUMP)  ; LAB_004ef53f
    POP EDI                             ; 004ef557
        ;   Label: LAB_004ef557
    PUSH 0x58cbe2                       ; 004ef558 | = "trainman.dfm"
    LEA EAX,[EBX + 0x150]               ; 004ef55d
    PUSH EAX                            ; 004ef563
    MOV ESI,0x58cbef                    ; 004ef564 | = "nameMePlease"
    MOV dword ptr [EBX + 0x1f678],0x0   ; 004ef569
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004ef573
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004ef578
    LEA EDI,[EBX + 0x1f5f4]             ; 004ef57b
    MOV dword ptr [EBX + 0x202ac],0x3f800000 ; 004ef581
    PUSH EDI                            ; 004ef58b
    MOV AL,byte ptr [ESI]               ; 004ef58c | = "nameMePlease" | s_meMePlease_0058cbef+2
        ;   Label: LAB_004ef58c
    MOV byte ptr [EDI],AL               ; 004ef58e
    CMP AL,0x0                          ; 004ef590
    JZ 0x004ef5a4                       ; 004ef592
        ;   XREF to: 004ef5a4 (CONDITIONAL_JUMP)  ; LAB_004ef5a4
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef594 | s_ameMePlease_0058cbef+1 | s_eMePlease_0058cbef+3
    ADD ESI,0x2                         ; 004ef597
    MOV byte ptr [EDI + 0x1],AL         ; 004ef59a
    ADD EDI,0x2                         ; 004ef59d
    CMP AL,0x0                          ; 004ef5a0
    JNZ 0x004ef58c                      ; 004ef5a2
        ;   XREF to: 004ef58c (CONDITIONAL_JUMP)  ; LAB_004ef58c
    POP EDI                             ; 004ef5a4
        ;   Label: LAB_004ef5a4
    MOV EAX,EBX                         ; 004ef5a5
    MOV byte ptr [EBX + 0x1f614],0x0    ; 004ef5a7
    POP EDI                             ; 004ef5ae
    POP ESI                             ; 004ef5af
    POP EBX                             ; 004ef5b0
    RET                                 ; 004ef5b1

