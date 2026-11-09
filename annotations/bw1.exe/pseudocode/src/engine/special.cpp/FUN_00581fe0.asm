; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00581fe0(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d0d0
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20 at 00451ea7
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833a0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00581fe0 | DAT_01c50948
        ;   Label: engine_special.cpp_FUN_00581fe0
    JNZ 0x00581fec                      ; 00581fe7
        ;   XREF to: 00581fec (CONDITIONAL_JUMP)  ; LAB_00581fec
    XOR EAX,EAX                         ; 00581fe9
    RET                                 ; 00581feb
    CALL dword ptr [0x02c833a0]         ; 00581fec | DAT_02c833a0
        ;   Label: LAB_00581fec
    RET                                 ; 00581ff2

