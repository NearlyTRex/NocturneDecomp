; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[130]:
;   core_armour.cpp_FUN_0040eaa0 at 0040eb22
;   core_baron.cpp_FUN_0040f4d0 at 0040fa27
;   core_baron.cpp_FUN_004101f0 at 0041021c
;   core_baron.cpp_FUN_00410550 at 00410593
;   core_batcreat.cpp_FUN_004115b0 at 00411673
;   core_batcreat.cpp_FUN_004123d0 at 0041258a
;   core_batman.cpp_FUN_00412ba0 at 00412c60
;   core_batman.cpp_FUN_00413f90 at 0041414a
;   core_biggs.cpp_FUN_00414b30 at 00414ba6
;   core_boneguy.cpp_FUN_0041bb40 at 0041bf79
;   ... and 120 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00524770
        ;   Label: core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
    MOV EDX,dword ptr [ECX + 0x4]       ; 00524774
    LEA EAX,[EDX*0x8 + 0x0]             ; 00524777
    ADD EAX,EDX                         ; 0052477e
    MOV EDX,dword ptr [ECX]             ; 00524780
    SHL EAX,0x5                         ; 00524782
    ADD EDX,0x1c28                      ; 00524785
    ADD EAX,EDX                         ; 0052478b
    RET                                 ; 0052478d

