; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0057fe10(CWinFont *this_ptr,uint flags)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* PTR_engine_winfont.cpp_CWinFont_dtor_FUN_0057fe10_005e6534 = 0057fe10
;   WatcomTypeInfo g_CWinFontTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   engine_palette.cpp_FUN_00509bb0
;   engine_winfont.cpp_CWinFont_reset_FUN_00580300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fe10
        ;   Label: engine_winfont.cpp_CWinFont_dtor_FUN_0057fe10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057fe11
    TEST byte ptr [ESP + 0xc],0x4       ; 0057fe15
    JNZ 0x0057fe49                      ; 0057fe1a
        ;   XREF to: 0057fe49 (CONDITIONAL_JUMP)  ; LAB_0057fe49
    PUSH EBX                            ; 0057fe1c
    MOV dword ptr [EBX + 0x6a44],0x5e6534 ; 0057fe1d | PTR_engine_winfont.cpp_CWinFont_dtor_FUN_0057fe10_005e6534
    CALL engine_winfont.cpp_CWinFont_reset_FUN_00580300 ; 0057fe27
        ;   XREF to: 00580300 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_00580300(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 0057fe2c
    PUSH 0x1                            ; 0057fe2f
    PUSH EBX                            ; 0057fe31
    CALL engine_palette.cpp_FUN_00509bb0 ; 0057fe32
        ;   XREF to: 00509bb0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_FUN_00509bb0(CFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057fe37
    MOV DL,byte ptr [ESP + 0xc]         ; 0057fe3a
    MOV EBX,EAX                         ; 0057fe3e
    TEST DL,0x2                         ; 0057fe40
    JNZ 0x0057fe64                      ; 0057fe43
        ;   XREF to: 0057fe64 (CONDITIONAL_JUMP)  ; LAB_0057fe64
    MOV EAX,EBX                         ; 0057fe45
    POP EBX                             ; 0057fe47
    RET                                 ; 0057fe48
    PUSH 0x5e6550                       ; 0057fe49 | g_CWinFontTypeInfo
        ;   Label: LAB_0057fe49
    PUSH EBX                            ; 0057fe4e
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0057fe4f
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0057fe54
    PUSH EAX                            ; 0057fe57
    CALL crt_unknown.c_FUN_005a30b6     ; 0057fe58
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0057fe5d
    MOV EAX,EBX                         ; 0057fe60
    POP EBX                             ; 0057fe62
    RET                                 ; 0057fe63
    PUSH EAX                            ; 0057fe64
        ;   Label: LAB_0057fe64
    CALL crt_unknown.c_FUN_005a30c4     ; 0057fe65
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0057fe6a
    MOV EAX,EBX                         ; 0057fe6d
    POP EBX                             ; 0057fe6f
    RET                                 ; 0057fe70

