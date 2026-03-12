; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)
;
; Local Variables:
; char[40]         Stack[-0x54]:40  local_54
; int              Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Bias_around_what_point_o_0061b5be
;   TerminatedCString s_Invalid_point_0061b5f2
;   TerminatedCString s_Enter_point_0061b601
;   TerminatedCString s_Which_axis_to_use_X_Y_or_0061b610
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ea90
        ;   Label: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
    PUSH ESI                            ; 0045ea91
    PUSH EDI                            ; 0045ea92
    PUSH EBP                            ; 0045ea93
    MOV EBP,ESP                         ; 0045ea94
    SUB ESP,0x50                        ; 0045ea96
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045ea9c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61b5be                    ; 0045eaa1 | = "Bias around what point? (or -1 for us..."
    PUSH ECX                            ; 0045eaa6 | = "Bias around what point? (or -1 for us..."
    PUSH 0x0                            ; 0045eaa7
    PUSH 0x0                            ; 0045eaa9
    PUSH 0xa                            ; 0045eaab
    LEA ECX,[EBP + -0x44]               ; 0045eaad
    PUSH ECX                            ; 0045eab0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045eab1
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045eab6
    LEA EDI,[EBP + -0x44]               ; 0045eab9
    SUB ECX,ECX                         ; 0045eabc
    DEC ECX                             ; 0045eabe
    XOR EAX,EAX                         ; 0045eabf
    SCASB.REPNE ES:EDI                  ; 0045eac1
    NOT ECX                             ; 0045eac3
    DEC ECX                             ; 0045eac5
    TEST ECX,ECX                        ; 0045eac6
    JNZ 0x0045eacf                      ; 0045eac8
        ;   XREF to: 0045eacf (CONDITIONAL_JUMP)  ; LAB_0045eacf
    JMP 0x0045ec87                      ; 0045eaca
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
    LEA EAX,[EBP + -0x44]               ; 0045eacf
        ;   Label: LAB_0045eacf
    PUSH EAX                            ; 0045ead2
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045ead3
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0045ead8
    MOV dword ptr [EBP + -0x1c],EAX     ; 0045eadb
    CMP dword ptr [EBP + -0x1c],-0x1    ; 0045eade
    JL 0x0045eaef                       ; 0045eae2
        ;   XREF to: 0045eaef (CONDITIONAL_JUMP)  ; LAB_0045eaef
    MOV EAX,[0x01626408]                ; 0045eae4 | g_VertexCount
    DEC EAX                             ; 0045eae9
    CMP EAX,dword ptr [EBP + -0x1c]     ; 0045eaea
    JGE 0x0045eb10                      ; 0045eaed
        ;   XREF to: 0045eb10 (CONDITIONAL_JUMP)  ; LAB_0045eb10
    PUSH 0x16                           ; 0045eaef
        ;   Label: LAB_0045eaef
    PUSH 0x0                            ; 0045eaf1
    MOV EAX,0x61b5f2                    ; 0045eaf3 | = "Invalid point."
    PUSH EAX                            ; 0045eaf8 | = "Invalid point."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045eaf9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045eafe
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045eb01
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045eb06
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0045ec87                      ; 0045eb0b
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
    CMP dword ptr [EBP + -0x1c],-0x1    ; 0045eb10
        ;   Label: LAB_0045eb10
    JNZ 0x0045eb70                      ; 0045eb14
        ;   XREF to: 0045eb70 (CONDITIONAL_JUMP)  ; LAB_0045eb70
    MOV ECX,0x61b601                    ; 0045eb16 | = "Enter point : "
    PUSH ECX                            ; 0045eb1b | = "Enter point : "
    PUSH 0xb                            ; 0045eb1c
    PUSH 0x0                            ; 0045eb1e
    PUSH 0x32                           ; 0045eb20
    LEA ECX,[EBP + -0x44]               ; 0045eb22
    PUSH ECX                            ; 0045eb25
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045eb26
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045eb2b
    LEA EDI,[EBP + -0x44]               ; 0045eb2e
    SUB ECX,ECX                         ; 0045eb31
    DEC ECX                             ; 0045eb33
    XOR EAX,EAX                         ; 0045eb34
    SCASB.REPNE ES:EDI                  ; 0045eb36
    NOT ECX                             ; 0045eb38
    DEC ECX                             ; 0045eb3a
    TEST ECX,ECX                        ; 0045eb3b
    JNZ 0x0045eb44                      ; 0045eb3d
        ;   XREF to: 0045eb44 (CONDITIONAL_JUMP)  ; LAB_0045eb44
    JMP 0x0045ec87                      ; 0045eb3f
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
    LEA EAX,[EBP + -0x44]               ; 0045eb44
        ;   Label: LAB_0045eb44
    PUSH EAX                            ; 0045eb47
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 0045eb48
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + -0x4c],EAX     ; 0045eb4d
    MOV dword ptr [EBP + -0x48],EDX     ; 0045eb50
    FLD double ptr [EBP + -0x4c]        ; 0045eb53
    ADD ESP,0x4                         ; 0045eb56
    FSTP float ptr [EBP + -0xc]         ; 0045eb59
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045eb5c
    MOV dword ptr [EBP + -0x18],EAX     ; 0045eb5f
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045eb62
    MOV dword ptr [EBP + -0x14],EAX     ; 0045eb65
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045eb68
    MOV dword ptr [EBP + -0x10],EAX     ; 0045eb6b
    JMP 0x0045eb97                      ; 0045eb6e
        ;   XREF to: 0045eb97 (UNCONDITIONAL_JUMP)  ; LAB_0045eb97
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0045eb70
        ;   Label: LAB_0045eb70
    MOV EAX,dword ptr [EAX + 0x162640c] ; 0045eb74 | g_LoadedVertices
    MOV dword ptr [EBP + -0x18],EAX     ; 0045eb7a
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0045eb7d
    MOV EAX,dword ptr [EAX + 0x1626410] ; 0045eb81 | DAT_01626410
    MOV dword ptr [EBP + -0x14],EAX     ; 0045eb87
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 0045eb8a
    MOV EAX,dword ptr [EAX + 0x1626414] ; 0045eb8e | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x10],EAX     ; 0045eb94
    PUSH 0x16                           ; 0045eb97
        ;   Label: LAB_0045eb97
    PUSH 0x0                            ; 0045eb99
    MOV EAX,0x61b610                    ; 0045eb9b | = "Which axis to use - X, Y, or Z? : "
    PUSH EAX                            ; 0045eba0 | = "Which axis to use - X, Y, or Z? : "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045eba1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045eba6
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045eba9
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045ebae
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0045ebb3
    PUSH EAX                            ; 0045ebb8
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0045ebb9
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0045ebbe
    MOV dword ptr [EBP + -0x8],EAX      ; 0045ebc1
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045ebc4
    MOV dword ptr [EBP + -0x50],EAX     ; 0045ebc7
    JMP 0x0045ec67                      ; 0045ebca
        ;   XREF to: 0045ec67 (UNCONDITIONAL_JUMP)  ; LAB_0045ec67
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ebcf
        ;   Label: LAB_0045ebcf
    JMP 0x0045ebde                      ; 0045ebd6
        ;   XREF to: 0045ebde (UNCONDITIONAL_JUMP)  ; LAB_0045ebde
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ebd8
        ;   Label: LAB_0045ebd8
    INC dword ptr [EBP + -0x4]          ; 0045ebdb
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ebde
        ;   Label: LAB_0045ebde
    CMP EAX,dword ptr [0x01626408]      ; 0045ebe1 | g_VertexCount
    JGE 0x0045ebfe                      ; 0045ebe7
        ;   XREF to: 0045ebfe (CONDITIONAL_JUMP)  ; LAB_0045ebfe
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045ebe9
    FLD float ptr [EAX + 0x162640c]     ; 0045ebed | g_LoadedVertices
    FSUB float ptr [EBP + -0x18]        ; 0045ebf3
    FSTP float ptr [EAX + 0x162640c]    ; 0045ebf6 | g_LoadedVertices
    JMP 0x0045ebd8                      ; 0045ebfc
        ;   XREF to: 0045ebd8 (UNCONDITIONAL_JUMP)  ; LAB_0045ebd8
    JMP 0x0045ec87                      ; 0045ebfe
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
        ;   Label: LAB_0045ebfe
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ec03
        ;   Label: LAB_0045ec03
    JMP 0x0045ec12                      ; 0045ec0a
        ;   XREF to: 0045ec12 (UNCONDITIONAL_JUMP)  ; LAB_0045ec12
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ec0c
        ;   Label: LAB_0045ec0c
    INC dword ptr [EBP + -0x4]          ; 0045ec0f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ec12
        ;   Label: LAB_0045ec12
    CMP EAX,dword ptr [0x01626408]      ; 0045ec15 | g_VertexCount
    JGE 0x0045ec32                      ; 0045ec1b
        ;   XREF to: 0045ec32 (CONDITIONAL_JUMP)  ; LAB_0045ec32
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045ec1d
    FLD float ptr [EAX + 0x1626410]     ; 0045ec21 | DAT_01626410
    FSUB float ptr [EBP + -0x14]        ; 0045ec27
    FSTP float ptr [EAX + 0x1626410]    ; 0045ec2a | DAT_01626410
    JMP 0x0045ec0c                      ; 0045ec30
        ;   XREF to: 0045ec0c (UNCONDITIONAL_JUMP)  ; LAB_0045ec0c
    JMP 0x0045ec87                      ; 0045ec32
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
        ;   Label: LAB_0045ec32
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ec34
        ;   Label: LAB_0045ec34
    JMP 0x0045ec43                      ; 0045ec3b
        ;   XREF to: 0045ec43 (UNCONDITIONAL_JUMP)  ; LAB_0045ec43
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ec3d
        ;   Label: LAB_0045ec3d
    INC dword ptr [EBP + -0x4]          ; 0045ec40
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045ec43
        ;   Label: LAB_0045ec43
    CMP EAX,dword ptr [0x01626408]      ; 0045ec46 | g_VertexCount
    JGE 0x0045ec63                      ; 0045ec4c
        ;   XREF to: 0045ec63 (CONDITIONAL_JUMP)  ; LAB_0045ec63
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045ec4e
    FLD float ptr [EAX + 0x1626414]     ; 0045ec52 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EBP + -0x10]        ; 0045ec58
    FSTP float ptr [EAX + 0x1626414]    ; 0045ec5b | g_LoadedVertices[0].vertex.z
    JMP 0x0045ec3d                      ; 0045ec61
        ;   XREF to: 0045ec3d (UNCONDITIONAL_JUMP)  ; LAB_0045ec3d
    JMP 0x0045ec87                      ; 0045ec63
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
        ;   Label: LAB_0045ec63
    JMP 0x0045ec87                      ; 0045ec65
        ;   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)  ; LAB_0045ec87
        ;   Label: LAB_0045ec65
    CMP dword ptr [EBP + -0x50],0x59    ; 0045ec67
        ;   Label: LAB_0045ec67
    JC 0x0045ec7b                       ; 0045ec6b
        ;   XREF to: 0045ec7b (CONDITIONAL_JUMP)  ; LAB_0045ec7b
    CMP dword ptr [EBP + -0x50],0x59    ; 0045ec6d
    JBE 0x0045ec03                      ; 0045ec71
        ;   XREF to: 0045ec03 (CONDITIONAL_JUMP)  ; LAB_0045ec03
    CMP dword ptr [EBP + -0x50],0x5a    ; 0045ec73
    JZ 0x0045ec34                       ; 0045ec77
        ;   XREF to: 0045ec34 (CONDITIONAL_JUMP)  ; LAB_0045ec34
    JMP 0x0045ec65                      ; 0045ec79
        ;   XREF to: 0045ec65 (UNCONDITIONAL_JUMP)  ; LAB_0045ec65
    CMP dword ptr [EBP + -0x50],0x58    ; 0045ec7b
        ;   Label: LAB_0045ec7b
    JZ 0x0045ebcf                       ; 0045ec7f
        ;   XREF to: 0045ebcf (CONDITIONAL_JUMP)  ; LAB_0045ebcf
    JMP 0x0045ec65                      ; 0045ec85
        ;   XREF to: 0045ec65 (UNCONDITIONAL_JUMP)  ; LAB_0045ec65
    MOV ESP,EBP                         ; 0045ec87
        ;   Label: LAB_0045ec87
    POP EBP                             ; 0045ec89
    POP EDI                             ; 0045ec8a
    POP ESI                             ; 0045ec8b
    POP EBX                             ; 0045ec8c
    RET                                 ; 0045ec8d

