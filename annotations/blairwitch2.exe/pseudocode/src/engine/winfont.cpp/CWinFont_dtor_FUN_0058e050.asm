; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0058e050(CWinFont *this_ptr,uint flags)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* PTR_engine_winfont.cpp_CWinFont_dtor_FUN_0058e050_005fe274 = 0058e050
;   WatcomTypeInfo g_CWinFontTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   engine_palette.cpp_FUN_00510cc0
;   engine_winfont.cpp_CWinFont_reset_FUN_0058e640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e050
        ;   Label: engine_winfont.cpp_CWinFont_dtor_FUN_0058e050
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058e051
    TEST byte ptr [ESP + 0xc],0x4       ; 0058e055
    JNZ 0x0058e089                      ; 0058e05a
        ;   XREF to: 0058e089 (CONDITIONAL_JUMP)  ; LAB_0058e089
    PUSH EBX                            ; 0058e05c
    MOV dword ptr [EBX + 0x6a44],0x5fe274 ; 0058e05d | PTR_engine_winfont.cpp_CWinFont_dtor_FUN_0058e050_005fe274
    CALL engine_winfont.cpp_CWinFont_reset_FUN_0058e640 ; 0058e067
        ;   XREF to: 0058e640 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_0058e640(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 0058e06c
    PUSH 0x1                            ; 0058e06f
    PUSH EBX                            ; 0058e071
    CALL engine_palette.cpp_FUN_00510cc0 ; 0058e072
        ;   XREF to: 00510cc0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_FUN_00510cc0(CFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058e077
    MOV DL,byte ptr [ESP + 0xc]         ; 0058e07a
    MOV EBX,EAX                         ; 0058e07e
    TEST DL,0x2                         ; 0058e080
    JNZ 0x0058e0a4                      ; 0058e083
        ;   XREF to: 0058e0a4 (CONDITIONAL_JUMP)  ; LAB_0058e0a4
    MOV EAX,EBX                         ; 0058e085
    POP EBX                             ; 0058e087
    RET                                 ; 0058e088
    PUSH 0x5fe290                       ; 0058e089 | g_CWinFontTypeInfo
        ;   Label: LAB_0058e089
    PUSH EBX                            ; 0058e08e
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0058e08f
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0058e094
    PUSH EAX                            ; 0058e097
    CALL crt_unknown.c_FUN_005b7fce     ; 0058e098
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0058e09d
    MOV EAX,EBX                         ; 0058e0a0
    POP EBX                             ; 0058e0a2
    RET                                 ; 0058e0a3
    PUSH EAX                            ; 0058e0a4
        ;   Label: LAB_0058e0a4
    CALL crt_unknown.c_FUN_005b7fdc     ; 0058e0a5
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0058e0aa
    MOV EAX,EBX                         ; 0058e0ad
    POP EBX                             ; 0058e0af
    RET                                 ; 0058e0b0

