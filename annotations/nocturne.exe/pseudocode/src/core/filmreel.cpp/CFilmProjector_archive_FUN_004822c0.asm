; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_CFilmProjector_archive_FUN_004822c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_keyReel_00581050+3
;   string s_keyEvent_0058105b
;   undefined4 DAT_005b801c
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_dest.cpp_CActorDestination_archive_FUN_0044bb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004822c0
        ;   Label: core_filmreel.cpp_CFilmProjector_archive_FUN_004822c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004822c1
    PUSH EBX                            ; 004822c5
    CALL core_dest.cpp_CActorDestination_archive_FUN_0044bb10 ; 004822c6
        ;   XREF to: 0044bb10 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_CActorDestination_archive_FUN_0044bb10()
    MOV EDX,dword ptr [0x005b801c]      ; 004822cb | DAT_005b801c
    ADD ESP,0x4                         ; 004822d1
    CMP EDX,0x2                         ; 004822d4
    JGE 0x004822db                      ; 004822d7
        ;   XREF to: 004822db (CONDITIONAL_JUMP)  ; LAB_004822db
    POP EBX                             ; 004822d9
    RET                                 ; 004822da
    PUSH 0x581053                       ; 004822db | s_keyReel_00581050+3
        ;   Label: LAB_004822db
    LEA EAX,[EBX + 0x368]               ; 004822e0
    PUSH EAX                            ; 004822e6
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004822e7
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 004822ec
    PUSH 0x58105b                       ; 004822ef | = "keyEvent"
    LEA EAX,[EBX + 0x36c]               ; 004822f4
    PUSH EAX                            ; 004822fa
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004822fb
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00482300
    POP EBX                             ; 00482303
    RET                                 ; 00482304

