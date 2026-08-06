; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(int *int_ptr,char *property_name)
;
; Parameters:
; int *            Stack[0x4]:4   int_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[64]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 at 0040d33c
;   core_ammo.cpp_CAmmo_archive_FUN_0040ecf0 at 0040ed32
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040f390 at 0040f3d2
;   core_anvil.cpp_CAnvil_archive_FUN_0040f7d0 at 0040f826
;   core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040 at 0041006e
;   core_baron.cpp_CBaron_archive_FUN_00411080 at 004110cf
;   core_barrier.cpp_CBarrier_archive_FUN_00411800 at 0041184f
;   core_batman.cpp_CBatman_archive_FUN_00414510 at 00414598
;   core_biggs.cpp_CBiggs_archive_FUN_00415870 at 004158c1
;   core_bodypart.cpp_CBodyPart_archive_FUN_00416570 at 00416590
;   ... and 54 more
;
; Referenced Globals:
;   TerminatedCString s_d_00577c81
;   TerminatedCString s_s_d_00577c84
;   TerminatedCString s_Integer_value_005acc78
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

    PUSH ESI                            ; 0040c900
        ;   Label: core_actor.cpp_archiveInteger_FUN_0040c900
    PUSH EDI                            ; 0040c901
    PUSH EBP                            ; 0040c902
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040c903
    CMP dword ptr [0x00763e88],0x1      ; 0040c907 | DAT_00763e88
    JNZ 0x0040c954                      ; 0040c90e
        ;   XREF to: 0040c954 (CONDITIONAL_JUMP)  ; LAB_0040c954
    PUSH EAX                            ; 0040c910
    PUSH 0x577c81                       ; 0040c911 | = "%d"
    MOV ESI,dword ptr [0x00763e84]      ; 0040c916 | DAT_00763e84
    PUSH ESI                            ; 0040c91c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c91d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040c922
    CMP EAX,0x1                         ; 0040c925
    JNZ 0x0040c940                      ; 0040c928
        ;   XREF to: 0040c940 (CONDITIONAL_JUMP)  ; LAB_0040c940
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c92a
        ;   Label: LAB_0040c92a
    PUSH EBP                            ; 0040c92e
    PUSH 0x5acc78                       ; 0040c92f | = "Integer value"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c934
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040c3a0(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c939
    POP EBP                             ; 0040c93c
    POP EDI                             ; 0040c93d
    POP ESI                             ; 0040c93e
    RET                                 ; 0040c93f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c940
        ;   Label: LAB_0040c940
    PUSH EDI                            ; 0040c944
    PUSH 0x5acc78                       ; 0040c945 | = "Integer value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c94a
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c94f
    JMP 0x0040c92a                      ; 0040c952
        ;   XREF to: 0040c92a (UNCONDITIONAL_JUMP)  ; LAB_0040c92a
    PUSH EBX                            ; 0040c954
        ;   Label: LAB_0040c954
    MOV ECX,dword ptr [EAX]             ; 0040c955
    PUSH ECX                            ; 0040c957
    PUSH 0x5acc90                       ; 0040c958 | DAT_005acc90
    PUSH 0x577c84                       ; 0040c95d | = "%s%d"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c962 | DAT_00763e84
    PUSH EBX                            ; 0040c968
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c969
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005644f0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040c96e
    POP EBX                             ; 0040c971
    JMP 0x0040c92a                      ; 0040c972
        ;   XREF to: 0040c92a (UNCONDITIONAL_JUMP)  ; LAB_0040c92a

