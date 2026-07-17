; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_10002d50(void)
;
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLendScene_FUN_10002d10 at 10002d1c
;   dll_dx7.cpp_FUN_100035b0 at 100037c6
;
; Referenced Globals:
;   undefined4 g_ExternalRendererBridge.blend_mode
;   undefined4 g_ExternalRendererBridge.current_alpha
;
; Called Functions:
;   dll_dx7.cpp_applyRenderState_FUN_10003f10
;
; *****************************************************************************

section .text

    MOV EAX,[0x102268e4]                ; 10002d50 | g_ExternalRendererBridge.current_alpha
        ;   Label: dll_dx7.cpp_FUN_10002d50
    PUSH 0x226                          ; 10002d55
    MOV dword ptr [EAX],0x0             ; 10002d5a
    MOV ECX,dword ptr [0x102268dc]      ; 10002d60 | g_ExternalRendererBridge.blend_mode
    MOV dword ptr [ECX],0x1             ; 10002d66
    CALL dll_dx7.cpp_applyRenderState_FUN_10003f10 ; 10002d6c
        ;   XREF to: 10003f10 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_applyRenderState_FUN_10003f10(uint render_flags)
    ADD ESP,0x4                         ; 10002d71
    MOV ECX,dword ptr [0x102268e4]      ; 10002d74 | g_ExternalRendererBridge.current_alpha
    MOV dword ptr [ECX],0xff            ; 10002d7a
    MOV EDX,dword ptr [0x102268dc]      ; 10002d80 | g_ExternalRendererBridge.blend_mode
    MOV dword ptr [EDX],0x0             ; 10002d86
    RET                                 ; 10002d8c

