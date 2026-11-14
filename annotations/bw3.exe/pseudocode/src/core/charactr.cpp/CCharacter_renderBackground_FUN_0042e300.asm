; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300(CCharacter *this_ptr,int layer_flag)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[4]:
;   core_bird.cpp_CBird_renderBackground_FUN_0040fe60 at 0040fe81
;   core_enemy.cpp_CEnemy_renderBackground_FUN_00489fc0 at 00489fe1
;   core_npc.cpp_CNPC_renderBackground_FUN_00509530 at 00509551
;   core_spireagl.cpp_CSpiritEagle_renderBackground_FUN_00599a40 at 00599a61
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e300
        ;   Label: core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300
    SUB ESP,0x30                        ; 0042e301
    MOV EBX,dword ptr [ESP + 0x38]      ; 0042e304
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0042e308
    JNZ 0x0042e316                      ; 0042e30f
        ;   XREF to: 0042e316 (CONDITIONAL_JUMP)  ; LAB_0042e316
    ADD ESP,0x30                        ; 0042e311
    POP EBX                             ; 0042e314
    RET                                 ; 0042e315
    PUSH EDI                            ; 0042e316
        ;   Label: LAB_0042e316
    PUSH ESI                            ; 0042e317
    PUSH EBX                            ; 0042e318
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0042e319
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042e31e
    PUSH 0x0                            ; 0042e321
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042e323
    PUSH EBX                            ; 0042e329
    LEA ESI,[ESP + 0x10]                ; 0042e32a
    LEA EDI,[ESP + 0x28]                ; 0042e32e
    CALL dword ptr [EAX + 0x1c]         ; 0042e332
    MOV ECX,0x6                         ; 0042e335
    ADD ESP,0x4                         ; 0042e33a
    LEA EAX,[ESP + 0x24]                ; 0042e33d
    LEA ESI,[ESP + 0xc]                 ; 0042e341
    PUSH EAX                            ; 0042e345
    MOVSD.REP ES:EDI,ESI                ; 0042e346
    CALL core_box.cpp_FUN_0041daf0      ; 0042e348
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0042e34d
    TEST EAX,EAX                        ; 0042e350
    JZ 0x0042e35d                       ; 0042e352
        ;   XREF to: 0042e35d (CONDITIONAL_JUMP)  ; LAB_0042e35d
    PUSH EBX                            ; 0042e354
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0042e355
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 0042e35a
    PUSH EBX                            ; 0042e35d
        ;   Label: LAB_0042e35d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0042e35e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042e363
    POP ESI                             ; 0042e366
    POP EDI                             ; 0042e367
    ADD ESP,0x30                        ; 0042e368
    POP EBX                             ; 0042e36b
    RET                                 ; 0042e36c

