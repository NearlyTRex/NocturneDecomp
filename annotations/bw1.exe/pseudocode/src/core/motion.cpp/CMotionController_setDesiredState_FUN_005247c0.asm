; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController *this_ptr,int desired_state_index,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   desired_state_index
; int              Stack[0xc]:4   force_immediate
;
; XREF[128]:
;   core_baron.cpp_CBaron_attachToOwner_FUN_0040fa70 at 0040fb7b
;   core_baron.cpp_CBaron_detachFromOwner_FUN_0040fbc0 at 0040fbe4
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f63a
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0 at 004124bb
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411cbc
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20 at 00412b40
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 0041407b
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 004132b6
;   core_biggs.cpp_CBiggs_processDamage_FUN_00414fc0 at 0041500d
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414be1
;   ... and 118 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005eaea3
;   TerminatedCString s_CMotionController_setDes_005eaeb6
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620
;   core_motion.cpp_CMotionController_reverseTransition_FUN_00524710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005247c0
        ;   Label: core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
    PUSH ESI                            ; 005247c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005247c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005247c6
    TEST ESI,ESI                        ; 005247ca
    JL 0x00524800                       ; 005247cc
        ;   XREF to: 00524800 (CONDITIONAL_JUMP)  ; LAB_00524800
    MOV EAX,dword ptr [EBX]             ; 005247ce
    CMP ESI,dword ptr [EAX]             ; 005247d0
    JGE 0x0052480a                      ; 005247d2
        ;   XREF to: 0052480a (CONDITIONAL_JUMP)  ; LAB_0052480a
    CMP ESI,dword ptr [EBX + 0x28]      ; 005247d4
        ;   Label: LAB_005247d4
    JZ 0x005247f6                       ; 005247d7
        ;   XREF to: 005247f6 (CONDITIONAL_JUMP)  ; LAB_005247f6
    CMP dword ptr [EBX + 0x2c],0x0      ; 005247d9
    JZ 0x005247ec                       ; 005247dd
        ;   XREF to: 005247ec (CONDITIONAL_JUMP)  ; LAB_005247ec
    CMP dword ptr [EBX + 0x20],0x0      ; 005247df
    JZ 0x00524831                       ; 005247e3
        ;   XREF to: 00524831 (CONDITIONAL_JUMP)  ; LAB_00524831
    MOV dword ptr [EBX + 0x2c],0x0      ; 005247e5
        ;   Label: LAB_005247e5
    MOV dword ptr [EBX + 0x24],0x0      ; 005247ec
        ;   Label: LAB_005247ec
    MOV dword ptr [EBX + 0x28],ESI      ; 005247f3
    CMP dword ptr [ESP + 0x14],0x0      ; 005247f6
        ;   Label: LAB_005247f6
    JNZ 0x0052483c                      ; 005247fb
        ;   XREF to: 0052483c (CONDITIONAL_JUMP)  ; LAB_0052483c
    POP ESI                             ; 005247fd
    POP EBX                             ; 005247fe
    RET                                 ; 005247ff
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00524800
        ;   Label: LAB_00524800
    POP ESI                             ; 00524807
    POP EBX                             ; 00524808
    RET                                 ; 00524809
    PUSH EDI                            ; 0052480a
        ;   Label: LAB_0052480a
    MOV ECX,0x5eaea3                    ; 0052480b | = "..\\core\\motion.cpp"
    MOV EDI,0x2b8                       ; 00524810
    PUSH 0x5eaeb6                       ; 00524815 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0052481a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00524820 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00524826
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052482b
    POP EDI                             ; 0052482e
    JMP 0x005247d4                      ; 0052482f
        ;   XREF to: 005247d4 (UNCONDITIONAL_JUMP)  ; LAB_005247d4
    PUSH EBX                            ; 00524831
        ;   Label: LAB_00524831
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_00524710 ; 00524832
        ;   XREF to: 00524710 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_00524710(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00524837
    JMP 0x005247e5                      ; 0052483a
        ;   XREF to: 005247e5 (UNCONDITIONAL_JUMP)  ; LAB_005247e5
    PUSH EBX                            ; 0052483c
        ;   Label: LAB_0052483c
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620 ; 0052483d
        ;   XREF to: 00524620 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00524842
    POP ESI                             ; 00524845
    POP EBX                             ; 00524846
    RET                                 ; 00524847

