; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_CFlies_archive_FUN_0048eff0(int param_1)
;
;
; Referenced Globals:
;   string s_count_005816d6
;   string s_followActor_005816dc
;   string s_gatherCount_005816e8
;   string s_gatherTime_005816f4
;   string s_boxSize_005816ff
;   undefined4 DAT_005b9210
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048eff0
        ;   Label: core_flies.cpp_CFlies_archive_FUN_0048eff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048eff1
    PUSH EBX                            ; 0048eff5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0048eff6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0048effb
    PUSH 0x5816d6                       ; 0048effe | = "count"
    LEA EAX,[EBX + 0x15c]               ; 0048f003
    PUSH EAX                            ; 0048f009
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048f00a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV EDX,dword ptr [0x005b9210]      ; 0048f00f | DAT_005b9210
    ADD ESP,0x8                         ; 0048f015
    CMP EDX,0x2                         ; 0048f018
    JGE 0x0048f028                      ; 0048f01b
        ;   XREF to: 0048f028 (CONDITIONAL_JUMP)  ; LAB_0048f028
    CMP dword ptr [0x005b9210],0x3      ; 0048f01d | DAT_005b9210
    JGE 0x0048f06f                      ; 0048f024
        ;   XREF to: 0048f06f (CONDITIONAL_JUMP)  ; LAB_0048f06f
    POP EBX                             ; 0048f026
    RET                                 ; 0048f027
    PUSH 0x5816dc                       ; 0048f028 | = "followActor"
        ;   Label: LAB_0048f028
    LEA EAX,[EBX + 0x2a00]              ; 0048f02d
    PUSH EAX                            ; 0048f033
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0048f034
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0048f039
    PUSH 0x5816e8                       ; 0048f03c | = "gatherCount"
    LEA EAX,[EBX + 0x2a04]              ; 0048f041
    PUSH EAX                            ; 0048f047
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0048f048
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0048f04d
    PUSH 0x5816f4                       ; 0048f050 | = "gatherTime"
    LEA EAX,[EBX + 0x2a0c]              ; 0048f055
    PUSH EAX                            ; 0048f05b
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0048f05c
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0048f061
    CMP dword ptr [0x005b9210],0x3      ; 0048f064 | DAT_005b9210
    JGE 0x0048f06f                      ; 0048f06b
        ;   XREF to: 0048f06f (CONDITIONAL_JUMP)  ; LAB_0048f06f
    POP EBX                             ; 0048f06d
    RET                                 ; 0048f06e
    PUSH 0x5816ff                       ; 0048f06f | = "boxSize"
        ;   Label: LAB_0048f06f
    ADD EBX,0x150                       ; 0048f074
    PUSH EBX                            ; 0048f07a
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0048f07b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 0048f080
    POP EBX                             ; 0048f083
    RET                                 ; 0048f084

