; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveFloat_FUN_0040b830(float *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[69]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280 at 0040c2cd
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e8f0 at 0040e957
;   core_asgaya.cpp_CAsgaya_archive_FUN_005a1aa0 at 005a1b05
;   core_baal.cpp_CBaal_archive_FUN_00597c70 at 00597c8b
;   core_bat.cpp_CBat_archive_FUN_0040ef20 at 0040ef4e
;   core_battery.cpp_CBattery_archive_FUN_0040f630 at 0040f65e
;   core_bird.cpp_CBird_archive_FUN_0040ff80 at 0040ffd1
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 00419093
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 at 0041fbc8
;   core_boxactor.cpp_CLightActor_archive_FUN_004207f0 at 00420863
;   ... and 59 more
;
; Referenced Globals:
;   undefined4 DAT_005b5aed
;   undefined4 DAT_005b5af0
;   TerminatedCString s_Floating_point_value_005f0960
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b350
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b830
        ;   Label: core_actor.cpp_archiveFloat_FUN_0040b830
    PUSH EDI                            ; 0040b831
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b832
    CMP dword ptr [0x007df9b8],0x1      ; 0040b836 | DAT_007df9b8
    JNZ 0x0040b884                      ; 0040b83d
        ;   XREF to: 0040b884 (CONDITIONAL_JUMP)  ; LAB_0040b884
    PUSH EAX                            ; 0040b83f
    PUSH 0x5b5aed                       ; 0040b840 | DAT_005b5aed
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b845 | DAT_007df9b4
    PUSH EBX                            ; 0040b84b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b84c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040b851
    CMP EAX,0x1                         ; 0040b854
    JNZ 0x0040b86e                      ; 0040b857
        ;   XREF to: 0040b86e (CONDITIONAL_JUMP)  ; LAB_0040b86e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b859
        ;   Label: LAB_0040b859
    PUSH EDI                            ; 0040b85d
    PUSH 0x5f0960                       ; 0040b85e | = "Floating point value"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b863
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b868
    POP EDI                             ; 0040b86b
    POP EBX                             ; 0040b86c
    RET                                 ; 0040b86d
    PUSH ESI                            ; 0040b86e
        ;   Label: LAB_0040b86e
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b86f
    PUSH ESI                            ; 0040b873
    PUSH 0x5f0960                       ; 0040b874 | = "Floating point value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b879
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b87e
    POP ESI                             ; 0040b881
    JMP 0x0040b859                      ; 0040b882
        ;   XREF to: 0040b859 (UNCONDITIONAL_JUMP)  ; LAB_0040b859
    SUB ESP,0x8                         ; 0040b884
        ;   Label: LAB_0040b884
    FLD float ptr [EAX]                 ; 0040b887
    FSTP double ptr [ESP]               ; 0040b889
    PUSH 0x5f0990                       ; 0040b88c | DAT_005f0990
    PUSH 0x5b5af0                       ; 0040b891 | DAT_005b5af0
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b896 | DAT_007df9b4
    PUSH ECX                            ; 0040b89c
    CALL crt_unknown.c_FUN_005a3140     ; 0040b89d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 0040b8a2
    JMP 0x0040b859                      ; 0040b8a5
        ;   XREF to: 0040b859 (UNCONDITIONAL_JUMP)  ; LAB_0040b859

