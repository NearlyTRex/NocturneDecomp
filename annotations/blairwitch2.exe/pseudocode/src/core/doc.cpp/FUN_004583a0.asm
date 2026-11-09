; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004583a0(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00453250 at 00453392
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004583a0
        ;   Label: core_doc.cpp_FUN_004583a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004583a1
    MOV EDX,dword ptr [EBX + 0x25698]   ; 004583a5
    CMP EDX,dword ptr [EBX + 0x2698]    ; 004583ab
    JNZ 0x004583bd                      ; 004583b1
        ;   XREF to: 004583bd (CONDITIONAL_JUMP)  ; LAB_004583bd
    MOV dword ptr [EBX + 0x25698],0x0   ; 004583b3
    PUSH 0x0                            ; 004583bd
        ;   Label: LAB_004583bd
    PUSH 0x1                            ; 004583bf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004583c1
    PUSH EBX                            ; 004583c7
    CALL dword ptr [EAX + 0x130]        ; 004583c8
    ADD ESP,0xc                         ; 004583ce
    PUSH 0x1                            ; 004583d1
    PUSH 0x0                            ; 004583d3
    ADD EBX,0x2b4                       ; 004583d5
    PUSH EBX                            ; 004583db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004583dc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004583e1
    POP EBX                             ; 004583e4
    RET                                 ; 004583e5

