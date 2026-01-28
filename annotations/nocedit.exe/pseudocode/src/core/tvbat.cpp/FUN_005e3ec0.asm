; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_tvbat_cpp_FUN_005e3ec0(float param_1)
;
; Parameters:
; float            Stack[0x4]:4   param_1
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005e3ec0
        ;   Label: core_tvbat.cpp_FUN_005e3ec0
    PUSH 0x3f8ccccd                     ; 005e3ec3
    PUSH 0x3f666666                     ; 005e3ec8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e3ecd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

