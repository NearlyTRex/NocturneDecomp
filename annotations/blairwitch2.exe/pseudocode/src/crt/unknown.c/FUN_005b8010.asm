; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b8010(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[41]:
;   cockpit_ckptutil.c_FUN_0042e130 at 0042e19d
;   core_actor.cpp_CDemonActor_save_FUN_0040b0a0 at 0040b0f6
;   core_actor.cpp_archiveActor_FUN_0040b9e0 at 0040ba2a
;   core_actor.cpp_archiveBox_FUN_0040bee0 at 0040bf79
;   core_actor.cpp_archiveClothList_FUN_0040bfd0 at 0040c0d8
;   core_actor.cpp_archiveDescription_FUN_0040b400 at 0040b464
;   core_actor.cpp_archiveFloat_FUN_0040b8e0 at 0040b94d
;   core_actor.cpp_archiveInteger_FUN_0040b960 at 0040b9c9
;   core_actor.cpp_archiveLocation_FUN_0040b5f0 at 0040b680
;   core_actor.cpp_archiveMotionState_FUN_0040bb60 at 0040bbf9
;   ... and 31 more
;
; Called Functions:
;   crt_unknown.c_FUN_005bcd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8010
        ;   Label: crt_unknown.c_FUN_005b8010
    SUB ESP,0x4                         ; 005b8011
    LEA EAX,[ESP + 0x14]                ; 005b8014
    MOV dword ptr [ESP],EAX             ; 005b8018
    MOV EAX,ESP                         ; 005b801b
    PUSH EAX                            ; 005b801d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b801e
    PUSH EDX                            ; 005b8022
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8023
    PUSH EBX                            ; 005b8027
    CALL crt_unknown.c_FUN_005bcd10     ; 005b8028
        ;   XREF to: 005bcd10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bcd10()
    ADD ESP,0xc                         ; 005b802d
    ADD ESP,0x4                         ; 005b8030
    POP EBX                             ; 005b8033
    RET                                 ; 005b8034

