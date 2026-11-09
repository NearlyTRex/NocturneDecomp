; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b7a0(char *string_buffer,char *localization_key)
;
; Parameters:
; char *           Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   localization_key
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
;
; XREF[4]:
;   core_charactr.cpp_FUN_0042b450 at 0042b5ae
;   core_health.cpp_FUN_004d1fe0 at 004d2059
;   core_keyactor.cpp_CKeyActor_archive_FUN_004dea10 at 004dea6c
;   core_weapon.cpp_FUN_0057b2a0 at 0057b333
;
; Referenced Globals:
;   TerminatedCString s_LOCALIZE_005b5ae1
;   undefined4 s_LOCALIZE_005b5ae1+1
;   undefined4 s_LOCALIZE_005b5ae1+2
;   undefined4 s_LOCALIZE_005b5ae1+3
;   undefined4 DAT_005f09f8
;   undefined4 DAT_005f09fc
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b680
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b7a0
        ;   Label: core_actor.cpp_archiveLocalizedString_FUN_0040b7a0
    PUSH EDI                            ; 0040b7a1
    SUB ESP,0x12c                       ; 0040b7a2
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0040b7a8
    MOV ECX,0x4b                        ; 0040b7af
    MOV EDI,ESP                         ; 0040b7b4
    MOV ESI,0x5f09f8                    ; 0040b7b6 | DAT_005f09f8
    MOVSD.REP ES:EDI,ESI                ; 0040b7bb | DAT_005f09f8 | DAT_005f09fc
    TEST EAX,EAX                        ; 0040b7bd
    JNZ 0x0040b806                      ; 0040b7bf
        ;   XREF to: 0040b806 (CONDITIONAL_JUMP)  ; LAB_0040b806
    MOV ESI,0x5b5ae1                    ; 0040b7c1 | = " !LOCALIZE!"
        ;   Label: LAB_0040b7c1
    MOV EDI,ESP                         ; 0040b7c6
    PUSH EDI                            ; 0040b7c8
    SUB ECX,ECX                         ; 0040b7c9
    DEC ECX                             ; 0040b7cb
    MOV AL,0x0                          ; 0040b7cc
    SCASB.REPNE ES:EDI                  ; 0040b7ce
    DEC EDI                             ; 0040b7d0
    MOV AL,byte ptr [ESI]               ; 0040b7d1 | = " !LOCALIZE!" | s_LOCALIZE_005b5ae1+2
        ;   Label: LAB_0040b7d1
    MOV byte ptr [EDI],AL               ; 0040b7d3
    CMP AL,0x0                          ; 0040b7d5
    JZ 0x0040b7e9                       ; 0040b7d7
        ;   XREF to: 0040b7e9 (CONDITIONAL_JUMP)  ; LAB_0040b7e9
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b7d9 | s_LOCALIZE_005b5ae1+1 | s_LOCALIZE_005b5ae1+3
    ADD ESI,0x2                         ; 0040b7dc
    MOV byte ptr [EDI + 0x1],AL         ; 0040b7df
    ADD EDI,0x2                         ; 0040b7e2
    CMP AL,0x0                          ; 0040b7e5
    JNZ 0x0040b7d1                      ; 0040b7e7
        ;   XREF to: 0040b7d1 (CONDITIONAL_JUMP)  ; LAB_0040b7d1
    POP EDI                             ; 0040b7e9
        ;   Label: LAB_0040b7e9
    MOV EDI,ESP                         ; 0040b7ea
    PUSH EDI                            ; 0040b7ec
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0040b7ed
    PUSH EDX                            ; 0040b7f4
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040b7f5
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b7fa
    ADD ESP,0x12c                       ; 0040b7fd
    POP EDI                             ; 0040b803
    POP ESI                             ; 0040b804
    RET                                 ; 0040b805
    MOV EDI,ESP                         ; 0040b806
        ;   Label: LAB_0040b806
    MOV ESI,EAX                         ; 0040b808
    PUSH EDI                            ; 0040b80a
    MOV AL,byte ptr [ESI]               ; 0040b80b
        ;   Label: LAB_0040b80b
    MOV byte ptr [EDI],AL               ; 0040b80d
    CMP AL,0x0                          ; 0040b80f
    JZ 0x0040b823                       ; 0040b811
        ;   XREF to: 0040b823 (CONDITIONAL_JUMP)  ; LAB_0040b823
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b813
    ADD ESI,0x2                         ; 0040b816
    MOV byte ptr [EDI + 0x1],AL         ; 0040b819
    ADD EDI,0x2                         ; 0040b81c
    CMP AL,0x0                          ; 0040b81f
    JNZ 0x0040b80b                      ; 0040b821
        ;   XREF to: 0040b80b (CONDITIONAL_JUMP)  ; LAB_0040b80b
    POP EDI                             ; 0040b823
        ;   Label: LAB_0040b823
    JMP 0x0040b7c1                      ; 0040b824
        ;   XREF to: 0040b7c1 (UNCONDITIONAL_JUMP)  ; LAB_0040b7c1

