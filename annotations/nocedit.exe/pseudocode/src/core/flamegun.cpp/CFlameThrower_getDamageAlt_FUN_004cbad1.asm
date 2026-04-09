; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_flamegun_cpp_CFlameThrower_getDamageAlt_FUN_004cbad1(CFlameThrower *this_ptr)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; CFlameThrower *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flamegun.cpp_CFlameThrower_getDamage_FUN_004cbab0 at 004cbabe
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH 0x43480000                     ; 004cbad1
        ;   Label: core_flamegun.cpp_CFlameThrower_getDamageAlt_FUN_004cbad1
    PUSH 0x43160000                     ; 004cbad6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004cbadb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004cbae0
    FLD float ptr [ESP + 0xc]           ; 004cbae4
    ADD ESP,0x8                         ; 004cbae8
    FSTP float ptr [ESP]                ; 004cbaeb
    MOV EAX,dword ptr [ESP]             ; 004cbaee
    ADD ESP,0x8                         ; 004cbaf1
    RET                                 ; 004cbaf4

