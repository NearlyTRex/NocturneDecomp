; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_archiveDescription_FUN_0040b290(char *property_description,char *property_name)
;
; Parameters:
; char *           Stack[0x4]:4   property_description
; char *           Stack[0x8]:4   property_name
;
; XREF[9]:
;   core_actor.cpp_archiveClothList_FUN_0040be60 at 0040bec7
;   core_actor.cpp_archiveFloat_FUN_0040b770 at 0040b7a3
;   core_actor.cpp_archiveInteger_FUN_0040b7f0 at 0040b824
;   core_actor.cpp_archiveLocation_FUN_0040b480 at 0040b4c0
;   core_actor.cpp_archiveOrientation_FUN_0040b3e0 at 0040b41b
;   core_actor.cpp_archiveQuaternion_FUN_0040b520 at 0040b55f
;   core_actor.cpp_archiveRules_FUN_0040c000 at 0040c065
;   core_actor.cpp_archiveString_FUN_0040b5c0 at 0040b6c7
;   core_actor.cpp_archiveVector_FUN_0040b340 at 0040b37b
;
; Referenced Globals:
;   TerminatedCString s_s_00613e9e
;   TerminatedCString s_anon_00613ea9
;   _FILE* g_ActorDataFile
;   int g_ActorReadingMode
;   int g_IncludeCommentsWhenWriting
;
; Called Functions:
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b290
        ;   Label: core_actor.cpp_archiveDescription_FUN_0040b290
    PUSH ESI                            ; 0040b291
    PUSH EDI                            ; 0040b292
    PUSH EBP                            ; 0040b293
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b294
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b298
    CMP dword ptr [0x00822038],0x1      ; 0040b29c | g_ActorReadingMode
    JNZ 0x0040b2da                      ; 0040b2a3
        ;   XREF to: 0040b2da (CONDITIONAL_JUMP)  ; LAB_0040b2da
    MOV EAX,[0x00822034]                ; 0040b2a5 | g_ActorDataFile
        ;   Label: LAB_0040b2a5
    PUSH EAX                            ; 0040b2aa
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040b2ab
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040b2b0
    MOV EBX,EAX                         ; 0040b2b3
    TEST EAX,EAX                        ; 0040b2b5
    JL 0x0040b2ce                       ; 0040b2b7
        ;   XREF to: 0040b2ce (CONDITIONAL_JUMP)  ; LAB_0040b2ce
    CMP EBX,0xa                         ; 0040b2b9
        ;   Label: LAB_0040b2b9
    JNZ 0x0040b2a5                      ; 0040b2bc
        ;   XREF to: 0040b2a5 (CONDITIONAL_JUMP)  ; LAB_0040b2a5
    MOV EAX,[0x00822034]                ; 0040b2be | g_ActorDataFile
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b2c3
    JNZ 0x0040b330                      ; 0040b2c7
        ;   XREF to: 0040b330 (CONDITIONAL_JUMP)  ; LAB_0040b330
    POP EBP                             ; 0040b2c9
    POP EDI                             ; 0040b2ca
    POP ESI                             ; 0040b2cb
    POP EBX                             ; 0040b2cc
    RET                                 ; 0040b2cd
    PUSH ESI                            ; 0040b2ce
        ;   Label: LAB_0040b2ce
    PUSH EDI                            ; 0040b2cf
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b2d0
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b2d5
    JMP 0x0040b2b9                      ; 0040b2d8
        ;   XREF to: 0040b2b9 (UNCONDITIONAL_JUMP)  ; LAB_0040b2b9
    CMP dword ptr [0x00822040],0x0      ; 0040b2da | g_IncludeCommentsWhenWriting
        ;   Label: LAB_0040b2da
    JNZ 0x0040b30c                      ; 0040b2e1
        ;   XREF to: 0040b30c (CONDITIONAL_JUMP)  ; LAB_0040b30c
    TEST ESI,ESI                        ; 0040b2e3
    JZ 0x0040b30c                       ; 0040b2e5
        ;   XREF to: 0040b30c (CONDITIONAL_JUMP)  ; LAB_0040b30c
    PUSH ESI                            ; 0040b2e7
    PUSH 0x613e9e                       ; 0040b2e8 | = "    // %s\n"
    MOV EBX,dword ptr [0x00822034]      ; 0040b2ed | g_ActorDataFile
    PUSH EBX                            ; 0040b2f3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b2f4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040b2f9
    MOV EAX,[0x00822034]                ; 0040b2fc | g_ActorDataFile
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b301
    JNZ 0x0040b330                      ; 0040b305
        ;   XREF to: 0040b330 (CONDITIONAL_JUMP)  ; LAB_0040b330
    POP EBP                             ; 0040b307
    POP EDI                             ; 0040b308
    POP ESI                             ; 0040b309
    POP EBX                             ; 0040b30a
    RET                                 ; 0040b30b
    PUSH 0x613ea9                       ; 0040b30c | = "\n"
        ;   Label: LAB_0040b30c
    MOV EBP,dword ptr [0x00822034]      ; 0040b311 | g_ActorDataFile
    PUSH EBP                            ; 0040b317
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b318
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0040b31d
    MOV EAX,[0x00822034]                ; 0040b320 | g_ActorDataFile
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b325
    JNZ 0x0040b330                      ; 0040b329
        ;   XREF to: 0040b330 (CONDITIONAL_JUMP)  ; LAB_0040b330
    POP EBP                             ; 0040b32b
    POP EDI                             ; 0040b32c
    POP ESI                             ; 0040b32d
    POP EBX                             ; 0040b32e
    RET                                 ; 0040b32f
    PUSH ESI                            ; 0040b330
        ;   Label: LAB_0040b330
    PUSH EDI                            ; 0040b331
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b332
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b337
    POP EBP                             ; 0040b33a
    POP EDI                             ; 0040b33b
    POP ESI                             ; 0040b33c
    POP EBX                             ; 0040b33d
    RET                                 ; 0040b33e

