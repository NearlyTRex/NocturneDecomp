; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004be8a0(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00629aeb
;   TerminatedCString s_movieName_00629af5
;   int g_CFilmReelClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be8a0
        ;   Label: core_filmreel.cpp_CFilmReel_archive_FUN_004be8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004be8a1
    PUSH EBX                            ; 004be8a5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004be8a6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004be8ab
    PUSH 0x629aeb                       ; 004be8ae | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004be8b3
    PUSH EAX                            ; 004be8b9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 004be8ba
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067a2f8]      ; 004be8bf | g_CFilmReelClassVersion
    ADD ESP,0x8                         ; 004be8c5
    CMP EDX,0x2                         ; 004be8c8
    JGE 0x004be8cf                      ; 004be8cb
        ;   XREF to: 004be8cf (CONDITIONAL_JUMP)  ; LAB_004be8cf
    POP EBX                             ; 004be8cd
    RET                                 ; 004be8ce
    PUSH 0x629af5                       ; 004be8cf | = "movieName"
        ;   Label: LAB_004be8cf
    LEA EAX,[EBX + 0x2d8]               ; 004be8d4
    PUSH EAX                            ; 004be8da
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004be8db
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004be8e0
    POP EBX                             ; 004be8e3
    RET                                 ; 004be8e4

