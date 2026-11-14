; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005b1b90(CWinFont *this_ptr,uint flags)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* PTR_engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90_00608164 = 005b1b90
;   WatcomTypeInfo g_CWinFontTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   engine_palette.cpp_FUN_00531ed0
;   engine_winfont.cpp_CWinFont_reset_FUN_005b2080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1b90
        ;   Label: engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1b91
    TEST byte ptr [ESP + 0xc],0x4       ; 005b1b95
    JNZ 0x005b1bc9                      ; 005b1b9a
        ;   XREF to: 005b1bc9 (CONDITIONAL_JUMP)  ; LAB_005b1bc9
    PUSH EBX                            ; 005b1b9c
    MOV dword ptr [EBX + 0x6a44],0x608164 ; 005b1b9d | PTR_engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90_00608164
    CALL engine_winfont.cpp_CWinFont_reset_FUN_005b2080 ; 005b1ba7
        ;   XREF to: 005b2080 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_005b2080(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 005b1bac
    PUSH 0x1                            ; 005b1baf
    PUSH EBX                            ; 005b1bb1
    CALL engine_palette.cpp_FUN_00531ed0 ; 005b1bb2
        ;   XREF to: 00531ed0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_FUN_00531ed0(CFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b1bb7
    MOV DL,byte ptr [ESP + 0xc]         ; 005b1bba
    MOV EBX,EAX                         ; 005b1bbe
    TEST DL,0x2                         ; 005b1bc0
    JNZ 0x005b1be4                      ; 005b1bc3
        ;   XREF to: 005b1be4 (CONDITIONAL_JUMP)  ; LAB_005b1be4
    MOV EAX,EBX                         ; 005b1bc5
    POP EBX                             ; 005b1bc7
    RET                                 ; 005b1bc8
    PUSH 0x608180                       ; 005b1bc9 | g_CWinFontTypeInfo
        ;   Label: LAB_005b1bc9
    PUSH EBX                            ; 005b1bce
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005b1bcf
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005b1bd4
    PUSH EAX                            ; 005b1bd7
    CALL crt_unknown.c_FUN_005c0336     ; 005b1bd8
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005b1bdd
    MOV EAX,EBX                         ; 005b1be0
    POP EBX                             ; 005b1be2
    RET                                 ; 005b1be3
    PUSH EAX                            ; 005b1be4
        ;   Label: LAB_005b1be4
    CALL crt_unknown.c_FUN_005c0344     ; 005b1be5
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005b1bea
    MOV EAX,EBX                         ; 005b1bed
    POP EBX                             ; 005b1bef
    RET                                 ; 005b1bf0

