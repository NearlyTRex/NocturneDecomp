; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f7d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_00578420
;   TerminatedCString s_dropCondition_0057842a
;   TerminatedCString s_dropHeight_00578438
;   TerminatedCString s_triggered_00578443
;   TerminatedCString s_yvel_0057844d
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f7d0
        ;   Label: FUN_0040f7d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f7d1
    PUSH EBX                            ; 0040f7d5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0040f7d6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0040f7db
    PUSH 0x578420                       ; 0040f7de | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 0040f7e3
    PUSH EAX                            ; 0040f7e9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0040f7ea
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 0040f7ef
    PUSH 0x57842a                       ; 0040f7f2 | = "dropCondition"
    LEA EAX,[EBX + 0x2cc]               ; 0040f7f7
    PUSH EAX                            ; 0040f7fd
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040f7fe
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040f803
    PUSH 0x578438                       ; 0040f806 | = "dropHeight"
    LEA EAX,[EBX + 0x330]               ; 0040f80b
    PUSH EAX                            ; 0040f811
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040f812
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0040f817
    PUSH 0x578443                       ; 0040f81a | = "triggered"
    LEA EAX,[EBX + 0x334]               ; 0040f81f
    PUSH EAX                            ; 0040f825
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040f826
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0040f82b
    PUSH 0x57844d                       ; 0040f82e | = "yvel"
    ADD EBX,0x338                       ; 0040f833
    PUSH EBX                            ; 0040f839
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040f83a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0040f83f
    POP EBX                             ; 0040f842
    RET                                 ; 0040f843

