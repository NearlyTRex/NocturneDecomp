; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveFloat_FUN_0040b5f0(float *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[76]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040 at 0040c08d
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e400 at 0040e467
;   core_anvil.cpp_CAnvil_archive_FUN_0040e860 at 0040e8a2
;   core_armour.cpp_FUN_0040ebe0 at 0040ebfb
;   core_bat.cpp_CBat_archive_FUN_00410c90 at 00410cbe
;   core_batcreat.cpp_FUN_00412110 at 0041212b
;   core_batman.cpp_CBatman_archive_FUN_00413b60 at 00413b7b
;   core_battery.cpp_CBattery_archive_FUN_004145a0 at 004145ce
;   core_beast.cpp_FUN_00414800 at 0041481b
;   core_biggs.cpp_FUN_00414f30 at 00414f4b
;   ... and 66 more
;
; Referenced Globals:
;   undefined4 DAT_005d2aa1
;   undefined4 DAT_005d2aa4
;   TerminatedCString s_Floating_point_value_00610690
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b110
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b5f0
        ;   Label: core_actor.cpp_archiveFloat_FUN_0040b5f0
    PUSH EDI                            ; 0040b5f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b5f2
    CMP dword ptr [0x007c3038],0x1      ; 0040b5f6 | DAT_007c3038
    JNZ 0x0040b644                      ; 0040b5fd
        ;   XREF to: 0040b644 (CONDITIONAL_JUMP)  ; LAB_0040b644
    PUSH EAX                            ; 0040b5ff
    PUSH 0x5d2aa1                       ; 0040b600 | DAT_005d2aa1
    MOV EBX,dword ptr [0x007c3034]      ; 0040b605 | DAT_007c3034
    PUSH EBX                            ; 0040b60b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b60c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040b611
    CMP EAX,0x1                         ; 0040b614
    JNZ 0x0040b62e                      ; 0040b617
        ;   XREF to: 0040b62e (CONDITIONAL_JUMP)  ; LAB_0040b62e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b619
        ;   Label: LAB_0040b619
    PUSH EDI                            ; 0040b61d
    PUSH 0x610690                       ; 0040b61e | = "Floating point value"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b623
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b628
    POP EDI                             ; 0040b62b
    POP EBX                             ; 0040b62c
    RET                                 ; 0040b62d
    PUSH ESI                            ; 0040b62e
        ;   Label: LAB_0040b62e
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b62f
    PUSH ESI                            ; 0040b633
    PUSH 0x610690                       ; 0040b634 | = "Floating point value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b639
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b63e
    POP ESI                             ; 0040b641
    JMP 0x0040b619                      ; 0040b642
        ;   XREF to: 0040b619 (UNCONDITIONAL_JUMP)  ; LAB_0040b619
    SUB ESP,0x8                         ; 0040b644
        ;   Label: LAB_0040b644
    FLD float ptr [EAX]                 ; 0040b647
    FSTP double ptr [ESP]               ; 0040b649
    PUSH 0x6106c0                       ; 0040b64c | DAT_006106c0
    PUSH 0x5d2aa4                       ; 0040b651 | DAT_005d2aa4
    MOV ECX,dword ptr [0x007c3034]      ; 0040b656 | DAT_007c3034
    PUSH ECX                            ; 0040b65c
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b65d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 0040b662
    JMP 0x0040b619                      ; 0040b665
        ;   XREF to: 0040b619 (UNCONDITIONAL_JUMP)  ; LAB_0040b619

