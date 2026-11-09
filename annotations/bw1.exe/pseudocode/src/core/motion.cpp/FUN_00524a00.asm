; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_motion_cpp_FUN_00524a00(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[30]:
;   core_charactr.cpp_FUN_00432050 at 00432090
;   core_charactr.cpp_FUN_00432c70 at 00432c8d
;   core_charactr.cpp_FUN_00432cb0 at 00432d0f
;   core_charactr.cpp_FUN_00432e00 at 00432e23
;   core_charactr.cpp_FUN_00433cd0 at 00433d15
;   core_charactr.cpp_FUN_004343c0 at 0043440a
;   core_doc.cpp_FUN_00469060 at 00469247
;   core_doc.cpp_FUN_00474400 at 00474587
;   core_event.cpp_FUN_004a1d00 at 004a5b4d
;   core_gabriela.cpp_FUN_004c6390 at 004c655b
;   ... and 20 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00524a00
        ;   Label: core_motion.cpp_FUN_00524a00
    MOV EAX,dword ptr [EAX]             ; 00524a04
    RET                                 ; 00524a06

