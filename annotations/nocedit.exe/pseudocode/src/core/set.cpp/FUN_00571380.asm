; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00571380(void)
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
;   core_gore.cpp_CGore_FUN_004ed830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571380
        ;   Label: core_set.cpp_FUN_00571380
    PUSH ESI                            ; 00571381
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571382
    PUSH EDX                            ; 00571386
    PUSH 0x0                            ; 00571387
    MOV ECX,dword ptr [0x0067b9a0]      ; 00571389 | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 0057138f | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed830 ; 00571390
        ;   XREF to: 004ed830 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ed830(CGore * this_ptr)
    ADD ESP,0xc                         ; 00571395
    MOV EBX,dword ptr [ESP + 0x10]      ; 00571398
    PUSH EBX                            ; 0057139c
    PUSH 0x0                            ; 0057139d
    MOV ESI,dword ptr [0x0067a3d0]      ; 0057139f | g_CFireEffectPtr
    PUSH ESI                            ; 005713a5 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 ; 005713a6
        ;   XREF to: 004c74a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 005713ab
    POP ESI                             ; 005713ae
    POP EBX                             ; 005713af
    RET                                 ; 005713b0

