; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004763c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_stand_005da65b+1
;
; Called Functions:
;   core_hero.cpp_FUN_004ec570
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004763c0
        ;   Label: core_doc.cpp_FUN_004763c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004763c1
    PUSH EBX                            ; 004763c5
    ADD EBX,0x158                       ; 004763c6
    CALL core_hero.cpp_FUN_004ec570     ; 004763cc
        ;   XREF to: 004ec570 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ec570()
    MOV dword ptr [EBX + 0x1fea8],0x0   ; 004763d1
    ADD ESP,0x4                         ; 004763db
    MOV dword ptr [EBX + 0x1feac],0x0   ; 004763de
    PUSH 0x0                            ; 004763e8
    MOV dword ptr [EBX + 0x1fe04],0x0   ; 004763ea
    PUSH 0x5da65c                       ; 004763f4 | s_stand_005da65b+1
    MOV dword ptr [EBX + 0x2b40],0x0    ; 004763f9
    PUSH EBX                            ; 00476403
    MOV dword ptr [EBX + 0x2b44],0x0    ; 00476404
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 0047640e
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00476413
    PUSH 0x1                            ; 00476416
    PUSH 0x0                            ; 00476418
    PUSH EBX                            ; 0047641a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047641b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00476420
    POP EBX                             ; 00476423
    RET                                 ; 00476424

