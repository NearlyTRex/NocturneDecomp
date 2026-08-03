; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_00415900(CBiggs *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415900
        ;   Label: core_biggs.cpp_CBiggs_processDamage_FUN_00415900
    PUSH ESI                            ; 00415901
    PUSH EDI                            ; 00415902
    MOV EBX,dword ptr [ESP + 0x10]      ; 00415903
    MOV EAX,dword ptr [ESP + 0x14]      ; 00415907
    FLD float ptr [EAX + 0x4]           ; 0041590b
    FSUBR float ptr [EBX + 0x2434]      ; 0041590e
    LEA EDI,[EBX + 0x150]               ; 00415914
    FST float ptr [EBX + 0x2434]        ; 0041591a
    FLDZ                                ; 00415920
    FCOMPP                              ; 00415922
    FNSTSW AX                           ; 00415924
    SAHF                                ; 00415926
    JNC 0x00415976                      ; 00415927
        ;   XREF to: 00415976 (CONDITIONAL_JUMP)  ; LAB_00415976
    PUSH 0x2                            ; 00415929
    PUSH 0x0                            ; 0041592b
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0041592d
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00415932
    MOV ESI,EAX                         ; 00415935
    TEST EAX,EAX                        ; 00415937
    JNZ 0x00415948                      ; 00415939
        ;   XREF to: 00415948 (CONDITIONAL_JUMP)  ; LAB_00415948
    PUSH 0x1                            ; 0041593b
    PUSH 0x4                            ; 0041593d
    PUSH EDI                            ; 0041593f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00415940
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415945
    CMP ESI,0x1                         ; 00415948
        ;   Label: LAB_00415948
    JNZ 0x0041595f                      ; 0041594b
        ;   XREF to: 0041595f (CONDITIONAL_JUMP)  ; LAB_0041595f
    PUSH ESI                            ; 0041594d
    PUSH 0x5                            ; 0041594e
    LEA EAX,[EBX + 0x150]               ; 00415950
    PUSH EAX                            ; 00415956
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00415957
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041595c
    CMP ESI,0x2                         ; 0041595f
        ;   Label: LAB_0041595f
    JZ 0x0041598f                       ; 00415962
        ;   XREF to: 0041598f (CONDITIONAL_JUMP)  ; LAB_0041598f
    MOV EDX,dword ptr [ESP + 0x14]      ; 00415964
        ;   Label: LAB_00415964
    PUSH EDX                            ; 00415968
    PUSH EBX                            ; 00415969
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0041596a
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041596f
    POP EDI                             ; 00415972
    POP ESI                             ; 00415973
    POP EBX                             ; 00415974
    RET                                 ; 00415975
    PUSH 0x1                            ; 00415976
        ;   Label: LAB_00415976
    PUSH 0x7                            ; 00415978
    PUSH EDI                            ; 0041597a
    MOV dword ptr [EBX + 0x2434],0x0    ; 0041597b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00415985
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041598a
    JMP 0x00415964                      ; 0041598d
        ;   XREF to: 00415964 (UNCONDITIONAL_JUMP)  ; LAB_00415964
    PUSH 0x1                            ; 0041598f
        ;   Label: LAB_0041598f
    PUSH 0x6                            ; 00415991
    LEA EAX,[EBX + 0x150]               ; 00415993
    PUSH EAX                            ; 00415999
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041599a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041599f
    MOV EDX,dword ptr [ESP + 0x14]      ; 004159a2
    PUSH EDX                            ; 004159a6
    PUSH EBX                            ; 004159a7
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004159a8
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004159ad
    POP EDI                             ; 004159b0
    POP ESI                             ; 004159b1
    POP EBX                             ; 004159b2
    RET                                 ; 004159b3

