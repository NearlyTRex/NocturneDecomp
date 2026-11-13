; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(CFireEffect *this_ptr,int variant)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   variant
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_preloadTossAssets_FUN_004a4340 at 004a439c
;   core_firestff.cpp_CFirestaff_setup_FUN_004a5870 at 004a58ad
;
; Called Functions:
;   core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a42c0
        ;   Label: core_fire.cpp_CFireEffect_preloadRingAssets_FUN_004a42c0
    CMP dword ptr [ESP + 0x8],0x0       ; 004a42c4
    JNZ 0x004a42d7                      ; 004a42c9
        ;   XREF to: 004a42d7 (CONDITIONAL_JUMP)  ; LAB_004a42d7
    PUSH 0x2                            ; 004a42cb
    PUSH EAX                            ; 004a42cd
    CALL core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130 ; 004a42ce
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(CFireEffect * this_ptr, int bolt_style)
    ADD ESP,0x8                         ; 004a42d3
    RET                                 ; 004a42d6
    PUSH 0x5                            ; 004a42d7
        ;   Label: LAB_004a42d7
    PUSH EAX                            ; 004a42d9
    CALL core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130 ; 004a42da
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(CFireEffect * this_ptr, int bolt_style)
    ADD ESP,0x8                         ; 004a42df
    RET                                 ; 004a42e2

