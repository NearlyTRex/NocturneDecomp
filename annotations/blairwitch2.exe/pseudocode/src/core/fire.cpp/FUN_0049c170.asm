; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireEffect * __cdecl core_fire_cpp_FUN_0049c170(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_staticInit_FUN_004930e0 at 004930e5
;
; Called Functions:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c170
        ;   Label: core_fire.cpp_FUN_0049c170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049c171
    PUSH EBX                            ; 0049c175
    CALL core_fire.cpp_CFireEffect_init_FUN_0049c190 ; 0049c176
        ;   XREF to: 0049c190 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_0049c190(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0049c17b
    MOV EAX,EBX                         ; 0049c17e
    POP EBX                             ; 0049c180
    RET                                 ; 0049c181

