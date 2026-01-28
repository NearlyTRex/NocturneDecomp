; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_clearZBuffer_FUN_005b7be0(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c66b
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f33f
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_clearZBuffer* g_APIDLL_clearZBuffer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7be0 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_clearZBuffer_FUN_005b7be0
    JNZ 0x005b7bec                      ; 005b7be7
        ;   XREF to: 005b7bec (CONDITIONAL_JUMP)  ; LAB_005b7bec
    XOR EAX,EAX                         ; 005b7be9
    RET                                 ; 005b7beb
    CALL dword ptr [0x03f6b8f8]         ; 005b7bec | g_APIDLL_clearZBuffer
        ;   Label: LAB_005b7bec
    RET                                 ; 005b7bf2

