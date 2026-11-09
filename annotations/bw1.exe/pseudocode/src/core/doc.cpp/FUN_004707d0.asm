; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004707d0(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_0046bde0 at 0046bf15
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004707d0
        ;   Label: core_doc.cpp_FUN_004707d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004707d1
    MOV EDX,dword ptr [EBX + 0x20004]   ; 004707d5
    CMP EDX,dword ptr [EBX + 0x2628]    ; 004707db
    JNZ 0x004707ed                      ; 004707e1
        ;   XREF to: 004707ed (CONDITIONAL_JUMP)  ; LAB_004707ed
    MOV dword ptr [EBX + 0x20004],0x0   ; 004707e3
    PUSH 0x0                            ; 004707ed
        ;   Label: LAB_004707ed
    PUSH 0x1                            ; 004707ef
    MOV EAX,dword ptr [EBX + 0x154]     ; 004707f1
    PUSH EBX                            ; 004707f7
    CALL dword ptr [EAX + 0x128]        ; 004707f8
    ADD ESP,0xc                         ; 004707fe
    PUSH 0x1                            ; 00470801
    PUSH 0x0                            ; 00470803
    ADD EBX,0x158                       ; 00470805
    PUSH EBX                            ; 0047080b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0047080c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00470811
    POP EBX                             ; 00470814
    RET                                 ; 00470815

