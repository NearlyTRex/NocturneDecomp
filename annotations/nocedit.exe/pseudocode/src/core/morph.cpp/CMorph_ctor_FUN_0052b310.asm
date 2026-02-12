; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_0052b310(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 at 004185e4
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005078e1
;   core_mimic.cpp_CMimic_ctor_FUN_0051f1d0 at 0051f1f3
;   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 at 00528b54
;   core_passngr.cpp_CPassenger_ctor_FUN_00545b30 at 00545b4b
;   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 at 005c6ab2
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 at 005e55dc
;
; Referenced Globals:
;   WatcomTypeInfo g_CMorphModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x661b60                       ; 0052b310 | g_CMorphModelTypeInfo
        ;   Label: core_morph.cpp_CMorph_ctor_FUN_0052b310
    PUSH 0x2                            ; 0052b315
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052b317
    PUSH EDX                            ; 0052b31b
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0052b31c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052b321
    MOV dword ptr [EAX + 0xc28],0x1     ; 0052b324
    RET                                 ; 0052b32e

