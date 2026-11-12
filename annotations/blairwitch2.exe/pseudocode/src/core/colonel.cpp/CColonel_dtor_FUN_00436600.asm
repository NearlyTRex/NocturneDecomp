; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00436600(CColonel *this_ptr,uint flags)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CColonelTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436600
        ;   Label: core_colonel.cpp_CColonel_dtor_FUN_00436600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00436601
    TEST byte ptr [ESP + 0xc],0x4       ; 00436605
    JNZ 0x00436626                      ; 0043660a
        ;   XREF to: 00436626 (CONDITIONAL_JUMP)  ; LAB_00436626
    PUSH 0x1                            ; 0043660c
    PUSH EBX                            ; 0043660e
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 0043660f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00436614
    MOV DL,byte ptr [ESP + 0xc]         ; 00436617
    MOV EBX,EAX                         ; 0043661b
    TEST DL,0x2                         ; 0043661d
    JNZ 0x00436641                      ; 00436620
        ;   XREF to: 00436641 (CONDITIONAL_JUMP)  ; LAB_00436641
    MOV EAX,EBX                         ; 00436622
    POP EBX                             ; 00436624
    RET                                 ; 00436625
    PUSH 0x5f4630                       ; 00436626 | g_CColonelTypeInfo
        ;   Label: LAB_00436626
    PUSH EBX                            ; 0043662b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0043662c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00436631
    PUSH EAX                            ; 00436634
    CALL crt_unknown.c_FUN_005b7fce     ; 00436635
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0043663a
    MOV EAX,EBX                         ; 0043663d
    POP EBX                             ; 0043663f
    RET                                 ; 00436640
    PUSH EAX                            ; 00436641
        ;   Label: LAB_00436641
    CALL crt_unknown.c_FUN_005b7fdc     ; 00436642
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00436647
    MOV EAX,EBX                         ; 0043664a
    POP EBX                             ; 0043664c
    RET                                 ; 0043664d

