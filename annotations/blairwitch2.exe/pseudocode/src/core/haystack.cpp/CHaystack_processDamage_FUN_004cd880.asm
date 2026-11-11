; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004cd880(CHaystack *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_005f7f78
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd880
        ;   Label: core_haystack.cpp_CHaystack_processDamage_FUN_004cd880
    PUSH ESI                            ; 004cd881
    PUSH EDI                            ; 004cd882
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cd883
    MOV EDI,dword ptr [ESP + 0x14]      ; 004cd887
    TEST dword ptr [EBX + 0x10a60],0x7fffffff ; 004cd88b
    JNZ 0x004cd91c                      ; 004cd895
        ;   XREF to: 004cd91c (CONDITIONAL_JUMP)  ; LAB_004cd91c
    MOV EAX,[0x00616494]                ; 004cd89b | g_CGamePtr
        ;   Label: LAB_004cd89b
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004cd8a0 | g_CGameInstance.god_mode_enabled
    JZ 0x004cd8b0                       ; 004cd8a7
        ;   XREF to: 004cd8b0 (CONDITIONAL_JUMP)  ; LAB_004cd8b0
    MOV dword ptr [EDI + 0x4],0x0       ; 004cd8a9
    MOV EAX,[0x00616494]                ; 004cd8b0 | g_CGamePtr
        ;   Label: LAB_004cd8b0
    MOV ESI,dword ptr [EAX + 0x248]     ; 004cd8b5 | g_CGameInstance.allow_damage_flag
    TEST ESI,ESI                        ; 004cd8bb
    JZ 0x004cd928                       ; 004cd8bd
        ;   XREF to: 004cd928 (CONDITIONAL_JUMP)  ; LAB_004cd928
    MOV EAX,[0x005f7f78]                ; 004cd8bf | DAT_005f7f78
        ;   Label: LAB_004cd8bf
    MOV dword ptr [EBX + 0x10a60],EAX   ; 004cd8c4
    FLD float ptr [EDI + 0x4]           ; 004cd8ca
    FSUBR float ptr [EBX + 0x25a8]      ; 004cd8cd
    LEA ESI,[EBX + 0x2b4]               ; 004cd8d3
    FST float ptr [EBX + 0x25a8]        ; 004cd8d9
    FLDZ                                ; 004cd8df
    FCOMPP                              ; 004cd8e1
    FNSTSW AX                           ; 004cd8e3
    SAHF                                ; 004cd8e5
    JNC 0x004cd92d                      ; 004cd8e6
        ;   XREF to: 004cd92d (CONDITIONAL_JUMP)  ; LAB_004cd92d
    FLD float ptr [EDI + 0x4]           ; 004cd8e8
    FLDZ                                ; 004cd8eb
    FCOMPP                              ; 004cd8ed
    FNSTSW AX                           ; 004cd8ef
    SAHF                                ; 004cd8f1
    JNC 0x004cd90e                      ; 004cd8f2
        ;   XREF to: 004cd90e (CONDITIONAL_JUMP)  ; LAB_004cd90e
    CMP dword ptr [EBX + 0x25640],0x0   ; 004cd8f4
    JNZ 0x004cd996                      ; 004cd8fb
        ;   XREF to: 004cd996 (CONDITIONAL_JUMP)  ; LAB_004cd996
    PUSH 0x1                            ; 004cd901
    PUSH 0x4                            ; 004cd903
    PUSH ESI                            ; 004cd905
        ;   Label: LAB_004cd905
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004cd906
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004cd90b
    PUSH EDI                            ; 004cd90e
        ;   Label: LAB_004cd90e
    PUSH EBX                            ; 004cd90f
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004cd910
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004cd915
    POP EDI                             ; 004cd918
    POP ESI                             ; 004cd919
    POP EBX                             ; 004cd91a
    RET                                 ; 004cd91b
    MOV dword ptr [EDI + 0x4],0x0       ; 004cd91c
        ;   Label: LAB_004cd91c
    JMP 0x004cd89b                      ; 004cd923
        ;   XREF to: 004cd89b (UNCONDITIONAL_JUMP)  ; LAB_004cd89b
    MOV dword ptr [EDI + 0x4],ESI       ; 004cd928
        ;   Label: LAB_004cd928
    JMP 0x004cd8bf                      ; 004cd92b
        ;   XREF to: 004cd8bf (UNCONDITIONAL_JUMP)  ; LAB_004cd8bf
    PUSH ESI                            ; 004cd92d
        ;   Label: LAB_004cd92d
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004cd92e
    CALL core_motion.cpp_FUN_005035c0   ; 004cd938
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004cd93d
    ADD ESP,0x4                         ; 004cd940
    CMP EAX,0x9                         ; 004cd943
    JZ 0x004cd90e                       ; 004cd946
        ;   XREF to: 004cd90e (CONDITIONAL_JUMP)  ; LAB_004cd90e
    PUSH ESI                            ; 004cd948
    CALL core_motion.cpp_FUN_005035c0   ; 004cd949
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004cd94e
    ADD ESP,0x4                         ; 004cd951
    CMP EAX,0x8                         ; 004cd954
    JZ 0x004cd90e                       ; 004cd957
        ;   XREF to: 004cd90e (CONDITIONAL_JUMP)  ; LAB_004cd90e
    PUSH 0x1                            ; 004cd959
    PUSH 0x8                            ; 004cd95b
    PUSH ESI                            ; 004cd95d
    MOV dword ptr [EBX + 0x276c],0x0    ; 004cd95e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004cd968
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004cd96d
    PUSH 0x0                            ; 004cd970
    PUSH 0x42480000                     ; 004cd972
    PUSH 0x32                           ; 004cd977
    PUSH EBX                            ; 004cd979
    MOV EAX,[0x006167e0]                ; 004cd97a | g_CGorePtr
    PUSH EAX                            ; 004cd97f
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0 ; 004cd980
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 004cd985
    PUSH EDI                            ; 004cd988
    PUSH EBX                            ; 004cd989
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004cd98a
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004cd98f
    POP EDI                             ; 004cd992
    POP ESI                             ; 004cd993
    POP EBX                             ; 004cd994
    RET                                 ; 004cd995
    PUSH 0x1                            ; 004cd996
        ;   Label: LAB_004cd996
    PUSH 0xb                            ; 004cd998
    JMP 0x004cd905                      ; 004cd99a
        ;   XREF to: 004cd905 (UNCONDITIONAL_JUMP)  ; LAB_004cd905

