; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_archive_FUN_004244b0 at 004246b5
;   core_health.cpp_CHealthItem_archive_FUN_004b4340 at 004b43b0
;   core_hostage.cpp_CHostage_archive_FUN_004b8320 at 004b84ba
;   core_keyactor.cpp_CKeyActor_archive_FUN_004c3650 at 004c36ac
;   core_weapon.cpp_CWeapon_archive_FUN_00554170 at 005541fe
;
; Referenced Globals:
;   TerminatedCString s_LOCALIZE_00577c6d
;   undefined4 s_LOCALIZE_00577c6d+1
;   undefined4 s_LOCALIZE_00577c6d+2
;   undefined4 s_LOCALIZE_00577c6d+3
;   undefined4 DAT_005accf8
;   undefined4 DAT_005accfc
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040c7f0
        ;   Label: core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
    PUSH EDI                            ; 0040c7f1
    SUB ESP,0x12c                       ; 0040c7f2
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0040c7f8
    MOV ECX,0x4b                        ; 0040c7ff
    MOV EDI,ESP                         ; 0040c804
    MOV ESI,0x5accf8                    ; 0040c806 | DAT_005accf8
    MOVSD.REP ES:EDI,ESI                ; 0040c80b | DAT_005accf8 | DAT_005accfc
    TEST EAX,EAX                        ; 0040c80d
    JNZ 0x0040c856                      ; 0040c80f
        ;   XREF to: 0040c856 (CONDITIONAL_JUMP)  ; LAB_0040c856
    MOV ESI,0x577c6d                    ; 0040c811 | = " !LOCALIZE!"
        ;   Label: LAB_0040c811
    MOV EDI,ESP                         ; 0040c816
    PUSH EDI                            ; 0040c818
    SUB ECX,ECX                         ; 0040c819
    DEC ECX                             ; 0040c81b
    MOV AL,0x0                          ; 0040c81c
    SCASB.REPNE ES:EDI                  ; 0040c81e
    DEC EDI                             ; 0040c820
    MOV AL,byte ptr [ESI]               ; 0040c821 | = " !LOCALIZE!" | s_LOCALIZE_00577c6d+2
        ;   Label: LAB_0040c821
    MOV byte ptr [EDI],AL               ; 0040c823
    CMP AL,0x0                          ; 0040c825
    JZ 0x0040c839                       ; 0040c827
        ;   XREF to: 0040c839 (CONDITIONAL_JUMP)  ; LAB_0040c839
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c829 | s_LOCALIZE_00577c6d+1 | s_LOCALIZE_00577c6d+3
    ADD ESI,0x2                         ; 0040c82c
    MOV byte ptr [EDI + 0x1],AL         ; 0040c82f
    ADD EDI,0x2                         ; 0040c832
    CMP AL,0x0                          ; 0040c835
    JNZ 0x0040c821                      ; 0040c837
        ;   XREF to: 0040c821 (CONDITIONAL_JUMP)  ; LAB_0040c821
    POP EDI                             ; 0040c839
        ;   Label: LAB_0040c839
    MOV EDI,ESP                         ; 0040c83a
    PUSH EDI                            ; 0040c83c
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0040c83d
    PUSH EDX                            ; 0040c844
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040c845
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040c84a
    ADD ESP,0x12c                       ; 0040c84d
    POP EDI                             ; 0040c853
    POP ESI                             ; 0040c854
    RET                                 ; 0040c855
    MOV EDI,ESP                         ; 0040c856
        ;   Label: LAB_0040c856
    MOV ESI,EAX                         ; 0040c858
    PUSH EDI                            ; 0040c85a
    MOV AL,byte ptr [ESI]               ; 0040c85b
        ;   Label: LAB_0040c85b
    MOV byte ptr [EDI],AL               ; 0040c85d
    CMP AL,0x0                          ; 0040c85f
    JZ 0x0040c873                       ; 0040c861
        ;   XREF to: 0040c873 (CONDITIONAL_JUMP)  ; LAB_0040c873
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c863
    ADD ESI,0x2                         ; 0040c866
    MOV byte ptr [EDI + 0x1],AL         ; 0040c869
    ADD EDI,0x2                         ; 0040c86c
    CMP AL,0x0                          ; 0040c86f
    JNZ 0x0040c85b                      ; 0040c871
        ;   XREF to: 0040c85b (CONDITIONAL_JUMP)  ; LAB_0040c85b
    POP EDI                             ; 0040c873
        ;   Label: LAB_0040c873
    JMP 0x0040c811                      ; 0040c874
        ;   XREF to: 0040c811 (UNCONDITIONAL_JUMP)  ; LAB_0040c811

