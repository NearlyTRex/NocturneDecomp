; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_00522fa0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_ctor_FUN_004149f0 at 00414a14
;   core_mimic.cpp_CMimic_ctor_FUN_0050f0c0 at 0050f0e3
;   core_moloch.cpp_CMoloch_ctor_FUN_005202f0 at 00520314
;   core_passngr.cpp_CPassenger_ctor_FUN_00532770 at 0053278b
;   core_succubus.cpp_CSuccubus_ctor_FUN_00591f10 at 00591f42
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170 at 005a51bc
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x604280                       ; 00522fa0
        ;   Label: core_morph.cpp_CMorph_ctor_FUN_00522fa0
    PUSH 0x2                            ; 00522fa5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00522fa7
    PUSH EDX                            ; 00522fab
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00522fac
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00522fb1
    MOV dword ptr [EAX + 0xc28],0x1     ; 00522fb4
    RET                                 ; 00522fbe

