; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_00414fc0(CBiggs *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414fc0
        ;   Label: core_biggs.cpp_CBiggs_processDamage_FUN_00414fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414fc1
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 00414fc5
    TEST EDX,EDX                        ; 00414fcb
    JNZ 0x00415054                      ; 00414fcd
        ;   XREF to: 00415054 (CONDITIONAL_JUMP)  ; LAB_00415054
    PUSH EDI                            ; 00414fd3
    PUSH ESI                            ; 00414fd4
    MOV EAX,dword ptr [ESP + 0x14]      ; 00414fd5
    FLD float ptr [EAX + 0x4]           ; 00414fd9
    FSUBR float ptr [EBX + 0x2538]      ; 00414fdc
    LEA EDI,[EBX + 0x158]               ; 00414fe2
    FST float ptr [EBX + 0x2538]        ; 00414fe8
    FLDZ                                ; 00414fee
    FCOMPP                              ; 00414ff0
    FNSTSW AX                           ; 00414ff2
    SAHF                                ; 00414ff4
    JNC 0x00415056                      ; 00414ff5
        ;   XREF to: 00415056 (CONDITIONAL_JUMP)  ; LAB_00415056
    PUSH 0x2                            ; 00414ff7
    PUSH EDX                            ; 00414ff9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00414ffa
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00414fff
    MOV ESI,EAX                         ; 00415002
    TEST EAX,EAX                        ; 00415004
    JNZ 0x00415015                      ; 00415006
        ;   XREF to: 00415015 (CONDITIONAL_JUMP)  ; LAB_00415015
    PUSH 0x1                            ; 00415008
    PUSH 0x4                            ; 0041500a
    PUSH EDI                            ; 0041500c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041500d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415012
    CMP ESI,0x1                         ; 00415015
        ;   Label: LAB_00415015
    JNZ 0x0041502c                      ; 00415018
        ;   XREF to: 0041502c (CONDITIONAL_JUMP)  ; LAB_0041502c
    PUSH ESI                            ; 0041501a
    PUSH 0x5                            ; 0041501b
    LEA EAX,[EBX + 0x158]               ; 0041501d
    PUSH EAX                            ; 00415023
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00415024
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415029
    CMP ESI,0x2                         ; 0041502c
        ;   Label: LAB_0041502c
    JNZ 0x00415044                      ; 0041502f
        ;   XREF to: 00415044 (CONDITIONAL_JUMP)  ; LAB_00415044
    PUSH 0x1                            ; 00415031
    PUSH 0x6                            ; 00415033
    LEA EAX,[EBX + 0x158]               ; 00415035
    PUSH EAX                            ; 0041503b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041503c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0041503c
    ADD ESP,0xc                         ; 00415041
    MOV ECX,dword ptr [ESP + 0x14]      ; 00415044
        ;   Label: LAB_00415044
    PUSH ECX                            ; 00415048
    PUSH EBX                            ; 00415049
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0041504a
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041504f
    POP ESI                             ; 00415052
    POP EDI                             ; 00415053
    POP EBX                             ; 00415054
        ;   Label: LAB_00415054
    RET                                 ; 00415055
    PUSH 0x1                            ; 00415056
        ;   Label: LAB_00415056
    PUSH 0x7                            ; 00415058
    PUSH EDI                            ; 0041505a
    MOV dword ptr [EBX + 0x2538],EDX    ; 0041505b
    JMP 0x0041503c                      ; 00415061
        ;   XREF to: 0041503c (UNCONDITIONAL_JUMP)  ; LAB_0041503c

