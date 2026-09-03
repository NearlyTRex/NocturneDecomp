; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005458a0(void)
;
;
; XREF[1]:
;   engine_3d.c_initTextureCache_FUN_00404480 at 00404480
;
; Referenced Globals:
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_0056497c
;   engine_texture.cpp_CTextureCache_ctor_FUN_00544de0
;
; *****************************************************************************

section .text

    PUSH 0xd300c                        ; 005458a0
        ;   Label: engine_texture.cpp_initTextureCache_FUN_005458a0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 005458a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 005458aa
    TEST EAX,EAX                        ; 005458ad
    JNZ 0x005458b7                      ; 005458af
        ;   XREF to: 005458b7 (CONDITIONAL_JUMP)  ; LAB_005458b7
    MOV [0x02dd0f84],EAX                ; 005458b1 | DAT_02dd0f84
    RET                                 ; 005458b6
    PUSH 0x400                          ; 005458b7
        ;   Label: LAB_005458b7
    PUSH EAX                            ; 005458bc
    CALL engine_texture.cpp_CTextureCache_ctor_FUN_00544de0 ; 005458bd
        ;   XREF to: 00544de0 (UNCONDITIONAL_CALL)  ; CTextureCache * engine_texture.cpp_CTextureCache_ctor_FUN_00544de0(CTextureCache * this_ptr, int max_texture_count)
    ADD ESP,0x8                         ; 005458c2
    MOV [0x02dd0f84],EAX                ; 005458c5 | DAT_02dd0f84
    RET                                 ; 005458ca

