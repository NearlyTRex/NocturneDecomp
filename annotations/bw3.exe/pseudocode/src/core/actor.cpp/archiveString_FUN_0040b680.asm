; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveString_FUN_0040b680(char *string_buffer,char *property_type)
;
; Parameters:
; char *           Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   property_type
;
; XREF[45]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280 at 0040c30e
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 at 0040ba55
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 at 0040b9d5
;   core_actor.cpp_archiveLocalizedString_FUN_0040b7a0 at 0040b7f5
;   core_ammo.cpp_CAmmo_archive_FUN_0040e000 at 0040e02e
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e8f0 at 0040e91e
;   core_barrier.cpp_CBarrier_archive_FUN_0040ebd0 at 0040ec0b
;   core_bat.cpp_CBat_archive_FUN_0040ef20 at 0040ef3a
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 004190f7
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 at 0041fc04
;   ... and 35 more
;
; Referenced Globals:
;   TerminatedCString s_anon_005b5ad4
;   TerminatedCString s_s_s_005b5ada
;   TerminatedCString s_String_005f0958
;   undefined1 DAT_005f0990
;   undefined4 DAT_006074b8
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b350
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_stdio.c_ungetc_FUN_005a3480
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b680
        ;   Label: core_actor.cpp_archiveString_FUN_0040b680
    PUSH ESI                            ; 0040b681
    PUSH EDI                            ; 0040b682
    PUSH EBP                            ; 0040b683
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b684
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b688
    CMP dword ptr [0x007df9b8],0x1      ; 0040b68c | DAT_007df9b8
    JNZ 0x0040b767                      ; 0040b693
        ;   XREF to: 0040b767 (CONDITIONAL_JUMP)  ; LAB_0040b767
    MOV EDI,dword ptr [0x007df9b4]      ; 0040b699 | DAT_007df9b4
        ;   Label: LAB_0040b699
    PUSH EDI                            ; 0040b69f
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040b6a0
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    MOV EDX,EAX                         ; 0040b6a5
    ADD ESP,0x4                         ; 0040b6a7
    INC DL                              ; 0040b6aa
    AND EDX,0xff                        ; 0040b6ac
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0040b6b2 | DAT_006074b8
    JNZ 0x0040b699                      ; 0040b6b9
        ;   XREF to: 0040b699 (CONDITIONAL_JUMP)  ; LAB_0040b699
    CMP EAX,0x22                        ; 0040b6bb
    JZ 0x0040b6ce                       ; 0040b6be
        ;   XREF to: 0040b6ce (CONDITIONAL_JUMP)  ; LAB_0040b6ce
    PUSH EBX                            ; 0040b6c0
    PUSH 0x5f0958                       ; 0040b6c1 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b6c6
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b6cb
    MOV EBP,dword ptr [0x007df9b4]      ; 0040b6ce | DAT_007df9b4
        ;   Label: LAB_0040b6ce
    PUSH EBP                            ; 0040b6d4
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040b6d5
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040b6da
    CMP EAX,0x22                        ; 0040b6dd
    JZ 0x0040b741                       ; 0040b6e0
        ;   XREF to: 0040b741 (CONDITIONAL_JUMP)  ; LAB_0040b741
    MOV EDX,dword ptr [0x007df9b4]      ; 0040b6e2 | DAT_007df9b4
    PUSH EDX                            ; 0040b6e8
    PUSH EAX                            ; 0040b6e9
    CALL crt_stdio.c_ungetc_FUN_005a3480 ; 0040b6ea
        ;   XREF to: 005a3480 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005a3480()
    ADD ESP,0x8                         ; 0040b6ef
    PUSH ESI                            ; 0040b6f2
    PUSH 0x5b5ad4                       ; 0040b6f3 | = "%[^\"]"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b6f8 | DAT_007df9b4
    PUSH ECX                            ; 0040b6fe
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b6ff
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040b704
    CMP EAX,0x1                         ; 0040b707
    JZ 0x0040b71a                       ; 0040b70a
        ;   XREF to: 0040b71a (CONDITIONAL_JUMP)  ; LAB_0040b71a
    PUSH EBX                            ; 0040b70c
    PUSH 0x5f0958                       ; 0040b70d | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b712
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b717
    MOV ESI,dword ptr [0x007df9b4]      ; 0040b71a | DAT_007df9b4
        ;   Label: LAB_0040b71a
    PUSH ESI                            ; 0040b720
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040b721
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040b726
    CMP EAX,0x22                        ; 0040b729
    JNZ 0x0040b746                      ; 0040b72c
        ;   XREF to: 0040b746 (CONDITIONAL_JUMP)  ; LAB_0040b746
    PUSH EBX                            ; 0040b72e
        ;   Label: LAB_0040b72e
    PUSH 0x5f0958                       ; 0040b72f | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b734
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b739
    POP EBP                             ; 0040b73c
    POP EDI                             ; 0040b73d
    POP ESI                             ; 0040b73e
    POP EBX                             ; 0040b73f
    RET                                 ; 0040b740
    MOV byte ptr [ESI],0x0              ; 0040b741
        ;   Label: LAB_0040b741
    JMP 0x0040b72e                      ; 0040b744
        ;   XREF to: 0040b72e (UNCONDITIONAL_JUMP)  ; LAB_0040b72e
    PUSH EBX                            ; 0040b746
        ;   Label: LAB_0040b746
    PUSH 0x5f0958                       ; 0040b747 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b74c
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b751
    PUSH EBX                            ; 0040b754
    PUSH 0x5f0958                       ; 0040b755 | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b75a
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b75f
    POP EBP                             ; 0040b762
    POP EDI                             ; 0040b763
    POP ESI                             ; 0040b764
    POP EBX                             ; 0040b765
    RET                                 ; 0040b766
    PUSH ESI                            ; 0040b767
        ;   Label: LAB_0040b767
    PUSH 0x5f0990                       ; 0040b768 | DAT_005f0990
    PUSH 0x5b5ada                       ; 0040b76d | = "%s\"%s\""
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b772 | DAT_007df9b4
    PUSH ECX                            ; 0040b778
    CALL crt_unknown.c_FUN_005a3140     ; 0040b779
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0040b77e
    PUSH EBX                            ; 0040b781
    PUSH 0x5f0958                       ; 0040b782 | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b787
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b78c
    POP EBP                             ; 0040b78f
    POP EDI                             ; 0040b790
    POP ESI                             ; 0040b791
    POP EBX                             ; 0040b792
    RET                                 ; 0040b793

