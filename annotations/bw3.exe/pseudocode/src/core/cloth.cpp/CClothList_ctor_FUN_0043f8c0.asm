; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_0043f8c0(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 at 0042ac48
;   core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0 at 0059aac7
;   core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0 at 005991f7
;   core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60 at 00599f87
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f8c0
        ;   Label: core_cloth.cpp_CClothList_ctor_FUN_0043f8c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f8c1
    PUSH 0x190                          ; 0043f8c5
    PUSH 0x0                            ; 0043f8ca
    LEA EAX,[EBX + 0x4]                 ; 0043f8cc
    PUSH EAX                            ; 0043f8cf
    MOV dword ptr [EBX],0x0             ; 0043f8d0
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0043f8d6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043f8db
    PUSH 0x28                           ; 0043f8de
    PUSH 0x0                            ; 0043f8e0
    LEA EAX,[EBX + 0x194]               ; 0043f8e2
    PUSH EAX                            ; 0043f8e8
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0043f8e9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043f8ee
    MOV EAX,EBX                         ; 0043f8f1
    POP EBX                             ; 0043f8f3
    RET                                 ; 0043f8f4

