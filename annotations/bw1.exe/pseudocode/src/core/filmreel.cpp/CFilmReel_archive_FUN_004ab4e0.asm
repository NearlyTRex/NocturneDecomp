; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004ab4e0(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005df0c5
;   TerminatedCString s_movieName_005df0cf
;   int g_CFilmReelClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab4e0
        ;   Label: core_filmreel.cpp_CFilmReel_archive_FUN_004ab4e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ab4e1
    PUSH EBX                            ; 004ab4e5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004ab4e6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ab4eb
    PUSH 0x5df0c5                       ; 004ab4ee | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004ab4f3
    PUSH EAX                            ; 004ab4f9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004ab4fa
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    MOV EDX,dword ptr [0x0061bf28]      ; 004ab4ff | g_CFilmReelClassVersion
    ADD ESP,0x8                         ; 004ab505
    CMP EDX,0x2                         ; 004ab508
    JGE 0x004ab50f                      ; 004ab50b
        ;   XREF to: 004ab50f (CONDITIONAL_JUMP)  ; LAB_004ab50f
    POP EBX                             ; 004ab50d
    RET                                 ; 004ab50e
    PUSH 0x5df0cf                       ; 004ab50f | = "movieName"
        ;   Label: LAB_004ab50f
    LEA EAX,[EBX + 0x2d8]               ; 004ab514
    PUSH EAX                            ; 004ab51a
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ab51b
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ab520
    POP EBX                             ; 004ab523
    RET                                 ; 004ab524

