; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0()
;
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_FUN_0041d680
;   core_enemy.cpp_FUN_004a9f10
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d4d0
        ;   Label: core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d4d1
    MOV EDX,dword ptr [EBX + 0xbecc]    ; 0041d4d5
    PUSH EDX                            ; 0041d4db
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0041d4dc
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0041d4e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d4e4
    FLD float ptr [EAX + 0x4]           ; 0041d4e8
    FSUBR float ptr [EBX + 0x243c]      ; 0041d4eb
    FST float ptr [EBX + 0x243c]        ; 0041d4f1
    FLDZ                                ; 0041d4f7
    FCOMPP                              ; 0041d4f9
    FNSTSW AX                           ; 0041d4fb
    SAHF                                ; 0041d4fd
    JC 0x0041d523                       ; 0041d4fe
        ;   XREF to: 0041d523 (CONDITIONAL_JUMP)  ; LAB_0041d523
    PUSH EBX                            ; 0041d500
    MOV dword ptr [EBX + 0x243c],0x3f800000 ; 0041d501
    CALL core_boneguy.cpp_CBoneGuy_FUN_0041d680 ; 0041d50b
        ;   XREF to: 0041d680 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_FUN_0041d680(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 0041d510
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041d513
    PUSH ECX                            ; 0041d517
    PUSH EBX                            ; 0041d518
    CALL core_enemy.cpp_FUN_004a9f10    ; 0041d519
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 0041d51e
    POP EBX                             ; 0041d521
    RET                                 ; 0041d522
    PUSH 0x1                            ; 0041d523
        ;   Label: LAB_0041d523
    PUSH 0x3                            ; 0041d525
    LEA EAX,[EBX + 0x158]               ; 0041d527
    PUSH EAX                            ; 0041d52d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041d52e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041d533
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041d536
    PUSH ECX                            ; 0041d53a
    PUSH EBX                            ; 0041d53b
    CALL core_enemy.cpp_FUN_004a9f10    ; 0041d53c
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 0041d541
    POP EBX                             ; 0041d544
    RET                                 ; 0041d545

