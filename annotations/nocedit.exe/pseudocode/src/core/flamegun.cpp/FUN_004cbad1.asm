; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_flamegun_cpp_FUN_004cbad1(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_flamegun.cpp_FUN_004cbab0 at 004cbabe
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH 0x43480000                     ; 004cbad1
        ;   Label: core_flamegun.cpp_FUN_004cbad1
    PUSH 0x43160000                     ; 004cbad6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004cbadb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

