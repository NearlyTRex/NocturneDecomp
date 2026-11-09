; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_spirbear_cpp_FUN_0059b470(int param_1)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059b470
        ;   Label: core_spirbear.cpp_FUN_0059b470
    ADD EAX,0x158                       ; 0059b474
    PUSH EAX                            ; 0059b479
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059b47a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059b47f
    ADD ESP,0x4                         ; 0059b482
    CMP EAX,0x92                        ; 0059b485
    SETZ AL                             ; 0059b48a
    AND EAX,0xff                        ; 0059b48d
    RET                                 ; 0059b492

