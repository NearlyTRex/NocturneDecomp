; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireEffect * __cdecl core_fire_cpp_CFireEffect_ctor_FUN_004b4b10(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_staticInit_FUN_004aba90 at 004aba95
;
; Called Functions:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4b10
        ;   Label: core_fire.cpp_CFireEffect_ctor_FUN_004b4b10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b4b11
    PUSH EBX                            ; 004b4b15
    CALL core_fire.cpp_CFireEffect_init_FUN_004b4b30 ; 004b4b16
        ;   XREF to: 004b4b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004b4b30(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004b4b1b
    MOV EAX,EBX                         ; 004b4b1e
    POP EBX                             ; 004b4b20
    RET                                 ; 004b4b21

