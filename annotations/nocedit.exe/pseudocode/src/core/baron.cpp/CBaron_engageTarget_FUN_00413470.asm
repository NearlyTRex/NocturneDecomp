; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_engageTarget_FUN_00413470(CBaron *this_ptr,CDemonActor *target)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 at 00413ef9
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413470
        ;   Label: core_baron.cpp_CBaron_engageTarget_FUN_00413470
    PUSH ESI                            ; 00413471
    PUSH EDI                            ; 00413472
    PUSH EBP                            ; 00413473
    SUB ESP,0x24                        ; 00413474
    MOV EBX,dword ptr [ESP + 0x38]      ; 00413477
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0041347b
    TEST ESI,ESI                        ; 0041347f
    JZ 0x00413491                       ; 00413481
        ;   XREF to: 00413491 (CONDITIONAL_JUMP)  ; LAB_00413491
    MOV EDX,dword ptr [EBX + 0x1fcac]   ; 00413483
    CMP ESI,EDX                         ; 00413489
    JZ 0x00413491                       ; 0041348b
        ;   XREF to: 00413491 (CONDITIONAL_JUMP)  ; LAB_00413491
    TEST EDX,EDX                        ; 0041348d
    JZ 0x00413499                       ; 0041348f
        ;   XREF to: 00413499 (CONDITIONAL_JUMP)  ; LAB_00413499
    ADD ESP,0x24                        ; 00413491
        ;   Label: LAB_00413491
    POP EBP                             ; 00413494
    POP EDI                             ; 00413495
    POP ESI                             ; 00413496
    POP EBX                             ; 00413497
    RET                                 ; 00413498
    MOV EDI,dword ptr [0x00823c4c]      ; 00413499 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00413499
    PUSH EDI                            ; 0041349f
    PUSH ESI                            ; 004134a0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004134a1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004134a6
    TEST EAX,EAX                        ; 004134a9
    JNZ 0x0041357f                      ; 004134ab
        ;   XREF to: 0041357f (CONDITIONAL_JUMP)  ; LAB_0041357f
    MOV EDX,0xc0000000                  ; 004134b1
        ;   Label: LAB_004134b1
    XOR EBP,EBP                         ; 004134b6
    MOV dword ptr [EBX + 0x1fcac],ESI   ; 004134b8
    LEA EAX,[ESP + 0x18]                ; 004134be
    MOV dword ptr [ESP + 0x18],EBP      ; 004134c2
    MOV dword ptr [ESP + 0x1c],EBP      ; 004134c6
    PUSH EAX                            ; 004134ca
    LEA EAX,[ESP + 0x4]                 ; 004134cb
    MOV dword ptr [ESP + 0x24],EDX      ; 004134cf
    PUSH EAX                            ; 004134d3
    MOV ECX,dword ptr [EBX + 0x1fcac]   ; 004134d4
    PUSH ECX                            ; 004134da
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004134db
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,dword ptr [EBX + 0x1fcac]   ; 004134e0
    FLD float ptr [EDX + 0x20]          ; 004134e6
    FADD float ptr [EAX]                ; 004134e9
    ADD ESP,0xc                         ; 004134eb
    FSTP float ptr [ESP + 0xc]          ; 004134ee
    FLD float ptr [EDX + 0x24]          ; 004134f2
    FADD float ptr [EAX + 0x4]          ; 004134f5
    FSTP float ptr [ESP + 0x10]         ; 004134f8
    FLD float ptr [EDX + 0x28]          ; 004134fc
    LEA EDX,[EBX + 0x20]                ; 004134ff
    FADD float ptr [EAX + 0x8]          ; 00413502
    MOV EAX,dword ptr [ESP + 0xc]       ; 00413505
    FSTP float ptr [ESP + 0x14]         ; 00413509
    MOV dword ptr [EDX],EAX             ; 0041350d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041350f
    MOV dword ptr [EDX + 0x4],EAX       ; 00413513
    MOV EAX,dword ptr [ESP + 0x14]      ; 00413516
    MOV dword ptr [EDX + 0x8],EAX       ; 0041351a
    MOV EAX,dword ptr [EBX + 0x1fcac]   ; 0041351d
    LEA EDX,[EBX + 0x30]                ; 00413523
    ADD EAX,0x30                        ; 00413526
    CMP EDX,EAX                         ; 00413529
    JZ 0x0041353d                       ; 0041352b
        ;   XREF to: 0041353d (CONDITIONAL_JUMP)  ; LAB_0041353d
    MOV ECX,dword ptr [EAX]             ; 0041352d
    MOV dword ptr [EDX],ECX             ; 0041352f
    MOV ECX,dword ptr [EAX + 0x4]       ; 00413531
    MOV dword ptr [EDX + 0x4],ECX       ; 00413534
    MOV ECX,dword ptr [EAX + 0x8]       ; 00413537
    MOV dword ptr [EDX + 0x8],ECX       ; 0041353a
    PUSH 0x2c                           ; 0041353d
        ;   Label: LAB_0041353d
    PUSH 0x0                            ; 0041353f
    LEA EAX,[EBX + 0xbe2c]              ; 00413541
    PUSH EAX                            ; 00413547
    CALL crt_memory.c_memset_FUN_005fde40 ; 00413548
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0041354d
    PUSH 0x1                            ; 00413550
    PUSH 0x6                            ; 00413552
    LEA EAX,[EBX + 0x158]               ; 00413554
    PUSH EAX                            ; 0041355a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041355b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1fccc],0x1   ; 00413560
    ADD ESP,0xc                         ; 0041356a
    MOV dword ptr [EBX + 0x1fcd0],0x0   ; 0041356d
    ADD ESP,0x24                        ; 00413577
    POP EBP                             ; 0041357a
    POP EDI                             ; 0041357b
    POP ESI                             ; 0041357c
    POP EBX                             ; 0041357d
    RET                                 ; 0041357e
    PUSH EAX                            ; 0041357f
        ;   Label: LAB_0041357f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00413580
    CALL dword ptr [EDX + 0x120]        ; 00413586
    ADD ESP,0x4                         ; 0041358c
    TEST EAX,EAX                        ; 0041358f
    JG 0x00413491                       ; 00413591
        ;   XREF to: 00413491 (CONDITIONAL_JUMP)  ; LAB_00413491
    JMP 0x004134b1                      ; 00413597
        ;   XREF to: 004134b1 (UNCONDITIONAL_JUMP)  ; LAB_004134b1

