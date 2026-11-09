; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042f320(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_enemy.cpp_FUN_004a0fb0 at 004a0fd1
;   core_npc.cpp_FUN_00531ae0 at 00531b01
;   unkafter_bird.cpp_FUN_00415660 at 00415681
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f320
        ;   Label: core_charactr.cpp_FUN_0042f320
    SUB ESP,0x30                        ; 0042f321
    MOV EBX,dword ptr [ESP + 0x38]      ; 0042f324
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0042f328
    JNZ 0x0042f336                      ; 0042f32f
        ;   XREF to: 0042f336 (CONDITIONAL_JUMP)  ; LAB_0042f336
    ADD ESP,0x30                        ; 0042f331
    POP EBX                             ; 0042f334
    RET                                 ; 0042f335
    PUSH EDI                            ; 0042f336
        ;   Label: LAB_0042f336
    PUSH ESI                            ; 0042f337
    PUSH EBX                            ; 0042f338
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0042f339
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f33e
    PUSH 0x0                            ; 0042f341
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042f343
    PUSH EBX                            ; 0042f349
    LEA ESI,[ESP + 0x10]                ; 0042f34a
    LEA EDI,[ESP + 0x28]                ; 0042f34e
    CALL dword ptr [EAX + 0x1c]         ; 0042f352
    MOV ECX,0x6                         ; 0042f355
    ADD ESP,0x4                         ; 0042f35a
    LEA EAX,[ESP + 0x24]                ; 0042f35d
    LEA ESI,[ESP + 0xc]                 ; 0042f361
    PUSH EAX                            ; 0042f365
    MOVSD.REP ES:EDI,ESI                ; 0042f366
    CALL core_box.cpp_FUN_004207b0      ; 0042f368
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0042f36d
    TEST EAX,EAX                        ; 0042f370
    JZ 0x0042f37d                       ; 0042f372
        ;   XREF to: 0042f37d (CONDITIONAL_JUMP)  ; LAB_0042f37d
    PUSH EBX                            ; 0042f374
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 0042f375
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042f37a
    PUSH EBX                            ; 0042f37d
        ;   Label: LAB_0042f37d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0042f37e
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f383
    POP ESI                             ; 0042f386
    POP EDI                             ; 0042f387
    ADD ESP,0x30                        ; 0042f388
    POP EBX                             ; 0042f38b
    RET                                 ; 0042f38c

