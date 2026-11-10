; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b850(char *string_buffer,char *localization_key)
;
; Parameters:
; char *           Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   localization_key
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_archive_FUN_00422c30 at 00422d8c
;   core_health.cpp_CHealthItem_archive_FUN_004cdee0 at 004cdf50
;   core_hostage.cpp_CHostage_archive_FUN_004d2df0 at 004d2f8a
;   core_keyactor.cpp_CKeyActor_archive_FUN_004df320 at 004df37c
;   core_weapon.cpp_CWeapon_archive_FUN_00589d60 at 00589dee
;
; Referenced Globals:
;   TerminatedCString s_LOCALIZE_005cab32
;   undefined4 s_LOCALIZE_005cab32+1
;   undefined4 s_LOCALIZE_005cab32+2
;   undefined4 s_LOCALIZE_005cab32+3
;   undefined4 DAT_006095f8
;   undefined4 DAT_006095fc
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b730
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b850
        ;   Label: core_actor.cpp_archiveLocalizedString_FUN_0040b850
    PUSH EDI                            ; 0040b851
    SUB ESP,0x12c                       ; 0040b852
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0040b858
    MOV ECX,0x4b                        ; 0040b85f
    MOV EDI,ESP                         ; 0040b864
    MOV ESI,0x6095f8                    ; 0040b866 | DAT_006095f8
    MOVSD.REP ES:EDI,ESI                ; 0040b86b | DAT_006095f8 | DAT_006095fc
    TEST EAX,EAX                        ; 0040b86d
    JNZ 0x0040b8b6                      ; 0040b86f
        ;   XREF to: 0040b8b6 (CONDITIONAL_JUMP)  ; LAB_0040b8b6
    MOV ESI,0x5cab32                    ; 0040b871 | = " !LOCALIZE!"
        ;   Label: LAB_0040b871
    MOV EDI,ESP                         ; 0040b876
    PUSH EDI                            ; 0040b878
    SUB ECX,ECX                         ; 0040b879
    DEC ECX                             ; 0040b87b
    MOV AL,0x0                          ; 0040b87c
    SCASB.REPNE ES:EDI                  ; 0040b87e
    DEC EDI                             ; 0040b880
    MOV AL,byte ptr [ESI]               ; 0040b881 | = " !LOCALIZE!" | s_LOCALIZE_005cab32+2
        ;   Label: LAB_0040b881
    MOV byte ptr [EDI],AL               ; 0040b883
    CMP AL,0x0                          ; 0040b885
    JZ 0x0040b899                       ; 0040b887
        ;   XREF to: 0040b899 (CONDITIONAL_JUMP)  ; LAB_0040b899
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b889 | s_LOCALIZE_005cab32+1 | s_LOCALIZE_005cab32+3
    ADD ESI,0x2                         ; 0040b88c
    MOV byte ptr [EDI + 0x1],AL         ; 0040b88f
    ADD EDI,0x2                         ; 0040b892
    CMP AL,0x0                          ; 0040b895
    JNZ 0x0040b881                      ; 0040b897
        ;   XREF to: 0040b881 (CONDITIONAL_JUMP)  ; LAB_0040b881
    POP EDI                             ; 0040b899
        ;   Label: LAB_0040b899
    MOV EDI,ESP                         ; 0040b89a
    PUSH EDI                            ; 0040b89c
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0040b89d
    PUSH EDX                            ; 0040b8a4
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040b8a5
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b8aa
    ADD ESP,0x12c                       ; 0040b8ad
    POP EDI                             ; 0040b8b3
    POP ESI                             ; 0040b8b4
    RET                                 ; 0040b8b5
    MOV EDI,ESP                         ; 0040b8b6
        ;   Label: LAB_0040b8b6
    MOV ESI,EAX                         ; 0040b8b8
    PUSH EDI                            ; 0040b8ba
    MOV AL,byte ptr [ESI]               ; 0040b8bb
        ;   Label: LAB_0040b8bb
    MOV byte ptr [EDI],AL               ; 0040b8bd
    CMP AL,0x0                          ; 0040b8bf
    JZ 0x0040b8d3                       ; 0040b8c1
        ;   XREF to: 0040b8d3 (CONDITIONAL_JUMP)  ; LAB_0040b8d3
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b8c3
    ADD ESI,0x2                         ; 0040b8c6
    MOV byte ptr [EDI + 0x1],AL         ; 0040b8c9
    ADD EDI,0x2                         ; 0040b8cc
    CMP AL,0x0                          ; 0040b8cf
    JNZ 0x0040b8bb                      ; 0040b8d1
        ;   XREF to: 0040b8bb (CONDITIONAL_JUMP)  ; LAB_0040b8bb
    POP EDI                             ; 0040b8d3
        ;   Label: LAB_0040b8d3
    JMP 0x0040b871                      ; 0040b8d4
        ;   XREF to: 0040b871 (UNCONDITIONAL_JUMP)  ; LAB_0040b871

