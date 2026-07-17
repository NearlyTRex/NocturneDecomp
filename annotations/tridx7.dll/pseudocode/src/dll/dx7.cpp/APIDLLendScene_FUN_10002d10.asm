; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLendScene_FUN_10002d10(void)
;
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLlockFrame_FUN_10002d90 at 10002d99
;   dll_dx7.cpp_APIDLLsetFogColor_FUN_100049f0 at 10004a48
;
; Referenced Globals:
;   IDirect3DDevice3* g_Device = 00000000
;   int g_InScene = 0x0
;
; Called Functions:
;   dll_dx7.cpp_flushBatch_FUN_100047b0
;   dll_dx7.cpp_resetRenderState_FUN_10002d50
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 10002d10 | g_InScene
        ;   Label: dll_dx7.cpp_APIDLLendScene_FUN_10002d10
    JNZ 0x10002d1c                      ; 10002d17
        ;   XREF to: 10002d1c (CONDITIONAL_JUMP)  ; LAB_10002d1c
    XOR EAX,EAX                         ; 10002d19
    RET                                 ; 10002d1b
    CALL dll_dx7.cpp_resetRenderState_FUN_10002d50 ; 10002d1c
        ;   XREF to: 10002d50 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_resetRenderState_FUN_10002d50()
        ;   Label: LAB_10002d1c
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10002d21
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    MOV dword ptr [0x10014204],0x0      ; 10002d26 | g_InScene
    MOV ECX,dword ptr [0x100141e0]      ; 10002d30 | g_Device
    PUSH ECX                            ; 10002d36
    MOV EAX,dword ptr [ECX]             ; 10002d37
    CALL dword ptr [EAX + 0x28]         ; 10002d39
    CMP EAX,0x1                         ; 10002d3c
    SBB EAX,EAX                         ; 10002d3f
    NEG EAX                             ; 10002d41
    RET                                 ; 10002d43

