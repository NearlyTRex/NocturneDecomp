; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_archive_FUN_004cad80(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_glassSize_005c4547+1
;   TerminatedCString s_glassTexture_005c4552
;   TerminatedCString s_opacity_005c455f
;   TerminatedCString s_shattered_005c4567
;   TerminatedCString s_breakEvent_005c4571
;   TerminatedCString s_mirrorFlag_005c457c
;   TerminatedCString s_breakableCondition_005c4587
;   TerminatedCString s_backgroundFlag_005c459a
;   TerminatedCString s_brokenTexture_005c45a9
;   int g_CGlassClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cad80
        ;   Label: core_glass.cpp_CGlass_archive_FUN_004cad80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cad81
    PUSH EBX                            ; 004cad85
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004cad86
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cad8b
    PUSH 0x5c4548                       ; 004cad8e | s_glassSize_005c4547+1
    LEA EAX,[EBX + 0x158]               ; 004cad93
    PUSH EAX                            ; 004cad99
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 004cad9a
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad9f
    PUSH 0x5c4552                       ; 004cada2 | = "glassTexture"
    LEA EAX,[EBX + 0x16c]               ; 004cada7
    PUSH EAX                            ; 004cadad
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004cadae
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x005fecc4]      ; 004cadb3 | g_CGlassClassVersion
    ADD ESP,0x8                         ; 004cadb9
    CMP EDX,0x2                         ; 004cadbc
    JGE 0x004cae3b                      ; 004cadbf
        ;   XREF to: 004cae3b (CONDITIONAL_JUMP)  ; LAB_004cae3b
    CMP dword ptr [0x005fecc4],0x3      ; 004cadc5 | g_CGlassClassVersion
        ;   Label: LAB_004cadc5
    JL 0x004cadf6                       ; 004cadcc
        ;   XREF to: 004cadf6 (CONDITIONAL_JUMP)  ; LAB_004cadf6
    PUSH 0x5c4567                       ; 004cadce | = "shattered"
    LEA EAX,[EBX + 0x1b0]               ; 004cadd3
    PUSH EAX                            ; 004cadd9
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cadda
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004caddf
    PUSH 0x5c4571                       ; 004cade2 | = "breakEvent"
    LEA EAX,[EBX + 0x1b4]               ; 004cade7
    PUSH EAX                            ; 004caded
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004cadee
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cadf3
    CMP dword ptr [0x005fecc4],0x4      ; 004cadf6 | g_CGlassClassVersion
        ;   Label: LAB_004cadf6
    JL 0x004cae13                       ; 004cadfd
        ;   XREF to: 004cae13 (CONDITIONAL_JUMP)  ; LAB_004cae13
    PUSH 0x5c457c                       ; 004cadff | = "mirrorFlag"
    LEA EAX,[EBX + 0x218]               ; 004cae04
    PUSH EAX                            ; 004cae0a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cae0b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cae10
    CMP dword ptr [0x005fecc4],0x5      ; 004cae13 | g_CGlassClassVersion
        ;   Label: LAB_004cae13
    JL 0x004cae30                       ; 004cae1a
        ;   XREF to: 004cae30 (CONDITIONAL_JUMP)  ; LAB_004cae30
    PUSH 0x5c4587                       ; 004cae1c | = "breakableCondition"
    LEA EAX,[EBX + 0x33c]               ; 004cae21
    PUSH EAX                            ; 004cae27
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004cae28
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cae2d
    CMP dword ptr [0x005fecc4],0x6      ; 004cae30 | g_CGlassClassVersion
        ;   Label: LAB_004cae30
    JGE 0x004cae54                      ; 004cae37
        ;   XREF to: 004cae54 (CONDITIONAL_JUMP)  ; LAB_004cae54
    POP EBX                             ; 004cae39
    RET                                 ; 004cae3a
    PUSH 0x5c455f                       ; 004cae3b | = "opacity"
        ;   Label: LAB_004cae3b
    LEA EAX,[EBX + 0x1ac]               ; 004cae40
    PUSH EAX                            ; 004cae46
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cae47
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cae4c
    JMP 0x004cadc5                      ; 004cae4f
        ;   XREF to: 004cadc5 (UNCONDITIONAL_JUMP)  ; LAB_004cadc5
    PUSH 0x5c459a                       ; 004cae54 | = "backgroundFlag"
        ;   Label: LAB_004cae54
    LEA EAX,[EBX + 0x3a0]               ; 004cae59
    PUSH EAX                            ; 004cae5f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cae60
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cae65
    PUSH 0x5c45a9                       ; 004cae68 | = "brokenTexture"
    ADD EBX,0x3ac                       ; 004cae6d
    PUSH EBX                            ; 004cae73
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004cae74
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cae79
    POP EBX                             ; 004cae7c
    RET                                 ; 004cae7d

