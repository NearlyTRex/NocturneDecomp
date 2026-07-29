; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00543050(CSvetlana *this_ptr,uint flags)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSvetlanaTypeInfo_005a2bc0
;
; Called Functions:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160
;   core_hero.cpp_CHero_dtor_FUN_004b4800
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543050
        ;   Label: core_svetlana.cpp_CSvetlana_dtor_FUN_00543050
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543051
    TEST byte ptr [ESP + 0xc],0x4       ; 00543055
    JNZ 0x0054309d                      ; 0054305a
        ;   XREF to: 0054309d (CONDITIONAL_JUMP)  ; LAB_0054309d
    PUSH 0x0                            ; 0054305c
    ADD EBX,0x5a574                     ; 0054305e
    PUSH EBX                            ; 00543064
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 00543065
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054306a
    PUSH 0x0                            ; 0054306d
    SUB EAX,0x3ab30                     ; 0054306f
    PUSH EAX                            ; 00543074
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 00543075
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054307a
    PUSH 0x1                            ; 0054307d
    LEA EBX,[EAX + 0xfffe05bc]          ; 0054307f
    PUSH EBX                            ; 00543085
    CALL core_hero.cpp_CHero_dtor_FUN_004b4800 ; 00543086
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004b4800(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054308b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054308e
    MOV EBX,EAX                         ; 00543092
    TEST DL,0x2                         ; 00543094
    JNZ 0x005430b8                      ; 00543097
        ;   XREF to: 005430b8 (CONDITIONAL_JUMP)  ; LAB_005430b8
    MOV EAX,EBX                         ; 00543099
    POP EBX                             ; 0054309b
    RET                                 ; 0054309c
    PUSH 0x5a2bc0                       ; 0054309d | g_CSvetlanaTypeInfo_005a2bc0
        ;   Label: LAB_0054309d
    PUSH EBX                            ; 005430a2
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 005430a3
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005430a8
    PUSH EAX                            ; 005430ab
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005430ac
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005430b1
    MOV EAX,EBX                         ; 005430b4
    POP EBX                             ; 005430b6
    RET                                 ; 005430b7
    PUSH EAX                            ; 005430b8
        ;   Label: LAB_005430b8
    CALL crt_unknown.c_FUN_00564494     ; 005430b9
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 005430be
    MOV EAX,EBX                         ; 005430c1
    POP EBX                             ; 005430c3
    RET                                 ; 005430c4

