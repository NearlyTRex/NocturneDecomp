; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveString_FUN_0040b440(char *string_buffer,char *property_type)
;
; Parameters:
; char *           Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   property_type
;
; XREF[57]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040 at 0040c0ce
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 at 0040b815
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 at 0040b795
;   core_actor.cpp_archiveLocalizedString_FUN_0040b560 at 0040b5b5
;   core_ammo.cpp_CAmmo_archive_FUN_0040dd40 at 0040dd6e
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e400 at 0040e42e
;   core_anvil.cpp_CAnvil_archive_FUN_0040e860 at 0040e88e
;   core_armour.cpp_CArmour_archive_FUN_0040ebe0 at 0040ec31
;   core_baron.cpp_CBaron_archive_FUN_00410180 at 004101a7
;   core_barrier.cpp_CBarrier_archive_FUN_00410940 at 0041097b
;   ... and 47 more
;
; Referenced Globals:
;   TerminatedCString s_anon_005d2a88
;   TerminatedCString s_s_s_005d2a8e
;   TerminatedCString s_String_00610688
;   undefined1 DAT_006106c0
;   undefined4 DAT_00626114
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b110
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_stdio.c_ungetc_FUN_005c0700
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b440
        ;   Label: core_actor.cpp_archiveString_FUN_0040b440
    PUSH ESI                            ; 0040b441
    PUSH EDI                            ; 0040b442
    PUSH EBP                            ; 0040b443
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b444
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b448
    CMP dword ptr [0x007c3038],0x1      ; 0040b44c | DAT_007c3038
    JNZ 0x0040b527                      ; 0040b453
        ;   XREF to: 0040b527 (CONDITIONAL_JUMP)  ; LAB_0040b527
    MOV EDI,dword ptr [0x007c3034]      ; 0040b459 | DAT_007c3034
        ;   Label: LAB_0040b459
    PUSH EDI                            ; 0040b45f
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040b460
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    MOV EDX,EAX                         ; 0040b465
    ADD ESP,0x4                         ; 0040b467
    INC DL                              ; 0040b46a
    AND EDX,0xff                        ; 0040b46c
    TEST byte ptr [EDX + 0x626114],0x2  ; 0040b472 | DAT_00626114
    JNZ 0x0040b459                      ; 0040b479
        ;   XREF to: 0040b459 (CONDITIONAL_JUMP)  ; LAB_0040b459
    CMP EAX,0x22                        ; 0040b47b
    JZ 0x0040b48e                       ; 0040b47e
        ;   XREF to: 0040b48e (CONDITIONAL_JUMP)  ; LAB_0040b48e
    PUSH EBX                            ; 0040b480
    PUSH 0x610688                       ; 0040b481 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b486
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b48b
    MOV EBP,dword ptr [0x007c3034]      ; 0040b48e | DAT_007c3034
        ;   Label: LAB_0040b48e
    PUSH EBP                            ; 0040b494
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040b495
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040b49a
    CMP EAX,0x22                        ; 0040b49d
    JZ 0x0040b501                       ; 0040b4a0
        ;   XREF to: 0040b501 (CONDITIONAL_JUMP)  ; LAB_0040b501
    MOV EDX,dword ptr [0x007c3034]      ; 0040b4a2 | DAT_007c3034
    PUSH EDX                            ; 0040b4a8
    PUSH EAX                            ; 0040b4a9
    CALL crt_stdio.c_ungetc_FUN_005c0700 ; 0040b4aa
        ;   XREF to: 005c0700 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005c0700()
    ADD ESP,0x8                         ; 0040b4af
    PUSH ESI                            ; 0040b4b2
    PUSH 0x5d2a88                       ; 0040b4b3 | = "%[^\"]"
    MOV ECX,dword ptr [0x007c3034]      ; 0040b4b8 | DAT_007c3034
    PUSH ECX                            ; 0040b4be
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b4bf
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040b4c4
    CMP EAX,0x1                         ; 0040b4c7
    JZ 0x0040b4da                       ; 0040b4ca
        ;   XREF to: 0040b4da (CONDITIONAL_JUMP)  ; LAB_0040b4da
    PUSH EBX                            ; 0040b4cc
    PUSH 0x610688                       ; 0040b4cd | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b4d2
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b4d7
    MOV ESI,dword ptr [0x007c3034]      ; 0040b4da | DAT_007c3034
        ;   Label: LAB_0040b4da
    PUSH ESI                            ; 0040b4e0
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040b4e1
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040b4e6
    CMP EAX,0x22                        ; 0040b4e9
    JNZ 0x0040b506                      ; 0040b4ec
        ;   XREF to: 0040b506 (CONDITIONAL_JUMP)  ; LAB_0040b506
    PUSH EBX                            ; 0040b4ee
        ;   Label: LAB_0040b4ee
    PUSH 0x610688                       ; 0040b4ef | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b4f4
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b4f9
    POP EBP                             ; 0040b4fc
    POP EDI                             ; 0040b4fd
    POP ESI                             ; 0040b4fe
    POP EBX                             ; 0040b4ff
    RET                                 ; 0040b500
    MOV byte ptr [ESI],0x0              ; 0040b501
        ;   Label: LAB_0040b501
    JMP 0x0040b4ee                      ; 0040b504
        ;   XREF to: 0040b4ee (UNCONDITIONAL_JUMP)  ; LAB_0040b4ee
    PUSH EBX                            ; 0040b506
        ;   Label: LAB_0040b506
    PUSH 0x610688                       ; 0040b507 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b50c
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b511
    PUSH EBX                            ; 0040b514
    PUSH 0x610688                       ; 0040b515 | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b51a
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b51f
    POP EBP                             ; 0040b522
    POP EDI                             ; 0040b523
    POP ESI                             ; 0040b524
    POP EBX                             ; 0040b525
    RET                                 ; 0040b526
    PUSH ESI                            ; 0040b527
        ;   Label: LAB_0040b527
    PUSH 0x6106c0                       ; 0040b528 | DAT_006106c0
    PUSH 0x5d2a8e                       ; 0040b52d | = "%s\"%s\""
    MOV ECX,dword ptr [0x007c3034]      ; 0040b532 | DAT_007c3034
    PUSH ECX                            ; 0040b538
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b539
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040b53e
    PUSH EBX                            ; 0040b541
    PUSH 0x610688                       ; 0040b542 | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b547
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b54c
    POP EBP                             ; 0040b54f
    POP EDI                             ; 0040b550
    POP ESI                             ; 0040b551
    POP EBX                             ; 0040b552
    RET                                 ; 0040b553

