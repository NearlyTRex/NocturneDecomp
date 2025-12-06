; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_set.cpp_FUN_00571380()
;
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGore* g_CGorePtr = 02d83364
;   CFireEffect g_CFireEffectInstance
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
;   core_gore.cpp_FUN_004ed830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571380
        ;   Label: core_set.cpp_FUN_00571380
    PUSH ESI                            ; 00571381
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571382
    PUSH EDX                            ; 00571386
    PUSH 0x0                            ; 00571387
    MOV ECX,dword ptr [0x0067b9a0]      ; 00571389 | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH ECX                            ; 0057138f | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004ed830     ; 00571390 | void core_gore.cpp_FUN_004ed830(CGore * this_ptr)
        ;   XREF to: 004ed830 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00571395
    MOV EBX,dword ptr [ESP + 0x10]      ; 00571398
    PUSH EBX                            ; 0057139c
    PUSH 0x0                            ; 0057139d
    MOV ESI,dword ptr [0x0067a3d0]      ; 0057139f | CFireEffect * g_CFireEffectPtr
    PUSH ESI                            ; 005713a5 | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 ; 005713a6 | void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
        ;   XREF to: 004c74a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005713ab
    POP ESI                             ; 005713ae
    POP EBX                             ; 005713af
    RET                                 ; 005713b0

