; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
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
;   core_barrier.cpp_CBarrier_serialize_FUN_00414340 at 0041435a
;   core_batman.cpp_CBatman_serialize_FUN_00417580 at 00417630
;   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 at 0041d407
;   core_boxactor.cpp_CBoxActor_load_FUN_00422060 at 004220c0
;   core_boxactor.cpp_load_FUN_00422c80 at 00422cbc
;   core_conveyor.cpp_FUN_00442020 at 0044204e
;   core_curtain.cpp_CCurtain_load_FUN_0044b3e0 at 0044b3fd
;   core_door.cpp_CDoor_serialize_FUN_00480aa0 at 00480b83
;   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 at 0048600a
;   core_drip.cpp_CDrip_load_FUN_0048e170 at 0048e1ca
;   ... and 14 more
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_00613eab
;   TerminatedCString s_s_g_g_g_00613eb4
;   string s_3D_vector_0066e0e0
;   char[104] g_PropertyNamePrefix
;   FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   core_actor.cpp_serializeDescription_FUN_0040b290
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b340
        ;   Label: core_actor.cpp_serializeVector_FUN_0040b340
    PUSH EDI                            ; 0040b341
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b342
    CMP dword ptr [0x00822038],0x1      ; 0040b346 | int g_ActorReadingMode
    JNZ 0x0040b39c                      ; 0040b34d | LAB_0040b39c
        ;   XREF to: 0040b39c (CONDITIONAL_JUMP)
    LEA EDX,[EAX + 0x8]                 ; 0040b34f
    PUSH EDX                            ; 0040b352
    LEA EDX,[EAX + 0x4]                 ; 0040b353
    PUSH EDX                            ; 0040b356
    PUSH EAX                            ; 0040b357
    PUSH 0x613eab                       ; 0040b358 | = "%f,%f,%f" | s_f_f_f_00613eab = %f,%f,%f
    MOV EBX,dword ptr [0x00822034]      ; 0040b35d | FILE * g_ActorDataFile
    PUSH EBX                            ; 0040b363
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b364 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0040b369
    CMP EAX,0x3                         ; 0040b36c
    JNZ 0x0040b386                      ; 0040b36f | LAB_0040b386
        ;   XREF to: 0040b386 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b371
        ;   Label: LAB_0040b371
    PUSH EDI                            ; 0040b375
    PUSH 0x66e0e0                       ; 0040b376 | = "3D vector" | s_3D_vector_0066e0e0 = 3D vector
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b37b | void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040b380
    POP EDI                             ; 0040b383
    POP EBX                             ; 0040b384
    RET                                 ; 0040b385
    PUSH ESI                            ; 0040b386
        ;   Label: LAB_0040b386
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b387
    PUSH ESI                            ; 0040b38b
    PUSH 0x66e0e0                       ; 0040b38c | = "3D vector" | s_3D_vector_0066e0e0 = 3D vector
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b391 | void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040b396
    POP ESI                             ; 0040b399
    JMP 0x0040b371                      ; 0040b39a | LAB_0040b371
        ;   XREF to: 0040b371 (UNCONDITIONAL_JUMP)
    SUB ESP,0x8                         ; 0040b39c
        ;   Label: LAB_0040b39c
    FLD float ptr [EAX + 0x8]           ; 0040b39f
    FSTP double ptr [ESP]               ; 0040b3a2
    SUB ESP,0x8                         ; 0040b3a5
    FLD float ptr [EAX + 0x4]           ; 0040b3a8
    FSTP double ptr [ESP]               ; 0040b3ab
    SUB ESP,0x8                         ; 0040b3ae
    FLD float ptr [EAX]                 ; 0040b3b1
    FSTP double ptr [ESP]               ; 0040b3b3
    PUSH 0x66e178                       ; 0040b3b6 | char[104] g_PropertyNamePrefix
    PUSH 0x613eb4                       ; 0040b3bb | = "%s%g,%g,%g" | s_s_g_g_g_00613eb4 = %s%g,%g,%g
    MOV ECX,dword ptr [0x00822034]      ; 0040b3c0 | FILE * g_ActorDataFile
    PUSH ECX                            ; 0040b3c6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b3c7 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 0040b3cc
    JMP 0x0040b371                      ; 0040b3cf | LAB_0040b371
        ;   XREF to: 0040b371 (UNCONDITIONAL_JUMP)

