; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_serializeLocation_FUN_0040b480(CLocation *location_ptr,char *property_name)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 at 0040c1d1
;
; Referenced Globals:
;   TerminatedCString s_d_f_f_f_00613ed3
;   TerminatedCString s_s_d_g_g_g_00613edf
;   string s_4D_location_0066e108
;   char[104] g_PropertyNamePrefix
;   _FILE* g_ActorDataFile
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

    PUSH ESI                            ; 0040b480
        ;   Label: core_actor.cpp_serializeLocation_FUN_0040b480
    PUSH EDI                            ; 0040b481
    PUSH EBP                            ; 0040b482
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b483
    CMP dword ptr [0x00822038],0x1      ; 0040b487 | g_ActorReadingMode
    JNZ 0x0040b4e0                      ; 0040b48e
        ;   XREF to: 0040b4e0 (CONDITIONAL_JUMP)  ; LAB_0040b4e0
    LEA EDX,[EAX + 0x8]                 ; 0040b490
    PUSH EDX                            ; 0040b493
    LEA EDX,[EAX + 0x4]                 ; 0040b494
    PUSH EDX                            ; 0040b497
    PUSH EAX                            ; 0040b498
    ADD EAX,0xc                         ; 0040b499
    PUSH EAX                            ; 0040b49c
    PUSH 0x613ed3                       ; 0040b49d | = "%d,%f,%f,%f"
    MOV ESI,dword ptr [0x00822034]      ; 0040b4a2 | g_ActorDataFile
    PUSH ESI                            ; 0040b4a8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b4a9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0040b4ae
    CMP EAX,0x4                         ; 0040b4b1
    JNZ 0x0040b4cc                      ; 0040b4b4
        ;   XREF to: 0040b4cc (CONDITIONAL_JUMP)  ; LAB_0040b4cc
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b4b6
        ;   Label: LAB_0040b4b6
    PUSH EBP                            ; 0040b4ba
    PUSH 0x66e108                       ; 0040b4bb | = "4D location"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b4c0
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b4c5
    POP EBP                             ; 0040b4c8
    POP EDI                             ; 0040b4c9
    POP ESI                             ; 0040b4ca
    RET                                 ; 0040b4cb
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b4cc
        ;   Label: LAB_0040b4cc
    PUSH EDI                            ; 0040b4d0
    PUSH 0x66e108                       ; 0040b4d1 | = "4D location"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b4d6
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b4db
    JMP 0x0040b4b6                      ; 0040b4de
        ;   XREF to: 0040b4b6 (UNCONDITIONAL_JUMP)  ; LAB_0040b4b6
    PUSH EBX                            ; 0040b4e0
        ;   Label: LAB_0040b4e0
    SUB ESP,0x8                         ; 0040b4e1
    FLD float ptr [EAX + 0x8]           ; 0040b4e4
    FSTP double ptr [ESP]               ; 0040b4e7
    SUB ESP,0x8                         ; 0040b4ea
    FLD float ptr [EAX + 0x4]           ; 0040b4ed
    FSTP double ptr [ESP]               ; 0040b4f0
    SUB ESP,0x8                         ; 0040b4f3
    FLD float ptr [EAX]                 ; 0040b4f6
    FSTP double ptr [ESP]               ; 0040b4f8
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040b4fb
    PUSH ECX                            ; 0040b4fe
    PUSH 0x66e178                       ; 0040b4ff | g_PropertyNamePrefix
    PUSH 0x613edf                       ; 0040b504 | = "%s%d,%g,%g,%g"
    MOV EBX,dword ptr [0x00822034]      ; 0040b509 | g_ActorDataFile
    PUSH EBX                            ; 0040b50f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b510
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x28                        ; 0040b515
    POP EBX                             ; 0040b518
    JMP 0x0040b4b6                      ; 0040b519
        ;   XREF to: 0040b4b6 (UNCONDITIONAL_JUMP)  ; LAB_0040b4b6

