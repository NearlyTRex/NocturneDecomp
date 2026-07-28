; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveVector_FUN_0040c450(CVector3f *vector_ptr,char *property_name)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vector_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[24]:
;   core_barrier.cpp_CBarrier_archive_FUN_00411800 at 0041181a
;   core_batman.cpp_CBatman_archive_FUN_00414510 at 004145c0
;   core_boneguy.cpp_FUN_00419ce0 at 00419e3b
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60 at 0041ecc0
;   core_boxactor.cpp_CLightActor_archive_FUN_0041f600 at 0041f63c
;   core_conveyor.cpp_FUN_0043b310 at 0043b32a
;   core_curtain.cpp_CCurtain_archive_FUN_0043f6b0 at 0043f6cd
;   core_door.cpp_CDoor_archive_FUN_00455ee0 at 00455fc3
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450 at 0045a68a
;   core_drip.cpp_CDrip_archive_FUN_004621d0 at 0046222a
;   ... and 14 more
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_00577c04
;   TerminatedCString s_s_g_g_g_00577c0d
;   TerminatedCString s_s_3D_vector_005acc10
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

    PUSH EBX                            ; 0040c450
        ;   Label: core_actor.cpp_archiveVector_FUN_0040c450
    PUSH EDI                            ; 0040c451
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040c452
    CMP dword ptr [0x00763e88],0x1      ; 0040c456 | DAT_00763e88
    JNZ 0x0040c4ac                      ; 0040c45d
        ;   XREF to: 0040c4ac (CONDITIONAL_JUMP)  ; LAB_0040c4ac
    LEA EDX,[EAX + 0x8]                 ; 0040c45f
    PUSH EDX                            ; 0040c462
    LEA EDX,[EAX + 0x4]                 ; 0040c463
    PUSH EDX                            ; 0040c466
    PUSH EAX                            ; 0040c467
    PUSH 0x577c04                       ; 0040c468 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c46d | DAT_00763e84
    PUSH EBX                            ; 0040c473
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c474
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0040c479
    CMP EAX,0x3                         ; 0040c47c
    JNZ 0x0040c496                      ; 0040c47f
        ;   XREF to: 0040c496 (CONDITIONAL_JUMP)  ; LAB_0040c496
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040c481
        ;   Label: LAB_0040c481
    PUSH EDI                            ; 0040c485
    PUSH 0x5acc10                       ; 0040c486 | = "3D vector"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c48b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040c3a0(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c490
    POP EDI                             ; 0040c493
    POP EBX                             ; 0040c494
    RET                                 ; 0040c495
    PUSH ESI                            ; 0040c496
        ;   Label: LAB_0040c496
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c497
    PUSH ESI                            ; 0040c49b
    PUSH 0x5acc10                       ; 0040c49c | = "3D vector"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c4a1
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c4a6
    POP ESI                             ; 0040c4a9
    JMP 0x0040c481                      ; 0040c4aa
        ;   XREF to: 0040c481 (UNCONDITIONAL_JUMP)  ; LAB_0040c481
    SUB ESP,0x8                         ; 0040c4ac
        ;   Label: LAB_0040c4ac
    FLD float ptr [EAX + 0x8]           ; 0040c4af
    FSTP double ptr [ESP]               ; 0040c4b2
    SUB ESP,0x8                         ; 0040c4b5
    FLD float ptr [EAX + 0x4]           ; 0040c4b8
    FSTP double ptr [ESP]               ; 0040c4bb
    SUB ESP,0x8                         ; 0040c4be
    FLD float ptr [EAX]                 ; 0040c4c1
    FSTP double ptr [ESP]               ; 0040c4c3
    PUSH 0x5acc90                       ; 0040c4c6 | DAT_005acc90
    PUSH 0x577c0d                       ; 0040c4cb | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x00763e84]      ; 0040c4d0 | DAT_00763e84
    PUSH ECX                            ; 0040c4d6
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c4d7
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 0040c4dc
    JMP 0x0040c481                      ; 0040c4df
        ;   XREF to: 0040c481 (UNCONDITIONAL_JUMP)  ; LAB_0040c481

