; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitmap * __cdecl shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(CBitmap *this_ptr)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x68]:1  local_68
;
; XREF[2]:
;   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 at 005561e5
;   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 at 005567d9
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640a89
;   TerminatedCString s_Invalid_bit_depth_d_for__006410d3
;   TerminatedCString s_shape_quantize_cpp_006410f5
;   TerminatedCString s_Could_not_allocate_data__0064110b
;   TerminatedCString s_shape_quantize_cpp_0064112b
;   TerminatedCString s_shape_quantize_cpp_00641141
;   TerminatedCString s_Could_not_allocate_row_t_00641157
;   TerminatedCString s_shape_quantize_cpp_00641175
;   TerminatedCString s_Unable_to_allocate_memor_0064118b
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556a00
        ;   Label: shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
    PUSH ESI                            ; 00556a01
    PUSH EBP                            ; 00556a02
    SUB ESP,0x5c                        ; 00556a03
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00556a06
    MOV ESI,dword ptr [ESP + 0x70]      ; 00556a0a
    PUSH 0x28                           ; 00556a0e
    PUSH 0x0                            ; 00556a10
    PUSH EBX                            ; 00556a12
    CALL crt_memory.c_memset_FUN_005fde40 ; 00556a13
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00556a18
    MOV AH,byte ptr [ESP + 0x78]        ; 00556a1b
    CMP AH,0x10                         ; 00556a1f
    JNC 0x00556b30                      ; 00556a22
        ;   XREF to: 00556b30 (CONDITIONAL_JUMP)  ; LAB_00556b30
    CMP AH,0x8                          ; 00556a28
    JNC 0x00556b47                      ; 00556a2b
        ;   XREF to: 00556b47 (CONDITIONAL_JUMP)  ; LAB_00556b47
    XOR EAX,EAX                         ; 00556a31
        ;   Label: LAB_00556a31
    MOV AL,byte ptr [ESP + 0x78]        ; 00556a33
    PUSH EAX                            ; 00556a37
    PUSH 0x6410d3                       ; 00556a38 | = "Invalid bit depth [%d] for bitmap"
    LEA EAX,[ESP + 0x8]                 ; 00556a3d
    PUSH EAX                            ; 00556a41
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00556a42
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x640a89                    ; 00556a47 | = "..\\shape\\quantize.cpp"
    ADD ESP,0xc                         ; 00556a4c
    MOV EAX,ESP                         ; 00556a4f
    MOV ECX,0x67                        ; 00556a51
    PUSH EAX                            ; 00556a56
    MOV dword ptr [0x02f0ca48],EDX      ; 00556a57 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00556a5d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556a63
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556a68
    PUSH EDI                            ; 00556a6b
        ;   Label: LAB_00556a6b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00556a6c
    MOV word ptr [EBX + 0x16],AX        ; 00556a70
    MOV AL,byte ptr [ESP + 0x7c]        ; 00556a74
    MOV byte ptr [EBX + 0x1a],AL        ; 00556a78
    XOR AH,AH                           ; 00556a7b
    MOV AL,byte ptr [EBX + 0x1b]        ; 00556a7d
    MOV word ptr [EBX + 0x14],SI        ; 00556a80
    IMUL ESI,EAX                        ; 00556a84
    XOR EDX,EDX                         ; 00556a87
    XOR EAX,EAX                         ; 00556a89
    MOV DX,SI                           ; 00556a8b
    MOV AX,word ptr [EBX + 0x16]        ; 00556a8e
    IMUL EAX,EDX                        ; 00556a92
    PUSH 0x498                          ; 00556a95
    PUSH 0x6410f5                       ; 00556a9a | = "..\\shape\\quantize.cpp"
    PUSH EAX                            ; 00556a9f
    MOV word ptr [EBX + 0x18],SI        ; 00556aa0
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00556aa4
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00556aa9
    MOV dword ptr [EBX + 0x1c],EAX      ; 00556aac
    TEST EAX,EAX                        ; 00556aaf
    JZ 0x00556b53                       ; 00556ab1
        ;   XREF to: 00556b53 (CONDITIONAL_JUMP)  ; LAB_00556b53
    XOR EAX,EAX                         ; 00556ab7
        ;   Label: LAB_00556ab7
    PUSH 0x49d                          ; 00556ab9
    MOV AX,word ptr [EBX + 0x16]        ; 00556abe
    PUSH 0x64112b                       ; 00556ac2 | = "..\\shape\\quantize.cpp"
    SHL EAX,0x2                         ; 00556ac7
    PUSH EAX                            ; 00556aca
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00556acb
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00556ad0
    MOV dword ptr [EBX + 0x20],EAX      ; 00556ad3
    TEST EAX,EAX                        ; 00556ad6
    JZ 0x00556b7b                       ; 00556ad8
        ;   XREF to: 00556b7b (CONDITIONAL_JUMP)  ; LAB_00556b7b
    XOR EDX,EDX                         ; 00556ade
        ;   Label: LAB_00556ade
    XOR EAX,EAX                         ; 00556ae0
    POP EDI                             ; 00556ae2
    XOR ECX,ECX                         ; 00556ae3
        ;   Label: LAB_00556ae3
    MOV CX,word ptr [EBX + 0x16]        ; 00556ae5
    CMP EAX,ECX                         ; 00556ae9
    JGE 0x00556bc5                      ; 00556aeb
        ;   XREF to: 00556bc5 (CONDITIONAL_JUMP)  ; LAB_00556bc5
    XOR ECX,ECX                         ; 00556af1
    MOV CX,word ptr [EBX + 0x18]        ; 00556af3
    IMUL ECX,EAX                        ; 00556af7
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00556afa
    ADD EDX,0x4                         ; 00556afd
    ADD ESI,ECX                         ; 00556b00
    MOV ECX,dword ptr [EBX + 0x20]      ; 00556b02
    INC EAX                             ; 00556b05
    MOV dword ptr [ECX + EDX*0x1 + -0x4],ESI ; 00556b06
    JMP 0x00556ae3                      ; 00556b0a
        ;   XREF to: 00556ae3 (UNCONDITIONAL_JUMP)  ; LAB_00556ae3
    MOV byte ptr [EBX + 0x1b],0x1       ; 00556b0c
        ;   Label: LAB_00556b0c
    JMP 0x00556a6b                      ; 00556b10
        ;   XREF to: 00556a6b (UNCONDITIONAL_JUMP)  ; LAB_00556a6b
    MOV byte ptr [EBX + 0x1b],0x2       ; 00556b15
        ;   Label: LAB_00556b15
    JMP 0x00556a6b                      ; 00556b19
        ;   XREF to: 00556a6b (UNCONDITIONAL_JUMP)  ; LAB_00556a6b
    MOV byte ptr [EBX + 0x1b],0x3       ; 00556b1e
        ;   Label: LAB_00556b1e
    JMP 0x00556a6b                      ; 00556b22
        ;   XREF to: 00556a6b (UNCONDITIONAL_JUMP)  ; LAB_00556a6b
    MOV byte ptr [EBX + 0x1b],0x4       ; 00556b27
        ;   Label: LAB_00556b27
    JMP 0x00556a6b                      ; 00556b2b
        ;   XREF to: 00556a6b (UNCONDITIONAL_JUMP)  ; LAB_00556a6b
    JBE 0x00556b15                      ; 00556b30
        ;   XREF to: 00556b15 (CONDITIONAL_JUMP)  ; LAB_00556b15
        ;   Label: LAB_00556b30
    CMP AH,0x18                         ; 00556b32
    JC 0x00556a31                       ; 00556b35
        ;   XREF to: 00556a31 (CONDITIONAL_JUMP)  ; LAB_00556a31
    JBE 0x00556b1e                      ; 00556b3b
        ;   XREF to: 00556b1e (CONDITIONAL_JUMP)  ; LAB_00556b1e
    CMP AH,0x20                         ; 00556b3d
    JZ 0x00556b27                       ; 00556b40
        ;   XREF to: 00556b27 (CONDITIONAL_JUMP)  ; LAB_00556b27
    JMP 0x00556a31                      ; 00556b42
        ;   XREF to: 00556a31 (UNCONDITIONAL_JUMP)  ; LAB_00556a31
    JBE 0x00556b0c                      ; 00556b47
        ;   XREF to: 00556b0c (CONDITIONAL_JUMP)  ; LAB_00556b0c
        ;   Label: LAB_00556b47
    CMP AH,0xf                          ; 00556b49
    JZ 0x00556b15                       ; 00556b4c
        ;   XREF to: 00556b15 (CONDITIONAL_JUMP)  ; LAB_00556b15
    JMP 0x00556a31                      ; 00556b4e
        ;   XREF to: 00556a31 (UNCONDITIONAL_JUMP)  ; LAB_00556a31
    MOV EDI,0x640a89                    ; 00556b53 | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00556b53
    MOV EBP,0x67                        ; 00556b58
    PUSH 0x64110b                       ; 00556b5d | = "Could not allocate data buffer."
    MOV dword ptr [0x02f0ca48],EDI      ; 00556b62 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00556b68 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556b6e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556b73
    JMP 0x00556ab7                      ; 00556b76
        ;   XREF to: 00556ab7 (UNCONDITIONAL_JUMP)  ; LAB_00556ab7
    MOV EDX,0x641141                    ; 00556b7b | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00556b7b
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00556b80
    MOV ECX,0x4a1                       ; 00556b83
    PUSH ESI                            ; 00556b88
    MOV dword ptr [0x0067d20c],EDX      ; 00556b89 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00556b8f | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00556b95
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00556b9a
    MOV EDI,0x640a89                    ; 00556b9d | = "..\\shape\\quantize.cpp"
    MOV EBP,0x67                        ; 00556ba2
    PUSH 0x641157                       ; 00556ba7 | = "Could not allocate row table."
    MOV dword ptr [0x02f0ca48],EDI      ; 00556bac | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00556bb2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556bb8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556bbd
    JMP 0x00556ade                      ; 00556bc0
        ;   XREF to: 00556ade (UNCONDITIONAL_JUMP)  ; LAB_00556ade
    CMP byte ptr [EBX + 0x1a],0x8       ; 00556bc5
        ;   Label: LAB_00556bc5
    JZ 0x00556bd4                       ; 00556bc9
        ;   XREF to: 00556bd4 (CONDITIONAL_JUMP)  ; LAB_00556bd4
    MOV EAX,EBX                         ; 00556bcb
        ;   Label: LAB_00556bcb
    ADD ESP,0x5c                        ; 00556bcd
    POP EBP                             ; 00556bd0
    POP ESI                             ; 00556bd1
    POP EBX                             ; 00556bd2
    RET                                 ; 00556bd3
    PUSH 0x4ac                          ; 00556bd4
        ;   Label: LAB_00556bd4
    PUSH 0x641175                       ; 00556bd9 | = "..\\shape\\quantize.cpp"
    PUSH 0x300                          ; 00556bde
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00556be3
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00556be8
    MOV dword ptr [EBX + 0x24],EAX      ; 00556beb
    TEST EAX,EAX                        ; 00556bee
    JNZ 0x00556bcb                      ; 00556bf0
        ;   XREF to: 00556bcb (CONDITIONAL_JUMP)  ; LAB_00556bcb
    MOV EDX,0x640a89                    ; 00556bf2 | = "..\\shape\\quantize.cpp"
    MOV ECX,0x67                        ; 00556bf7
    PUSH 0x64118b                       ; 00556bfc | = "Unable to allocate memory for palette."
    MOV dword ptr [0x02f0ca48],EDX      ; 00556c01 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00556c07 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556c0d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556c12
    MOV EAX,EBX                         ; 00556c15
    ADD ESP,0x5c                        ; 00556c17
    POP EBP                             ; 00556c1a
    POP ESI                             ; 00556c1b
    POP EBX                             ; 00556c1c
    RET                                 ; 00556c1d

