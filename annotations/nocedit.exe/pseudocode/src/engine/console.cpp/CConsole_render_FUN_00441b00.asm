; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_console.cpp_CConsole_render_FUN_00441b00(CConsole * this_ptr)
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
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004daad0
;
; Referenced Globals:
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawString_FUN_00402080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441b00
        ;   Label: engine_console.cpp_CConsole_render_FUN_00441b00
    PUSH ESI                            ; 00441b01
    PUSH EDI                            ; 00441b02
    PUSH EBP                            ; 00441b03
    SUB ESP,0x14                        ; 00441b04
    MOV EBX,dword ptr [ESP + 0x28]      ; 00441b07
    XOR AH,AH                           ; 00441b0b
    MOV byte ptr [ESP + 0x11],AH        ; 00441b0d
    XOR EDX,EDX                         ; 00441b11
    MOV ECX,dword ptr [EBX + 0xfb0]     ; 00441b13
    MOV dword ptr [ESP + 0x4],EDX       ; 00441b19
    TEST ECX,ECX                        ; 00441b1d
    JLE 0x00441bb4                      ; 00441b1f
        ;   XREF to: 00441bb4 (CONDITIONAL_JUMP)  ; LAB_00441bb4
    XOR ECX,ECX                         ; 00441b25
    MOV dword ptr [ESP],EBX             ; 00441b27
    MOV dword ptr [ESP + 0xc],ECX       ; 00441b2a
    MOV ESI,dword ptr [EBX + 0xfac]     ; 00441b2e
        ;   Label: LAB_00441b2e
    XOR EBP,EBP                         ; 00441b34
    TEST ESI,ESI                        ; 00441b36
    JLE 0x00441b89                      ; 00441b38
        ;   XREF to: 00441b89 (CONDITIONAL_JUMP)  ; LAB_00441b89
    MOV EAX,dword ptr [ESP + 0xc]       ; 00441b3a
    MOV ESI,dword ptr [ESP]             ; 00441b3e
    XOR EDI,EDI                         ; 00441b41
    MOV dword ptr [ESP + 0x8],EAX       ; 00441b43
    MOV AL,byte ptr [ESI + 0x4]         ; 00441b47
        ;   Label: LAB_00441b47
    MOV byte ptr [ESP + 0x10],AL        ; 00441b4a
    TEST AL,AL                          ; 00441b4e
    JZ 0x00441b7a                       ; 00441b50
        ;   XREF to: 00441b7a (CONDITIONAL_JUMP)  ; LAB_00441b7a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00441b52
    MOV EDX,dword ptr [EBX + 0xfb8]     ; 00441b56
    PUSH 0xf8                           ; 00441b5c
    ADD EAX,EDX                         ; 00441b61
    PUSH EAX                            ; 00441b63
    MOV EAX,dword ptr [EBX + 0xfb4]     ; 00441b64
    ADD EAX,EDI                         ; 00441b6a
    PUSH EAX                            ; 00441b6c
    LEA EAX,[ESP + 0x1c]                ; 00441b6d
    PUSH EAX                            ; 00441b71
    CALL engine_2d.c_drawString_FUN_00402080 ; 00441b72
        ;   XREF to: 00402080 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawString_FUN_00402080(char * text, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 00441b77
    INC ESI                             ; 00441b7a
        ;   Label: LAB_00441b7a
    INC EBP                             ; 00441b7b
    MOV EAX,dword ptr [EBX + 0xfac]     ; 00441b7c
    ADD EDI,0x7                         ; 00441b82
    CMP EBP,EAX                         ; 00441b85
    JL 0x00441b47                       ; 00441b87
        ;   XREF to: 00441b47 (CONDITIONAL_JUMP)  ; LAB_00441b47
    MOV ESI,dword ptr [ESP]             ; 00441b89
        ;   Label: LAB_00441b89
    MOV EDI,dword ptr [ESP + 0xc]       ; 00441b8c
    MOV EBP,dword ptr [ESP + 0x4]       ; 00441b90
    MOV EDX,dword ptr [EBX + 0xfb0]     ; 00441b94
    ADD ESI,0x50                        ; 00441b9a
    ADD EDI,0xb                         ; 00441b9d
    INC EBP                             ; 00441ba0
    MOV dword ptr [ESP],ESI             ; 00441ba1
    MOV dword ptr [ESP + 0xc],EDI       ; 00441ba4
    MOV dword ptr [ESP + 0x4],EBP       ; 00441ba8
    CMP EBP,EDX                         ; 00441bac
    JL 0x00441b2e                       ; 00441bae
        ;   XREF to: 00441b2e (CONDITIONAL_JUMP)  ; LAB_00441b2e
    MOV EBP,dword ptr [EBX + 0xfac]     ; 00441bb4
        ;   Label: LAB_00441bb4
    MOV ESI,dword ptr [EBX + 0xfb4]     ; 00441bba
    LEA EAX,[EBP*0x8 + 0x0]             ; 00441bc0
    MOV EDI,dword ptr [EBX + 0xfb8]     ; 00441bc7
    SUB EAX,EBP                         ; 00441bcd
    MOV EBX,dword ptr [EBX + 0xfb0]     ; 00441bcf
    LEA EBP,[ESI + EAX*0x1]             ; 00441bd5
    LEA EAX,[EBX*0x4 + 0x0]             ; 00441bd8
    SUB EAX,EBX                         ; 00441bdf
    SHL EAX,0x2                         ; 00441be1
    SUB EAX,EBX                         ; 00441be4
    LEA EBX,[EDI + EAX*0x1]             ; 00441be6
    DEC EDI                             ; 00441be9
    PUSH EDI                            ; 00441bea
    PUSH EBP                            ; 00441beb
    PUSH EDI                            ; 00441bec
    MOV ECX,0xf8                        ; 00441bed
    PUSH ESI                            ; 00441bf2
    MOV dword ptr [0x02d02570],ECX      ; 00441bf3 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00441bf9
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00441bfe
    INC EBX                             ; 00441c01
    PUSH EBX                            ; 00441c02
    PUSH EBP                            ; 00441c03
    PUSH EBX                            ; 00441c04
    PUSH ESI                            ; 00441c05
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00441c06
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00441c0b
    PUSH EBX                            ; 00441c0e
    DEC ESI                             ; 00441c0f
    PUSH ESI                            ; 00441c10
    PUSH EDI                            ; 00441c11
    PUSH ESI                            ; 00441c12
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00441c13
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00441c18
    PUSH EBX                            ; 00441c1b
    INC EBP                             ; 00441c1c
    PUSH EBP                            ; 00441c1d
    PUSH EDI                            ; 00441c1e
    PUSH EBP                            ; 00441c1f
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00441c20
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00441c25
    ADD ESP,0x14                        ; 00441c28
    POP EBP                             ; 00441c2b
    POP EDI                             ; 00441c2c
    POP ESI                             ; 00441c2d
    POP EBX                             ; 00441c2e
    RET                                 ; 00441c2f

