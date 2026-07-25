; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_CKeyActor_archive_FUN_004c3650(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; Referenced Globals:
;   TerminatedCString s_modelName_005875a4
;   TerminatedCString s_keyMask_005875ae
;   TerminatedCString s_descriptiveName_005875b6
;   int INT_005bac4c = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3650
        ;   Label: core_keyactor.cpp_CKeyActor_archive_FUN_004c3650
    SUB ESP,0x100                       ; 004c3651
    MOV EBX,dword ptr [ESP + 0x108]     ; 004c3657
    PUSH EBX                            ; 004c365e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004c365f
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 004c3664
    PUSH 0x5875a4                       ; 004c3667 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 004c366c
    PUSH EAX                            ; 004c3672
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004c3673
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 004c3678
    PUSH 0x5875ae                       ; 004c367b | = "keyMask"
    LEA EAX,[EBX + 0x2cc]               ; 004c3680
    PUSH EAX                            ; 004c3686
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c3687
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV EDX,dword ptr [0x005bac4c]      ; 004c368c | INT_005bac4c
    ADD ESP,0x8                         ; 004c3692
    CMP EDX,0x2                         ; 004c3695
    JZ 0x004c36a2                       ; 004c3698
        ;   XREF to: 004c36a2 (CONDITIONAL_JUMP)  ; LAB_004c36a2
    ADD ESP,0x100                       ; 004c369a
    POP EBX                             ; 004c36a0
    RET                                 ; 004c36a1
    PUSH 0x5875b6                       ; 004c36a2 | = "descriptiveName"
        ;   Label: LAB_004c36a2
    LEA EAX,[ESP + 0x4]                 ; 004c36a7
    PUSH EAX                            ; 004c36ab
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040c7f0 ; 004c36ac
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocalizedString_FUN_0040c7f0()
    ADD ESP,0x8                         ; 004c36b1
    ADD ESP,0x100                       ; 004c36b4
    POP EBX                             ; 004c36ba
    RET                                 ; 004c36bb

