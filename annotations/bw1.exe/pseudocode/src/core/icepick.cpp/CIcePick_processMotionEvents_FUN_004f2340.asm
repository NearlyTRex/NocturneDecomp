; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004f2340(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f0efe
;
; Referenced Globals:
;   undefined1* switchdataD_004f2328 = 004f2374
;   undefined4 DAT_01d06ca8
;   undefined4 DAT_01d06cac
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_FUN_004325b0
;   core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f2430
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2340
        ;   Label: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004f2340
    PUSH ESI                            ; 004f2341
    PUSH EDI                            ; 004f2342
    PUSH EBP                            ; 004f2343
    MOV EBP,ESP                         ; 004f2344
    AND ESP,0xfffffff8                  ; 004f2346
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f2349
    LEA ESI,[EBX + 0x158]               ; 004f234c
    LEA EAX,[EBP + 0x18]                ; 004f2352
        ;   Label: LAB_004f2352
    PUSH EAX                            ; 004f2355
    PUSH ESI                            ; 004f2356
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004f2357
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 004f235c
    SUB EAX,0x64                        ; 004f235e
    ADD ESP,0x8                         ; 004f2361
    CMP EAX,0x5                         ; 004f2364
    JA 0x004f2421                       ; 004f2367
        ;   XREF to: 004f2421 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f2328]  ; 004f236d | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x1ffb0]   ; 004f2374
        ;   Label: caseD_64
    INC EAX                             ; 004f237a
    MOV dword ptr [EBX + 0x1ffb0],EAX   ; 004f237b
    CMP EAX,0x4                         ; 004f2381
    JLE 0x004f2390                      ; 004f2384
        ;   XREF to: 004f2390 (CONDITIONAL_JUMP)  ; LAB_004f2390
    MOV dword ptr [EBX + 0x1ffb0],0x0   ; 004f2386
    FLD float ptr [EBP + 0x18]          ; 004f2390
        ;   Label: LAB_004f2390
    FLDZ                                ; 004f2393
    FCOMPP                              ; 004f2395
    FNSTSW AX                           ; 004f2397
    SAHF                                ; 004f2399
    JC 0x004f2352                       ; 004f239a
        ;   XREF to: 004f2352 (CONDITIONAL_JUMP)  ; LAB_004f2352
    MOV ESP,EBP                         ; 004f239c
    POP EBP                             ; 004f239e
    POP EDI                             ; 004f239f
    POP ESI                             ; 004f23a0
    POP EBX                             ; 004f23a1
    RET                                 ; 004f23a2
    MOV EDI,dword ptr [0x01d06ca8]      ; 004f23a3 | DAT_01d06ca8
        ;   Label: caseD_65
    PUSH EDI                            ; 004f23a9
    PUSH EBX                            ; 004f23aa
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f2430 ; 004f23ab
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f2430(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f23b0
    JMP 0x004f2390                      ; 004f23b3
        ;   XREF to: 004f2390 (UNCONDITIONAL_JUMP)  ; LAB_004f2390
    MOV ECX,dword ptr [0x01d06cac]      ; 004f23b5 | DAT_01d06cac
        ;   Label: caseD_66
    PUSH ECX                            ; 004f23bb
    PUSH EBX                            ; 004f23bc
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f2430 ; 004f23bd
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f2430(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f23c2
    JMP 0x004f2390                      ; 004f23c5
        ;   XREF to: 004f2390 (UNCONDITIONAL_JUMP)  ; LAB_004f2390
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004f23c7
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: caseD_67
    TEST AL,0x3                         ; 004f23cc
    JNZ 0x004f2390                      ; 004f23ce
        ;   XREF to: 004f2390 (CONDITIONAL_JUMP)  ; LAB_004f2390
    PUSH 0x1                            ; 004f23d0
    PUSH 0x15                           ; 004f23d2
    PUSH ESI                            ; 004f23d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f23d5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f23da
    JMP 0x004f2390                      ; 004f23dd
        ;   XREF to: 004f2390 (UNCONDITIONAL_JUMP)  ; LAB_004f2390
    MOV EDX,dword ptr [EBX + 0x1ffd0]   ; 004f23df
        ;   Label: caseD_68
    TEST EDX,EDX                        ; 004f23e5
    JZ 0x004f2390                       ; 004f23e7
        ;   XREF to: 004f2390 (CONDITIONAL_JUMP)  ; LAB_004f2390
    PUSH 0x0                            ; 004f23e9
    PUSH 0x3e4ccccd                     ; 004f23eb
    PUSH EDX                            ; 004f23f0
    PUSH 0x1                            ; 004f23f1
    PUSH EBX                            ; 004f23f3
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 004f23f4
    CALL core_charactr.cpp_FUN_004325b0 ; 004f23fe
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 004f2403
    JMP 0x004f2390                      ; 004f2406
        ;   XREF to: 004f2390 (UNCONDITIONAL_JUMP)  ; LAB_004f2390
    PUSH 0x0                            ; 004f2408
        ;   Label: caseD_69
    PUSH 0x1                            ; 004f240a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f240c
    PUSH EBX                            ; 004f2412
    CALL dword ptr [EAX + 0x128]        ; 004f2413
    ADD ESP,0xc                         ; 004f2419
    JMP 0x004f2390                      ; 004f241c
        ;   XREF to: 004f2390 (UNCONDITIONAL_JUMP)  ; LAB_004f2390
    PUSH EDX                            ; 004f2421
        ;   Label: default
    PUSH EBX                            ; 004f2422
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004f2423
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f2428
    JMP 0x004f2390                      ; 004f242b
        ;   XREF to: 004f2390 (UNCONDITIONAL_JUMP)  ; LAB_004f2390

