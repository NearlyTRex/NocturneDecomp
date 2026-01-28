; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hostage_cpp_CHostage_FUN_004f6450(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00821ff4
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_npc.cpp_CNPC_FUN_00544d30
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6450
        ;   Label: core_hostage.cpp_CHostage_FUN_004f6450
    PUSH ESI                            ; 004f6451
    PUSH EDI                            ; 004f6452
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f6453
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f6457
    MOV EDX,dword ptr [EBX + 0x1fab8]   ; 004f645b
    TEST EDX,EDX                        ; 004f6461
    JZ 0x004f64df                       ; 004f6463
        ;   XREF to: 004f64df (CONDITIONAL_JUMP)  ; LAB_004f64df
    FLD float ptr [ESI + 0x4]           ; 004f6469
        ;   Label: LAB_004f6469
    FSUBR float ptr [EBX + 0x243c]      ; 004f646c
    LEA EDX,[EBX + 0x158]               ; 004f6472
    FST float ptr [EBX + 0x243c]        ; 004f6478
    FLDZ                                ; 004f647e
    FCOMPP                              ; 004f6480
    FNSTSW AX                           ; 004f6482
    SAHF                                ; 004f6484
    JNC 0x004f64e4                      ; 004f6485
        ;   XREF to: 004f64e4 (CONDITIONAL_JUMP)  ; LAB_004f64e4
    FLD float ptr [ESI + 0x4]           ; 004f6487
    FLDZ                                ; 004f648a
    FCOMPP                              ; 004f648c
    FNSTSW AX                           ; 004f648e
    SAHF                                ; 004f6490
    JNC 0x004f64d1                      ; 004f6491
        ;   XREF to: 004f64d1 (CONDITIONAL_JUMP)  ; LAB_004f64d1
    CMP dword ptr [EBX + 0x2598],0x0    ; 004f6493
    JNZ 0x004f64be                      ; 004f649a
        ;   XREF to: 004f64be (CONDITIONAL_JUMP)  ; LAB_004f64be
    PUSH 0x1                            ; 004f649c
    PUSH 0x4                            ; 004f649e
    PUSH EDX                            ; 004f64a0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f64a1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,[0x00821ff4]                ; 004f64a6 | DAT_00821ff4
    MOV dword ptr [EBX + 0x1faec],0x40400000 ; 004f64ab
    ADD ESP,0xc                         ; 004f64b5
    MOV dword ptr [EBX + 0x1fae8],EAX   ; 004f64b8
    MOV EDI,dword ptr [EBX + 0x1fab0]   ; 004f64be
        ;   Label: LAB_004f64be
    PUSH EDI                            ; 004f64c4
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004f64c5
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004f64ca
    TEST EAX,EAX                        ; 004f64cd
    JZ 0x004f6528                       ; 004f64cf
        ;   XREF to: 004f6528 (CONDITIONAL_JUMP)  ; LAB_004f6528
    PUSH ESI                            ; 004f64d1
        ;   Label: LAB_004f64d1
    PUSH EBX                            ; 004f64d2
    CALL core_npc.cpp_CNPC_FUN_00544d30 ; 004f64d3
        ;   XREF to: 00544d30 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544d30(CNPC * this_ptr)
    ADD ESP,0x8                         ; 004f64d8
    POP EDI                             ; 004f64db
    POP ESI                             ; 004f64dc
    POP EBX                             ; 004f64dd
    RET                                 ; 004f64de
    MOV dword ptr [ESI + 0x4],EDX       ; 004f64df
        ;   Label: LAB_004f64df
    JMP 0x004f6469                      ; 004f64e2
        ;   XREF to: 004f6469 (UNCONDITIONAL_JUMP)  ; LAB_004f6469
    PUSH 0x1                            ; 004f64e4
        ;   Label: LAB_004f64e4
    PUSH 0x6                            ; 004f64e6
    PUSH EDX                            ; 004f64e8
    MOV dword ptr [EBX + 0x243c],0x0    ; 004f64e9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f64f3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f64f8
    PUSH 0x41c80000                     ; 004f64fb
    PUSH 0x32                           ; 004f6500
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f6502
    PUSH EBX                            ; 004f6508
    CALL dword ptr [EAX + 0xa0]         ; 004f6509
    ADD ESP,0xc                         ; 004f650f
    LEA EAX,[EBX + 0x1fa4c]             ; 004f6512
    PUSH EAX                            ; 004f6518
    MOV EDX,dword ptr [EBX + 0x154]     ; 004f6519
    PUSH EBX                            ; 004f651f
    CALL dword ptr [EDX + 0x24]         ; 004f6520
    ADD ESP,0x8                         ; 004f6523
    JMP 0x004f64d1                      ; 004f6526
        ;   XREF to: 004f64d1 (UNCONDITIONAL_JUMP)  ; LAB_004f64d1
    LEA EAX,[EBX + 0x1f9e8]             ; 004f6528
        ;   Label: LAB_004f6528
    PUSH EAX                            ; 004f652e
    MOV EDX,dword ptr [EBX + 0x154]     ; 004f652f
    PUSH EBX                            ; 004f6535
    CALL dword ptr [EDX + 0x24]         ; 004f6536
    ADD ESP,0x8                         ; 004f6539
    MOV dword ptr [EBX + 0x1fab0],EAX   ; 004f653c
    PUSH ESI                            ; 004f6542
    PUSH EBX                            ; 004f6543
    CALL core_npc.cpp_CNPC_FUN_00544d30 ; 004f6544
        ;   XREF to: 00544d30 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544d30(CNPC * this_ptr)
    ADD ESP,0x8                         ; 004f6549
    POP EDI                             ; 004f654c
    POP ESI                             ; 004f654d
    POP EBX                             ; 004f654e
    RET                                 ; 004f654f

