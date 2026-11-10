; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_processDamage_FUN_004364a0(CColonel *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_005f44a8
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 g_CGameInstance.field444_0x1ec
;   undefined4 g_CGameInstance.field488_0x248
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004364a0
        ;   Label: core_colonel.cpp_CColonel_processDamage_FUN_004364a0
    PUSH ESI                            ; 004364a1
    PUSH EDI                            ; 004364a2
    PUSH EBP                            ; 004364a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004364a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004364a8
    TEST dword ptr [EBX + 0x10a60],0x7fffffff ; 004364ac
    JNZ 0x00436524                      ; 004364b6
        ;   XREF to: 00436524 (CONDITIONAL_JUMP)  ; LAB_00436524
    MOV EAX,[0x00616494]                ; 004364b8 | g_CGamePtr
        ;   Label: LAB_004364b8
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004364bd | g_CGameInstance.field444_0x1ec
    JZ 0x004364cd                       ; 004364c4
        ;   XREF to: 004364cd (CONDITIONAL_JUMP)  ; LAB_004364cd
    MOV dword ptr [ESI + 0x4],0x0       ; 004364c6
    MOV EAX,[0x00616494]                ; 004364cd | g_CGamePtr
        ;   Label: LAB_004364cd
    MOV EDI,dword ptr [EAX + 0x248]     ; 004364d2 | g_CGameInstance.field488_0x248
    TEST EDI,EDI                        ; 004364d8
    JZ 0x0043652d                       ; 004364da
        ;   XREF to: 0043652d (CONDITIONAL_JUMP)  ; LAB_0043652d
    MOV EAX,[0x005f44a8]                ; 004364dc | DAT_005f44a8
        ;   Label: LAB_004364dc
    MOV dword ptr [EBX + 0x10a60],EAX   ; 004364e1
    FLD float ptr [ESI + 0x4]           ; 004364e7
    FSUBR float ptr [EBX + 0x25a8]      ; 004364ea
    LEA EDI,[EBX + 0x2b4]               ; 004364f0
    FST float ptr [EBX + 0x25a8]        ; 004364f6
    FLDZ                                ; 004364fc
    FCOMPP                              ; 004364fe
    FNSTSW AX                           ; 00436500
    SAHF                                ; 00436502
    JNC 0x00436532                      ; 00436503
        ;   XREF to: 00436532 (CONDITIONAL_JUMP)  ; LAB_00436532
    FLD float ptr [ESI + 0x4]           ; 00436505
    FLDZ                                ; 00436508
    FCOMPP                              ; 0043650a
    FNSTSW AX                           ; 0043650c
    SAHF                                ; 0043650e
    JC 0x0043659d                       ; 0043650f
        ;   XREF to: 0043659d (CONDITIONAL_JUMP)  ; LAB_0043659d
    PUSH ESI                            ; 00436515
        ;   Label: LAB_00436515
    PUSH EBX                            ; 00436516
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 00436517
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0043651c
    POP EBP                             ; 0043651f
    POP EDI                             ; 00436520
    POP ESI                             ; 00436521
    POP EBX                             ; 00436522
    RET                                 ; 00436523
    MOV dword ptr [ESI + 0x4],0x0       ; 00436524
        ;   Label: LAB_00436524
    JMP 0x004364b8                      ; 0043652b
        ;   XREF to: 004364b8 (UNCONDITIONAL_JUMP)  ; LAB_004364b8
    MOV dword ptr [ESI + 0x4],EDI       ; 0043652d
        ;   Label: LAB_0043652d
    JMP 0x004364dc                      ; 00436530
        ;   XREF to: 004364dc (UNCONDITIONAL_JUMP)  ; LAB_004364dc
    PUSH EDI                            ; 00436532
        ;   Label: LAB_00436532
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00436533
    CALL core_motion.cpp_FUN_005035c0   ; 0043653d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00436542
    ADD ESP,0x4                         ; 00436545
    CMP EAX,0x6                         ; 00436548
    JZ 0x00436515                       ; 0043654b
        ;   XREF to: 00436515 (CONDITIONAL_JUMP)  ; LAB_00436515
    PUSH EDI                            ; 0043654d
    CALL core_motion.cpp_FUN_005035c0   ; 0043654e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00436553
    ADD ESP,0x4                         ; 00436556
    CMP EAX,0x5                         ; 00436559
    JZ 0x00436515                       ; 0043655c
        ;   XREF to: 00436515 (CONDITIONAL_JUMP)  ; LAB_00436515
    PUSH 0x1                            ; 0043655e
    PUSH 0x5                            ; 00436560
    PUSH EDI                            ; 00436562
    MOV dword ptr [EBX + 0x276c],0x0    ; 00436563
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0043656d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00436572
    PUSH 0x0                            ; 00436575
    PUSH 0x42480000                     ; 00436577
    PUSH 0x32                           ; 0043657c
    PUSH EBX                            ; 0043657e
    MOV EBP,dword ptr [0x006167e0]      ; 0043657f | g_CGorePtr
    PUSH EBP                            ; 00436585
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0 ; 00436586
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 0043658b
    PUSH ESI                            ; 0043658e
    PUSH EBX                            ; 0043658f
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 00436590
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00436595
    POP EBP                             ; 00436598
    POP EDI                             ; 00436599
    POP ESI                             ; 0043659a
    POP EBX                             ; 0043659b
    RET                                 ; 0043659c
    PUSH 0x1                            ; 0043659d
        ;   Label: LAB_0043659d
    PUSH 0x4                            ; 0043659f
    PUSH EDI                            ; 004365a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004365a2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004365a7
    PUSH ESI                            ; 004365aa
    PUSH EBX                            ; 004365ab
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004365ac
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004365b1
    POP EBP                             ; 004365b4
    POP EDI                             ; 004365b5
    POP ESI                             ; 004365b6
    POP EBX                             ; 004365b7
    RET                                 ; 004365b8

