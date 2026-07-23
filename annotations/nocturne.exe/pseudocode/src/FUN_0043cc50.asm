; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043cc50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0057b441
;   TerminatedCString s_lastPlatform_0057b44b
;   undefined4 DAT_005ad3c4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cc50
        ;   Label: FUN_0043cc50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043cc51
    PUSH EBX                            ; 0043cc55
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0043cc56
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0043cc5b
    PUSH 0x57b441                       ; 0043cc5e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 0043cc63
    PUSH EAX                            ; 0043cc69
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0043cc6a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    MOV EDX,dword ptr [0x005ad3c4]      ; 0043cc6f | DAT_005ad3c4
    ADD ESP,0x8                         ; 0043cc75
    CMP EDX,0x2                         ; 0043cc78
    JGE 0x0043cc7f                      ; 0043cc7b
        ;   XREF to: 0043cc7f (CONDITIONAL_JUMP)  ; LAB_0043cc7f
    POP EBX                             ; 0043cc7d
    RET                                 ; 0043cc7e
    PUSH 0x57b44b                       ; 0043cc7f | = "lastPlatform"
        ;   Label: LAB_0043cc7f
    LEA EAX,[EBX + 0x2d4]               ; 0043cc84
    PUSH EAX                            ; 0043cc8a
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0043cc8b
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0043cc90
    POP EBX                             ; 0043cc93
    RET                                 ; 0043cc94

