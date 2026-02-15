; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_tommygun_cpp_CTommyGun_FUN_005de330(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005de330
        ;   Label: core_tommygun.cpp_CTommyGun_FUN_005de330
    PUSH 0x41700000                     ; 005de333
    PUSH 0x41200000                     ; 005de338
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005de33d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

