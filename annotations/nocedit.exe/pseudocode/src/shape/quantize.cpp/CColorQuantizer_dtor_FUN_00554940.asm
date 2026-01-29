; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer *this_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 at 00556768
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640ab5
;   TerminatedCString s_shape_quantize_cpp_00640acb
;   TerminatedCString s_shape_quantize_cpp_00640ae1
;   TerminatedCString s_shape_quantize_cpp_00640af7
;   TerminatedCString s_shape_quantize_cpp_00640b0d
;   TerminatedCString s_shape_quantize_cpp_00640b23
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554940
        ;   Label: shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
    PUSH ESI                            ; 00554941
    PUSH EDI                            ; 00554942
    PUSH EBP                            ; 00554943
    MOV EBX,dword ptr [ESP + 0x14]      ; 00554944
    MOV EDX,dword ptr [EBX + 0x10]      ; 00554948
    TEST EDX,EDX                        ; 0055494b
    JNZ 0x00554a0e                      ; 0055494d
        ;   XREF to: 00554a0e (CONDITIONAL_JUMP)  ; LAB_00554a0e
    MOV EBP,dword ptr [EBX + 0x14]      ; 00554953
        ;   Label: LAB_00554953
    TEST EBP,EBP                        ; 00554956
    JZ 0x00554978                       ; 00554958
        ;   XREF to: 00554978 (CONDITIONAL_JUMP)  ; LAB_00554978
    MOV EAX,0x640ae1                    ; 0055495a | = "..\\shape\\quantize.cpp"
    MOV EDX,0x180                       ; 0055495f
    PUSH EBP                            ; 00554964
    MOV [0x0067d20c],EAX                ; 00554965 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0055496a | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554970
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554975
    MOV ESI,dword ptr [EBX + 0x18]      ; 00554978
        ;   Label: LAB_00554978
    TEST ESI,ESI                        ; 0055497b
    JZ 0x0055499e                       ; 0055497d
        ;   XREF to: 0055499e (CONDITIONAL_JUMP)  ; LAB_0055499e
    MOV EDI,0x640af7                    ; 0055497f | = "..\\shape\\quantize.cpp"
    MOV EBP,0x181                       ; 00554984
    PUSH ESI                            ; 00554989
    MOV dword ptr [0x0067d20c],EDI      ; 0055498a | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 00554990 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554996
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0055499b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0055499e
        ;   Label: LAB_0055499e
    TEST EDX,EDX                        ; 005549a1
    JZ 0x005549c4                       ; 005549a3
        ;   XREF to: 005549c4 (CONDITIONAL_JUMP)  ; LAB_005549c4
    MOV ECX,0x640b0d                    ; 005549a5 | = "..\\shape\\quantize.cpp"
    MOV ESI,0x182                       ; 005549aa
    PUSH EDX                            ; 005549af
    MOV dword ptr [0x0067d20c],ECX      ; 005549b0 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 005549b6 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005549bc
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005549c1
    MOV EBP,dword ptr [EBX + 0x8]       ; 005549c4
        ;   Label: LAB_005549c4
    TEST EBP,EBP                        ; 005549c7
    JZ 0x005549e9                       ; 005549c9
        ;   XREF to: 005549e9 (CONDITIONAL_JUMP)  ; LAB_005549e9
    MOV EAX,0x640b23                    ; 005549cb | = "..\\shape\\quantize.cpp"
    MOV EDX,0x183                       ; 005549d0
    PUSH EBP                            ; 005549d5
    MOV [0x0067d20c],EAX                ; 005549d6 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 005549db | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005549e1
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005549e6
    MOV ESI,dword ptr [EBX + 0xc]       ; 005549e9
        ;   Label: LAB_005549e9
    TEST ESI,ESI                        ; 005549ec
    JZ 0x00554a00                       ; 005549ee
        ;   XREF to: 00554a00 (CONDITIONAL_JUMP)  ; LAB_00554a00
    PUSH 0x79                           ; 005549f0
    PUSH 0x640ab5                       ; 005549f2 | = "..\\shape\\quantize.cpp"
    PUSH ESI                            ; 005549f7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005549f8
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005549fd
    MOV EDI,dword ptr [EBX + 0x4]       ; 00554a00
        ;   Label: LAB_00554a00
    TEST EDI,EDI                        ; 00554a03
    JNZ 0x00554a32                      ; 00554a05
        ;   XREF to: 00554a32 (CONDITIONAL_JUMP)  ; LAB_00554a32
    MOV EAX,EBX                         ; 00554a07
    POP EBP                             ; 00554a09
    POP EDI                             ; 00554a0a
    POP ESI                             ; 00554a0b
    POP EBX                             ; 00554a0c
    RET                                 ; 00554a0d
    MOV ECX,0x640acb                    ; 00554a0e | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00554a0e
    MOV ESI,0x17f                       ; 00554a13
    PUSH EDX                            ; 00554a18
    MOV dword ptr [0x0067d20c],ECX      ; 00554a19 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 00554a1f | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00554a25
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00554a2a
    JMP 0x00554953                      ; 00554a2d
        ;   XREF to: 00554953 (UNCONDITIONAL_JUMP)  ; LAB_00554953
    PUSH 0x79                           ; 00554a32
        ;   Label: LAB_00554a32
    PUSH 0x640ab5                       ; 00554a34 | = "..\\shape\\quantize.cpp"
    PUSH EDI                            ; 00554a39
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00554a3a
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00554a3f
    MOV EAX,EBX                         ; 00554a42
    POP EBP                             ; 00554a44
    POP EDI                             ; 00554a45
    POP ESI                             ; 00554a46
    POP EBX                             ; 00554a47
    RET                                 ; 00554a48

