; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer *this_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 at 0055642a
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640ab5
;   TerminatedCString s_shape_quantize_cpp_00640bb8
;   TerminatedCString s_shape_quantize_cpp_00640bce
;   TerminatedCString s_shape_quantize_cpp_00640be4
;   TerminatedCString s_shape_quantize_cpp_00640bfa
;   TerminatedCString s_shape_quantize_cpp_00640c10
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554d40
        ;   Label: shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
    PUSH ESI                            ; 00554d41
    PUSH EDI                            ; 00554d42
    PUSH EBP                            ; 00554d43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00554d44
    MOV EDX,dword ptr [EBX + 0x10]      ; 00554d48
    TEST EDX,EDX                        ; 00554d4b
    JNZ 0x00554e36                      ; 00554d4d
        ;   XREF to: 00554e36 (CONDITIONAL_JUMP)  ; LAB_00554e36
    MOV EBP,dword ptr [EBX + 0x14]      ; 00554d53
        ;   Label: LAB_00554d53
    TEST EBP,EBP                        ; 00554d56
    JZ 0x00554d78                       ; 00554d58
        ;   XREF to: 00554d78 (CONDITIONAL_JUMP)  ; LAB_00554d78
    MOV EAX,0x640bce                    ; 00554d5a | = "..\\shape\\quantize.cpp"
    MOV EDX,0x1f4                       ; 00554d5f
    PUSH EBP                            ; 00554d64
    MOV [0x0067d20c],EAX                ; 00554d65 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 00554d6a | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554d70
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554d75
    MOV ESI,dword ptr [EBX + 0x18]      ; 00554d78
        ;   Label: LAB_00554d78
    TEST ESI,ESI                        ; 00554d7b
    JZ 0x00554d9e                       ; 00554d7d
        ;   XREF to: 00554d9e (CONDITIONAL_JUMP)  ; LAB_00554d9e
    MOV EDI,0x640be4                    ; 00554d7f | = "..\\shape\\quantize.cpp"
    MOV EBP,0x1f5                       ; 00554d84
    PUSH ESI                            ; 00554d89
    MOV dword ptr [0x0067d20c],EDI      ; 00554d8a | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 00554d90 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554d96
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554d9b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00554d9e
        ;   Label: LAB_00554d9e
    TEST EDX,EDX                        ; 00554da1
    JZ 0x00554dc4                       ; 00554da3
        ;   XREF to: 00554dc4 (CONDITIONAL_JUMP)  ; LAB_00554dc4
    MOV ECX,0x640bfa                    ; 00554da5 | = "..\\shape\\quantize.cpp"
    MOV ESI,0x1f6                       ; 00554daa
    PUSH EDX                            ; 00554daf
    MOV dword ptr [0x0067d20c],ECX      ; 00554db0 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 00554db6 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554dbc
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554dc1
    MOV EBP,dword ptr [EBX + 0x8]       ; 00554dc4
        ;   Label: LAB_00554dc4
    TEST EBP,EBP                        ; 00554dc7
    JZ 0x00554de9                       ; 00554dc9
        ;   XREF to: 00554de9 (CONDITIONAL_JUMP)  ; LAB_00554de9
    MOV EAX,0x640c10                    ; 00554dcb | = "..\\shape\\quantize.cpp"
    MOV EDX,0x1f7                       ; 00554dd0
    PUSH EBP                            ; 00554dd5
    MOV [0x0067d20c],EAX                ; 00554dd6 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 00554ddb | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554de1
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554de6
    MOV ESI,dword ptr [EBX + 0xc]       ; 00554de9
        ;   Label: LAB_00554de9
    TEST ESI,ESI                        ; 00554dec
    JZ 0x00554e00                       ; 00554dee
        ;   XREF to: 00554e00 (CONDITIONAL_JUMP)  ; LAB_00554e00
    PUSH 0x79                           ; 00554df0
    PUSH 0x640ab5                       ; 00554df2 | = "..\\shape\\quantize.cpp"
    PUSH ESI                            ; 00554df7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00554df8
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00554dfd
    MOV EDI,dword ptr [EBX + 0x4]       ; 00554e00
        ;   Label: LAB_00554e00
    TEST EDI,EDI                        ; 00554e03
    JNZ 0x00554e5a                      ; 00554e05
        ;   XREF to: 00554e5a (CONDITIONAL_JUMP)  ; LAB_00554e5a
    PUSH 0x4b44                         ; 00554e07
        ;   Label: LAB_00554e07
    PUSH 0x0                            ; 00554e0c
    PUSH EBX                            ; 00554e0e
    MOV EDI,dword ptr [EBX]             ; 00554e0f
    MOV ESI,dword ptr [EBX + 0x4b40]    ; 00554e11
    CALL crt_memory.c_memset_FUN_005fde40 ; 00554e17
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x4b34],0xffffffff ; 00554e1c
    MOV dword ptr [EBX],EDI             ; 00554e26
    ADD ESP,0xc                         ; 00554e28
    MOV dword ptr [EBX + 0x4b40],ESI    ; 00554e2b
    POP EBP                             ; 00554e31
    POP EDI                             ; 00554e32
    POP ESI                             ; 00554e33
    POP EBX                             ; 00554e34
    RET                                 ; 00554e35
    MOV ECX,0x640bb8                    ; 00554e36 | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00554e36
    MOV ESI,0x1f3                       ; 00554e3b
    PUSH EDX                            ; 00554e40
    MOV dword ptr [0x0067d20c],ECX      ; 00554e41 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 00554e47 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554e4d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554e52
    JMP 0x00554d53                      ; 00554e55
        ;   XREF to: 00554d53 (UNCONDITIONAL_JUMP)  ; LAB_00554d53
    PUSH 0x79                           ; 00554e5a
        ;   Label: LAB_00554e5a
    PUSH 0x640ab5                       ; 00554e5c | = "..\\shape\\quantize.cpp"
    PUSH EDI                            ; 00554e61
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00554e62
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00554e67
    JMP 0x00554e07                      ; 00554e6a
        ;   XREF to: 00554e07 (UNCONDITIONAL_JUMP)  ; LAB_00554e07

