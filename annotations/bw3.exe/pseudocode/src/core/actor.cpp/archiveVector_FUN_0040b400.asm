; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(CVector3f *vector_ptr,char *property_name)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vector_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[21]:
;   core_barrier.cpp_CBarrier_archive_FUN_0040ebd0 at 0040ebea
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 004191cb
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 at 0041fbf0
;   core_boxactor.cpp_CLightActor_archive_FUN_004207f0 at 0042082c
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b7ac
;   core_construc.cpp_CConstruct_archive_FUN_00443ca0 at 00443d64
;   core_curtain.cpp_CCurtain_archive_FUN_00448420 at 0044843d
;   core_door.cpp_CDoor_archive_FUN_00464cd0 at 00464db3
;   core_drip.cpp_CDrip_archive_FUN_0046ebc0 at 0046ec1a
;   core_emitter.cpp_CEmitter_archive_FUN_00488bb0 at 00488bdf
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005b5a78
;   TerminatedCString s_s_g_g_g_005b5a81
;   TerminatedCString s_s_3D_vector_005f0910
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

    PUSH EBX                            ; 0040b400
        ;   Label: core_actor.cpp_archiveVector_FUN_0040b400
    PUSH EDI                            ; 0040b401
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b402
    CMP dword ptr [0x007df9b8],0x1      ; 0040b406 | DAT_007df9b8
    JNZ 0x0040b45c                      ; 0040b40d
        ;   XREF to: 0040b45c (CONDITIONAL_JUMP)  ; LAB_0040b45c
    LEA EDX,[EAX + 0x8]                 ; 0040b40f
    PUSH EDX                            ; 0040b412
    LEA EDX,[EAX + 0x4]                 ; 0040b413
    PUSH EDX                            ; 0040b416
    PUSH EAX                            ; 0040b417
    PUSH 0x5b5a78                       ; 0040b418 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b41d | DAT_007df9b4
    PUSH EBX                            ; 0040b423
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b424
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0040b429
    CMP EAX,0x3                         ; 0040b42c
    JNZ 0x0040b446                      ; 0040b42f
        ;   XREF to: 0040b446 (CONDITIONAL_JUMP)  ; LAB_0040b446
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b431
        ;   Label: LAB_0040b431
    PUSH EDI                            ; 0040b435
    PUSH 0x5f0910                       ; 0040b436 | = "3D vector"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b43b
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b440
    POP EDI                             ; 0040b443
    POP EBX                             ; 0040b444
    RET                                 ; 0040b445
    PUSH ESI                            ; 0040b446
        ;   Label: LAB_0040b446
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b447
    PUSH ESI                            ; 0040b44b
    PUSH 0x5f0910                       ; 0040b44c | = "3D vector"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b451
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b456
    POP ESI                             ; 0040b459
    JMP 0x0040b431                      ; 0040b45a
        ;   XREF to: 0040b431 (UNCONDITIONAL_JUMP)  ; LAB_0040b431
    SUB ESP,0x8                         ; 0040b45c
        ;   Label: LAB_0040b45c
    FLD float ptr [EAX + 0x8]           ; 0040b45f
    FSTP double ptr [ESP]               ; 0040b462
    SUB ESP,0x8                         ; 0040b465
    FLD float ptr [EAX + 0x4]           ; 0040b468
    FSTP double ptr [ESP]               ; 0040b46b
    SUB ESP,0x8                         ; 0040b46e
    FLD float ptr [EAX]                 ; 0040b471
    FSTP double ptr [ESP]               ; 0040b473
    PUSH 0x5f0990                       ; 0040b476 | DAT_005f0990
    PUSH 0x5b5a81                       ; 0040b47b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b480 | DAT_007df9b4
    PUSH ECX                            ; 0040b486
    CALL crt_unknown.c_FUN_005a3140     ; 0040b487
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 0040b48c
    JMP 0x0040b431                      ; 0040b48f
        ;   XREF to: 0040b431 (UNCONDITIONAL_JUMP)  ; LAB_0040b431

