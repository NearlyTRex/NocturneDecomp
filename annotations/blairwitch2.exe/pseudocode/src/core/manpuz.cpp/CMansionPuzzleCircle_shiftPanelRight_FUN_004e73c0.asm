; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 at 004e6ef7
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
;   sound_sndmain.cpp_FUN_005506b0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e73c0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0
    PUSH ESI                            ; 004e73c1
    PUSH EBP                            ; 004e73c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e73c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e73c7
    LEA EAX,[ECX*0x4 + 0x0]             ; 004e73cb
    SUB EAX,ECX                         ; 004e73d2
    SHL EAX,0x3                         ; 004e73d4
    LEA ESI,[EDX + 0x74c]               ; 004e73d7
    ADD EAX,ECX                         ; 004e73dd
    PUSH ECX                            ; 004e73df
    SHL EAX,0x2                         ; 004e73e0
    PUSH EDX                            ; 004e73e3
    LEA EBX,[ESI + EAX*0x1]             ; 004e73e4
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560 ; 004e73e7
        ;   XREF to: 004e7560 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004e73ec
    SHL EAX,0x2                         ; 004e73ee
    SUB EAX,EDX                         ; 004e73f1
    SHL EAX,0x3                         ; 004e73f3
    ADD EAX,EDX                         ; 004e73f6
    ADD ESP,0x8                         ; 004e73f8
    SHL EAX,0x2                         ; 004e73fb
    MOV EDX,dword ptr [EBX]             ; 004e73fe
    ADD ESI,EAX                         ; 004e7400
    TEST EDX,EDX                        ; 004e7402
    JZ 0x004e744b                       ; 004e7404
        ;   XREF to: 004e744b (CONDITIONAL_JUMP)  ; LAB_004e744b
    CMP dword ptr [ESI],0x0             ; 004e7406
    JNZ 0x004e744b                      ; 004e7409
        ;   XREF to: 004e744b (CONDITIONAL_JUMP)  ; LAB_004e744b
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 004e740b
    JNZ 0x004e744b                      ; 004e7412
        ;   XREF to: 004e744b (CONDITIONAL_JUMP)  ; LAB_004e744b
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 004e7414
    JNZ 0x004e744b                      ; 004e741b
        ;   XREF to: 004e744b (CONDITIONAL_JUMP)  ; LAB_004e744b
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 004e741d
        ;   Label: LAB_004e741d
    ADD EBX,0x58                        ; 004e7424
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 004e7427
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH EBX                            ; 004e742c
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170 ; 004e742d
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 004e7432
    PUSH 0x5dc691                       ; 004e7435
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004e743a
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004e743f
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004e7442
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    POP EBP                             ; 004e7447
    POP ESI                             ; 004e7448
    POP EBX                             ; 004e7449
    RET                                 ; 004e744a
    MOV EBP,0x5dc64d                    ; 004e744b
        ;   Label: LAB_004e744b
    MOV EAX,0x57d                       ; 004e7450
    PUSH 0x5dc660                       ; 004e7455
    MOV dword ptr [0x01d046a0],EBP      ; 004e745a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004e7460 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e7465
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e746a
    JMP 0x004e741d                      ; 004e746d
        ;   XREF to: 004e741d (UNCONDITIONAL_JUMP)  ; LAB_004e741d

