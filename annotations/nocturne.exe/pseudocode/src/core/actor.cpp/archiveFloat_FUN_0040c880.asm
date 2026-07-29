; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveFloat_FUN_0040c880(float *float_ptr,char *property_name)
;
; Parameters:
; float *          Stack[0x4]:4   float_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[67]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 at 0040d31d
;   core_ammobox.cpp_FUN_0040f390 at 0040f3f7
;   core_anvil.cpp_CAnvil_archive_FUN_0040f7d0 at 0040f812
;   core_armour.cpp_FUN_0040fb60 at 0040fb7b
;   core_bat.cpp_CBat_archive_FUN_00411b50 at 00411b7e
;   core_batcreat.cpp_FUN_00412d80 at 00412d9b
;   core_batman.cpp_CBatman_archive_FUN_00414510 at 0041452b
;   core_battery.cpp_CBattery_archive_FUN_00414ef0 at 00414f1e
;   core_beast.cpp_FUN_00415160 at 0041517b
;   core_biggs.cpp_CBiggs_archive_FUN_00415870 at 0041588b
;   ... and 57 more
;
; Referenced Globals:
;   TerminatedCString s_f_00577c79
;   TerminatedCString s_s_g_00577c7c
;   TerminatedCString s_Floating_point_value_005acc60
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040c3a0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c880
        ;   Label: core_actor.cpp_archiveFloat_FUN_0040c880
    PUSH EDI                            ; 0040c881
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040c882
    CMP dword ptr [0x00763e88],0x1      ; 0040c886 | DAT_00763e88
    JNZ 0x0040c8d4                      ; 0040c88d
        ;   XREF to: 0040c8d4 (CONDITIONAL_JUMP)  ; LAB_0040c8d4
    PUSH EAX                            ; 0040c88f
    PUSH 0x577c79                       ; 0040c890 | = "%f"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c895 | DAT_00763e84
    PUSH EBX                            ; 0040c89b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c89c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040c8a1
    CMP EAX,0x1                         ; 0040c8a4
    JNZ 0x0040c8be                      ; 0040c8a7
        ;   XREF to: 0040c8be (CONDITIONAL_JUMP)  ; LAB_0040c8be
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040c8a9
        ;   Label: LAB_0040c8a9
    PUSH EDI                            ; 0040c8ad
    PUSH 0x5acc60                       ; 0040c8ae | = "Floating point value"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c8b3
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040c3a0(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c8b8
    POP EDI                             ; 0040c8bb
    POP EBX                             ; 0040c8bc
    RET                                 ; 0040c8bd
    PUSH ESI                            ; 0040c8be
        ;   Label: LAB_0040c8be
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c8bf
    PUSH ESI                            ; 0040c8c3
    PUSH 0x5acc60                       ; 0040c8c4 | = "Floating point value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c8c9
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c8ce
    POP ESI                             ; 0040c8d1
    JMP 0x0040c8a9                      ; 0040c8d2
        ;   XREF to: 0040c8a9 (UNCONDITIONAL_JUMP)  ; LAB_0040c8a9
    SUB ESP,0x8                         ; 0040c8d4
        ;   Label: LAB_0040c8d4
    FLD float ptr [EAX]                 ; 0040c8d7
    FSTP double ptr [ESP]               ; 0040c8d9
    PUSH 0x5acc90                       ; 0040c8dc | DAT_005acc90
    PUSH 0x577c7c                       ; 0040c8e1 | = "%s%g"
    MOV ECX,dword ptr [0x00763e84]      ; 0040c8e6 | DAT_00763e84
    PUSH ECX                            ; 0040c8ec
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c8ed
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 0040c8f2
    JMP 0x0040c8a9                      ; 0040c8f5
        ;   XREF to: 0040c8a9 (UNCONDITIONAL_JUMP)  ; LAB_0040c8a9

