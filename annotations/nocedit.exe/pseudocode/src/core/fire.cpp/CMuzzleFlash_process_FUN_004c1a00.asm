; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash * this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c6f2c
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_FUN_004c7620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c1a00
        ;   Label: core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
    MOV EDX,dword ptr [EAX]             ; 004c1a04
    DEC EDX                             ; 004c1a06
    MOV dword ptr [EAX],EDX             ; 004c1a07
    TEST EDX,EDX                        ; 004c1a09
    JL 0x004c1a13                       ; 004c1a0b
        ;   XREF to: 004c1a13 (CONDITIONAL_JUMP)  ; LAB_004c1a13
    CMP EDX,0x1                         ; 004c1a0d
    JZ 0x004c1a1a                       ; 004c1a10
        ;   XREF to: 004c1a1a (CONDITIONAL_JUMP)  ; LAB_004c1a1a
    RET                                 ; 004c1a12
    MOV dword ptr [EAX],0x0             ; 004c1a13
        ;   Label: LAB_004c1a13
    RET                                 ; 004c1a19
    PUSH ESI                            ; 004c1a1a
        ;   Label: LAB_004c1a1a
    ADD EAX,0x4                         ; 004c1a1b
    PUSH EAX                            ; 004c1a1e
    MOV ESI,dword ptr [0x0067a3d0]      ; 004c1a1f | g_CFireEffectPtr
    PUSH ESI                            ; 004c1a25 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c7620 ; 004c1a26
        ;   XREF to: 004c7620 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7620(CFireEffect * this_ptr)
    ADD ESP,0x8                         ; 004c1a2b
    POP ESI                             ; 004c1a2e
    RET                                 ; 004c1a2f

