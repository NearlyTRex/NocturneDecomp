; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[108]:
;   core_asgaya.cpp_FUN_005a0be0 at 005a10f8
;   core_baal.cpp_FUN_00596730 at 005967c4
;   core_baal.cpp_FUN_005968a0 at 00596b5c
;   core_baal.cpp_FUN_00597af0 at 00597b8f
;   core_boneguy.cpp_FUN_004179b0 at 00417e44
;   core_boneguy.cpp_FUN_004192d0 at 00419328
;   core_boneguy.cpp_FUN_00419b40 at 00419fb2
;   core_carved.cpp_FUN_00425da0 at 00426971
;   core_carved.cpp_FUN_00428a80 at 00428b04
;   core_charactr.cpp_FUN_0042c230 at 0042c7b8
;   ... and 98 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004fc070
        ;   Label: core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
    MOV EDX,dword ptr [ECX + 0x4]       ; 004fc074
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fc077
    ADD EAX,EDX                         ; 004fc07e
    MOV EDX,dword ptr [ECX]             ; 004fc080
    SHL EAX,0x5                         ; 004fc082
    ADD EDX,0x1c28                      ; 004fc085
    ADD EAX,EDX                         ; 004fc08b
    RET                                 ; 004fc08d

