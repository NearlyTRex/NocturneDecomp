; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextWrapped_FUN_00401c70(char *text,int x_start,int y_start,int x_max,int y_max)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   y_start
; int              Stack[0x10]:4   x_max
; int              Stack[0x14]:4   y_max
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_drawText_FUN_00401fe0 at 0040200a
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401c70
        ;   Label: engine_2d.c_drawTextWrapped_FUN_00401c70
    PUSH ESI                            ; 00401c71
    PUSH EDI                            ; 00401c72
    PUSH EBP                            ; 00401c73
    SUB ESP,0x4                         ; 00401c74
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401c77
    MOV EBX,dword ptr [ESP + 0x20]      ; 00401c7b
    MOV EDI,EDX                         ; 00401c7f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401c81
    SUB ECX,ECX                         ; 00401c85
    DEC ECX                             ; 00401c87
    XOR EAX,EAX                         ; 00401c88
    SCASB.REPNE ES:EDI                  ; 00401c8a
    NOT ECX                             ; 00401c8c
    DEC ECX                             ; 00401c8e
    XOR EBP,EBP                         ; 00401c8f
    MOV dword ptr [ESP],ECX             ; 00401c91
    TEST ECX,ECX                        ; 00401c94
    JLE 0x00401ce9                      ; 00401c96
        ;   XREF to: 00401ce9 (CONDITIONAL_JUMP)  ; LAB_00401ce9
    MOV EDI,EDX                         ; 00401c98
    CMP byte ptr [EDI],0xa              ; 00401c9a
        ;   Label: LAB_00401c9a
    JNZ 0x00401cae                      ; 00401c9d
        ;   XREF to: 00401cae (CONDITIONAL_JUMP)  ; LAB_00401cae
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401c9f
    ADD EBX,0xb                         ; 00401ca3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401ca6
    CMP EBX,ECX                         ; 00401caa
    JG 0x00401ce9                       ; 00401cac
        ;   XREF to: 00401ce9 (CONDITIONAL_JUMP)  ; LAB_00401ce9
    XOR EAX,EAX                         ; 00401cae
        ;   Label: LAB_00401cae
    MOV AL,byte ptr [EDI]               ; 00401cb0
    CMP EAX,0x20                        ; 00401cb2
    JL 0x00401ce0                       ; 00401cb5
        ;   XREF to: 00401ce0 (CONDITIONAL_JUMP)  ; LAB_00401ce0
    CMP EAX,0x100                       ; 00401cb7
    JGE 0x00401ce0                      ; 00401cbc
        ;   XREF to: 00401ce0 (CONDITIONAL_JUMP)  ; LAB_00401ce0
    PUSH EBX                            ; 00401cbe
    PUSH ESI                            ; 00401cbf
    PUSH EAX                            ; 00401cc0
    CALL engine_2d.c_drawCharacter_FUN_00401620 ; 00401cc1
        ;   XREF to: 00401620 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacter_FUN_00401620(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00401cc6
    ADD ESI,EAX                         ; 00401cc9
    CMP ESI,dword ptr [ESP + 0x24]      ; 00401ccb
    JLE 0x00401ce0                      ; 00401ccf
        ;   XREF to: 00401ce0 (CONDITIONAL_JUMP)  ; LAB_00401ce0
    MOV EDX,dword ptr [ESP + 0x28]      ; 00401cd1
    ADD EBX,0xb                         ; 00401cd5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401cd8
    CMP EBX,EDX                         ; 00401cdc
    JG 0x00401ce9                       ; 00401cde
        ;   XREF to: 00401ce9 (CONDITIONAL_JUMP)  ; LAB_00401ce9
    MOV EDX,dword ptr [ESP]             ; 00401ce0
        ;   Label: LAB_00401ce0
    INC EBP                             ; 00401ce3
    INC EDI                             ; 00401ce4
    CMP EBP,EDX                         ; 00401ce5
    JL 0x00401c9a                       ; 00401ce7
        ;   XREF to: 00401c9a (CONDITIONAL_JUMP)  ; LAB_00401c9a
    ADD ESP,0x4                         ; 00401ce9
        ;   Label: LAB_00401ce9
    POP EBP                             ; 00401cec
    POP EDI                             ; 00401ced
    POP ESI                             ; 00401cee
    POP EBX                             ; 00401cef
    RET                                 ; 00401cf0

