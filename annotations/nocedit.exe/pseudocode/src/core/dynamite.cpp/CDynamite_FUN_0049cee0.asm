; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_dynamite_cpp_CDynamite_FUN_0049cee0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0049cee0
        ;   Label: core_dynamite.cpp_CDynamite_FUN_0049cee0
    PUSH 0x43fa0000                     ; 0049cee3
    PUSH 0x43c80000                     ; 0049cee8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0049ceed
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

