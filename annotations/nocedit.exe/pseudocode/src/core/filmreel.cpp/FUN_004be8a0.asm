; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004be8a0()
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_00629aeb
;   TerminatedCString s_movieName_00629af5
;   int g_CFilmReelClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be8a0
        ;   Label: core_filmreel.cpp_FUN_004be8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004be8a1
    PUSH EBX                            ; 004be8a5
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004be8a6 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004be8ab
    PUSH 0x629aeb                       ; 004be8ae | = "modelName" | s_modelName_00629aeb = modelName
    LEA EAX,[EBX + 0x158]               ; 004be8b3
    PUSH EAX                            ; 004be8b9
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 004be8ba | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067a2f8]      ; 004be8bf | int g_CFilmReelClassVersion
    ADD ESP,0x8                         ; 004be8c5
    CMP EDX,0x2                         ; 004be8c8
    JGE 0x004be8cf                      ; 004be8cb | LAB_004be8cf
        ;   XREF to: 004be8cf (CONDITIONAL_JUMP)
    POP EBX                             ; 004be8cd
    RET                                 ; 004be8ce
    PUSH 0x629af5                       ; 004be8cf | = "movieName" | s_movieName_00629af5 = movieName
        ;   Label: LAB_004be8cf
    LEA EAX,[EBX + 0x2d8]               ; 004be8d4
    PUSH EAX                            ; 004be8da
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004be8db | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004be8e0
    POP EBX                             ; 004be8e3
    RET                                 ; 004be8e4

