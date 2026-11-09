; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_0051fb40(CScat *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   undefined4 s_scat_die_wav_005e2b92+1
;   TerminatedCString s_scat_hurt_wav_005e2ba2
;   undefined4 DAT_005fae28
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 g_CGameInstance.field492_0x1ec
;   undefined4 g_CGameInstance.field584_0x248
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_gore.cpp_FUN_004c9cc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_scat.cpp_FUN_0051fcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051fb40
        ;   Label: core_scat.cpp_FUN_0051fb40
    PUSH ESI                            ; 0051fb41
    PUSH EDI                            ; 0051fb42
    PUSH EBP                            ; 0051fb43
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051fb44
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051fb48
    TEST dword ptr [EBX + 0x10a60],0x7fffffff ; 0051fb4c
    JNZ 0x0051fbc4                      ; 0051fb56
        ;   XREF to: 0051fbc4 (CONDITIONAL_JUMP)  ; LAB_0051fbc4
    MOV EAX,[0x00616494]                ; 0051fb58 | g_CGamePtr
        ;   Label: LAB_0051fb58
    CMP dword ptr [EAX + 0x1ec],0x0     ; 0051fb5d | g_CGameInstance.field492_0x1ec
    JZ 0x0051fb6d                       ; 0051fb64
        ;   XREF to: 0051fb6d (CONDITIONAL_JUMP)  ; LAB_0051fb6d
    MOV dword ptr [EDI + 0x4],0x0       ; 0051fb66
    MOV EAX,[0x00616494]                ; 0051fb6d | g_CGamePtr
        ;   Label: LAB_0051fb6d
    MOV ESI,dword ptr [EAX + 0x248]     ; 0051fb72 | g_CGameInstance.field584_0x248
    TEST ESI,ESI                        ; 0051fb78
    JZ 0x0051fbcd                       ; 0051fb7a
        ;   XREF to: 0051fbcd (CONDITIONAL_JUMP)  ; LAB_0051fbcd
    MOV EAX,[0x005fae28]                ; 0051fb7c | DAT_005fae28
        ;   Label: LAB_0051fb7c
    MOV dword ptr [EBX + 0x10a60],EAX   ; 0051fb81
    FLD float ptr [EDI + 0x4]           ; 0051fb87
    FSUBR float ptr [EBX + 0x25a8]      ; 0051fb8a
    LEA ESI,[EBX + 0x2b4]               ; 0051fb90
    FST float ptr [EBX + 0x25a8]        ; 0051fb96
    FLDZ                                ; 0051fb9c
    FCOMPP                              ; 0051fb9e
    FNSTSW AX                           ; 0051fba0
    SAHF                                ; 0051fba2
    JNC 0x0051fbd2                      ; 0051fba3
        ;   XREF to: 0051fbd2 (CONDITIONAL_JUMP)  ; LAB_0051fbd2
    FLD float ptr [EDI + 0x4]           ; 0051fba5
    FLDZ                                ; 0051fba8
    FCOMPP                              ; 0051fbaa
    FNSTSW AX                           ; 0051fbac
    SAHF                                ; 0051fbae
    JC 0x0051fc4f                       ; 0051fbaf
        ;   XREF to: 0051fc4f (CONDITIONAL_JUMP)  ; LAB_0051fc4f
    PUSH EDI                            ; 0051fbb5
    PUSH EBX                            ; 0051fbb6
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 0051fbb7
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0051fbbc
    POP EBP                             ; 0051fbbf
    POP EDI                             ; 0051fbc0
    POP ESI                             ; 0051fbc1
    POP EBX                             ; 0051fbc2
    RET                                 ; 0051fbc3
    MOV dword ptr [EDI + 0x4],0x0       ; 0051fbc4
        ;   Label: LAB_0051fbc4
    JMP 0x0051fb58                      ; 0051fbcb
        ;   XREF to: 0051fb58 (UNCONDITIONAL_JUMP)  ; LAB_0051fb58
    MOV dword ptr [EDI + 0x4],ESI       ; 0051fbcd
        ;   Label: LAB_0051fbcd
    JMP 0x0051fb7c                      ; 0051fbd0
        ;   XREF to: 0051fb7c (UNCONDITIONAL_JUMP)  ; LAB_0051fb7c
    PUSH ESI                            ; 0051fbd2
        ;   Label: LAB_0051fbd2
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0051fbd3
    CALL core_motion.cpp_FUN_005035c0   ; 0051fbdd
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fbe2
    ADD ESP,0x4                         ; 0051fbe5
    CMP EAX,0x5                         ; 0051fbe8
    JZ 0x0051fc2e                       ; 0051fbeb
        ;   XREF to: 0051fc2e (CONDITIONAL_JUMP)  ; LAB_0051fc2e
    PUSH ESI                            ; 0051fbed
    CALL core_motion.cpp_FUN_005035c0   ; 0051fbee
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fbf3
    ADD ESP,0x4                         ; 0051fbf6
    CMP EAX,0x4                         ; 0051fbf9
    JZ 0x0051fc2e                       ; 0051fbfc
        ;   XREF to: 0051fc2e (CONDITIONAL_JUMP)  ; LAB_0051fc2e
    PUSH 0x1                            ; 0051fbfe
    PUSH 0x4                            ; 0051fc00
    PUSH ESI                            ; 0051fc02
    MOV dword ptr [EBX + 0x276c],0x0    ; 0051fc03
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051fc0d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051fc12
    PUSH 0x0                            ; 0051fc15
    PUSH 0x42480000                     ; 0051fc17
    PUSH 0x32                           ; 0051fc1c
    PUSH EBX                            ; 0051fc1e
    MOV EBP,dword ptr [0x006167e0]      ; 0051fc1f | g_CGorePtr
    PUSH EBP                            ; 0051fc25
    CALL core_gore.cpp_FUN_004c9cc0     ; 0051fc26
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 0051fc2b
    PUSH 0x5e2b93                       ; 0051fc2e | s_scat_die_wav_005e2b92+1
        ;   Label: LAB_0051fc2e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051fc33
    PUSH EBX                            ; 0051fc39
    CALL dword ptr [EAX + 0x34]         ; 0051fc3a
    ADD ESP,0x8                         ; 0051fc3d
    PUSH EDI                            ; 0051fc40
    PUSH EBX                            ; 0051fc41
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 0051fc42
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0051fc47
    POP EBP                             ; 0051fc4a
    POP EDI                             ; 0051fc4b
    POP ESI                             ; 0051fc4c
    POP EBX                             ; 0051fc4d
    RET                                 ; 0051fc4e
    PUSH EBX                            ; 0051fc4f
        ;   Label: LAB_0051fc4f
    CALL core_scat.cpp_FUN_0051fcb0     ; 0051fc50
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051fc55
    TEST EAX,EAX                        ; 0051fc58
    JZ 0x0051fc8a                       ; 0051fc5a
        ;   XREF to: 0051fc8a (CONDITIONAL_JUMP)  ; LAB_0051fc8a
    PUSH 0x1                            ; 0051fc5c
    PUSH 0xd                            ; 0051fc5e
    PUSH ESI                            ; 0051fc60
        ;   Label: LAB_0051fc60
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051fc61
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051fc66
    PUSH 0x5e2ba2                       ; 0051fc69 | = "scat-hurt-?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051fc6e
    PUSH EBX                            ; 0051fc74
    CALL dword ptr [EAX + 0x34]         ; 0051fc75
    ADD ESP,0x8                         ; 0051fc78
    PUSH EDI                            ; 0051fc7b
    PUSH EBX                            ; 0051fc7c
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 0051fc7d
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0051fc82
    POP EBP                             ; 0051fc85
    POP EDI                             ; 0051fc86
    POP ESI                             ; 0051fc87
    POP EBX                             ; 0051fc88
    RET                                 ; 0051fc89
    PUSH 0x1                            ; 0051fc8a
        ;   Label: LAB_0051fc8a
    PUSH 0xc                            ; 0051fc8c
    JMP 0x0051fc60                      ; 0051fc8e
        ;   XREF to: 0051fc60 (UNCONDITIONAL_JUMP)  ; LAB_0051fc60

