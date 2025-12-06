; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_sizeForStadium_FUN_00469c70(void)
;
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined1       Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f768
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_X_point_0061d0ad
;   TerminatedCString s_Enter_in_Z_point_0061d0c1
;   TerminatedCString s_Enter_in_X_size_0061d0d5
;   TerminatedCString s_Enter_in_Z_size_0061d0e8
;   double g_YAxisScaleModifier = 0.5
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c_strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469c70
        ;   Label: shape_design.c_sizeForStadium_FUN_00469c70
    PUSH ESI                            ; 00469c71
    PUSH EDI                            ; 00469c72
    PUSH EBP                            ; 00469c73
    MOV EBP,ESP                         ; 00469c74
    SUB ESP,0xe0                        ; 00469c76
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00469c7c | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ECX,0x61d0ad                    ; 00469c81 | = "Enter in X point : " | s_Enter_in_X_point_0061d0ad = Enter in X point :
    PUSH ECX                            ; 00469c86 | = "Enter in X point : " | s_Enter_in_X_point_0061d0ad = Enter in X point :
    PUSH 0x0                            ; 00469c87
    PUSH 0x0                            ; 00469c89
    PUSH 0x14                           ; 00469c8b
    LEA ECX,[EBP + 0xffffff28]          ; 00469c8d
    PUSH ECX                            ; 00469c93
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469c94 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00469c99
    LEA EDI,[EBP + 0xffffff28]          ; 00469c9c
    SUB ECX,ECX                         ; 00469ca2
    DEC ECX                             ; 00469ca4
    XOR EAX,EAX                         ; 00469ca5
    SCASB.REPNE ES:EDI                  ; 00469ca7
    NOT ECX                             ; 00469ca9
    DEC ECX                             ; 00469cab
    TEST ECX,ECX                        ; 00469cac
    JNZ 0x00469cb5                      ; 00469cae | LAB_00469cb5
        ;   XREF to: 00469cb5 (CONDITIONAL_JUMP)
    JMP 0x00469ed7                      ; 00469cb0 | LAB_00469ed7
        ;   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff28]          ; 00469cb5
        ;   Label: LAB_00469cb5
    PUSH EAX                            ; 00469cbb
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00469cbc | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00469cc1
    MOV dword ptr [EBP + -0x10],EAX     ; 00469cc4
    MOV EAX,0x61d0c1                    ; 00469cc7 | = "Enter in Z point : " | s_Enter_in_Z_point_0061d0c1 = Enter in Z point :
    PUSH EAX                            ; 00469ccc | = "Enter in Z point : " | s_Enter_in_Z_point_0061d0c1 = Enter in Z point :
    PUSH 0xb                            ; 00469ccd
    PUSH 0x0                            ; 00469ccf
    PUSH 0x14                           ; 00469cd1
    LEA EAX,[EBP + 0xffffff28]          ; 00469cd3
    PUSH EAX                            ; 00469cd9
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469cda | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00469cdf
    LEA EDI,[EBP + 0xffffff28]          ; 00469ce2
    SUB ECX,ECX                         ; 00469ce8
    DEC ECX                             ; 00469cea
    XOR EAX,EAX                         ; 00469ceb
    SCASB.REPNE ES:EDI                  ; 00469ced
    NOT ECX                             ; 00469cef
    DEC ECX                             ; 00469cf1
    TEST ECX,ECX                        ; 00469cf2
    JNZ 0x00469cfb                      ; 00469cf4 | LAB_00469cfb
        ;   XREF to: 00469cfb (CONDITIONAL_JUMP)
    JMP 0x00469ed7                      ; 00469cf6 | LAB_00469ed7
        ;   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff28]          ; 00469cfb
        ;   Label: LAB_00469cfb
    PUSH EAX                            ; 00469d01
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00469d02 | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00469d07
    MOV dword ptr [EBP + -0xc],EAX      ; 00469d0a
    MOV EAX,0x61d0d5                    ; 00469d0d | = "Enter in X size : " | s_Enter_in_X_size_0061d0d5 = Enter in X size :
    PUSH EAX                            ; 00469d12 | = "Enter in X size : " | s_Enter_in_X_size_0061d0d5 = Enter in X size :
    PUSH 0x16                           ; 00469d13
    PUSH 0x0                            ; 00469d15
    PUSH 0x14                           ; 00469d17
    LEA EAX,[EBP + 0xffffff28]          ; 00469d19
    PUSH EAX                            ; 00469d1f
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469d20 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00469d25
    LEA EDI,[EBP + 0xffffff28]          ; 00469d28
    SUB ECX,ECX                         ; 00469d2e
    DEC ECX                             ; 00469d30
    XOR EAX,EAX                         ; 00469d31
    SCASB.REPNE ES:EDI                  ; 00469d33
    NOT ECX                             ; 00469d35
    DEC ECX                             ; 00469d37
    TEST ECX,ECX                        ; 00469d38
    JNZ 0x00469d41                      ; 00469d3a | LAB_00469d41
        ;   XREF to: 00469d41 (CONDITIONAL_JUMP)
    JMP 0x00469ed7                      ; 00469d3c | LAB_00469ed7
        ;   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
    LEA ECX,[EBP + 0xffffff28]          ; 00469d41
        ;   Label: LAB_00469d41
    PUSH ECX                            ; 00469d47
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00469d48 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0xffffff20],EAX ; 00469d4d
    MOV dword ptr [EBP + 0xffffff24],EDX ; 00469d53
    FLD double ptr [EBP + 0xffffff20]   ; 00469d59
    ADD ESP,0x4                         ; 00469d5f
    FSTP float ptr [EBP + -0x8]         ; 00469d62
    MOV ECX,0x61d0e8                    ; 00469d65 | = "Enter in Z size : " | s_Enter_in_Z_size_0061d0e8 = Enter in Z size :
    PUSH ECX                            ; 00469d6a | = "Enter in Z size : " | s_Enter_in_Z_size_0061d0e8 = Enter in Z size :
    PUSH 0x21                           ; 00469d6b
    PUSH 0x0                            ; 00469d6d
    PUSH 0x14                           ; 00469d6f
    LEA ECX,[EBP + 0xffffff28]          ; 00469d71
    PUSH ECX                            ; 00469d77
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469d78 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00469d7d
    LEA EDI,[EBP + 0xffffff28]          ; 00469d80
    SUB ECX,ECX                         ; 00469d86
    DEC ECX                             ; 00469d88
    XOR EAX,EAX                         ; 00469d89
    SCASB.REPNE ES:EDI                  ; 00469d8b
    NOT ECX                             ; 00469d8d
    DEC ECX                             ; 00469d8f
    TEST ECX,ECX                        ; 00469d90
    JNZ 0x00469d99                      ; 00469d92 | LAB_00469d99
        ;   XREF to: 00469d99 (CONDITIONAL_JUMP)
    JMP 0x00469ed7                      ; 00469d94 | LAB_00469ed7
        ;   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff28]          ; 00469d99
        ;   Label: LAB_00469d99
    PUSH EAX                            ; 00469d9f
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00469da0 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0xffffff20],EAX ; 00469da5
    MOV dword ptr [EBP + 0xffffff24],EDX ; 00469dab
    FLD double ptr [EBP + 0xffffff20]   ; 00469db1
    ADD ESP,0x4                         ; 00469db7
    FSTP float ptr [EBP + -0x4]         ; 00469dba
    MOV dword ptr [EBP + -0x34],0x497423fe ; 00469dbd
    MOV dword ptr [EBP + -0x30],0xc97423fe ; 00469dc4
    MOV dword ptr [EBP + -0x2c],0x497423fe ; 00469dcb
    MOV dword ptr [EBP + -0x28],0xc97423fe ; 00469dd2
    MOV dword ptr [EBP + -0x38],0x0     ; 00469dd9
    JMP 0x00469de8                      ; 00469de0 | LAB_00469de8
        ;   XREF to: 00469de8 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x38]     ; 00469de2
        ;   Label: LAB_00469de2
    INC dword ptr [EBP + -0x38]         ; 00469de5
    MOV EAX,dword ptr [EBP + -0x38]     ; 00469de8
        ;   Label: LAB_00469de8
    CMP EAX,dword ptr [0x01626408]      ; 00469deb | int g_VertexCount
    JGE 0x00469e53                      ; 00469df1 | LAB_00469e53
        ;   XREF to: 00469e53 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x38],0x14 ; 00469df3
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00469df7 | SVertexData[20000] g_LoadedVertices
    MOV dword ptr [EBP + -0x24],EAX     ; 00469dfd
    FLD float ptr [EBP + -0x24]         ; 00469e00
    FCOMP float ptr [EBP + -0x30]       ; 00469e03
    FNSTSW AX                           ; 00469e06
    SAHF                                ; 00469e08
    JBE 0x00469e11                      ; 00469e09 | LAB_00469e11
        ;   XREF to: 00469e11 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x24]     ; 00469e0b
    MOV dword ptr [EBP + -0x30],EAX     ; 00469e0e
    FLD float ptr [EBP + -0x24]         ; 00469e11
        ;   Label: LAB_00469e11
    FCOMP float ptr [EBP + -0x34]       ; 00469e14
    FNSTSW AX                           ; 00469e17
    SAHF                                ; 00469e19
    JNC 0x00469e22                      ; 00469e1a | LAB_00469e22
        ;   XREF to: 00469e22 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x24]     ; 00469e1c
    MOV dword ptr [EBP + -0x34],EAX     ; 00469e1f
    IMUL EAX,dword ptr [EBP + -0x38],0x14 ; 00469e22
        ;   Label: LAB_00469e22
    MOV EAX,dword ptr [EAX + 0x1626414] ; 00469e26 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x20],EAX     ; 00469e2c
    FLD float ptr [EBP + -0x20]         ; 00469e2f
    FCOMP float ptr [EBP + -0x28]       ; 00469e32
    FNSTSW AX                           ; 00469e35
    SAHF                                ; 00469e37
    JBE 0x00469e40                      ; 00469e38 | LAB_00469e40
        ;   XREF to: 00469e40 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x20]     ; 00469e3a
    MOV dword ptr [EBP + -0x28],EAX     ; 00469e3d
    FLD float ptr [EBP + -0x20]         ; 00469e40
        ;   Label: LAB_00469e40
    FCOMP float ptr [EBP + -0x2c]       ; 00469e43
    FNSTSW AX                           ; 00469e46
    SAHF                                ; 00469e48
    JNC 0x00469e51                      ; 00469e49 | LAB_00469e51
        ;   XREF to: 00469e51 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x20]     ; 00469e4b
    MOV dword ptr [EBP + -0x2c],EAX     ; 00469e4e
    JMP 0x00469de2                      ; 00469e51 | LAB_00469de2
        ;   Label: LAB_00469e51
        ;   XREF to: 00469de2 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00469e53
        ;   Label: LAB_00469e53
    FLD float ptr [EBP + -0x8]          ; 00469e57
    FDIV float ptr [EAX + 0x162640c]    ; 00469e5a | SVertexData[20000] g_LoadedVertices
    FSTP float ptr [EBP + -0x1c]        ; 00469e60
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00469e63
    FLD float ptr [EBP + -0x4]          ; 00469e67
    FDIV float ptr [EAX + 0x1626414]    ; 00469e6a | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0x18]        ; 00469e70
    FLD float ptr [EBP + -0x1c]         ; 00469e73
    FADD float ptr [EBP + -0x18]        ; 00469e76
    FMUL double ptr [0x0061d0fe]        ; 00469e79 | double g_YAxisScaleModifier
    FSTP float ptr [EBP + -0x14]        ; 00469e7f
    MOV dword ptr [EBP + -0x38],0x0     ; 00469e82
    JMP 0x00469e91                      ; 00469e89 | LAB_00469e91
        ;   XREF to: 00469e91 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x38]     ; 00469e8b
        ;   Label: LAB_00469e8b
    INC dword ptr [EBP + -0x38]         ; 00469e8e
    MOV EAX,dword ptr [EBP + -0x38]     ; 00469e91
        ;   Label: LAB_00469e91
    CMP EAX,dword ptr [0x01626408]      ; 00469e94 | int g_VertexCount
    JGE 0x00469ed7                      ; 00469e9a | LAB_00469ed7
        ;   XREF to: 00469ed7 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x38],0x14 ; 00469e9c
    FLD float ptr [EAX + 0x162640c]     ; 00469ea0 | SVertexData[20000] g_LoadedVertices
    FMUL float ptr [EBP + -0x1c]        ; 00469ea6
    FSTP float ptr [EAX + 0x162640c]    ; 00469ea9 | SVertexData[20000] g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0x38],0x14 ; 00469eaf
    FLD float ptr [EAX + 0x1626410]     ; 00469eb3 | DAT_01626410
    FMUL float ptr [EBP + -0x14]        ; 00469eb9
    FSTP float ptr [EAX + 0x1626410]    ; 00469ebc | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x38],0x14 ; 00469ec2
    FLD float ptr [EAX + 0x1626414]     ; 00469ec6 | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x18]        ; 00469ecc
    FSTP float ptr [EAX + 0x1626414]    ; 00469ecf | g_LoadedVertices[0].vertex.z
    JMP 0x00469e8b                      ; 00469ed5 | LAB_00469e8b
        ;   XREF to: 00469e8b (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00469ed7
        ;   Label: LAB_00469ed7
    POP EBP                             ; 00469ed9
    POP EDI                             ; 00469eda
    POP ESI                             ; 00469edb
    POP EBX                             ; 00469edc
    RET                                 ; 00469edd

