; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_0055f590(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043ba10
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760 at 004407e7
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbd0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f590 | DAT_01c37788
        ;   Label: engine_special.cpp_FUN_0055f590
    JNZ 0x0055f59c                      ; 0055f597
        ;   XREF to: 0055f59c (CONDITIONAL_JUMP)  ; LAB_0055f59c
    XOR EAX,EAX                         ; 0055f599
    RET                                 ; 0055f59b
    CALL dword ptr [0x0264bbd0]         ; 0055f59c | DAT_0264bbd0
        ;   Label: LAB_0055f59c
    RET                                 ; 0055f5a2

