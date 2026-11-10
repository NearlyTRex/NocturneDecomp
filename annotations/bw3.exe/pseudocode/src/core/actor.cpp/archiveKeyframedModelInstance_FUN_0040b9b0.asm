; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[28]:
;   core_ammo.cpp_CAmmo_archive_FUN_0040e000 at 0040e01a
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e8f0 at 0040e90a
;   core_bat.cpp_CBat_archive_FUN_0040ef20 at 0040ef9e
;   core_battery.cpp_CBattery_archive_FUN_0040f630 at 0040f64a
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 at 0041fbb4
;   core_bugs.cpp_CBugs_archive_FUN_00421960 at 004219c1
;   core_crate.cpp_CCrate_archive_FUN_00446040 at 0044605a
;   core_door.cpp_CDoor_archive_FUN_00464cd0 at 00464ceb
;   core_drip.cpp_CDrip_archive_FUN_0046ebc0 at 0046ebde
;   core_emitter.cpp_CEmitter_archive_FUN_00488bb0 at 00488cc8
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b9b0
        ;   Label: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
    PUSH EDI                            ; 0040b9b1
    SUB ESP,0xc8                        ; 0040b9b2
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040b9b8
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040b9bf
    CMP dword ptr [0x007df9b8],0x1      ; 0040b9c6 | DAT_007df9b8
    JNZ 0x0040b9f2                      ; 0040b9cd
        ;   XREF to: 0040b9f2 (CONDITIONAL_JUMP)  ; LAB_0040b9f2
    PUSH EDX                            ; 0040b9cf
    LEA ESI,[ESP + 0x4]                 ; 0040b9d0
    PUSH ESI                            ; 0040b9d4
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040b9d5
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b9da
    MOV ESI,ESP                         ; 0040b9dd
    PUSH ESI                            ; 0040b9df
    PUSH EDI                            ; 0040b9e0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0040b9e1
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040b9e6
    ADD ESP,0xc8                        ; 0040b9e9
    POP EDI                             ; 0040b9ef
    POP ESI                             ; 0040b9f0
    RET                                 ; 0040b9f1
    LEA ESI,[EDI + 0x78]                ; 0040b9f2
        ;   Label: LAB_0040b9f2
    MOV EDI,ESP                         ; 0040b9f5
    PUSH EDI                            ; 0040b9f7
    MOV AL,byte ptr [ESI]               ; 0040b9f8
        ;   Label: LAB_0040b9f8
    MOV byte ptr [EDI],AL               ; 0040b9fa
    CMP AL,0x0                          ; 0040b9fc
    JZ 0x0040ba10                       ; 0040b9fe
        ;   XREF to: 0040ba10 (CONDITIONAL_JUMP)  ; LAB_0040ba10
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ba00
    ADD ESI,0x2                         ; 0040ba03
    MOV byte ptr [EDI + 0x1],AL         ; 0040ba06
    ADD EDI,0x2                         ; 0040ba09
    CMP AL,0x0                          ; 0040ba0c
    JNZ 0x0040b9f8                      ; 0040ba0e
        ;   XREF to: 0040b9f8 (CONDITIONAL_JUMP)  ; LAB_0040b9f8
    POP EDI                             ; 0040ba10
        ;   Label: LAB_0040ba10
    PUSH EDX                            ; 0040ba11
    LEA ESI,[ESP + 0x4]                 ; 0040ba12
    PUSH ESI                            ; 0040ba16
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040ba17
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040ba1c
    ADD ESP,0xc8                        ; 0040ba1f
    POP EDI                             ; 0040ba25
    POP ESI                             ; 0040ba26
    RET                                 ; 0040ba27

