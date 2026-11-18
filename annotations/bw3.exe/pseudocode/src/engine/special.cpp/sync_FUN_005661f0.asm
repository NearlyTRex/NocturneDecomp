; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_sync_FUN_005661f0(void)
;
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0 at 0047734a
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   void* g_APIDLL_sync
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 005661f0 | g_INT_01c6cee8
        ;   Label: engine_special.cpp_sync_FUN_005661f0
    JNZ 0x005661fc                      ; 005661f7
        ;   XREF to: 005661fc (CONDITIONAL_JUMP)  ; LAB_005661fc
    XOR EAX,EAX                         ; 005661f9
    RET                                 ; 005661fb
    CALL dword ptr [0x02cf604c]         ; 005661fc | g_APIDLL_sync
        ;   Label: LAB_005661fc
    RET                                 ; 00566202

