; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveFloat_FUN_0040b770(float *float_ptr,char *property_name)
;
; Parameters:
; float *          Stack[0x4]:4   float_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[67]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 at 0040c20d
;   core_ammobox.cpp_CAmmoBox_archive_FUN_00411900 at 00411967
;   core_anvil.cpp_CAnvil_archive_FUN_00411f50 at 00411f92
;   core_armour.cpp_CArmour_archive_FUN_004123a0 at 004123bb
;   core_bat.cpp_CBat_archive_FUN_00414910 at 004149e0
;   core_batcreat.cpp_CBatCreature_archive_FUN_00415d70 at 00415d8b
;   core_batman.cpp_CBatman_archive_FUN_00417580 at 0041759b
;   core_battery.cpp_CBattery_archive_FUN_00418000 at 00418042
;   core_beast.cpp_CBeast_archive_FUN_00418330 at 0041834b
;   core_biggs.cpp_CBiggs_archive_FUN_00418ac0 at 00418b25
;   ... and 57 more
;
; Referenced Globals:
;   TerminatedCString s_f_00613f20
;   TerminatedCString s_s_g_00613f23
;   string s_Floating_point_value_0066e130
;   char[104] g_PropertyNamePrefix
;   _FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b290
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b770
        ;   Label: core_actor.cpp_archiveFloat_FUN_0040b770
    PUSH EDI                            ; 0040b771
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b772
    CMP dword ptr [0x00822038],0x1      ; 0040b776 | g_ActorReadingMode
    JNZ 0x0040b7c4                      ; 0040b77d
        ;   XREF to: 0040b7c4 (CONDITIONAL_JUMP)  ; LAB_0040b7c4
    PUSH EAX                            ; 0040b77f
    PUSH 0x613f20                       ; 0040b780 | = "%f"
    MOV EBX,dword ptr [0x00822034]      ; 0040b785 | g_ActorDataFile
    PUSH EBX                            ; 0040b78b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b78c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040b791
    CMP EAX,0x1                         ; 0040b794
    JNZ 0x0040b7ae                      ; 0040b797
        ;   XREF to: 0040b7ae (CONDITIONAL_JUMP)  ; LAB_0040b7ae
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b799
        ;   Label: LAB_0040b799
    PUSH EDI                            ; 0040b79d
    PUSH 0x66e130                       ; 0040b79e | = "Floating point value"
    CALL core_actor.cpp_archiveDescription_FUN_0040b290 ; 0040b7a3
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b7a8
    POP EDI                             ; 0040b7ab
    POP EBX                             ; 0040b7ac
    RET                                 ; 0040b7ad
    PUSH ESI                            ; 0040b7ae
        ;   Label: LAB_0040b7ae
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b7af
    PUSH ESI                            ; 0040b7b3
    PUSH 0x66e130                       ; 0040b7b4 | = "Floating point value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b7b9
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b7be
    POP ESI                             ; 0040b7c1
    JMP 0x0040b799                      ; 0040b7c2
        ;   XREF to: 0040b799 (UNCONDITIONAL_JUMP)  ; LAB_0040b799
    SUB ESP,0x8                         ; 0040b7c4
        ;   Label: LAB_0040b7c4
    FLD float ptr [EAX]                 ; 0040b7c7
    FSTP double ptr [ESP]               ; 0040b7c9
    PUSH 0x66e178                       ; 0040b7cc | g_PropertyNamePrefix
    PUSH 0x613f23                       ; 0040b7d1 | = "%s%g"
    MOV ECX,dword ptr [0x00822034]      ; 0040b7d6 | g_ActorDataFile
    PUSH ECX                            ; 0040b7dc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b7dd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0040b7e2
    JMP 0x0040b799                      ; 0040b7e5
        ;   XREF to: 0040b799 (UNCONDITIONAL_JUMP)  ; LAB_0040b799

