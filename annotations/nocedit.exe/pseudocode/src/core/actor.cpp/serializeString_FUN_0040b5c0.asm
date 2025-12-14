; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
;
; Parameters:
; char * *         Stack[0x4]:4   string_buffer
; char *           Stack[0x8]:4   property_type
;
; XREF[54]:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 at 0040c24e
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 at 0040b915
;   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0 at 0040b735
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 at 0040b995
;   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 at 00410f6e
;   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 at 004119c4
;   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 at 00411f7e
;   core_armour.cpp_CArmour_serialize_FUN_004123a0 at 004123f1
;   core_baron.cpp_CBaron_serialize_FUN_00413a70 at 00413aab
;   core_barrier.cpp_CBarrier_serialize_FUN_00414340 at 0041437b
;   ... and 44 more
;
; Referenced Globals:
;   TerminatedCString s_anon_00613f07
;   TerminatedCString s_s_s_00613f0d
;   string s_String_0066e128
;   char[104] g_PropertyNamePrefix
;   char[256] g_CharacterClassificationTable
;   FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   core_actor.cpp_serializeDescription_FUN_0040b290
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fputc_FUN_005fea10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b5c0
        ;   Label: core_actor.cpp_serializeString_FUN_0040b5c0
    PUSH ESI                            ; 0040b5c1
    PUSH EDI                            ; 0040b5c2
    PUSH EBP                            ; 0040b5c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b5c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b5c8
    CMP dword ptr [0x00822038],0x1      ; 0040b5cc | g_ActorReadingMode
    JNZ 0x0040b6a7                      ; 0040b5d3
        ;   XREF to: 0040b6a7 (CONDITIONAL_JUMP)  ; LAB_0040b6a7
    MOV EDI,dword ptr [0x00822034]      ; 0040b5d9 | g_ActorDataFile
        ;   Label: LAB_0040b5d9
    PUSH EDI                            ; 0040b5df
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040b5e0
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    MOV EDX,EAX                         ; 0040b5e5
    ADD ESP,0x4                         ; 0040b5e7
    INC DL                              ; 0040b5ea
    AND EDX,0xff                        ; 0040b5ec
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 0040b5f2 | g_CharacterClassificationTable
    JNZ 0x0040b5d9                      ; 0040b5f9
        ;   XREF to: 0040b5d9 (CONDITIONAL_JUMP)  ; LAB_0040b5d9
    CMP EAX,0x22                        ; 0040b5fb
    JZ 0x0040b60e                       ; 0040b5fe
        ;   XREF to: 0040b60e (CONDITIONAL_JUMP)  ; LAB_0040b60e
    PUSH EBX                            ; 0040b600
    PUSH 0x66e128                       ; 0040b601 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b606
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b60b
    MOV EBP,dword ptr [0x00822034]      ; 0040b60e | g_ActorDataFile
        ;   Label: LAB_0040b60e
    PUSH EBP                            ; 0040b614
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040b615
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0040b61a
    CMP EAX,0x22                        ; 0040b61d
    JZ 0x0040b681                       ; 0040b620
        ;   XREF to: 0040b681 (CONDITIONAL_JUMP)  ; LAB_0040b681
    MOV EDX,dword ptr [0x00822034]      ; 0040b622 | g_ActorDataFile
    PUSH EDX                            ; 0040b628
    PUSH EAX                            ; 0040b629
    CALL crt_stdio.c_fputc_FUN_005fea10 ; 0040b62a
        ;   XREF to: 005fea10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005fea10(int character, FILE * stream)
    ADD ESP,0x8                         ; 0040b62f
    PUSH ESI                            ; 0040b632
    PUSH 0x613f07                       ; 0040b633 | = "%[^\"]"
    MOV ECX,dword ptr [0x00822034]      ; 0040b638 | g_ActorDataFile
    PUSH ECX                            ; 0040b63e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b63f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0040b644
    CMP EAX,0x1                         ; 0040b647
    JZ 0x0040b65a                       ; 0040b64a
        ;   XREF to: 0040b65a (CONDITIONAL_JUMP)  ; LAB_0040b65a
    PUSH EBX                            ; 0040b64c
    PUSH 0x66e128                       ; 0040b64d | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b652
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b657
    MOV ESI,dword ptr [0x00822034]      ; 0040b65a | g_ActorDataFile
        ;   Label: LAB_0040b65a
    PUSH ESI                            ; 0040b660
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040b661
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0040b666
    CMP EAX,0x22                        ; 0040b669
    JNZ 0x0040b686                      ; 0040b66c
        ;   XREF to: 0040b686 (CONDITIONAL_JUMP)  ; LAB_0040b686
    PUSH EBX                            ; 0040b66e
        ;   Label: LAB_0040b66e
    PUSH 0x66e128                       ; 0040b66f | = "String"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b674
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b679
    POP EBP                             ; 0040b67c
    POP EDI                             ; 0040b67d
    POP ESI                             ; 0040b67e
    POP EBX                             ; 0040b67f
    RET                                 ; 0040b680
    MOV byte ptr [ESI],0x0              ; 0040b681
        ;   Label: LAB_0040b681
    JMP 0x0040b66e                      ; 0040b684
        ;   XREF to: 0040b66e (UNCONDITIONAL_JUMP)  ; LAB_0040b66e
    PUSH EBX                            ; 0040b686
        ;   Label: LAB_0040b686
    PUSH 0x66e128                       ; 0040b687 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b68c
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b691
    PUSH EBX                            ; 0040b694
    PUSH 0x66e128                       ; 0040b695 | = "String"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b69a
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b69f
    POP EBP                             ; 0040b6a2
    POP EDI                             ; 0040b6a3
    POP ESI                             ; 0040b6a4
    POP EBX                             ; 0040b6a5
    RET                                 ; 0040b6a6
    PUSH ESI                            ; 0040b6a7
        ;   Label: LAB_0040b6a7
    PUSH 0x66e178                       ; 0040b6a8 | g_PropertyNamePrefix
    PUSH 0x613f0d                       ; 0040b6ad | = "%s\"%s\""
    MOV ECX,dword ptr [0x00822034]      ; 0040b6b2 | g_ActorDataFile
    PUSH ECX                            ; 0040b6b8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b6b9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b6be
    PUSH EBX                            ; 0040b6c1
    PUSH 0x66e128                       ; 0040b6c2 | = "String"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b6c7
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b6cc
    POP EBP                             ; 0040b6cf
    POP EDI                             ; 0040b6d0
    POP ESI                             ; 0040b6d1
    POP EBX                             ; 0040b6d2
    RET                                 ; 0040b6d3

