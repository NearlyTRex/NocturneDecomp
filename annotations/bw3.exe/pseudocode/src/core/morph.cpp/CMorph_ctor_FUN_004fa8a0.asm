; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_004fa8a0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_passngr.cpp_CPassenger_ctor_FUN_0050a450 at 0050a46b
;   core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0 at 005273cb
;   core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0 at 0059aad5
;   core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0 at 00599205
;   core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60 at 00599f95
;   core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070 at 0059e084
;   core_styler.cpp_CStyler_ctor_FUN_0059d750 at 0059d772
;   unkafter_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780 at 00598794
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5e2c20                       ; 004fa8a0
        ;   Label: core_morph.cpp_CMorph_ctor_FUN_004fa8a0
    PUSH 0x2                            ; 004fa8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fa8a7
    PUSH EDX                            ; 004fa8ab
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004fa8ac
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004fa8b1
    MOV dword ptr [EAX + 0xc28],0x1     ; 004fa8b4
    RET                                 ; 004fa8be

