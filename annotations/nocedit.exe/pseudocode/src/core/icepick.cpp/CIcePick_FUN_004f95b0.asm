; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_CIcePick_FUN_004f95b0()
;
;
; Referenced Globals:
;   TerminatedCString s_icepick_die01_wav_0062f7f6
;   TerminatedCString s_icepick_injured_wav_0062f808
;   float FLOAT_00660028 = 3
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   undefined4 DAT_02d81c6c
;   undefined4 DAT_02d81cc8
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042c3c0
;   core_gore.cpp_CGore_FUN_004ee030
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f95b0
        ;   Label: core_icepick.cpp_CIcePick_FUN_004f95b0
    PUSH ESI                            ; 004f95b1
    PUSH EDI                            ; 004f95b2
    PUSH EBP                            ; 004f95b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f95b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f95b8
    MOV EDX,dword ptr [EBX + 0x1fbdc]   ; 004f95bc
    PUSH EDX                            ; 004f95c2
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004f95c3
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xbe24]    ; 004f95c8
    ADD ESP,0x4                         ; 004f95ce
    TEST ECX,0x7fffffff                 ; 004f95d1
    JNZ 0x004f967a                      ; 004f95d7
        ;   XREF to: 004f967a (CONDITIONAL_JUMP)  ; LAB_004f967a
    MOV EAX,[0x0067b654]                ; 004f95dd | g_CGamePtr
        ;   Label: LAB_004f95dd
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004f95e2 | DAT_02d81c6c
    JZ 0x004f95f2                       ; 004f95e9
        ;   XREF to: 004f95f2 (CONDITIONAL_JUMP)  ; LAB_004f95f2
    MOV dword ptr [EDI + 0x4],0x0       ; 004f95eb
    MOV EAX,[0x0067b654]                ; 004f95f2 | g_CGamePtr
        ;   Label: LAB_004f95f2
    MOV EBP,dword ptr [EAX + 0x22c]     ; 004f95f7 | DAT_02d81cc8
    TEST EBP,EBP                        ; 004f95fd
    JZ 0x004f9686                       ; 004f95ff
        ;   XREF to: 004f9686 (CONDITIONAL_JUMP)  ; LAB_004f9686
    MOV EAX,[0x00660028]                ; 004f9605 | FLOAT_00660028
        ;   Label: LAB_004f9605
    MOV dword ptr [EBX + 0xbe24],EAX    ; 004f960a
    FLD float ptr [EDI + 0x4]           ; 004f9610
    FSUBR float ptr [EBX + 0x243c]      ; 004f9613
    LEA ESI,[EBX + 0x158]               ; 004f9619
    FST float ptr [EBX + 0x243c]        ; 004f961f
    FLDZ                                ; 004f9625
    FCOMPP                              ; 004f9627
    FNSTSW AX                           ; 004f9629
    SAHF                                ; 004f962b
    JNC 0x004f968e                      ; 004f962c
        ;   XREF to: 004f968e (CONDITIONAL_JUMP)  ; LAB_004f968e
    FLD float ptr [EDI + 0x4]           ; 004f962e
    FLDZ                                ; 004f9631
    FCOMPP                              ; 004f9633
    FNSTSW AX                           ; 004f9635
    SAHF                                ; 004f9637
    JNC 0x004f966b                      ; 004f9638
        ;   XREF to: 004f966b (CONDITIONAL_JUMP)  ; LAB_004f966b
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f963a
    JNZ 0x004f972e                      ; 004f9641
        ;   XREF to: 004f972e (CONDITIONAL_JUMP)  ; LAB_004f972e
    PUSH 0x1                            ; 004f9647
    PUSH 0x4                            ; 004f9649
    PUSH ESI                            ; 004f964b
        ;   Label: LAB_004f964b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f964c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9651
    MOV EDX,dword ptr [EBX + 0x1fbe0]   ; 004f9654
    PUSH EDX                            ; 004f965a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004f965b
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004f9660
    TEST EAX,EAX                        ; 004f9663
    JZ 0x004f9737                       ; 004f9665
        ;   XREF to: 004f9737 (CONDITIONAL_JUMP)  ; LAB_004f9737
    PUSH EDI                            ; 004f966b
        ;   Label: LAB_004f966b
    PUSH EBX                            ; 004f966c
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 004f966d
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f9672
    POP EBP                             ; 004f9675
    POP EDI                             ; 004f9676
    POP ESI                             ; 004f9677
    POP EBX                             ; 004f9678
    RET                                 ; 004f9679
    MOV dword ptr [EDI + 0x4],0x0       ; 004f967a
        ;   Label: LAB_004f967a
    JMP 0x004f95dd                      ; 004f9681
        ;   XREF to: 004f95dd (UNCONDITIONAL_JUMP)  ; LAB_004f95dd
    MOV dword ptr [EDI + 0x4],EBP       ; 004f9686
        ;   Label: LAB_004f9686
    JMP 0x004f9605                      ; 004f9689
        ;   XREF to: 004f9605 (UNCONDITIONAL_JUMP)  ; LAB_004f9605
    PUSH ESI                            ; 004f968e
        ;   Label: LAB_004f968e
    MOV dword ptr [EBX + 0x243c],0x0    ; 004f968f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f9699
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f969e
    ADD ESP,0x4                         ; 004f96a1
    CMP EAX,0x9                         ; 004f96a4
    JZ 0x004f966b                       ; 004f96a7
        ;   XREF to: 004f966b (CONDITIONAL_JUMP)  ; LAB_004f966b
    PUSH ESI                            ; 004f96a9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f96aa
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f96af
    ADD ESP,0x4                         ; 004f96b2
    CMP EAX,0x8                         ; 004f96b5
    JZ 0x004f966b                       ; 004f96b8
        ;   XREF to: 004f966b (CONDITIONAL_JUMP)  ; LAB_004f966b
    PUSH 0x1                            ; 004f96ba
    PUSH 0x8                            ; 004f96bc
    PUSH ESI                            ; 004f96be
    MOV dword ptr [EBX + 0x2598],0x0    ; 004f96bf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f96c9
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f96ce
    PUSH 0x0                            ; 004f96d1
    PUSH 0x1                            ; 004f96d3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f96d5
    PUSH EBX                            ; 004f96db
    CALL dword ptr [EAX + 0x13c]        ; 004f96dc
    ADD ESP,0xc                         ; 004f96e2
    PUSH 0x0                            ; 004f96e5
    PUSH 0x42480000                     ; 004f96e7
    PUSH 0x32                           ; 004f96ec
    PUSH EBX                            ; 004f96ee
    MOV ECX,dword ptr [0x0067b9a0]      ; 004f96ef | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 004f96f5 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ee030 ; 004f96f6
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor)
    ADD ESP,0x14                        ; 004f96fb
    MOV ESI,dword ptr [EBX + 0x1fbe0]   ; 004f96fe
    PUSH ESI                            ; 004f9704
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004f9705
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004f970a
    PUSH 0x62f7f6                       ; 004f970d | = "icepick_die01.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f9712
    PUSH EBX                            ; 004f9718
    CALL dword ptr [EAX + 0x24]         ; 004f9719
    ADD ESP,0x8                         ; 004f971c
    PUSH EDI                            ; 004f971f
    PUSH EBX                            ; 004f9720
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 004f9721
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f9726
    POP EBP                             ; 004f9729
    POP EDI                             ; 004f972a
    POP ESI                             ; 004f972b
    POP EBX                             ; 004f972c
    RET                                 ; 004f972d
    PUSH 0x1                            ; 004f972e
        ;   Label: LAB_004f972e
    PUSH 0xb                            ; 004f9730
    JMP 0x004f964b                      ; 004f9732
        ;   XREF to: 004f964b (UNCONDITIONAL_JUMP)  ; LAB_004f964b
    PUSH 0x62f808                       ; 004f9737 | = "icepick_injured??.wav"
        ;   Label: LAB_004f9737
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f973c
    PUSH EBX                            ; 004f9742
    CALL dword ptr [EAX + 0x24]         ; 004f9743
    ADD ESP,0x8                         ; 004f9746
    MOV dword ptr [EBX + 0x1fbe0],EAX   ; 004f9749
    PUSH EDI                            ; 004f974f
    PUSH EBX                            ; 004f9750
    CALL core_charactr.cpp_CCharacter_FUN_0042c3c0 ; 004f9751
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f9756
    POP EBP                             ; 004f9759
    POP EDI                             ; 004f975a
    POP ESI                             ; 004f975b
    POP EBX                             ; 004f975c
    RET                                 ; 004f975d

