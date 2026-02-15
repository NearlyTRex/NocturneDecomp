; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_FUN_004c79d0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 00416197
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 00417b07
;   core_bride.cpp_CBride_processDamage_FUN_00424830 at 004249a7
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070 at 004861c2
;   core_dynamite.cpp_CDynamite_process_FUN_0049cfb0 at 0049d10d
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a8195
;   core_fire.cpp_CFireEffect_FUN_004c76a0 at 004c7886
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c16e0
;   core_fire.cpp_CFireball_process_FUN_004c0b30 at 004c0c41
;   core_fire.cpp_CToss_process_FUN_004c4000 at 004c4131
;   ... and 10 more
;
; Referenced Globals:
;   CStake* g_StakeActiveListHead
;   CSpark[256] g_SparkPool
;   undefined4 DAT_02d53e34
;   undefined4 DAT_02d53e38
;   undefined4 DAT_02d53e3c
;   undefined4 DAT_02d53e40
;   undefined4 DAT_02d53e44
;   undefined4 DAT_02d53e48
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c79d0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c79d0
    PUSH EDI                            ; 004c79d1
    PUSH EBP                            ; 004c79d2
    MOV EDX,dword ptr [0x02d53dfc]      ; 004c79d3 | g_StakeActiveListHead
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c79d9
    ADD EAX,EDX                         ; 004c79e0
    SHL EAX,0x2                         ; 004c79e2
    MOV EBX,0x2d53e00                   ; 004c79e5 | g_SparkPool
    SUB EAX,EDX                         ; 004c79ea
    INC EDX                             ; 004c79ec
    SHL EAX,0x2                         ; 004c79ed
    MOV dword ptr [0x02d53dfc],EDX      ; 004c79f0 | g_StakeActiveListHead
    ADD EBX,EAX                         ; 004c79f6
    CMP EDX,0x100                       ; 004c79f8
    JL 0x004c7a0a                       ; 004c79fe
        ;   XREF to: 004c7a0a (CONDITIONAL_JUMP)  ; LAB_004c7a0a
    PUSH ESI                            ; 004c7a00
    XOR ESI,ESI                         ; 004c7a01
    MOV dword ptr [0x02d53dfc],ESI      ; 004c7a03 | g_StakeActiveListHead
    POP ESI                             ; 004c7a09
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c7a0a
        ;   Label: LAB_004c7a0a
    PUSH EDI                            ; 004c7a0e
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c7a0f
    PUSH EBP                            ; 004c7a13
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7a14 | DAT_02d53e34
    PUSH EBX                            ; 004c7a17
    CALL dword ptr [EAX]                ; 004c7a18
    ADD ESP,0xc                         ; 004c7a1a
    PUSH 0xffff                         ; 004c7a1d
    PUSH 0xc000                         ; 004c7a22
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004c7a27
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c7a2c
    MOV EDX,EAX                         ; 004c7a2f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c7a31
    IMUL EDX                            ; 004c7a35
    SHRD EAX,EDX,0x10                   ; 004c7a37
    MOV dword ptr [EBX + 0x40],0x0      ; 004c7a3b | DAT_02d53e40
    MOV dword ptr [EBX + 0x38],EAX      ; 004c7a42 | DAT_02d53e38
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c7a45
    MOV dword ptr [EBX + 0x3c],EAX      ; 004c7a49 | DAT_02d53e3c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c7a4c
    MOV dword ptr [EBX + 0x44],EAX      ; 004c7a50 | DAT_02d53e44
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c7a53
    MOV dword ptr [EBX + 0x48],EAX      ; 004c7a57 | DAT_02d53e48
    POP EBP                             ; 004c7a5a
    POP EDI                             ; 004c7a5b
    POP EBX                             ; 004c7a5c
    RET                                 ; 004c7a5d

