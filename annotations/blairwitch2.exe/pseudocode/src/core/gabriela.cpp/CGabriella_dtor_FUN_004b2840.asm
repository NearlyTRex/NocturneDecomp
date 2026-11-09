; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004b2840(CGabriella *this_ptr,uint flags)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGabriellaTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   core_necklace.cpp_FUN_005ade00
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2840
        ;   Label: core_gabriela.cpp_CGabriella_dtor_FUN_004b2840
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b2841
    TEST byte ptr [ESP + 0xc],0x4       ; 004b2845
    JNZ 0x004b287d                      ; 004b284a
        ;   XREF to: 004b287d (CONDITIONAL_JUMP)  ; LAB_004b287d
    PUSH 0x0                            ; 004b284c
    ADD EBX,0x25680                     ; 004b284e
    PUSH EBX                            ; 004b2854
    CALL core_necklace.cpp_FUN_005ade00 ; 004b2855
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 004b285a
    PUSH 0x1                            ; 004b285d
    LEA EBX,[EAX + 0xfffda980]          ; 004b285f
    PUSH EBX                            ; 004b2865
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 004b2866
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b286b
    MOV DL,byte ptr [ESP + 0xc]         ; 004b286e
    MOV EBX,EAX                         ; 004b2872
    TEST DL,0x2                         ; 004b2874
    JNZ 0x004b2898                      ; 004b2877
        ;   XREF to: 004b2898 (CONDITIONAL_JUMP)  ; LAB_004b2898
    MOV EAX,EBX                         ; 004b2879
    POP EBX                             ; 004b287b
    RET                                 ; 004b287c
    PUSH 0x5f7500                       ; 004b287d | g_CGabriellaTypeInfo
        ;   Label: LAB_004b287d
    PUSH EBX                            ; 004b2882
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004b2883
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004b2888
    PUSH EAX                            ; 004b288b
    CALL crt_unknown.c_FUN_005b7fce     ; 004b288c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004b2891
    MOV EAX,EBX                         ; 004b2894
    POP EBX                             ; 004b2896
    RET                                 ; 004b2897
    PUSH EAX                            ; 004b2898
        ;   Label: LAB_004b2898
    CALL crt_unknown.c_FUN_005b7fdc     ; 004b2899
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004b289e
    MOV EAX,EBX                         ; 004b28a1
    POP EBX                             ; 004b28a3
    RET                                 ; 004b28a4

