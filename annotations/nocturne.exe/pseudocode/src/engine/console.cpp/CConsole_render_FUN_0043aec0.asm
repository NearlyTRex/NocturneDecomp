; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_render_FUN_0043aec0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x13]:1  local_13
;
; XREF[1]:
;   FUN_0049cc10 at 0049d56d
;
; Referenced Globals:
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004015a0
;   engine_2d.c_drawString_FUN_004026b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043aec0
        ;   Label: engine_console.cpp_CConsole_render_FUN_0043aec0
    PUSH ESI                            ; 0043aec1
    PUSH EDI                            ; 0043aec2
    PUSH EBP                            ; 0043aec3
    SUB ESP,0x14                        ; 0043aec4
    MOV EBX,dword ptr [ESP + 0x28]      ; 0043aec7
    XOR AH,AH                           ; 0043aecb
    MOV byte ptr [ESP + 0x11],AH        ; 0043aecd
    XOR EDX,EDX                         ; 0043aed1
    MOV ECX,dword ptr [EBX + 0xfb0]     ; 0043aed3
    MOV dword ptr [ESP + 0x4],EDX       ; 0043aed9
    TEST ECX,ECX                        ; 0043aedd
    JLE 0x0043af74                      ; 0043aedf
        ;   XREF to: 0043af74 (CONDITIONAL_JUMP)  ; LAB_0043af74
    XOR ECX,ECX                         ; 0043aee5
    MOV dword ptr [ESP],EBX             ; 0043aee7
    MOV dword ptr [ESP + 0xc],ECX       ; 0043aeea
    MOV ESI,dword ptr [EBX + 0xfac]     ; 0043aeee
        ;   Label: LAB_0043aeee
    XOR EBP,EBP                         ; 0043aef4
    TEST ESI,ESI                        ; 0043aef6
    JLE 0x0043af49                      ; 0043aef8
        ;   XREF to: 0043af49 (CONDITIONAL_JUMP)  ; LAB_0043af49
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043aefa
    MOV ESI,dword ptr [ESP]             ; 0043aefe
    XOR EDI,EDI                         ; 0043af01
    MOV dword ptr [ESP + 0x8],EAX       ; 0043af03
    MOV AL,byte ptr [ESI + 0x4]         ; 0043af07
        ;   Label: LAB_0043af07
    MOV byte ptr [ESP + 0x10],AL        ; 0043af0a
    TEST AL,AL                          ; 0043af0e
    JZ 0x0043af3a                       ; 0043af10
        ;   XREF to: 0043af3a (CONDITIONAL_JUMP)  ; LAB_0043af3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043af12
    MOV EDX,dword ptr [EBX + 0xfb8]     ; 0043af16
    PUSH 0xf8                           ; 0043af1c
    ADD EAX,EDX                         ; 0043af21
    PUSH EAX                            ; 0043af23
    MOV EAX,dword ptr [EBX + 0xfb4]     ; 0043af24
    ADD EAX,EDI                         ; 0043af2a
    PUSH EAX                            ; 0043af2c
    LEA EAX,[ESP + 0x1c]                ; 0043af2d
    PUSH EAX                            ; 0043af31
    CALL engine_2d.c_drawString_FUN_004026b0 ; 0043af32
        ;   XREF to: 004026b0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawString_FUN_004026b0()
    ADD ESP,0x10                        ; 0043af37
    INC ESI                             ; 0043af3a
        ;   Label: LAB_0043af3a
    INC EBP                             ; 0043af3b
    MOV EAX,dword ptr [EBX + 0xfac]     ; 0043af3c
    ADD EDI,0x7                         ; 0043af42
    CMP EBP,EAX                         ; 0043af45
    JL 0x0043af07                       ; 0043af47
        ;   XREF to: 0043af07 (CONDITIONAL_JUMP)  ; LAB_0043af07
    MOV ESI,dword ptr [ESP]             ; 0043af49
        ;   Label: LAB_0043af49
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043af4c
    MOV EBP,dword ptr [ESP + 0x4]       ; 0043af50
    MOV EDX,dword ptr [EBX + 0xfb0]     ; 0043af54
    ADD ESI,0x50                        ; 0043af5a
    ADD EDI,0xb                         ; 0043af5d
    INC EBP                             ; 0043af60
    MOV dword ptr [ESP],ESI             ; 0043af61
    MOV dword ptr [ESP + 0xc],EDI       ; 0043af64
    MOV dword ptr [ESP + 0x4],EBP       ; 0043af68
    CMP EBP,EDX                         ; 0043af6c
    JL 0x0043aeee                       ; 0043af6e
        ;   XREF to: 0043aeee (CONDITIONAL_JUMP)  ; LAB_0043aeee
    MOV EBP,dword ptr [EBX + 0xfac]     ; 0043af74
        ;   Label: LAB_0043af74
    MOV ESI,dword ptr [EBX + 0xfb4]     ; 0043af7a
    LEA EAX,[EBP*0x8 + 0x0]             ; 0043af80
    MOV EDI,dword ptr [EBX + 0xfb8]     ; 0043af87
    SUB EAX,EBP                         ; 0043af8d
    MOV EBX,dword ptr [EBX + 0xfb0]     ; 0043af8f
    LEA EBP,[ESI + EAX*0x1]             ; 0043af95
    LEA EAX,[EBX*0x4 + 0x0]             ; 0043af98
    SUB EAX,EBX                         ; 0043af9f
    SHL EAX,0x2                         ; 0043afa1
    SUB EAX,EBX                         ; 0043afa4
    LEA EBX,[EDI + EAX*0x1]             ; 0043afa6
    DEC EDI                             ; 0043afa9
    PUSH EDI                            ; 0043afaa
    PUSH EBP                            ; 0043afab
    PUSH EDI                            ; 0043afac
    MOV ECX,0xf8                        ; 0043afad
    PUSH ESI                            ; 0043afb2
    MOV dword ptr [0x01c00c70],ECX      ; 0043afb3 | DAT_01c00c70
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0043afb9
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0043afbe
    INC EBX                             ; 0043afc1
    PUSH EBX                            ; 0043afc2
    PUSH EBP                            ; 0043afc3
    PUSH EBX                            ; 0043afc4
    PUSH ESI                            ; 0043afc5
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0043afc6
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0043afcb
    PUSH EBX                            ; 0043afce
    DEC ESI                             ; 0043afcf
    PUSH ESI                            ; 0043afd0
    PUSH EDI                            ; 0043afd1
    PUSH ESI                            ; 0043afd2
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0043afd3
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0043afd8
    PUSH EBX                            ; 0043afdb
    INC EBP                             ; 0043afdc
    PUSH EBP                            ; 0043afdd
    PUSH EDI                            ; 0043afde
    PUSH EBP                            ; 0043afdf
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0043afe0
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0043afe5
    ADD ESP,0x14                        ; 0043afe8
    POP EBP                             ; 0043afeb
    POP EDI                             ; 0043afec
    POP ESI                             ; 0043afed
    POP EBX                             ; 0043afee
    RET                                 ; 0043afef

