; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_archive_FUN_004c5a80(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_glassSize_005d9381+1
;   TerminatedCString s_glassTexture_005d938c
;   TerminatedCString s_opacity_005d9399
;   TerminatedCString s_shattered_005d93a1
;   TerminatedCString s_breakEvent_005d93ab
;   TerminatedCString s_mirrorFlag_005d93b6
;   TerminatedCString s_breakableCondition_005d93c1
;   TerminatedCString s_backgroundFlag_005d93d4
;   TerminatedCString s_brokenTexture_005d93e3
;   int g_CGlassClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5a80
        ;   Label: core_glass.cpp_CGlass_archive_FUN_004c5a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c5a81
    PUSH EBX                            ; 004c5a85
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004c5a86
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c5a8b
    PUSH 0x5d9382                       ; 004c5a8e | s_glassSize_005d9381+1
    LEA EAX,[EBX + 0x2b4]               ; 004c5a93
    PUSH EAX                            ; 004c5a99
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 004c5a9a
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5a9f
    PUSH 0x5d938c                       ; 004c5aa2 | = "glassTexture"
    LEA EAX,[EBX + 0x2c8]               ; 004c5aa7
    PUSH EAX                            ; 004c5aad
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004c5aae
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x00616794]      ; 004c5ab3 | g_CGlassClassVersion
    ADD ESP,0x8                         ; 004c5ab9
    CMP EDX,0x2                         ; 004c5abc
    JGE 0x004c5b3b                      ; 004c5abf
        ;   XREF to: 004c5b3b (CONDITIONAL_JUMP)  ; LAB_004c5b3b
    CMP dword ptr [0x00616794],0x3      ; 004c5ac5 | g_CGlassClassVersion
        ;   Label: LAB_004c5ac5
    JL 0x004c5af6                       ; 004c5acc
        ;   XREF to: 004c5af6 (CONDITIONAL_JUMP)  ; LAB_004c5af6
    PUSH 0x5d93a1                       ; 004c5ace | = "shattered"
    LEA EAX,[EBX + 0x2dc]               ; 004c5ad3
    PUSH EAX                            ; 004c5ad9
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c5ada
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5adf
    PUSH 0x5d93ab                       ; 004c5ae2 | = "breakEvent"
    LEA EAX,[EBX + 0x2e0]               ; 004c5ae7
    PUSH EAX                            ; 004c5aed
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004c5aee
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004c5af3
    CMP dword ptr [0x00616794],0x4      ; 004c5af6 | g_CGlassClassVersion
        ;   Label: LAB_004c5af6
    JL 0x004c5b13                       ; 004c5afd
        ;   XREF to: 004c5b13 (CONDITIONAL_JUMP)  ; LAB_004c5b13
    PUSH 0x5d93b6                       ; 004c5aff | = "mirrorFlag"
    LEA EAX,[EBX + 0x344]               ; 004c5b04
    PUSH EAX                            ; 004c5b0a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c5b0b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5b10
    CMP dword ptr [0x00616794],0x5      ; 004c5b13 | g_CGlassClassVersion
        ;   Label: LAB_004c5b13
    JL 0x004c5b30                       ; 004c5b1a
        ;   XREF to: 004c5b30 (CONDITIONAL_JUMP)  ; LAB_004c5b30
    PUSH 0x5d93c1                       ; 004c5b1c | = "breakableCondition"
    LEA EAX,[EBX + 0x468]               ; 004c5b21
    PUSH EAX                            ; 004c5b27
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004c5b28
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004c5b2d
    CMP dword ptr [0x00616794],0x6      ; 004c5b30 | g_CGlassClassVersion
        ;   Label: LAB_004c5b30
    JGE 0x004c5b54                      ; 004c5b37
        ;   XREF to: 004c5b54 (CONDITIONAL_JUMP)  ; LAB_004c5b54
    POP EBX                             ; 004c5b39
    RET                                 ; 004c5b3a
    PUSH 0x5d9399                       ; 004c5b3b | = "opacity"
        ;   Label: LAB_004c5b3b
    LEA EAX,[EBX + 0x2d8]               ; 004c5b40
    PUSH EAX                            ; 004c5b46
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c5b47
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5b4c
    JMP 0x004c5ac5                      ; 004c5b4f
        ;   XREF to: 004c5ac5 (UNCONDITIONAL_JUMP)  ; LAB_004c5ac5
    PUSH 0x5d93d4                       ; 004c5b54 | = "backgroundFlag"
        ;   Label: LAB_004c5b54
    LEA EAX,[EBX + 0x4cc]               ; 004c5b59
    PUSH EAX                            ; 004c5b5f
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c5b60
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5b65
    PUSH 0x5d93e3                       ; 004c5b68 | = "brokenTexture"
    ADD EBX,0x4d8                       ; 004c5b6d
    PUSH EBX                            ; 004c5b73
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004c5b74
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004c5b79
    POP EBX                             ; 004c5b7c
    RET                                 ; 004c5b7d

