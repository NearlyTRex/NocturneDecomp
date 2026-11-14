; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_CBasicEnemy_process_FUN_0059f420(CBasicEnemy *this_ptr,float delta_time)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0059f410 = 0059f48a
;
; Called Functions:
;   core_basicene.cpp_FUN_0059f5b0
;   core_basicene.cpp_FUN_0059f660
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_0042b5e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_muzzle.cpp_FUN_0059da20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f420
        ;   Label: core_basicene.cpp_CBasicEnemy_process_FUN_0059f420
    PUSH EBP                            ; 0059f421
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059f422
    PUSH dword ptr [ESP + 0x10]         ; 0059f426
    PUSH EBX                            ; 0059f42a
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0059f42b
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059f430
    TEST EAX,EAX                        ; 0059f433
    JNZ 0x0059f440                      ; 0059f435
        ;   XREF to: 0059f440 (CONDITIONAL_JUMP)  ; LAB_0059f440
    MOV dword ptr [EBX + 0x1141c],EAX   ; 0059f437
    POP EBP                             ; 0059f43d
    POP EBX                             ; 0059f43e
    RET                                 ; 0059f43f
    PUSH EDI                            ; 0059f440
        ;   Label: LAB_0059f440
    PUSH dword ptr [ESP + 0x14]         ; 0059f441
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059f445
    PUSH EBX                            ; 0059f44b
    MOV dword ptr [EBX + 0x1141c],0x1   ; 0059f44c
    CALL dword ptr [EAX + 0x15c]        ; 0059f456
    ADD ESP,0x8                         ; 0059f45c
    PUSH dword ptr [ESP + 0x14]         ; 0059f45f
    PUSH EBX                            ; 0059f463
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0059f464
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059f469
    TEST EAX,EAX                        ; 0059f46c
    JZ 0x0059f545                       ; 0059f46e
        ;   XREF to: 0059f545 (CONDITIONAL_JUMP)  ; LAB_0059f545
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0059f474
    CMP EAX,0x3                         ; 0059f47a
    JA 0x0059f537                       ; 0059f47d
        ;   XREF to: 0059f537 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59f410]  ; 0059f483 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1                            ; 0059f48a
        ;   Label: caseD_0
    MOV EBP,dword ptr [EBX + 0x11384]   ; 0059f48c
    PUSH EBP                            ; 0059f492
    LEA EAX,[EBX + 0x2b4]               ; 0059f493
        ;   Label: LAB_0059f493
    PUSH EAX                            ; 0059f499
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059f49a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059f49f
        ;   Label: LAB_0059f49f
    PUSH dword ptr [ESP + 0x14]         ; 0059f4a2
        ;   Label: LAB_0059f4a2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059f4a6
    PUSH EBX                            ; 0059f4ac
    CALL dword ptr [EAX + 0x164]        ; 0059f4ad
    MOV EAX,dword ptr [EBX + 0x113b8]   ; 0059f4b3
    ADD ESP,0x8                         ; 0059f4b9
    TEST EAX,EAX                        ; 0059f4bc
    JZ 0x0059f4cd                       ; 0059f4be
        ;   XREF to: 0059f4cd (CONDITIONAL_JUMP)  ; LAB_0059f4cd
    PUSH dword ptr [ESP + 0x14]         ; 0059f4c0
    PUSH EBX                            ; 0059f4c4
    CALL core_basicene.cpp_FUN_0059f5b0 ; 0059f4c5
        ;   XREF to: 0059f5b0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f5b0()
    ADD ESP,0x8                         ; 0059f4ca
    PUSH dword ptr [ESP + 0x14]         ; 0059f4cd
        ;   Label: LAB_0059f4cd
    PUSH EBX                            ; 0059f4d1
    CALL core_basicene.cpp_FUN_0059f660 ; 0059f4d2
        ;   XREF to: 0059f660 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f660()
    ADD ESP,0x8                         ; 0059f4d7
    PUSH dword ptr [ESP + 0x14]         ; 0059f4da
    PUSH EBX                            ; 0059f4de
    CALL core_charactr.cpp_FUN_0042b5e0 ; 0059f4df
        ;   XREF to: 0042b5e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b5e0()
    ADD ESP,0x8                         ; 0059f4e4
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059f4e7
    PUSH dword ptr [ESP + 0x14]         ; 0059f4ed
    PUSH EBX                            ; 0059f4f1
    CALL dword ptr [EAX + 0x154]        ; 0059f4f2
    ADD ESP,0x8                         ; 0059f4f8
    POP EDI                             ; 0059f4fb
    POP EBP                             ; 0059f4fc
    POP EBX                             ; 0059f4fd
    RET                                 ; 0059f4fe
    PUSH 0x1                            ; 0059f4ff
        ;   Label: caseD_3
    MOV ECX,dword ptr [EBX + 0x11380]   ; 0059f501
    PUSH ECX                            ; 0059f507
    JMP 0x0059f493                      ; 0059f508
        ;   XREF to: 0059f493 (UNCONDITIONAL_JUMP)  ; LAB_0059f493
    PUSH 0x1                            ; 0059f50a
        ;   Label: caseD_1
    MOV EDI,dword ptr [EBX + 0x11388]   ; 0059f50c
    PUSH EDI                            ; 0059f512
    JMP 0x0059f493                      ; 0059f513
        ;   XREF to: 0059f493 (UNCONDITIONAL_JUMP)  ; LAB_0059f493
    PUSH ESI                            ; 0059f518
        ;   Label: caseD_2
    PUSH 0x1                            ; 0059f519
    MOV ESI,dword ptr [EBX + 0x1138c]   ; 0059f51b
    PUSH ESI                            ; 0059f521
    LEA EAX,[EBX + 0x2b4]               ; 0059f522
    PUSH EAX                            ; 0059f528
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059f529
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059f52e
    POP ESI                             ; 0059f531
    JMP 0x0059f4a2                      ; 0059f532
        ;   XREF to: 0059f4a2 (UNCONDITIONAL_JUMP)  ; LAB_0059f4a2
    PUSH 0x1                            ; 0059f537
        ;   Label: default
    MOV EDX,dword ptr [EBX + 0x11384]   ; 0059f539
    PUSH EDX                            ; 0059f53f
    JMP 0x0059f493                      ; 0059f540
        ;   XREF to: 0059f493 (UNCONDITIONAL_JUMP)  ; LAB_0059f493
    LEA EAX,[EBX + 0x10af8]             ; 0059f545
        ;   Label: LAB_0059f545
    PUSH dword ptr [ESP + 0x14]         ; 0059f54b
    PUSH EAX                            ; 0059f54f
    CALL core_muzzle.cpp_FUN_0059da20   ; 0059f550
        ;   XREF to: 0059da20 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059da20()
    ADD ESP,0x8                         ; 0059f555
    PUSH 0x1                            ; 0059f558
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059f55a
    PUSH dword ptr [ESP + 0x18]         ; 0059f560
    PUSH EBX                            ; 0059f564
    CALL dword ptr [EAX + 0x160]        ; 0059f565
    JMP 0x0059f49f                      ; 0059f56b
        ;   XREF to: 0059f49f (UNCONDITIONAL_JUMP)  ; LAB_0059f49f

