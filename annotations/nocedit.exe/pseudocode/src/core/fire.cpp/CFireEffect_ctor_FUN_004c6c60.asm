; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireEffect * __cdecl core_fire_cpp_CFireEffect_ctor_FUN_004c6c60(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_staticInit_FUN_004bef20 at 004bef25
;
; Called Functions:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6c60
        ;   Label: core_fire.cpp_CFireEffect_ctor_FUN_004c6c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6c61
    PUSH EBX                            ; 004c6c65
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 004c6c66
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004c6c6b
    MOV EAX,EBX                         ; 004c6c6e
    POP EBX                             ; 004c6c70
    RET                                 ; 004c6c71

