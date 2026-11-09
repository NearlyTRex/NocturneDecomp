; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x38]:1  local_38
;
; XREF[1]:
;   core_lightgun.cpp_FUN_004e3b10 at 004e4048
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_fire.cpp_FUN_0049db20
;   core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a440
        ;   Label: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0058a440
    PUSH EBP                            ; 0058a441
    SUB ESP,0xa8                        ; 0058a442
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0058a448
    MOV EDX,dword ptr [0x0060b280]      ; 0058a44f | DAT_0060b280
    PUSH EDX                            ; 0058a455 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0058a456
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0058a45b
    TEST EAX,EAX                        ; 0058a45e
    JZ 0x0058a471                       ; 0058a460
        ;   XREF to: 0058a471 (CONDITIONAL_JUMP)  ; LAB_0058a471
    ADD ESP,0xa8                        ; 0058a462
    POP EBP                             ; 0058a468
    POP EBX                             ; 0058a469
    LEA EAX,[EAX]                       ; 0058a46a
    PUSH EDI                            ; 0058a471
        ;   Label: LAB_0058a471
    PUSH ESI                            ; 0058a472
    PUSH EBX                            ; 0058a473
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058a474
    LEA ESI,[ESP + 0x84]                ; 0058a47a
    LEA EDI,[ESP + 0x6c]                ; 0058a481
    CALL dword ptr [EAX + 0xe8]         ; 0058a485
    ADD ESP,0x4                         ; 0058a48b
    LEA EAX,[ESP + 0x68]                ; 0058a48e
    LEA ESI,[ESP + 0x80]                ; 0058a492
    PUSH EAX                            ; 0058a499
    MOVSD ES:EDI,ESI                    ; 0058a49a
    MOVSD ES:EDI,ESI                    ; 0058a49b
    MOVSD ES:EDI,ESI                    ; 0058a49c
    PUSH EBX                            ; 0058a49d
    LEA ESI,[ESP + 0xac]                ; 0058a49e
    LEA EDI,[ESP + 0x64]                ; 0058a4a5
    CALL core_actor.cpp_FUN_00408d70    ; 0058a4a9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xac]                ; 0058a4ae
    ADD ESP,0x8                         ; 0058a4b5
    MOVSD ES:EDI,ESI                    ; 0058a4b8
    MOVSD ES:EDI,ESI                    ; 0058a4b9
    MOVSD ES:EDI,ESI                    ; 0058a4ba
    MOV EAX,dword ptr [EBX + 0x444]     ; 0058a4bb
    MOV dword ptr [ESP + 0x94],EAX      ; 0058a4c1
    LEA EAX,[ESP + 0x8c]                ; 0058a4c8
    XOR ECX,ECX                         ; 0058a4cf
    PUSH EAX                            ; 0058a4d1
    LEA ESI,[ESP + 0x9c]                ; 0058a4d2
    LEA EDI,[ESP + 0x78]                ; 0058a4d9
    PUSH EBX                            ; 0058a4dd
    MOV dword ptr [ESP + 0x94],ECX      ; 0058a4de
    MOV dword ptr [ESP + 0x98],ECX      ; 0058a4e5
    CALL core_actor.cpp_FUN_00408cf0    ; 0058a4ec
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xa0]                ; 0058a4f1
    ADD ESP,0x8                         ; 0058a4f8
    MOVSD ES:EDI,ESI                    ; 0058a4fb
    MOVSD ES:EDI,ESI                    ; 0058a4fc
    MOVSD ES:EDI,ESI                    ; 0058a4fd
    MOV EDI,dword ptr [0x0061b5a8]      ; 0058a4fe | g_CDemonSetPtr
    PUSH EDI                            ; 0058a504 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0058a505
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058a50a
    PUSH EBX                            ; 0058a50d
    MOV EBP,dword ptr [0x0061b5a8]      ; 0058a50e | g_CDemonSetPtr
    PUSH EBP                            ; 0058a514 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0058a515
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x460]     ; 0058a51a
    ADD ESP,0x8                         ; 0058a520
    TEST EAX,EAX                        ; 0058a523
    JZ 0x0058a537                       ; 0058a525
        ;   XREF to: 0058a537 (CONDITIONAL_JUMP)  ; LAB_0058a537
    PUSH EAX                            ; 0058a527
    MOV ECX,dword ptr [0x0061b5a8]      ; 0058a528 | g_CDemonSetPtr
    PUSH ECX                            ; 0058a52e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0058a52f
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058a534
    LEA EAX,[ESP + 0x8]                 ; 0058a537
        ;   Label: LAB_0058a537
    PUSH EAX                            ; 0058a53b
    MOV ESI,0x1                         ; 0058a53c
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0 ; 0058a541
        ;   XREF to: 0049dae0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0(SLaserInfo * this_ptr)
    ADD ESP,0x4                         ; 0058a546
    MOV dword ptr [ESP + 0x10],ESI      ; 0058a549
    MOV EAX,dword ptr [EBX + 0x450]     ; 0058a54d
    MOV dword ptr [ESP + 0x14],EAX      ; 0058a553
    MOV EAX,dword ptr [EBX + 0x454]     ; 0058a557
    MOV dword ptr [ESP + 0x18],EAX      ; 0058a55d
    MOV EDI,0x41200000                  ; 0058a561
    MOV EAX,dword ptr [EBX + 0x458]     ; 0058a566
    MOV EBP,dword ptr [0x01cedf50]      ; 0058a56c | g_CHeroClassInfo.name_hash
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058a572
    MOV dword ptr [ESP + 0x8],EDI       ; 0058a576
    PUSH EBP                            ; 0058a57a
    MOV EAX,dword ptr [EBX + 0x460]     ; 0058a57b
    PUSH EAX                            ; 0058a581
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0058a582
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0058a587
    TEST EAX,EAX                        ; 0058a58a
    SETNZ AL                            ; 0058a58c
    PUSH 0x0                            ; 0058a58f
    AND EAX,0xff                        ; 0058a591
    MOV dword ptr [ESP + 0x28],ESI      ; 0058a596
    MOV dword ptr [ESP + 0x24],EAX      ; 0058a59a
    SUB ESP,0x54                        ; 0058a59e
    MOV ECX,0x15                        ; 0058a5a1
    MOV EDI,ESP                         ; 0058a5a6
    LEA EAX,[ESP + 0xcc]                ; 0058a5a8
    LEA ESI,[ESP + 0x60]                ; 0058a5af
    PUSH EAX                            ; 0058a5b3
    LEA EAX,[ESP + 0xb8]                ; 0058a5b4
    MOVSD.REP ES:EDI,ESI                ; 0058a5bb
    PUSH EAX                            ; 0058a5bd
    MOV ECX,dword ptr [0x00614d30]      ; 0058a5be | DAT_00614d30
    PUSH ECX                            ; 0058a5c4
    CALL core_fire.cpp_FUN_0049db20     ; 0058a5c5
        ;   XREF to: 0049db20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049db20()
    ADD ESP,0x64                        ; 0058a5ca
    MOV EBX,dword ptr [0x0061b5a8]      ; 0058a5cd | g_CDemonSetPtr
    PUSH EBX                            ; 0058a5d3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0058a5d4
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058a5d9
    POP ESI                             ; 0058a5dc
    POP EDI                             ; 0058a5dd
    ADD ESP,0xa8                        ; 0058a5de
    POP EBP                             ; 0058a5e4
    POP EBX                             ; 0058a5e5
    RET                                 ; 0058a5e6

