; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[29]:
;   core_ammo.cpp_FUN_0040ecf0 at 0040ed0a
;   core_ammobox.cpp_FUN_0040f390 at 0040f3aa
;   core_anvil.cpp_FUN_0040f7d0 at 0040f7ea
;   core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040 at 0041005a
;   core_bat.cpp_CBat_archive_FUN_00411b50 at 00411bce
;   core_battery.cpp_CBattery_archive_FUN_00414ef0 at 00414f0a
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60 at 0041ec84
;   core_bugs.cpp_CBugs_archive_FUN_00421880 at 00421909
;   core_crate.cpp_FUN_0043cc50 at 0043cc6a
;   core_door.cpp_CDoor_archive_FUN_00455ee0 at 00455efb
;   ... and 19 more
;
; Referenced Globals:
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040ca00
        ;   Label: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
    PUSH EDI                            ; 0040ca01
    SUB ESP,0xc8                        ; 0040ca02
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040ca08
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040ca0f
    CMP dword ptr [0x00763e88],0x1      ; 0040ca16 | DAT_00763e88
    JNZ 0x0040ca42                      ; 0040ca1d
        ;   XREF to: 0040ca42 (CONDITIONAL_JUMP)  ; LAB_0040ca42
    PUSH EDX                            ; 0040ca1f
    LEA ESI,[ESP + 0x4]                 ; 0040ca20
    PUSH ESI                            ; 0040ca24
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040ca25
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040ca2a
    MOV ESI,ESP                         ; 0040ca2d
    PUSH ESI                            ; 0040ca2f
    PUSH EDI                            ; 0040ca30
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ca31
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0040ca36
    ADD ESP,0xc8                        ; 0040ca39
    POP EDI                             ; 0040ca3f
    POP ESI                             ; 0040ca40
    RET                                 ; 0040ca41
    LEA ESI,[EDI + 0x78]                ; 0040ca42
        ;   Label: LAB_0040ca42
    MOV EDI,ESP                         ; 0040ca45
    PUSH EDI                            ; 0040ca47
    MOV AL,byte ptr [ESI]               ; 0040ca48
        ;   Label: LAB_0040ca48
    MOV byte ptr [EDI],AL               ; 0040ca4a
    CMP AL,0x0                          ; 0040ca4c
    JZ 0x0040ca60                       ; 0040ca4e
        ;   XREF to: 0040ca60 (CONDITIONAL_JUMP)  ; LAB_0040ca60
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ca50
    ADD ESI,0x2                         ; 0040ca53
    MOV byte ptr [EDI + 0x1],AL         ; 0040ca56
    ADD EDI,0x2                         ; 0040ca59
    CMP AL,0x0                          ; 0040ca5c
    JNZ 0x0040ca48                      ; 0040ca5e
        ;   XREF to: 0040ca48 (CONDITIONAL_JUMP)  ; LAB_0040ca48
    POP EDI                             ; 0040ca60
        ;   Label: LAB_0040ca60
    PUSH EDX                            ; 0040ca61
    LEA ESI,[ESP + 0x4]                 ; 0040ca62
    PUSH ESI                            ; 0040ca66
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040ca67
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040ca6c
    ADD ESP,0xc8                        ; 0040ca6f
    POP EDI                             ; 0040ca75
    POP ESI                             ; 0040ca76
    RET                                 ; 0040ca77

