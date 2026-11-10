; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_render_FUN_00436970(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x13]:1  local_13
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5c05
;
; Referenced Globals:
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_drawString_FUN_00402090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436970
        ;   Label: engine_console.cpp_CConsole_render_FUN_00436970
    PUSH ESI                            ; 00436971
    PUSH EDI                            ; 00436972
    PUSH EBP                            ; 00436973
    SUB ESP,0x14                        ; 00436974
    MOV EBX,dword ptr [ESP + 0x28]      ; 00436977
    XOR AH,AH                           ; 0043697b
    MOV byte ptr [ESP + 0x11],AH        ; 0043697d
    XOR EDX,EDX                         ; 00436981
    MOV ECX,dword ptr [EBX + 0xfb4]     ; 00436983
    MOV dword ptr [ESP + 0x4],EDX       ; 00436989
    TEST ECX,ECX                        ; 0043698d
    JLE 0x00436a24                      ; 0043698f
        ;   XREF to: 00436a24 (CONDITIONAL_JUMP)  ; LAB_00436a24
    XOR ECX,ECX                         ; 00436995
    MOV dword ptr [ESP],EBX             ; 00436997
    MOV dword ptr [ESP + 0xc],ECX       ; 0043699a
    MOV ESI,dword ptr [EBX + 0xfb0]     ; 0043699e
        ;   Label: LAB_0043699e
    XOR EBP,EBP                         ; 004369a4
    TEST ESI,ESI                        ; 004369a6
    JLE 0x004369f9                      ; 004369a8
        ;   XREF to: 004369f9 (CONDITIONAL_JUMP)  ; LAB_004369f9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004369aa
    MOV ESI,dword ptr [ESP]             ; 004369ae
    XOR EDI,EDI                         ; 004369b1
    MOV dword ptr [ESP + 0x8],EAX       ; 004369b3
    MOV AL,byte ptr [ESI + 0x8]         ; 004369b7
        ;   Label: LAB_004369b7
    MOV byte ptr [ESP + 0x10],AL        ; 004369ba
    TEST AL,AL                          ; 004369be
    JZ 0x004369ea                       ; 004369c0
        ;   XREF to: 004369ea (CONDITIONAL_JUMP)  ; LAB_004369ea
    MOV EAX,dword ptr [ESP + 0x8]       ; 004369c2
    MOV EDX,dword ptr [EBX + 0xfbc]     ; 004369c6
    PUSH 0xf8                           ; 004369cc
    ADD EAX,EDX                         ; 004369d1
    PUSH EAX                            ; 004369d3
    MOV EAX,dword ptr [EBX + 0xfb8]     ; 004369d4
    ADD EAX,EDI                         ; 004369da
    PUSH EAX                            ; 004369dc
    LEA EAX,[ESP + 0x1c]                ; 004369dd
    PUSH EAX                            ; 004369e1
    CALL engine_2d.c_drawString_FUN_00402090 ; 004369e2
        ;   XREF to: 00402090 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawString_FUN_00402090(char * text, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 004369e7
    INC ESI                             ; 004369ea
        ;   Label: LAB_004369ea
    INC EBP                             ; 004369eb
    MOV EAX,dword ptr [EBX + 0xfb0]     ; 004369ec
    ADD EDI,0x7                         ; 004369f2
    CMP EBP,EAX                         ; 004369f5
    JL 0x004369b7                       ; 004369f7
        ;   XREF to: 004369b7 (CONDITIONAL_JUMP)  ; LAB_004369b7
    MOV ESI,dword ptr [ESP]             ; 004369f9
        ;   Label: LAB_004369f9
    MOV EDI,dword ptr [ESP + 0xc]       ; 004369fc
    MOV EBP,dword ptr [ESP + 0x4]       ; 00436a00
    MOV EDX,dword ptr [EBX + 0xfb4]     ; 00436a04
    ADD ESI,0x50                        ; 00436a0a
    ADD EDI,0xb                         ; 00436a0d
    INC EBP                             ; 00436a10
    MOV dword ptr [ESP],ESI             ; 00436a11
    MOV dword ptr [ESP + 0xc],EDI       ; 00436a14
    MOV dword ptr [ESP + 0x4],EBP       ; 00436a18
    CMP EBP,EDX                         ; 00436a1c
    JL 0x0043699e                       ; 00436a1e
        ;   XREF to: 0043699e (CONDITIONAL_JUMP)  ; LAB_0043699e
    MOV EBP,dword ptr [EBX + 0xfb0]     ; 00436a24
        ;   Label: LAB_00436a24
    MOV ESI,dword ptr [EBX + 0xfb8]     ; 00436a2a
    LEA EAX,[EBP*0x8 + 0x0]             ; 00436a30
    MOV EDI,dword ptr [EBX + 0xfbc]     ; 00436a37
    SUB EAX,EBP                         ; 00436a3d
    MOV EBX,dword ptr [EBX + 0xfb4]     ; 00436a3f
    LEA EBP,[ESI + EAX*0x1]             ; 00436a45
    LEA EAX,[EBX*0x4 + 0x0]             ; 00436a48
    SUB EAX,EBX                         ; 00436a4f
    SHL EAX,0x2                         ; 00436a51
    SUB EAX,EBX                         ; 00436a54
    LEA EBX,[EDI + EAX*0x1]             ; 00436a56
    DEC EDI                             ; 00436a59
    PUSH EDI                            ; 00436a5a
    PUSH EBP                            ; 00436a5b
    PUSH EDI                            ; 00436a5c
    MOV ECX,0xf8                        ; 00436a5d
    PUSH ESI                            ; 00436a62
    MOV dword ptr [0x01c35e60],ECX      ; 00436a63 | DAT_01c35e60
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00436a69
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00436a6e
    INC EBX                             ; 00436a71
    PUSH EBX                            ; 00436a72
    PUSH EBP                            ; 00436a73
    PUSH EBX                            ; 00436a74
    PUSH ESI                            ; 00436a75
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00436a76
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00436a7b
    PUSH EBX                            ; 00436a7e
    DEC ESI                             ; 00436a7f
    PUSH ESI                            ; 00436a80
    PUSH EDI                            ; 00436a81
    PUSH ESI                            ; 00436a82
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00436a83
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00436a88
    PUSH EBX                            ; 00436a8b
    INC EBP                             ; 00436a8c
    PUSH EBP                            ; 00436a8d
    PUSH EDI                            ; 00436a8e
    PUSH EBP                            ; 00436a8f
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00436a90
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00436a95
    ADD ESP,0x14                        ; 00436a98
    POP EBP                             ; 00436a9b
    POP EDI                             ; 00436a9c
    POP ESI                             ; 00436a9d
    POP EBX                             ; 00436a9e
    RET                                 ; 00436a9f

