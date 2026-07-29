; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00540a90(CStranger *this_ptr,uint flags)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStrangerTypeInfo_005a2890
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540a90
        ;   Label: core_stranger.cpp_CStranger_dtor_FUN_00540a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540a91
    TEST byte ptr [ESP + 0xc],0x4       ; 00540a95
    JNZ 0x00540ab6                      ; 00540a9a
        ;   XREF to: 00540ab6 (CONDITIONAL_JUMP)  ; LAB_00540ab6
    PUSH 0x1                            ; 00540a9c
    PUSH EBX                            ; 00540a9e
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 00540a9f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00540aa4
    MOV DL,byte ptr [ESP + 0xc]         ; 00540aa7
    MOV EBX,EAX                         ; 00540aab
    TEST DL,0x2                         ; 00540aad
    JNZ 0x00540ad1                      ; 00540ab0
        ;   XREF to: 00540ad1 (CONDITIONAL_JUMP)  ; LAB_00540ad1
    MOV EAX,EBX                         ; 00540ab2
    POP EBX                             ; 00540ab4
    RET                                 ; 00540ab5
    PUSH 0x5a2890                       ; 00540ab6 | g_CStrangerTypeInfo_005a2890
        ;   Label: LAB_00540ab6
    PUSH EBX                            ; 00540abb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00540abc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00540ac1
    PUSH EAX                            ; 00540ac4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00540ac5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00540aca
    MOV EAX,EBX                         ; 00540acd
    POP EBX                             ; 00540acf
    RET                                 ; 00540ad0
    PUSH EAX                            ; 00540ad1
        ;   Label: LAB_00540ad1
    CALL crt_unknown.c_FUN_00564494     ; 00540ad2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00540ad7
    MOV EAX,EBX                         ; 00540ada
    POP EBX                             ; 00540adc
    RET                                 ; 00540add

