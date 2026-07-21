; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048e830(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_0058165e+1
;   string s_onFire_00581669
;   string s_timeToExplode_00581670
;   string s_onFireCondition_0058167e
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

    PUSH EBX                            ; 0048e830
        ;   Label: FUN_0048e830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048e831
    PUSH EBX                            ; 0048e835
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0048e836
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0048e83b
    PUSH 0x58165f                       ; 0048e83e | s_modelName_0058165e+1
    LEA EAX,[EBX + 0x150]               ; 0048e843
    PUSH EAX                            ; 0048e849
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0048e84a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 0048e84f
    PUSH 0x581669                       ; 0048e852 | = "onFire"
    LEA EAX,[EBX + 0x2cc]               ; 0048e857
    PUSH EAX                            ; 0048e85d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048e85e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0048e863
    PUSH 0x581670                       ; 0048e866 | = "timeToExplode"
    LEA EAX,[EBX + 0x2d0]               ; 0048e86b
    PUSH EAX                            ; 0048e871
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0048e872
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0048e877
    PUSH 0x58167e                       ; 0048e87a | = "onFireCondition"
    ADD EBX,0x2d4                       ; 0048e87f
    PUSH EBX                            ; 0048e885
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0048e886
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0048e88b
    POP EBX                             ; 0048e88e
    RET                                 ; 0048e88f

