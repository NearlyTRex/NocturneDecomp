; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_serializeLocalizedString_FUN_0040b6e0(char * * string_buffer, char * localization_key)
;
; Parameters:
; char * *         Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   localization_key
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 at 004285a5
;   core_health.cpp_CHealthItem_serialize_FUN_004f1f20 at 004f1f90
;   core_hostage.cpp_CHostage_load_FUN_004f6170 at 004f630a
;   core_keyactor.cpp_CKeyActor_serialize_FUN_00501880 at 005018dc
;   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 at 005ee2de
;
; Referenced Globals:
;   TerminatedCString s_LOCALIZE_00613f14
;   undefined4 s_!LOCALIZE!_00613f15
;   undefined4 s_LOCALIZE!_00613f16
;   undefined4 s_OCALIZE!_00613f17
;   char[300] g_LocalizationTemplate
;   undefined4 s__0066e1e4
;
; Called Functions:
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b6e0
        ;   Label: core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
    PUSH EDI                            ; 0040b6e1
    SUB ESP,0x12c                       ; 0040b6e2
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0040b6e8
    MOV ECX,0x4b                        ; 0040b6ef
    MOV EDI,ESP                         ; 0040b6f4
    MOV ESI,0x66e1e0                    ; 0040b6f6 | char[300] g_LocalizationTemplate
    MOVSD.REP ES:EDI,ESI                ; 0040b6fb | char[300] g_LocalizationTemplate
    TEST EAX,EAX                        ; 0040b6fd
    JNZ 0x0040b746                      ; 0040b6ff | LAB_0040b746
        ;   XREF to: 0040b746 (CONDITIONAL_JUMP)
    MOV ESI,0x613f14                    ; 0040b701 | = " !LOCALIZE!" | s_LOCALIZE_00613f14 =  !LOCALIZE!
        ;   Label: LAB_0040b701
    MOV EDI,ESP                         ; 0040b706
    PUSH EDI                            ; 0040b708
    SUB ECX,ECX                         ; 0040b709
    DEC ECX                             ; 0040b70b
    MOV AL,0x0                          ; 0040b70c
    SCASB.REPNE ES:EDI                  ; 0040b70e
    DEC EDI                             ; 0040b710
    MOV AL,byte ptr [ESI]               ; 0040b711 | = " !LOCALIZE!" | s_LOCALIZE_00613f14 =  !LOCALIZE!
        ;   Label: LAB_0040b711
    MOV byte ptr [EDI],AL               ; 0040b713
    CMP AL,0x0                          ; 0040b715
    JZ 0x0040b729                       ; 0040b717 | LAB_0040b729
        ;   XREF to: 0040b729 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b719 | s_!LOCALIZE!_00613f15
    ADD ESI,0x2                         ; 0040b71c
    MOV byte ptr [EDI + 0x1],AL         ; 0040b71f
    ADD EDI,0x2                         ; 0040b722
    CMP AL,0x0                          ; 0040b725
    JNZ 0x0040b711                      ; 0040b727 | LAB_0040b711
        ;   XREF to: 0040b711 (CONDITIONAL_JUMP)
    POP EDI                             ; 0040b729
        ;   Label: LAB_0040b729
    MOV EDI,ESP                         ; 0040b72a
    PUSH EDI                            ; 0040b72c
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0040b72d
    PUSH EDX                            ; 0040b734
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0040b735 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040b73a
    ADD ESP,0x12c                       ; 0040b73d
    POP EDI                             ; 0040b743
    POP ESI                             ; 0040b744
    RET                                 ; 0040b745
    MOV EDI,ESP                         ; 0040b746
        ;   Label: LAB_0040b746
    MOV ESI,EAX                         ; 0040b748
    PUSH EDI                            ; 0040b74a
    MOV AL,byte ptr [ESI]               ; 0040b74b
        ;   Label: LAB_0040b74b
    MOV byte ptr [EDI],AL               ; 0040b74d
    CMP AL,0x0                          ; 0040b74f
    JZ 0x0040b763                       ; 0040b751 | LAB_0040b763
        ;   XREF to: 0040b763 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b753
    ADD ESI,0x2                         ; 0040b756
    MOV byte ptr [EDI + 0x1],AL         ; 0040b759
    ADD EDI,0x2                         ; 0040b75c
    CMP AL,0x0                          ; 0040b75f
    JNZ 0x0040b74b                      ; 0040b761 | LAB_0040b74b
        ;   XREF to: 0040b74b (CONDITIONAL_JUMP)
    POP EDI                             ; 0040b763
        ;   Label: LAB_0040b763
    JMP 0x0040b701                      ; 0040b764 | LAB_0040b701
        ;   XREF to: 0040b701 (UNCONDITIONAL_JUMP)

