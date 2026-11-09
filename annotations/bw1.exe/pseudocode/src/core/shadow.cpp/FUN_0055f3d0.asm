; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f3d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00432050
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055f3d0
        ;   Label: core_shadow.cpp_FUN_0055f3d0
    ADD EAX,0x158                       ; 0055f3d4
    PUSH EAX                            ; 0055f3d9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0055f3da
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0055f3df
    PUSH dword ptr [ESP + 0x10]         ; 0055f3e2
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055f3e6
    PUSH dword ptr [ESP + 0x10]         ; 0055f3ea
    PUSH EDX                            ; 0055f3ee
    MOV ECX,dword ptr [ESP + 0x10]      ; 0055f3ef
    PUSH ECX                            ; 0055f3f3
    CALL core_charactr.cpp_FUN_00432050 ; 0055f3f4
        ;   XREF to: 00432050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432050()
    ADD ESP,0x10                        ; 0055f3f9
    RET                                 ; 0055f3fc

