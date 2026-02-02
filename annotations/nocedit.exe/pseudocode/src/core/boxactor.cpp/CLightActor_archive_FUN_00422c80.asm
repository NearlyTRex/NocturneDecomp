; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_00422c80(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_lightType_00616908
;   TerminatedCString s_bLightPos_00616912
;   TerminatedCString s_lightOrient_0061691c
;   TerminatedCString s_lightFov_00616928
;   TerminatedCString s_lightFov_00616931
;   TerminatedCString s_light_status_0061693a
;   TerminatedCString s_light_falloff_00616947
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveOrientation_FUN_0040b3e0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422c80
        ;   Label: core_boxactor.cpp_CLightActor_archive_FUN_00422c80
    PUSH ESI                            ; 00422c81
    SUB ESP,0x4                         ; 00422c82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00422c85
    PUSH EBX                            ; 00422c89
    CALL core_boxactor.cpp_CBoxActor_archive_FUN_00422060 ; 00422c8a
        ;   XREF to: 00422060 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_archive_FUN_00422060(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00422c8f
    PUSH 0x616908                       ; 00422c92 | = "lightType"
    LEA EAX,[EBX + 0x66c]               ; 00422c97
    PUSH EAX                            ; 00422c9d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00422c9e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [EBX + 0x66c]     ; 00422ca3
    ADD ESP,0x8                         ; 00422ca9
    TEST EDX,EDX                        ; 00422cac
    JNZ 0x00422d01                      ; 00422cae
        ;   XREF to: 00422d01 (CONDITIONAL_JUMP)  ; LAB_00422d01
    PUSH 0x616912                       ; 00422cb0 | = "bLightPos"
    LEA EAX,[EBX + 0x361c]              ; 00422cb5
    PUSH EAX                            ; 00422cbb
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 00422cbc
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422cc1
    PUSH 0x61691c                       ; 00422cc4 | = "lightOrient"
    LEA EAX,[EBX + 0x3628]              ; 00422cc9
    PUSH EAX                            ; 00422ccf
    LEA ESI,[EBX + 0x670]               ; 00422cd0
    CALL core_actor.cpp_archiveOrientation_FUN_0040b3e0 ; 00422cd6
        ;   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveOrientation_FUN_0040b3e0(COrientation * orient_ptr, char * property_name)
    MOV ECX,dword ptr [0x00822038]      ; 00422cdb | g_ActorReadingMode
    ADD ESP,0x8                         ; 00422ce1
    CMP ECX,0x1                         ; 00422ce4
    JNZ 0x00422d25                      ; 00422ce7
        ;   XREF to: 00422d25 (CONDITIONAL_JUMP)  ; LAB_00422d25
    PUSH 0x616928                       ; 00422ce9 | = "lightFov"
    LEA EAX,[ESP + 0x4]                 ; 00422cee
    PUSH EAX                            ; 00422cf2
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00422cf3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422cf8
    MOV EAX,dword ptr [ESP]             ; 00422cfb
    MOV dword ptr [ESI + 0x38],EAX      ; 00422cfe
    PUSH 0x61693a                       ; 00422d01 | = "light status"
        ;   Label: LAB_00422d01
    LEA EAX,[EBX + 0x2324]              ; 00422d06
    PUSH EAX                            ; 00422d0c
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00422d0d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [EBX + 0x66c]     ; 00422d12
    ADD ESP,0x8                         ; 00422d18
    TEST ESI,ESI                        ; 00422d1b
    JZ 0x00422d40                       ; 00422d1d
        ;   XREF to: 00422d40 (CONDITIONAL_JUMP)  ; LAB_00422d40
    ADD ESP,0x4                         ; 00422d1f
    POP ESI                             ; 00422d22
    POP EBX                             ; 00422d23
    RET                                 ; 00422d24
    PUSH 0x616931                       ; 00422d25 | = "lightFov"
        ;   Label: LAB_00422d25
    LEA EAX,[ESP + 0x4]                 ; 00422d2a
    FLD float ptr [ESI + 0x38]          ; 00422d2e
    PUSH EAX                            ; 00422d31
    FSTP float ptr [ESP + 0x8]          ; 00422d32
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00422d36
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422d3b
    JMP 0x00422d01                      ; 00422d3e
        ;   XREF to: 00422d01 (UNCONDITIONAL_JUMP)  ; LAB_00422d01
    PUSH 0x616947                       ; 00422d40 | = "light falloff"
        ;   Label: LAB_00422d40
    ADD EBX,0x7b0                       ; 00422d45
    PUSH EBX                            ; 00422d4b
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00422d4c
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422d51
    ADD ESP,0x4                         ; 00422d54
    POP ESI                             ; 00422d57
    POP EBX                             ; 00422d58
    RET                                 ; 00422d59

