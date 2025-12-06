; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hero.cpp_FUN_004f3350()
;
;
; XREF[2]:
;   core_gabriela.cpp_FUN_004d2ea0 at 004d4075
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bcf33
;
; Referenced Globals:
;   undefined4 g_CBoxActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3350
        ;   Label: core_hero.cpp_FUN_004f3350
    PUSH EBP                            ; 004f3351
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f3352
    MOV EDX,dword ptr [EBX + 0x1fba4]   ; 004f3356
    TEST EDX,EDX                        ; 004f335c
    JNZ 0x004f3363                      ; 004f335e | LAB_004f3363
        ;   XREF to: 004f3363 (CONDITIONAL_JUMP)
    POP EBP                             ; 004f3360
    POP EBX                             ; 004f3361
    RET                                 ; 004f3362
    PUSH EDI                            ; 004f3363
        ;   Label: LAB_004f3363
    MOV ECX,dword ptr [0x008229e8]      ; 004f3364 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 004f336a
    PUSH EDX                            ; 004f336b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f336c | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EAX + 0x320]     ; 004f3371
    ADD ESP,0x8                         ; 004f3377
    CMP EBX,EDI                         ; 004f337a
    JNZ 0x004f3397                      ; 004f337c | LAB_004f3397
        ;   XREF to: 004f3397 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EAX + 0x328]     ; 004f337e
    PUSH EBP                            ; 004f3384
    MOV dword ptr [EAX + 0x320],0x0     ; 004f3385
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004f338f | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f3394
    MOV dword ptr [EBX + 0x1fba4],0x0   ; 004f3397
        ;   Label: LAB_004f3397
    POP EDI                             ; 004f33a1
    POP EBP                             ; 004f33a2
    POP EBX                             ; 004f33a3
    RET                                 ; 004f33a4

