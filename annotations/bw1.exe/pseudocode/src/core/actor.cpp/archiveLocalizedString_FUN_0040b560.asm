; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b560(char *string_buffer,char *localization_key)
;
; Parameters:
; char *           Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   localization_key
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 at 0042c94e
;   core_health.cpp_CHealthItem_archive_FUN_004ea480 at 004ea4f0
;   core_hostage.cpp_CHostage_archive_FUN_004ef020 at 004ef1ba
;   core_keyactor.cpp_CKeyActor_archive_FUN_004fc6f0 at 004fc74c
;   core_weapon.cpp_CWeapon_archive_FUN_005ad8b0 at 005ad93e
;
; Referenced Globals:
;   TerminatedCString s_LOCALIZE_005d2a95
;   undefined4 s_LOCALIZE_005d2a95+1
;   undefined4 s_LOCALIZE_005d2a95+2
;   undefined4 s_LOCALIZE_005d2a95+3
;   undefined4 DAT_00610728
;   undefined4 DAT_0061072c
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b560
        ;   Label: core_actor.cpp_archiveLocalizedString_FUN_0040b560
    PUSH EDI                            ; 0040b561
    SUB ESP,0x12c                       ; 0040b562
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0040b568
    MOV ECX,0x4b                        ; 0040b56f
    MOV EDI,ESP                         ; 0040b574
    MOV ESI,0x610728                    ; 0040b576 | DAT_00610728
    MOVSD.REP ES:EDI,ESI                ; 0040b57b | DAT_00610728 | DAT_0061072c
    TEST EAX,EAX                        ; 0040b57d
    JNZ 0x0040b5c6                      ; 0040b57f
        ;   XREF to: 0040b5c6 (CONDITIONAL_JUMP)  ; LAB_0040b5c6
    MOV ESI,0x5d2a95                    ; 0040b581 | = " !LOCALIZE!"
        ;   Label: LAB_0040b581
    MOV EDI,ESP                         ; 0040b586
    PUSH EDI                            ; 0040b588
    SUB ECX,ECX                         ; 0040b589
    DEC ECX                             ; 0040b58b
    MOV AL,0x0                          ; 0040b58c
    SCASB.REPNE ES:EDI                  ; 0040b58e
    DEC EDI                             ; 0040b590
    MOV AL,byte ptr [ESI]               ; 0040b591 | = " !LOCALIZE!" | s_LOCALIZE_005d2a95+2
        ;   Label: LAB_0040b591
    MOV byte ptr [EDI],AL               ; 0040b593
    CMP AL,0x0                          ; 0040b595
    JZ 0x0040b5a9                       ; 0040b597
        ;   XREF to: 0040b5a9 (CONDITIONAL_JUMP)  ; LAB_0040b5a9
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b599 | s_LOCALIZE_005d2a95+1 | s_LOCALIZE_005d2a95+3
    ADD ESI,0x2                         ; 0040b59c
    MOV byte ptr [EDI + 0x1],AL         ; 0040b59f
    ADD EDI,0x2                         ; 0040b5a2
    CMP AL,0x0                          ; 0040b5a5
    JNZ 0x0040b591                      ; 0040b5a7
        ;   XREF to: 0040b591 (CONDITIONAL_JUMP)  ; LAB_0040b591
    POP EDI                             ; 0040b5a9
        ;   Label: LAB_0040b5a9
    MOV EDI,ESP                         ; 0040b5aa
    PUSH EDI                            ; 0040b5ac
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0040b5ad
    PUSH EDX                            ; 0040b5b4
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040b5b5
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b5ba
    ADD ESP,0x12c                       ; 0040b5bd
    POP EDI                             ; 0040b5c3
    POP ESI                             ; 0040b5c4
    RET                                 ; 0040b5c5
    MOV EDI,ESP                         ; 0040b5c6
        ;   Label: LAB_0040b5c6
    MOV ESI,EAX                         ; 0040b5c8
    PUSH EDI                            ; 0040b5ca
    MOV AL,byte ptr [ESI]               ; 0040b5cb
        ;   Label: LAB_0040b5cb
    MOV byte ptr [EDI],AL               ; 0040b5cd
    CMP AL,0x0                          ; 0040b5cf
    JZ 0x0040b5e3                       ; 0040b5d1
        ;   XREF to: 0040b5e3 (CONDITIONAL_JUMP)  ; LAB_0040b5e3
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b5d3
    ADD ESI,0x2                         ; 0040b5d6
    MOV byte ptr [EDI + 0x1],AL         ; 0040b5d9
    ADD EDI,0x2                         ; 0040b5dc
    CMP AL,0x0                          ; 0040b5df
    JNZ 0x0040b5cb                      ; 0040b5e1
        ;   XREF to: 0040b5cb (CONDITIONAL_JUMP)  ; LAB_0040b5cb
    POP EDI                             ; 0040b5e3
        ;   Label: LAB_0040b5e3
    JMP 0x0040b581                      ; 0040b5e4
        ;   XREF to: 0040b581 (UNCONDITIONAL_JUMP)  ; LAB_0040b581

