; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_grave_cpp_CGrave_archive_FUN_004ee7f0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_model_name_0062e48c
;   TerminatedCString s_fps_0062e497
;   TerminatedCString s_active_0062e49b
;   TerminatedCString s_graveState_0062e4a2
;   TerminatedCString s_curFrame_0062e4ad
;   TerminatedCString s_hideOnFirstFrame_0062e4b6
;   TerminatedCString s_startCondition_0062e4c7
;   TerminatedCString s_startSound_0062e4d6
;   int g_CGraveClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee7f0
        ;   Label: core_grave.cpp_CGrave_archive_FUN_004ee7f0
    PUSH ESI                            ; 004ee7f1
    SUB ESP,0x4                         ; 004ee7f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ee7f5
    PUSH EBX                            ; 004ee7f9
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004ee7fa
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ee7ff
    PUSH 0x62e48c                       ; 004ee802 | = "model name"
    LEA EAX,[EBX + 0x158]               ; 004ee807
    PUSH EAX                            ; 004ee80d
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 004ee80e
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ee813
    PUSH 0x62e497                       ; 004ee816 | = "fps"
    LEA EAX,[EBX + 0x2d8]               ; 004ee81b
    PUSH EAX                            ; 004ee821
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004ee822
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067cba4]      ; 004ee827 | g_CGraveClassVersion
    ADD ESP,0x8                         ; 004ee82d
    CMP EDX,0x2                         ; 004ee830
    JL 0x004ee89f                       ; 004ee833
        ;   XREF to: 004ee89f (CONDITIONAL_JUMP)  ; LAB_004ee89f
    PUSH 0x62e4a2                       ; 004ee835 | = "graveState"
    LEA EAX,[EBX + 0x2e0]               ; 004ee83a
    PUSH EAX                            ; 004ee840
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004ee841
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ee846
    PUSH 0x62e4ad                       ; 004ee849 | = "curFrame"
        ;   Label: LAB_004ee849
    LEA EAX,[EBX + 0x2d4]               ; 004ee84e
    PUSH EAX                            ; 004ee854
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004ee855
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV ESI,dword ptr [0x0067cba4]      ; 004ee85a | g_CGraveClassVersion
    ADD ESP,0x8                         ; 004ee860
    CMP ESI,0x3                         ; 004ee863
    JL 0x004ee890                       ; 004ee866
        ;   XREF to: 004ee890 (CONDITIONAL_JUMP)  ; LAB_004ee890
    PUSH 0x62e4b6                       ; 004ee868 | = "hideOnFirstFrame"
    LEA EAX,[EBX + 0x2e4]               ; 004ee86d
    PUSH EAX                            ; 004ee873
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004ee874
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ee879
    PUSH 0x62e4c7                       ; 004ee87c | = "startCondition"
    LEA EAX,[EBX + 0x2e8]               ; 004ee881
    PUSH EAX                            ; 004ee887
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004ee888
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ee88d
    CMP dword ptr [0x0067cba4],0x4      ; 004ee890 | g_CGraveClassVersion
        ;   Label: LAB_004ee890
    JGE 0x004ee8d0                      ; 004ee897
        ;   XREF to: 004ee8d0 (CONDITIONAL_JUMP)  ; LAB_004ee8d0
    ADD ESP,0x4                         ; 004ee899
    POP ESI                             ; 004ee89c
    POP EBX                             ; 004ee89d
    RET                                 ; 004ee89e
    PUSH 0x62e49b                       ; 004ee89f | = "active"
        ;   Label: LAB_004ee89f
    LEA EAX,[ESP + 0x4]                 ; 004ee8a4
    PUSH EAX                            ; 004ee8a8
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004ee8a9
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ee8ae
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004ee8b1
    CMP dword ptr [ESP],0x0             ; 004ee8bb
    JZ 0x004ee849                       ; 004ee8bf
        ;   XREF to: 004ee849 (CONDITIONAL_JUMP)  ; LAB_004ee849
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004ee8c1
    JMP 0x004ee849                      ; 004ee8cb
        ;   XREF to: 004ee849 (UNCONDITIONAL_JUMP)  ; LAB_004ee849
    PUSH 0x62e4d6                       ; 004ee8d0 | = "startSound"
        ;   Label: LAB_004ee8d0
    ADD EBX,0x34c                       ; 004ee8d5
    PUSH EBX                            ; 004ee8db
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004ee8dc
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ee8e1
    ADD ESP,0x4                         ; 004ee8e4
    POP ESI                             ; 004ee8e7
    POP EBX                             ; 004ee8e8
    RET                                 ; 004ee8e9

