; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextWrapped_FUN_00401c60(char *text,int x_start,int y_start,int x_max,int y_max)
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
;   engine_2d.c_drawText_FUN_00401fd0 at 00401ffa
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401c60
        ;   Label: engine_2d.c_drawTextWrapped_FUN_00401c60
    PUSH ESI                            ; 00401c61
    PUSH EDI                            ; 00401c62
    PUSH EBP                            ; 00401c63
    SUB ESP,0x4                         ; 00401c64
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401c67
    MOV EBX,dword ptr [ESP + 0x20]      ; 00401c6b
    MOV EDI,EDX                         ; 00401c6f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401c71
    SUB ECX,ECX                         ; 00401c75
    DEC ECX                             ; 00401c77
    XOR EAX,EAX                         ; 00401c78
    SCASB.REPNE ES:EDI                  ; 00401c7a
    NOT ECX                             ; 00401c7c
    DEC ECX                             ; 00401c7e
    XOR EBP,EBP                         ; 00401c7f
    MOV dword ptr [ESP],ECX             ; 00401c81
    TEST ECX,ECX                        ; 00401c84
    JLE 0x00401cd9                      ; 00401c86
        ;   XREF to: 00401cd9 (CONDITIONAL_JUMP)  ; LAB_00401cd9
    MOV EDI,EDX                         ; 00401c88
    CMP byte ptr [EDI],0xa              ; 00401c8a
        ;   Label: LAB_00401c8a
    JNZ 0x00401c9e                      ; 00401c8d
        ;   XREF to: 00401c9e (CONDITIONAL_JUMP)  ; LAB_00401c9e
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401c8f
    ADD EBX,0xb                         ; 00401c93
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401c96
    CMP EBX,ECX                         ; 00401c9a
    JG 0x00401cd9                       ; 00401c9c
        ;   XREF to: 00401cd9 (CONDITIONAL_JUMP)  ; LAB_00401cd9
    XOR EAX,EAX                         ; 00401c9e
        ;   Label: LAB_00401c9e
    MOV AL,byte ptr [EDI]               ; 00401ca0
    CMP EAX,0x20                        ; 00401ca2
    JL 0x00401cd0                       ; 00401ca5
        ;   XREF to: 00401cd0 (CONDITIONAL_JUMP)  ; LAB_00401cd0
    CMP EAX,0x100                       ; 00401ca7
    JGE 0x00401cd0                      ; 00401cac
        ;   XREF to: 00401cd0 (CONDITIONAL_JUMP)  ; LAB_00401cd0
    PUSH EBX                            ; 00401cae
    PUSH ESI                            ; 00401caf
    PUSH EAX                            ; 00401cb0
    CALL engine_2d.c_drawCharacter_FUN_00401610 ; 00401cb1
        ;   XREF to: 00401610 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacter_FUN_00401610(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00401cb6
    ADD ESI,EAX                         ; 00401cb9
    CMP ESI,dword ptr [ESP + 0x24]      ; 00401cbb
    JLE 0x00401cd0                      ; 00401cbf
        ;   XREF to: 00401cd0 (CONDITIONAL_JUMP)  ; LAB_00401cd0
    MOV EDX,dword ptr [ESP + 0x28]      ; 00401cc1
    ADD EBX,0xb                         ; 00401cc5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401cc8
    CMP EBX,EDX                         ; 00401ccc
    JG 0x00401cd9                       ; 00401cce
        ;   XREF to: 00401cd9 (CONDITIONAL_JUMP)  ; LAB_00401cd9
    MOV EDX,dword ptr [ESP]             ; 00401cd0
        ;   Label: LAB_00401cd0
    INC EBP                             ; 00401cd3
    INC EDI                             ; 00401cd4
    CMP EBP,EDX                         ; 00401cd5
    JL 0x00401c8a                       ; 00401cd7
        ;   XREF to: 00401c8a (CONDITIONAL_JUMP)  ; LAB_00401c8a
    ADD ESP,0x4                         ; 00401cd9
        ;   Label: LAB_00401cd9
    POP EBP                             ; 00401cdc
    POP EDI                             ; 00401cdd
    POP ESI                             ; 00401cde
    POP EBX                             ; 00401cdf
    RET                                 ; 00401ce0

