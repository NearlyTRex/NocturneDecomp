; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(CKeyFramedModelInstance *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[30]:
;   core_ammo.cpp_CAmmo_archive_FUN_0040dd40 at 0040dd5a
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e400 at 0040e41a
;   core_anvil.cpp_CAnvil_archive_FUN_0040e860 at 0040e87a
;   core_backgnd.cpp_FUN_0040f050 at 0040f06a
;   core_bat.cpp_CBat_archive_FUN_00410c90 at 00410d0e
;   core_battery.cpp_CBattery_archive_FUN_004145a0 at 004145ba
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760 at 00422784
;   core_bugs.cpp_FUN_004257f0 at 00425879
;   core_crate.cpp_CCrate_archive_FUN_00449480 at 0044949a
;   core_door.cpp_FUN_00478490 at 004784ab
;   ... and 20 more
;
; Referenced Globals:
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b770
        ;   Label: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
    PUSH EDI                            ; 0040b771
    SUB ESP,0xc8                        ; 0040b772
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040b778
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040b77f
    CMP dword ptr [0x007c3038],0x1      ; 0040b786 | DAT_007c3038
    JNZ 0x0040b7b2                      ; 0040b78d
        ;   XREF to: 0040b7b2 (CONDITIONAL_JUMP)  ; LAB_0040b7b2
    PUSH EDX                            ; 0040b78f
    LEA ESI,[ESP + 0x4]                 ; 0040b790
    PUSH ESI                            ; 0040b794
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040b795
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b79a
    MOV ESI,ESP                         ; 0040b79d
    PUSH ESI                            ; 0040b79f
    PUSH EDI                            ; 0040b7a0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040b7a1
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040b7a6
    ADD ESP,0xc8                        ; 0040b7a9
    POP EDI                             ; 0040b7af
    POP ESI                             ; 0040b7b0
    RET                                 ; 0040b7b1
    LEA ESI,[EDI + 0x78]                ; 0040b7b2
        ;   Label: LAB_0040b7b2
    MOV EDI,ESP                         ; 0040b7b5
    PUSH EDI                            ; 0040b7b7
    MOV AL,byte ptr [ESI]               ; 0040b7b8
        ;   Label: LAB_0040b7b8
    MOV byte ptr [EDI],AL               ; 0040b7ba
    CMP AL,0x0                          ; 0040b7bc
    JZ 0x0040b7d0                       ; 0040b7be
        ;   XREF to: 0040b7d0 (CONDITIONAL_JUMP)  ; LAB_0040b7d0
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b7c0
    ADD ESI,0x2                         ; 0040b7c3
    MOV byte ptr [EDI + 0x1],AL         ; 0040b7c6
    ADD EDI,0x2                         ; 0040b7c9
    CMP AL,0x0                          ; 0040b7cc
    JNZ 0x0040b7b8                      ; 0040b7ce
        ;   XREF to: 0040b7b8 (CONDITIONAL_JUMP)  ; LAB_0040b7b8
    POP EDI                             ; 0040b7d0
        ;   Label: LAB_0040b7d0
    PUSH EDX                            ; 0040b7d1
    LEA ESI,[ESP + 0x4]                 ; 0040b7d2
    PUSH ESI                            ; 0040b7d6
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040b7d7
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b7dc
    ADD ESP,0xc8                        ; 0040b7df
    POP EDI                             ; 0040b7e5
    POP ESI                             ; 0040b7e6
    RET                                 ; 0040b7e7

