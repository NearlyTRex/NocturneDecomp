; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00441c60(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_ctor_FUN_0042c080 at 0042c0a8
;   core_succubus.cpp_CSuccubus_ctor_FUN_00591f10 at 00591f34
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441c60
        ;   Label: core_cloth.cpp_CClothList_ctor_FUN_00441c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441c61
    PUSH 0x190                          ; 00441c65
    PUSH 0x0                            ; 00441c6a
    LEA EAX,[EBX + 0x4]                 ; 00441c6c
    PUSH EAX                            ; 00441c6f
    MOV dword ptr [EBX],0x0             ; 00441c70
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00441c76
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00441c7b
    PUSH 0x28                           ; 00441c7e
    PUSH 0x0                            ; 00441c80
    LEA EAX,[EBX + 0x194]               ; 00441c82
    PUSH EAX                            ; 00441c88
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00441c89
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00441c8e
    MOV EAX,EBX                         ; 00441c91
    POP EBX                             ; 00441c93
    RET                                 ; 00441c94

