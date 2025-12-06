; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_CTextureCache_free_FUN_005dcb30(CTextureCache * cache)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   cache
;
; XREF[4]:
;   engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20 at 005dcb25
;   engine_texture.cpp_CTextureCache_free_FUN_005dcb00 at 005dcb05
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0 at 005dd8e7
;   engine_texture.cpp_freeTextureCache_FUN_005dd7a0 at 005dd7df
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_00655142
;   TerminatedCString s_engine_texture_cpp_00655158
;   TerminatedCString s_engine_texture_cpp_0065516e
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dcb30
        ;   Label: engine_texture.cpp_CTextureCache_free_FUN_005dcb30
    PUSH ESI                            ; 005dcb31
    PUSH EDI                            ; 005dcb32
    PUSH EBP                            ; 005dcb33
    MOV EBP,dword ptr [ESP + 0x14]      ; 005dcb34
    MOV EDX,dword ptr [EBP + 0x4]       ; 005dcb38
    MOV dword ptr [EBP + 0x14008],0x0   ; 005dcb3b
    XOR EDI,EDI                         ; 005dcb45
    TEST EDX,EDX                        ; 005dcb47
    JLE 0x005dcbc7                      ; 005dcb49 | LAB_005dcbc7
        ;   XREF to: 005dcbc7 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 005dcb4f
    MOV ESI,EBP                         ; 005dcb51
    MOV byte ptr [ESI + 0x3008],0x0     ; 005dcb53
        ;   Label: LAB_005dcb53
    MOV EAX,dword ptr [EBX + 0x1008]    ; 005dcb5a
    MOV dword ptr [EBX + 0x8],0x0       ; 005dcb60
    TEST EAX,EAX                        ; 005dcb67
    JNZ 0x005dcbd3                      ; 005dcb69 | LAB_005dcbd3
        ;   XREF to: 005dcbd3 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x2008]    ; 005dcb6b
        ;   Label: LAB_005dcb6b
    TEST ECX,ECX                        ; 005dcb71
    JZ 0x005dcb92                       ; 005dcb73 | LAB_005dcb92
        ;   XREF to: 005dcb92 (CONDITIONAL_JUMP)
    PUSH 0xcc                           ; 005dcb75
    PUSH 0x655158                       ; 005dcb7a | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_00655158 = ..\engine\texture.cpp
    PUSH ECX                            ; 005dcb7f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dcb80 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcb85
    MOV dword ptr [EBX + 0x2008],0x0    ; 005dcb88
    MOV EDX,dword ptr [EBX + 0x13008]   ; 005dcb92
        ;   Label: LAB_005dcb92
    TEST EDX,EDX                        ; 005dcb98
    JZ 0x005dcbb9                       ; 005dcb9a | LAB_005dcbb9
        ;   XREF to: 005dcbb9 (CONDITIONAL_JUMP)
    PUSH 0xd0                           ; 005dcb9c
    PUSH 0x65516e                       ; 005dcba1 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_0065516e = ..\engine\texture.cpp
    PUSH EDX                            ; 005dcba6
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dcba7 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcbac
    MOV dword ptr [EBX + 0x13008],0x0   ; 005dcbaf
    ADD ESI,0x40                        ; 005dcbb9
        ;   Label: LAB_005dcbb9
    INC EDI                             ; 005dcbbc
    MOV ECX,dword ptr [EBP + 0x4]       ; 005dcbbd
    ADD EBX,0x4                         ; 005dcbc0
    CMP EDI,ECX                         ; 005dcbc3
    JL 0x005dcb53                       ; 005dcbc5 | LAB_005dcb53
        ;   XREF to: 005dcb53 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP],0x0             ; 005dcbc7
        ;   Label: LAB_005dcbc7
    POP EBP                             ; 005dcbce
    POP EDI                             ; 005dcbcf
    POP ESI                             ; 005dcbd0
    POP EBX                             ; 005dcbd1
    RET                                 ; 005dcbd2
    PUSH 0xc8                           ; 005dcbd3
        ;   Label: LAB_005dcbd3
    PUSH 0x655142                       ; 005dcbd8 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_00655142 = ..\engine\texture.cpp
    PUSH EAX                            ; 005dcbdd
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dcbde | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcbe3
    MOV dword ptr [EBX + 0x1008],0x0    ; 005dcbe6
    JMP 0x005dcb6b                      ; 005dcbf0 | LAB_005dcb6b
        ;   XREF to: 005dcb6b (UNCONDITIONAL_JUMP)

