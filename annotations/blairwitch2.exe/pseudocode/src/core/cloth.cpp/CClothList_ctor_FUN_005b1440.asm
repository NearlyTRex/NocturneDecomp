; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_005b1440(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340 at 0042236e
;   core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0 at 0056f2e4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1440
        ;   Label: core_cloth.cpp_CClothList_ctor_FUN_005b1440
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1441
    PUSH 0x190                          ; 005b1445
    PUSH 0x0                            ; 005b144a
    LEA EAX,[EBX + 0x4]                 ; 005b144c
    PUSH EAX                            ; 005b144f
    MOV dword ptr [EBX],0x0             ; 005b1450
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005b1456
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b145b
    PUSH 0x28                           ; 005b145e
    PUSH 0x0                            ; 005b1460
    LEA EAX,[EBX + 0x194]               ; 005b1462
    PUSH EAX                            ; 005b1468
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005b1469
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b146e
    MOV EAX,EBX                         ; 005b1471
    POP EBX                             ; 005b1473
    RET                                 ; 005b1474

