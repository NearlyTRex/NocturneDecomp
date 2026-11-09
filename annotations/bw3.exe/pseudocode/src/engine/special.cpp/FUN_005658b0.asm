; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_005658b0(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 00449210
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60 at 0044dfe7
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf5ffc
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 005658b0 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_005658b0
    JNZ 0x005658bc                      ; 005658b7
        ;   XREF to: 005658bc (CONDITIONAL_JUMP)  ; LAB_005658bc
    XOR EAX,EAX                         ; 005658b9
    RET                                 ; 005658bb
    CALL dword ptr [0x02cf5ffc]         ; 005658bc | DAT_02cf5ffc
        ;   Label: LAB_005658bc
    RET                                 ; 005658c2

