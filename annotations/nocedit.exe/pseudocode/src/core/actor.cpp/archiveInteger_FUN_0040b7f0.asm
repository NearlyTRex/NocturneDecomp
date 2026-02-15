; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveInteger_FUN_0040b7f0(int *int_ptr,char *property_name)
;
; Parameters:
; int *            Stack[0x4]:4   int_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[64]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 at 0040c22c
;   core_ammo.cpp_CAmmo_archive_FUN_00410f40 at 00410f82
;   core_ammobox.cpp_CAmmoBox_archive_FUN_00411900 at 00411942
;   core_anvil.cpp_CAnvil_archive_FUN_00411f50 at 00411fa6
;   core_backgnd.cpp_CBackgroundActor_archive_FUN_00412990 at 004129be
;   core_baron.cpp_CBaron_archive_FUN_00413a70 at 00413abf
;   core_barrier.cpp_CBarrier_archive_FUN_00414340 at 0041438f
;   core_batman.cpp_CBatman_archive_FUN_00417580 at 00417608
;   core_biggs.cpp_CBiggs_archive_FUN_00418ac0 at 00418b11
;   core_bodypart.cpp_CBodyPart_archive_FUN_00419880 at 004198a0
;   ... and 54 more
;
; Referenced Globals:
;   TerminatedCString s_d_00613f28
;   TerminatedCString s_s_d_00613f2b
;   string s_Integer_value_0066e148
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

    PUSH ESI                            ; 0040b7f0
        ;   Label: core_actor.cpp_archiveInteger_FUN_0040b7f0
    PUSH EDI                            ; 0040b7f1
    PUSH EBP                            ; 0040b7f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b7f3
    CMP dword ptr [0x00822038],0x1      ; 0040b7f7 | g_ActorReadingMode
    JNZ 0x0040b844                      ; 0040b7fe
        ;   XREF to: 0040b844 (CONDITIONAL_JUMP)  ; LAB_0040b844
    PUSH EAX                            ; 0040b800
    PUSH 0x613f28                       ; 0040b801 | = "%d"
    MOV ESI,dword ptr [0x00822034]      ; 0040b806 | g_ActorDataFile
    PUSH ESI                            ; 0040b80c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b80d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040b812
    CMP EAX,0x1                         ; 0040b815
    JNZ 0x0040b830                      ; 0040b818
        ;   XREF to: 0040b830 (CONDITIONAL_JUMP)  ; LAB_0040b830
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b81a
        ;   Label: LAB_0040b81a
    PUSH EBP                            ; 0040b81e
    PUSH 0x66e148                       ; 0040b81f | = "Integer value"
    CALL core_actor.cpp_archiveDescription_FUN_0040b290 ; 0040b824
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b829
    POP EBP                             ; 0040b82c
    POP EDI                             ; 0040b82d
    POP ESI                             ; 0040b82e
    RET                                 ; 0040b82f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b830
        ;   Label: LAB_0040b830
    PUSH EDI                            ; 0040b834
    PUSH 0x66e148                       ; 0040b835 | = "Integer value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b83a
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b83f
    JMP 0x0040b81a                      ; 0040b842
        ;   XREF to: 0040b81a (UNCONDITIONAL_JUMP)  ; LAB_0040b81a
    PUSH EBX                            ; 0040b844
        ;   Label: LAB_0040b844
    MOV ECX,dword ptr [EAX]             ; 0040b845
    PUSH ECX                            ; 0040b847
    PUSH 0x66e178                       ; 0040b848 | g_PropertyNamePrefix
    PUSH 0x613f2b                       ; 0040b84d | = "%s%d"
    MOV EBX,dword ptr [0x00822034]      ; 0040b852 | g_ActorDataFile
    PUSH EBX                            ; 0040b858
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b859
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b85e
    POP EBX                             ; 0040b861
    JMP 0x0040b81a                      ; 0040b862
        ;   XREF to: 0040b81a (UNCONDITIONAL_JUMP)  ; LAB_0040b81a

