; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools * this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_staticInit_FUN_0049d170 at 0049d175
;
; Referenced Globals:
;   int g_WindowStackCount
;   SWindow[5] g_WindowStack
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   shape_edittool.cpp_CEditorTools_init_FUN_0049e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049df80
        ;   Label: shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049df81
    PUSH 0x988                          ; 0049df85
    XOR EDX,EDX                         ; 0049df8a
    PUSH EDX                            ; 0049df8c
    PUSH 0x2cf1ce0                      ; 0049df8d | g_WindowStack
    MOV dword ptr [0x02cf1cdc],EDX      ; 0049df92 | g_WindowStackCount
    CALL crt_memory.c_memset_FUN_005fde40 ; 0049df98
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0049df9d
    PUSH EBX                            ; 0049dfa0
    CALL shape_edittool.cpp_CEditorTools_init_FUN_0049e020 ; 0049dfa1
        ;   XREF to: 0049e020 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_init_FUN_0049e020(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049dfa6
    MOV EAX,EBX                         ; 0049dfa9
    POP EBX                             ; 0049dfab
    RET                                 ; 0049dfac

