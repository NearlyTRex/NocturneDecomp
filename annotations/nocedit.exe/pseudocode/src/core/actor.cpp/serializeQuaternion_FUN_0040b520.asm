; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f *quat_ptr,char *property_type)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_ptr
; char *           Stack[0x8]:4   property_type
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 at 0041d3e7
;   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 at 0054dec7
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_00613eed
;   TerminatedCString s_s_g_g_g_g_00613ef9
;   string s_Quaternion_0066e118
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

    PUSH EBX                            ; 0040b520
        ;   Label: core_actor.cpp_serializeQuaternion_FUN_0040b520
    PUSH EDI                            ; 0040b521
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b522
    CMP dword ptr [0x00822038],0x1      ; 0040b526 | g_ActorReadingMode
    JNZ 0x0040b580                      ; 0040b52d
        ;   XREF to: 0040b580 (CONDITIONAL_JUMP)  ; LAB_0040b580
    LEA EDX,[EAX + 0xc]                 ; 0040b52f
    PUSH EDX                            ; 0040b532
    LEA EDX,[EAX + 0x8]                 ; 0040b533
    PUSH EDX                            ; 0040b536
    LEA EDX,[EAX + 0x4]                 ; 0040b537
    PUSH EDX                            ; 0040b53a
    PUSH EAX                            ; 0040b53b
    PUSH 0x613eed                       ; 0040b53c | = "%f,%f,%f,%f"
    MOV EBX,dword ptr [0x00822034]      ; 0040b541 | g_ActorDataFile
    PUSH EBX                            ; 0040b547
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b548
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0040b54d
    CMP EAX,0x4                         ; 0040b550
    JNZ 0x0040b56a                      ; 0040b553
        ;   XREF to: 0040b56a (CONDITIONAL_JUMP)  ; LAB_0040b56a
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b555
        ;   Label: LAB_0040b555
    PUSH EDI                            ; 0040b559
    PUSH 0x66e118                       ; 0040b55a | = "Quaternion"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040b55f
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b564
    POP EDI                             ; 0040b567
    POP EBX                             ; 0040b568
    RET                                 ; 0040b569
    PUSH ESI                            ; 0040b56a
        ;   Label: LAB_0040b56a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b56b
    PUSH ESI                            ; 0040b56f
    PUSH 0x66e118                       ; 0040b570 | = "Quaternion"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040b575
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b57a
    POP ESI                             ; 0040b57d
    JMP 0x0040b555                      ; 0040b57e
        ;   XREF to: 0040b555 (UNCONDITIONAL_JUMP)  ; LAB_0040b555
    SUB ESP,0x8                         ; 0040b580
        ;   Label: LAB_0040b580
    FLD float ptr [EAX + 0xc]           ; 0040b583
    FSTP double ptr [ESP]               ; 0040b586
    SUB ESP,0x8                         ; 0040b589
    FLD float ptr [EAX + 0x8]           ; 0040b58c
    FSTP double ptr [ESP]               ; 0040b58f
    SUB ESP,0x8                         ; 0040b592
    FLD float ptr [EAX + 0x4]           ; 0040b595
    FSTP double ptr [ESP]               ; 0040b598
    SUB ESP,0x8                         ; 0040b59b
    FLD float ptr [EAX]                 ; 0040b59e
    FSTP double ptr [ESP]               ; 0040b5a0
    PUSH 0x66e178                       ; 0040b5a3 | g_PropertyNamePrefix
    PUSH 0x613ef9                       ; 0040b5a8 | = "%s%g,%g,%g,%g"
    MOV ECX,dword ptr [0x00822034]      ; 0040b5ad | g_ActorDataFile
    PUSH ECX                            ; 0040b5b3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b5b4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x2c                        ; 0040b5b9
    JMP 0x0040b555                      ; 0040b5bc
        ;   XREF to: 0040b555 (UNCONDITIONAL_JUMP)  ; LAB_0040b555

