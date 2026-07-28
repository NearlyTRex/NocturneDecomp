; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00438210(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00423f40 at 00423f64
;   core_succubus.cpp_FUN_00540b40 at 00540b64
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438210
        ;   Label: core_cloth.cpp_CClothList_ctor_FUN_00438210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438211
    PUSH 0x190                          ; 00438215
    PUSH 0x0                            ; 0043821a
    LEA EAX,[EBX + 0x4]                 ; 0043821c
    PUSH EAX                            ; 0043821f
    MOV dword ptr [EBX],0x0             ; 00438220
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00438226
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043822b
    PUSH 0x28                           ; 0043822e
    PUSH 0x0                            ; 00438230
    LEA EAX,[EBX + 0x194]               ; 00438232
    PUSH EAX                            ; 00438238
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00438239
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043823e
    MOV EAX,EBX                         ; 00438241
    POP EBX                             ; 00438243
    RET                                 ; 00438244

