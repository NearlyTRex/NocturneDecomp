; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6b30(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float FLOAT_0065e7c4 = 0.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.hero_number
;   undefined4 DAT_02d81c6c
;   undefined4 DAT_02d81cc8
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6b30
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d6b30
    PUSH ESI                            ; 004d6b31
    PUSH EDI                            ; 004d6b32
    PUSH EBP                            ; 004d6b33
    MOV EBP,ESP                         ; 004d6b34
    SUB ESP,0x4                         ; 004d6b36
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d6b39
    MOV ESI,dword ptr [EBP + 0x18]      ; 004d6b3c
    TEST dword ptr [EBX + 0xbe24],0x7fffffff ; 004d6b3f
    JNZ 0x004d6c97                      ; 004d6b49
        ;   XREF to: 004d6c97 (CONDITIONAL_JUMP)  ; LAB_004d6c97
    MOV EAX,[0x0067b654]                ; 004d6b4f | g_CGamePtr
        ;   Label: LAB_004d6b4f
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004d6b54 | DAT_02d81c6c
    JZ 0x004d6b64                       ; 004d6b5b
        ;   XREF to: 004d6b64 (CONDITIONAL_JUMP)  ; LAB_004d6b64
    MOV dword ptr [ESI + 0x4],0x0       ; 004d6b5d
    MOV EAX,[0x0067b654]                ; 004d6b64 | g_CGamePtr
        ;   Label: LAB_004d6b64
    MOV EDI,dword ptr [EAX + 0x22c]     ; 004d6b69 | DAT_02d81cc8
    TEST EDI,EDI                        ; 004d6b6f
    JZ 0x004d6ca3                       ; 004d6b71
        ;   XREF to: 004d6ca3 (CONDITIONAL_JUMP)  ; LAB_004d6ca3
    MOV EAX,[0x0065e7c4]                ; 004d6b77 | FLOAT_0065e7c4
        ;   Label: LAB_004d6b77
    MOV dword ptr [EBX + 0xbe24],EAX    ; 004d6b7c
    FLD float ptr [ESI + 0x4]           ; 004d6b82
    FSUBR float ptr [EBX + 0x243c]      ; 004d6b85
    LEA EDI,[EBX + 0x158]               ; 004d6b8b
    FST float ptr [EBX + 0x243c]        ; 004d6b91
    FLDZ                                ; 004d6b97
    FCOMPP                              ; 004d6b99
    FNSTSW AX                           ; 004d6b9b
    SAHF                                ; 004d6b9d
    JC 0x004d6cab                       ; 004d6b9e
        ;   XREF to: 004d6cab (CONDITIONAL_JUMP)  ; LAB_004d6cab
    PUSH EDI                            ; 004d6ba4
    MOV dword ptr [EBX + 0x243c],0x0    ; 004d6ba5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d6baf
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d6bb4
    ADD ESP,0x4                         ; 004d6bb7
    CMP EAX,0xc                         ; 004d6bba
    JZ 0x004d6c76                       ; 004d6bbd
        ;   XREF to: 004d6c76 (CONDITIONAL_JUMP)  ; LAB_004d6c76
    PUSH EDI                            ; 004d6bc3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d6bc4
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d6bc9
    ADD ESP,0x4                         ; 004d6bcc
    CMP EAX,0xb                         ; 004d6bcf
    JZ 0x004d6c76                       ; 004d6bd2
        ;   XREF to: 004d6c76 (CONDITIONAL_JUMP)  ; LAB_004d6c76
    PUSH 0x1                            ; 004d6bd8
    PUSH 0x42c80000                     ; 004d6bda
    PUSH 0x0                            ; 004d6bdf
    MOV dword ptr [EBX + 0x2598],0x0    ; 004d6be1
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004d6beb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    FLD float ptr [ESI + 0x4]           ; 004d6c76
        ;   Label: LAB_004d6c76
    FLDZ                                ; 004d6c79
    FCOMPP                              ; 004d6c7b
    FNSTSW AX                           ; 004d6c7d
    SAHF                                ; 004d6c7f
    JC 0x004d6d12                       ; 004d6c80
        ;   XREF to: 004d6d12 (CONDITIONAL_JUMP)  ; LAB_004d6d12
    PUSH ESI                            ; 004d6c86
    PUSH EBX                            ; 004d6c87
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 004d6c88
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d6c8d
    MOV ESP,EBP                         ; 004d6c90
    POP EBP                             ; 004d6c92
    POP EDI                             ; 004d6c93
    POP ESI                             ; 004d6c94
    POP EBX                             ; 004d6c95
    RET                                 ; 004d6c96
    MOV dword ptr [ESI + 0x4],0x0       ; 004d6c97
        ;   Label: LAB_004d6c97
    JMP 0x004d6b4f                      ; 004d6c9e
        ;   XREF to: 004d6b4f (UNCONDITIONAL_JUMP)  ; LAB_004d6b4f
    MOV dword ptr [ESI + 0x4],EDI       ; 004d6ca3
        ;   Label: LAB_004d6ca3
    JMP 0x004d6b77                      ; 004d6ca6
        ;   XREF to: 004d6b77 (UNCONDITIONAL_JUMP)  ; LAB_004d6b77
    FLD float ptr [ESI + 0x4]           ; 004d6cab
        ;   Label: LAB_004d6cab
    FLDZ                                ; 004d6cae
    FCOMPP                              ; 004d6cb0
    FNSTSW AX                           ; 004d6cb2
    SAHF                                ; 004d6cb4
    JNC 0x004d6c76                      ; 004d6cb5
        ;   XREF to: 004d6c76 (CONDITIONAL_JUMP)  ; LAB_004d6c76
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 004d6cb7
    JZ 0x004d6d03                       ; 004d6cbe
        ;   XREF to: 004d6d03 (CONDITIONAL_JUMP)  ; LAB_004d6d03
    MOV EAX,[0x0067b654]                ; 004d6cc0 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004d6cc0
    CMP dword ptr [EAX + 0xc0],0x2      ; 004d6cc5 | g_CGameInstance.hero_number
    JZ 0x004d6c76                       ; 004d6ccc
        ;   XREF to: 004d6c76 (CONDITIONAL_JUMP)  ; LAB_004d6c76
    PUSH 0x3ecccccd                     ; 004d6cce
    PUSH 0x3e800000                     ; 004d6cd3
    MOV EDI,dword ptr [EBX + 0x154]     ; 004d6cd8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004d6cde
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x1                            ; 004d6d03
        ;   Label: LAB_004d6d03
    PUSH 0x8                            ; 004d6d05
    PUSH EDI                            ; 004d6d07
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d6d08
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6d0d
    JMP 0x004d6cc0                      ; 004d6d10
        ;   XREF to: 004d6cc0 (UNCONDITIONAL_JUMP)  ; LAB_004d6cc0
    MOV EAX,[0x0067b654]                ; 004d6d12 | g_CGamePtr
        ;   Label: LAB_004d6d12
    PUSH EAX                            ; 004d6d17 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0 ; 004d6d18
        ;   XREF to: 004e0bd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d6d1d
    PUSH ESI                            ; 004d6d20
    PUSH EBX                            ; 004d6d21
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 004d6d22
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d6d27
    MOV ESP,EBP                         ; 004d6d2a
    POP EBP                             ; 004d6d2c
    POP EDI                             ; 004d6d2d
    POP ESI                             ; 004d6d2e
    POP EBX                             ; 004d6d2f
    RET                                 ; 004d6d30

