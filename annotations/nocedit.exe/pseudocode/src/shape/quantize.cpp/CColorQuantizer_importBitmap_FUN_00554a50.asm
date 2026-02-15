; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer *this_ptr,CBitmap *bitmap)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; CBitmap *        Stack[0x8]:4   bitmap
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 at 0055643e
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640a73
;   TerminatedCString s_shape_quantize_cpp_00640a9f
;   TerminatedCString s_Unable_to_allocate_memor_00640b39
;   TerminatedCString s_Unable_to_allocate_memor_00640b62
;   TerminatedCString s_Phase_1_00640b90
;   double DOUBLE_00640b9b = 0.577350270000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a50
        ;   Label: shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
    PUSH ESI                            ; 00554a51
    PUSH EDI                            ; 00554a52
    PUSH EBP                            ; 00554a53
    SUB ESP,0x20                        ; 00554a54
    MOV EBX,dword ptr [ESP + 0x34]      ; 00554a57
    MOV EBP,dword ptr [ESP + 0x38]      ; 00554a5b
    MOV AX,word ptr [EBP + 0x14]        ; 00554a5f
    MOV DX,word ptr [EBP + 0x16]        ; 00554a63
    MOV SI,word ptr [EBP + 0x18]        ; 00554a67
    MOV CL,byte ptr [EBP + 0x1a]        ; 00554a6b
    MOV dword ptr [ESP + 0x14],EAX      ; 00554a6e
    MOV dword ptr [ESP + 0xc],EDX       ; 00554a72
    MOV dword ptr [ESP + 0x10],ESI      ; 00554a76
    CMP CL,0x18                         ; 00554a7a
    JZ 0x00554a8b                       ; 00554a7d
        ;   XREF to: 00554a8b (CONDITIONAL_JUMP)  ; LAB_00554a8b
    XOR EDI,EDI                         ; 00554a7f
    MOV EAX,EDI                         ; 00554a81
    ADD ESP,0x20                        ; 00554a83
    POP EBP                             ; 00554a86
    POP EDI                             ; 00554a87
    POP ESI                             ; 00554a88
    POP EBX                             ; 00554a89
    RET                                 ; 00554a8a
    XOR EDI,EDI                         ; 00554a8b
        ;   Label: LAB_00554a8b
    AND EAX,0xffff                      ; 00554a8d
    MOV DI,DX                           ; 00554a92
    IMUL EDI,EAX                        ; 00554a95
    PUSH 0x73                           ; 00554a98
    SHL EDI,0x2                         ; 00554a9a
    MOV EAX,dword ptr [EBX + 0x4b38]    ; 00554a9d
    PUSH 0x640a9f                       ; 00554aa3 | = "..\\shape\\quantize.cpp"
    ADD EAX,EDI                         ; 00554aa8
    PUSH EAX                            ; 00554aaa
    MOV EDX,dword ptr [EBX + 0x4]       ; 00554aab
    PUSH EDX                            ; 00554aae
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00554aaf
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00554ab4
    TEST EAX,EAX                        ; 00554ab7
    JZ 0x00554b2c                       ; 00554ab9
        ;   XREF to: 00554b2c (CONDITIONAL_JUMP)  ; LAB_00554b2c
    MOV dword ptr [EBX + 0x4],EAX       ; 00554abb
    MOV EAX,dword ptr [EBX + 0x4b38]    ; 00554abe
    ADD EAX,EDI                         ; 00554ac4
    PUSH 0x73                           ; 00554ac6
    MOV dword ptr [EBX + 0x4b38],EAX    ; 00554ac8
    XOR EAX,EAX                         ; 00554ace
    PUSH 0x640a9f                       ; 00554ad0 | = "..\\shape\\quantize.cpp"
    MOV AX,SI                           ; 00554ad5
    PUSH EAX                            ; 00554ad8
    MOV EDX,dword ptr [EBX + 0xc]       ; 00554ad9
    PUSH EDX                            ; 00554adc
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00554add
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00554ae2
    TEST EAX,EAX                        ; 00554ae5
    JZ 0x00554b5b                       ; 00554ae7
        ;   XREF to: 00554b5b (CONDITIONAL_JUMP)  ; LAB_00554b5b
    XOR ESI,ESI                         ; 00554ae9
    MOV dword ptr [EBX + 0xc],EAX       ; 00554aeb
    MOV dword ptr [ESP],ESI             ; 00554aee
    MOV dword ptr [ESP + 0x4],ESI       ; 00554af1
    XOR EAX,EAX                         ; 00554af5
        ;   Label: LAB_00554af5
    MOV EDX,dword ptr [ESP]             ; 00554af7
    MOV AX,word ptr [ESP + 0xc]         ; 00554afa
    CMP EAX,EDX                         ; 00554aff
    JG 0x00554ba1                       ; 00554b01
        ;   XREF to: 00554ba1 (CONDITIONAL_JUMP)  ; LAB_00554ba1
    MOV EAX,dword ptr [EBX + 0x4b3c]    ; 00554b07
    MOV dword ptr [EBX + 0x2050],0x0    ; 00554b0d
    MOV EDI,0x1                         ; 00554b17
    MOV dword ptr [EBX + 0x2054],EAX    ; 00554b1c
    MOV EAX,EDI                         ; 00554b22
    ADD ESP,0x20                        ; 00554b24
    POP EBP                             ; 00554b27
    POP EDI                             ; 00554b28
    POP ESI                             ; 00554b29
    POP EBX                             ; 00554b2a
    RET                                 ; 00554b2b
    MOV EDX,0x640a73                    ; 00554b2c | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00554b2c
    MOV ECX,0x61                        ; 00554b31
    PUSH 0x640b39                       ; 00554b36 | = "Unable to allocate memory for Pix array."
    XOR EDI,EDI                         ; 00554b3b
    MOV dword ptr [0x02f0ca48],EDX      ; 00554b3d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00554b43 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00554b49
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00554b4e
    MOV EAX,EDI                         ; 00554b51
    ADD ESP,0x20                        ; 00554b53
    POP EBP                             ; 00554b56
    POP EDI                             ; 00554b57
    POP ESI                             ; 00554b58
    POP EBX                             ; 00554b59
    RET                                 ; 00554b5a
    MOV EDX,0x640a73                    ; 00554b5b | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00554b5b
    MOV ECX,0x61                        ; 00554b60
    PUSH 0x640b62                       ; 00554b65 | = "Unable to allocate memory for scanlin..."
    XOR EDI,EDI                         ; 00554b6a
    MOV dword ptr [0x02f0ca48],EDX      ; 00554b6c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00554b72 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00554b78
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00554b7d
    MOV EAX,EDI                         ; 00554b80
    ADD ESP,0x20                        ; 00554b82
    POP EBP                             ; 00554b85
    POP EDI                             ; 00554b86
    POP ESI                             ; 00554b87
    POP EBX                             ; 00554b88
    RET                                 ; 00554b89
    MOV ESI,dword ptr [ESP]             ; 00554b8a
        ;   Label: LAB_00554b8a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00554b8d
    INC ESI                             ; 00554b91
    ADD ECX,0x4                         ; 00554b92
    MOV dword ptr [ESP],ESI             ; 00554b95
    MOV dword ptr [ESP + 0x4],ECX       ; 00554b98
    JMP 0x00554af5                      ; 00554b9c
        ;   XREF to: 00554af5 (UNCONDITIONAL_JUMP)  ; LAB_00554af5
    MOV EDI,dword ptr [ESP + 0x4]       ; 00554ba1
        ;   Label: LAB_00554ba1
    MOV ESI,dword ptr [EBP + 0x20]      ; 00554ba5
    XOR ECX,ECX                         ; 00554ba8
    ADD ESI,EDI                         ; 00554baa
    MOV CX,word ptr [ESP + 0x10]        ; 00554bac
    MOV ESI,dword ptr [ESI]             ; 00554bb1
    MOV EDI,dword ptr [EBX + 0xc]       ; 00554bb3
    XOR EDX,EDX                         ; 00554bb6
    PUSH EDI                            ; 00554bb8
    MOV EAX,ECX                         ; 00554bb9
    SHR ECX,0x2                         ; 00554bbb
    MOVSD.REP ES:EDI,ESI                ; 00554bbe
    MOV CL,AL                           ; 00554bc0
    AND CL,0x3                          ; 00554bc2
    MOVSB.REP ES:EDI,ESI                ; 00554bc5
    POP EDI                             ; 00554bc7
    XOR ESI,ESI                         ; 00554bc8
    XOR EAX,EAX                         ; 00554bca
        ;   Label: LAB_00554bca
    MOV AX,word ptr [ESP + 0x14]        ; 00554bcc
    CMP ESI,EAX                         ; 00554bd1
    JGE 0x00554c7e                      ; 00554bd3
        ;   XREF to: 00554c7e (CONDITIONAL_JUMP)  ; LAB_00554c7e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00554bd9
    MOV CL,byte ptr [EDX + EAX*0x1]     ; 00554bdc
    MOV byte ptr [ESP + 0x1c],CL        ; 00554bdf
    MOV CH,byte ptr [EDX + EAX*0x1 + 0x1] ; 00554be3
    MOV CL,byte ptr [EDX + EAX*0x1 + 0x2] ; 00554be7
    XOR EAX,EAX                         ; 00554beb
    MOV AL,CH                           ; 00554bed
    MOV EDI,EAX                         ; 00554bef
    IMUL EDI,EAX                        ; 00554bf1
    XOR EAX,EAX                         ; 00554bf4
    MOV AL,byte ptr [ESP + 0x1c]        ; 00554bf6
    IMUL EAX,EAX                        ; 00554bfa
    ADD EDI,EAX                         ; 00554bfd
    XOR EAX,EAX                         ; 00554bff
    MOV AL,CL                           ; 00554c01
    IMUL EAX,EAX                        ; 00554c03
    ADD EAX,EDI                         ; 00554c06
    MOV dword ptr [ESP + 0x8],EAX       ; 00554c08
    FILD dword ptr [ESP + 0x8]          ; 00554c0c
    FSQRT                               ; 00554c10
    FMUL double ptr [0x00640b9b]        ; 00554c12 | DOUBLE_00640b9b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00554c18
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00554c1d
    MOV AL,byte ptr [ESP + 0x8]         ; 00554c21
    MOV byte ptr [ESP + 0x18],AL        ; 00554c25
    MOV EAX,dword ptr [EBX + 0x4b3c]    ; 00554c29
    MOV EDI,dword ptr [EBX + 0x4]       ; 00554c2f
    SHL EAX,0x2                         ; 00554c32
    ADD EDI,EAX                         ; 00554c35
    MOV AL,byte ptr [ESP + 0x1c]        ; 00554c37
    MOV byte ptr [EDI],AL               ; 00554c3b
    MOV EAX,dword ptr [EBX + 0x4b3c]    ; 00554c3d
    MOV EDI,dword ptr [EBX + 0x4]       ; 00554c43
    MOV byte ptr [EDI + EAX*0x4 + 0x1],CH ; 00554c46
    MOV EAX,dword ptr [EBX + 0x4b3c]    ; 00554c4a
    MOV EDI,dword ptr [EBX + 0x4]       ; 00554c50
    MOV byte ptr [EDI + EAX*0x4 + 0x2],CL ; 00554c53
    MOV EAX,dword ptr [EBX + 0x4b3c]    ; 00554c57
    MOV EDI,dword ptr [EBX + 0x4]       ; 00554c5d
    MOV CL,byte ptr [ESP + 0x18]        ; 00554c60
    MOV byte ptr [EDI + EAX*0x4 + 0x3],CL ; 00554c64
    MOV EDI,dword ptr [EBX + 0x4b3c]    ; 00554c68
    ADD EDX,0x3                         ; 00554c6e
    INC EDI                             ; 00554c71
    INC ESI                             ; 00554c72
    MOV dword ptr [EBX + 0x4b3c],EDI    ; 00554c73
    JMP 0x00554bca                      ; 00554c79
        ;   XREF to: 00554bca (UNCONDITIONAL_JUMP)  ; LAB_00554bca
    CMP dword ptr [EBX],0x0             ; 00554c7e
        ;   Label: LAB_00554c7e
    JZ 0x00554b8a                       ; 00554c81
        ;   XREF to: 00554b8a (CONDITIONAL_JUMP)  ; LAB_00554b8a
    MOV EDX,dword ptr [ESP]             ; 00554c87
    XOR EAX,EAX                         ; 00554c8a
    PUSH EDX                            ; 00554c8c
    MOV AX,word ptr [ESP + 0x10]        ; 00554c8d
    PUSH EAX                            ; 00554c92
    PUSH 0x640b90                       ; 00554c93 | = "Phase 1"
    CALL dword ptr [EBX]                ; 00554c98
    ADD ESP,0xc                         ; 00554c9a
    TEST EAX,EAX                        ; 00554c9d
    JZ 0x00554b8a                       ; 00554c9f
        ;   XREF to: 00554b8a (CONDITIONAL_JUMP)  ; LAB_00554b8a
    XOR EDI,EDI                         ; 00554ca5
    MOV EAX,EDI                         ; 00554ca7
    ADD ESP,0x20                        ; 00554ca9
    POP EBP                             ; 00554cac
    POP EDI                             ; 00554cad
    POP ESI                             ; 00554cae
    POP EBX                             ; 00554caf
    RET                                 ; 00554cb0

