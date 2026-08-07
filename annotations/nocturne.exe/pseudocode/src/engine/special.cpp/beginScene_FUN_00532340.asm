; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_beginScene_FUN_00532340(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404d7
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 004450a2
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9d8c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532340 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_beginScene_FUN_00532340
    JNZ 0x0053234c                      ; 00532347
        ;   XREF to: 0053234c (CONDITIONAL_JUMP)  ; LAB_0053234c
    XOR EAX,EAX                         ; 00532349
    RET                                 ; 0053234b
    CALL dword ptr [0x02dc9d8c]         ; 0053234c | DAT_02dc9d8c
        ;   Label: LAB_0053234c
    RET                                 ; 00532352

