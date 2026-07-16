; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLtoggle_FUN_100024b0(void)
;
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 10002b03
;
; Referenced Globals:
;   IDirectDrawSurface* g_PrimarySurface = 00000000
;   int g_FrameLocked = 0x0
;   undefined4 g_ExternalRendererBridge.frame_buffer_ptr
;
; *****************************************************************************

section .text

    CMP dword ptr [0x1001418c],0x0      ; 100024b0 | g_PrimarySurface
        ;   Label: dll_dx7.cpp_APIDLLtoggle_FUN_100024b0
    JZ 0x100024f0                       ; 100024b7
        ;   XREF to: 100024f0 (CONDITIONAL_JUMP)  ; LAB_100024f0
    CMP dword ptr [0x100141f8],0x0      ; 100024b9 | g_FrameLocked
    JNZ 0x100024f0                      ; 100024c0
        ;   XREF to: 100024f0 (CONDITIONAL_JUMP)  ; LAB_100024f0
    MOV EAX,[0x10226914]                ; 100024c2 | g_ExternalRendererBridge.frame_buffer_ptr
    CMP dword ptr [EAX],0x0             ; 100024c7
    JZ 0x100024e1                       ; 100024ca
        ;   XREF to: 100024e1 (CONDITIONAL_JUMP)  ; LAB_100024e1
    PUSH 0x1                            ; 100024cc
    MOV EAX,[0x1001418c]                ; 100024ce | g_PrimarySurface
    PUSH 0x0                            ; 100024d3
    PUSH EAX                            ; 100024d5
    MOV EAX,dword ptr [EAX]             ; 100024d6
    CALL dword ptr [EAX + 0x2c]         ; 100024d8
    MOV EAX,0x1                         ; 100024db
    RET                                 ; 100024e0
    PUSH 0x0                            ; 100024e1
        ;   Label: LAB_100024e1
    MOV EAX,[0x1001418c]                ; 100024e3 | g_PrimarySurface
    PUSH 0x0                            ; 100024e8
    PUSH EAX                            ; 100024ea
    MOV EAX,dword ptr [EAX]             ; 100024eb
    CALL dword ptr [EAX + 0x2c]         ; 100024ed
    MOV EAX,0x1                         ; 100024f0
        ;   Label: LAB_100024f0
    RET                                 ; 100024f5

