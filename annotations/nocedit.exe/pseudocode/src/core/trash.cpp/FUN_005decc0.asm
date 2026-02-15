; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_FUN_005decc0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005decc0
        ;   Label: core_trash.cpp_FUN_005decc0
    PUSH 0x3d4ccccd                     ; 005decc3
    PUSH 0xbd4ccccd                     ; 005decc8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005deccd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

