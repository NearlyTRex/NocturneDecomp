; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_conveyor_cpp_FUN_0043b310(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_size_0057b1de
;   TerminatedCString s_direction_0057b1e3
;   TerminatedCString s_startEvent_0057b1ed
;   TerminatedCString s_stopEvent_0057b1f8
;   TerminatedCString s_state_0057b202
;   TerminatedCString s_actorClass_0057b208
;   int g_INT_005ad380 = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b310
        ;   Label: core_conveyor.cpp_FUN_0043b310
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b311
    PUSH EBX                            ; 0043b315
    CALL core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0 ; 0043b316
        ;   XREF to: 004f6fa0 (UNCONDITIONAL_CALL)  ; undefined core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0()
    ADD ESP,0x4                         ; 0043b31b
    PUSH 0x57b1de                       ; 0043b31e | = "size"
    LEA EAX,[EBX + 0x720]               ; 0043b323
    PUSH EAX                            ; 0043b329
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0043b32a
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 0043b32f
    PUSH 0x57b1e3                       ; 0043b332 | = "direction"
    LEA EAX,[EBX + 0x72c]               ; 0043b337
    PUSH EAX                            ; 0043b33d
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0043b33e
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 0043b343
    PUSH 0x57b1ed                       ; 0043b346 | = "startEvent"
    LEA EAX,[EBX + 0x738]               ; 0043b34b
    PUSH EAX                            ; 0043b351
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0043b352
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0043b357
    PUSH 0x57b1f8                       ; 0043b35a | = "stopEvent"
    LEA EAX,[EBX + 0x79c]               ; 0043b35f
    PUSH EAX                            ; 0043b365
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0043b366
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0043b36b
    PUSH 0x57b202                       ; 0043b36e | = "state"
    LEA EAX,[EBX + 0x800]               ; 0043b373
    PUSH EAX                            ; 0043b379
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0043b37a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV EDX,dword ptr [0x005ad380]      ; 0043b37f | g_INT_005ad380
    ADD ESP,0x8                         ; 0043b385
    CMP EDX,0x2                         ; 0043b388
    JGE 0x0043b38f                      ; 0043b38b
        ;   XREF to: 0043b38f (CONDITIONAL_JUMP)  ; LAB_0043b38f
    POP EBX                             ; 0043b38d
    RET                                 ; 0043b38e
    PUSH 0x57b208                       ; 0043b38f | = "actorClass"
        ;   Label: LAB_0043b38f
    ADD EBX,0x804                       ; 0043b394
    PUSH EBX                            ; 0043b39a
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0043b39b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0043b3a0
    POP EBX                             ; 0043b3a3
    RET                                 ; 0043b3a4

