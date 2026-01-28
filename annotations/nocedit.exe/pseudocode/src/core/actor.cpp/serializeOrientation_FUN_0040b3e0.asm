; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_serializeOrientation_FUN_0040b3e0(COrientation *orient_ptr,char *property_name)
;
; Parameters:
; COrientation *   Stack[0x4]:4   orient_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 at 0040c1e2
;   core_boxactor.cpp_CLightActor_serialize_FUN_00422c80 at 00422cd6
;   core_manpuz.cpp_CMansionPuzzleCircle_serialize_FUN_0050adf0 at 0050aeb2
;   core_turret.cpp_CTurret_serialize_FUN_005e2c40 at 005e2c5a
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_00613ebf
;   TerminatedCString s_s_g_g_g_00613ec8
;   string s_Euler_PBH_orientation_0066e0f0
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

    PUSH EBX                            ; 0040b3e0
        ;   Label: core_actor.cpp_serializeOrientation_FUN_0040b3e0
    PUSH EDI                            ; 0040b3e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b3e2
    CMP dword ptr [0x00822038],0x1      ; 0040b3e6 | g_ActorReadingMode
    JNZ 0x0040b43c                      ; 0040b3ed
        ;   XREF to: 0040b43c (CONDITIONAL_JUMP)  ; LAB_0040b43c
    LEA EDX,[EAX + 0x4]                 ; 0040b3ef
    PUSH EDX                            ; 0040b3f2
    LEA EDX,[EAX + 0x8]                 ; 0040b3f3
    PUSH EDX                            ; 0040b3f6
    PUSH EAX                            ; 0040b3f7
    PUSH 0x613ebf                       ; 0040b3f8 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x00822034]      ; 0040b3fd | g_ActorDataFile
    PUSH EBX                            ; 0040b403
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b404
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0040b409
    CMP EAX,0x3                         ; 0040b40c
    JNZ 0x0040b426                      ; 0040b40f
        ;   XREF to: 0040b426 (CONDITIONAL_JUMP)  ; LAB_0040b426
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b411
        ;   Label: LAB_0040b411
    PUSH EDI                            ; 0040b415
    PUSH 0x66e0f0                       ; 0040b416 | = "Euler PBH orientation"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b41b
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b420
    POP EDI                             ; 0040b423
    POP EBX                             ; 0040b424
    RET                                 ; 0040b425
    PUSH ESI                            ; 0040b426
        ;   Label: LAB_0040b426
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b427
    PUSH ESI                            ; 0040b42b
    PUSH 0x66e0f0                       ; 0040b42c | = "Euler PBH orientation"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b431
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b436
    POP ESI                             ; 0040b439
    JMP 0x0040b411                      ; 0040b43a
        ;   XREF to: 0040b411 (UNCONDITIONAL_JUMP)  ; LAB_0040b411
    SUB ESP,0x8                         ; 0040b43c
        ;   Label: LAB_0040b43c
    FLD float ptr [EAX + 0x4]           ; 0040b43f
    FSTP double ptr [ESP]               ; 0040b442
    SUB ESP,0x8                         ; 0040b445
    FLD float ptr [EAX + 0x8]           ; 0040b448
    FSTP double ptr [ESP]               ; 0040b44b
    SUB ESP,0x8                         ; 0040b44e
    FLD float ptr [EAX]                 ; 0040b451
    FSTP double ptr [ESP]               ; 0040b453
    PUSH 0x66e178                       ; 0040b456 | g_PropertyNamePrefix
    PUSH 0x613ec8                       ; 0040b45b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x00822034]      ; 0040b460 | g_ActorDataFile
    PUSH ECX                            ; 0040b466
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b467
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x24                        ; 0040b46c
    JMP 0x0040b411                      ; 0040b46f
        ;   XREF to: 0040b411 (UNCONDITIONAL_JUMP)  ; LAB_0040b411

