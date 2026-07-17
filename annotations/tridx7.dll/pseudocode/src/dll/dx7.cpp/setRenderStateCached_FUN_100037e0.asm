; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_setRenderStateCached_FUN_100037e0(uint render_state,DWORD value)
;
; Parameters:
; uint             Stack[0x4]:4   render_state
; DWORD            Stack[0x8]:4   value
;
; XREF[3]:
;   dll_dx7.cpp_APIDLLsetFogColor_FUN_100049f0 at 10004a37
;   dll_dx7.cpp_applyRenderState_FUN_10003f10 at 10003fac
;   dll_dx7.cpp_initDefaultRenderStates_FUN_100035b0 at 100035e2
;
; Referenced Globals:
;   IDirect3DDevice3* g_Device = 00000000
;   uint[256] g_RenderStateKeyCache
;   DWORD[256] g_RenderStateValueCache
;
; Called Functions:
;   dll_dx7.cpp_flushBatch_FUN_100047b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100037e0
        ;   Label: dll_dx7.cpp_setRenderStateCached_FUN_100037e0
    PUSH EDI                            ; 100037e1
    MOV EDI,dword ptr [ESP + 0xc]       ; 100037e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 100037e6
    MOV EAX,EDI                         ; 100037ea
    AND EAX,0xff                        ; 100037ec
    SHL EAX,0x2                         ; 100037f1
    CMP dword ptr [EAX + 0x101390c8],EDI ; 100037f4 | g_RenderStateKeyCache
    JNZ 0x10003804                      ; 100037fa
        ;   XREF to: 10003804 (CONDITIONAL_JUMP)  ; LAB_10003804
    CMP dword ptr [EAX + 0x101394c8],ESI ; 100037fc | g_RenderStateValueCache
    JZ 0x10003822                       ; 10003802
        ;   XREF to: 10003822 (CONDITIONAL_JUMP)  ; LAB_10003822
    MOV dword ptr [EAX + 0x101390c8],EDI ; 10003804 | g_RenderStateKeyCache
        ;   Label: LAB_10003804
    MOV dword ptr [EAX + 0x101394c8],ESI ; 1000380a | g_RenderStateValueCache
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10003810
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    PUSH ESI                            ; 10003815
    MOV EAX,[0x100141e0]                ; 10003816 | g_Device
    MOV ESI,dword ptr [EAX]             ; 1000381b
    PUSH EDI                            ; 1000381d
    PUSH EAX                            ; 1000381e
    CALL dword ptr [ESI + 0x58]         ; 1000381f
    POP EDI                             ; 10003822
        ;   Label: LAB_10003822
    POP ESI                             ; 10003823
    RET                                 ; 10003824

