; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_serializeSimBox_FUN_0040bd70(CSimBox * simbox_ptr, char * property_name)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   simbox_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_serialize_FUN_00419880 at 00419a05
;   core_boxactor.cpp_CBoxActor_serialize_FUN_00422060 at 00422190
;
; Referenced Globals:
;   TerminatedCString s_sim_box_state_info_openi_0061402e
;   TerminatedCString s_sim_box_state_info_closi_0061404f
;   TerminatedCString s_s_s_00614070
;   TerminatedCString s_s_0061407b
;   char[104] g_PropertyNamePrefix
;   FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   core_box.cpp_CBox_loadFromFile_FUN_0041fe90
;   core_box.cpp_CBox_saveToFile_FUN_00420020
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bd70
        ;   Label: core_actor.cpp_serializeSimBox_FUN_0040bd70
    PUSH ESI                            ; 0040bd71
    PUSH EBP                            ; 0040bd72
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040bd73
    CMP dword ptr [0x00822038],0x1      ; 0040bd77 | g_ActorReadingMode
    JNZ 0x0040bdf6                      ; 0040bd7e
        ;   XREF to: 0040bdf6 (CONDITIONAL_JUMP)  ; LAB_0040bdf6
    MOV EBP,dword ptr [0x00822034]      ; 0040bd84 | g_ActorDataFile
        ;   Label: LAB_0040bd84
    PUSH EBP                            ; 0040bd8a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040bd8b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0040bd90
    MOV ESI,EAX                         ; 0040bd93
    TEST EAX,EAX                        ; 0040bd95
    JL 0x0040bdcf                       ; 0040bd97
        ;   XREF to: 0040bdcf (CONDITIONAL_JUMP)  ; LAB_0040bdcf
    CMP ESI,0xa                         ; 0040bd99
        ;   Label: LAB_0040bd99
    JNZ 0x0040bd84                      ; 0040bd9c
        ;   XREF to: 0040bd84 (CONDITIONAL_JUMP)  ; LAB_0040bd84
    MOV EAX,[0x00822034]                ; 0040bd9e | g_ActorDataFile
    PUSH EAX                            ; 0040bda3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040bda4
    PUSH EDX                            ; 0040bda8
    CALL core_box.cpp_CBox_loadFromFile_FUN_0041fe90 ; 0040bda9
        ;   XREF to: 0041fe90 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_loadFromFile_FUN_0041fe90(CBox * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0040bdae
    MOV ECX,dword ptr [0x00822034]      ; 0040bdb1 | g_ActorDataFile
        ;   Label: LAB_0040bdb1
    PUSH ECX                            ; 0040bdb7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040bdb8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0040bdbd
    MOV ESI,EAX                         ; 0040bdc0
    TEST EAX,EAX                        ; 0040bdc2
    JL 0x0040bddf                       ; 0040bdc4
        ;   XREF to: 0040bddf (CONDITIONAL_JUMP)  ; LAB_0040bddf
    CMP ESI,0xa                         ; 0040bdc6
    JNZ 0x0040bdb1                      ; 0040bdc9
        ;   XREF to: 0040bdb1 (CONDITIONAL_JUMP)  ; LAB_0040bdb1
    POP EBP                             ; 0040bdcb
    POP ESI                             ; 0040bdcc
    POP EBX                             ; 0040bdcd
    RET                                 ; 0040bdce
    PUSH EBX                            ; 0040bdcf
        ;   Label: LAB_0040bdcf
    PUSH 0x61402e                       ; 0040bdd0 | = "sim box state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bdd5
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bdda
    JMP 0x0040bd99                      ; 0040bddd
        ;   XREF to: 0040bd99 (UNCONDITIONAL_JUMP)  ; LAB_0040bd99
    PUSH EBX                            ; 0040bddf
        ;   Label: LAB_0040bddf
    PUSH 0x61404f                       ; 0040bde0 | = "sim box state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bde5
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bdea
    CMP ESI,0xa                         ; 0040bded
    JNZ 0x0040bdb1                      ; 0040bdf0
        ;   XREF to: 0040bdb1 (CONDITIONAL_JUMP)  ; LAB_0040bdb1
    POP EBP                             ; 0040bdf2
    POP ESI                             ; 0040bdf3
    POP EBX                             ; 0040bdf4
    RET                                 ; 0040bdf5
    PUSH EDI                            ; 0040bdf6
        ;   Label: LAB_0040bdf6
    PUSH EBX                            ; 0040bdf7
    PUSH 0x66e178                       ; 0040bdf8 | g_PropertyNamePrefix
    PUSH 0x614070                       ; 0040bdfd | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040be02 | g_ActorDataFile
    PUSH ECX                            ; 0040be08
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040be09
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040be0e
    PUSH 0x1                            ; 0040be11
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040be13
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040be18
    PUSH 0x66e178                       ; 0040be1b | g_PropertyNamePrefix
    MOV EBX,dword ptr [0x00822034]      ; 0040be20 | g_ActorDataFile
    PUSH EBX                            ; 0040be26
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040be27
    PUSH ESI                            ; 0040be2b
    CALL core_box.cpp_CBox_saveToFile_FUN_00420020 ; 0040be2c
        ;   XREF to: 00420020 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_saveToFile_FUN_00420020(CBox * this_ptr, FILE * file_handle)
    ADD ESP,0xc                         ; 0040be31
    PUSH -0x1                           ; 0040be34
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040be36
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040be3b
    PUSH 0x66e178                       ; 0040be3e | g_PropertyNamePrefix
    PUSH 0x61407b                       ; 0040be43 | = "%s}\n"
    MOV EDI,dword ptr [0x00822034]      ; 0040be48 | g_ActorDataFile
    PUSH EDI                            ; 0040be4e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040be4f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0040be54
    POP EDI                             ; 0040be57
    POP EBP                             ; 0040be58
    POP ESI                             ; 0040be59
    POP EBX                             ; 0040be5a
    RET                                 ; 0040be5b

