; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextMultilineColor_FUN_00401f50(char *text,int x_start,int y_start,int x_max,int y_max,int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   y_start
; int              Stack[0x10]:4   x_max
; int              Stack[0x14]:4   y_max
; int              Stack[0x18]:4   color
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_drawTextColor_FUN_00402440 at 00402496
;
; Referenced Globals:
;   undefined4 DAT_00608570
;
; Called Functions:
;   engine_2d.c_drawCharacterMaskedColor_FUN_00401a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401f50
        ;   Label: engine_2d.c_drawTextMultilineColor_FUN_00401f50
    PUSH ESI                            ; 00401f51
    PUSH EDI                            ; 00401f52
    PUSH EBP                            ; 00401f53
    SUB ESP,0x4                         ; 00401f54
    MOV ESI,dword ptr [ESP + 0x18]      ; 00401f57
    MOV EDI,ESI                         ; 00401f5b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401f5d
    SUB ECX,ECX                         ; 00401f61
    DEC ECX                             ; 00401f63
    XOR EAX,EAX                         ; 00401f64
    SCASB.REPNE ES:EDI                  ; 00401f66
    NOT ECX                             ; 00401f68
    DEC ECX                             ; 00401f6a
    MOV dword ptr [ESP],ECX             ; 00401f6b
    XOR EDI,EDI                         ; 00401f6e
    TEST ECX,ECX                        ; 00401f70
    JLE 0x00401fbf                      ; 00401f72
        ;   XREF to: 00401fbf (CONDITIONAL_JUMP)  ; LAB_00401fbf
    CMP byte ptr [ESI],0xa              ; 00401f74
        ;   Label: LAB_00401f74
    JZ 0x00401fc7                       ; 00401f77
        ;   XREF to: 00401fc7 (CONDITIONAL_JUMP)  ; LAB_00401fc7
    XOR EBX,EBX                         ; 00401f79
        ;   Label: LAB_00401f79
    MOV BL,byte ptr [ESI]               ; 00401f7b
    CMP EBX,0x20                        ; 00401f7d
    JL 0x00401fb6                       ; 00401f80
        ;   XREF to: 00401fb6 (CONDITIONAL_JUMP)  ; LAB_00401fb6
    CMP EBX,0x100                       ; 00401f82
    JGE 0x00401fb6                      ; 00401f88
        ;   XREF to: 00401fb6 (CONDITIONAL_JUMP)  ; LAB_00401fb6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00401f8a
    PUSH EAX                            ; 00401f8e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00401f8f
    PUSH EDX                            ; 00401f93
    PUSH EBP                            ; 00401f94
    PUSH EBX                            ; 00401f95
    SUB EBX,0x20                        ; 00401f96
    IMUL EBX,EBX,0x91                   ; 00401f99
    CALL engine_2d.c_drawCharacterMaskedColor_FUN_00401a20 ; 00401f9f
        ;   XREF to: 00401a20 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterMaskedColor_FUN_00401a20(int char_code, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 00401fa4
    MOV BL,byte ptr [EBX + 0x608570]    ; 00401fa7 | DAT_00608570
    AND EBX,0xff                        ; 00401fad
    INC EBX                             ; 00401fb3
    ADD EBP,EBX                         ; 00401fb4
    MOV EDX,dword ptr [ESP]             ; 00401fb6
        ;   Label: LAB_00401fb6
    INC EDI                             ; 00401fb9
    INC ESI                             ; 00401fba
    CMP EDI,EDX                         ; 00401fbb
    JL 0x00401f74                       ; 00401fbd
        ;   XREF to: 00401f74 (CONDITIONAL_JUMP)  ; LAB_00401f74
    ADD ESP,0x4                         ; 00401fbf
        ;   Label: LAB_00401fbf
    POP EBP                             ; 00401fc2
    POP EDI                             ; 00401fc3
    POP ESI                             ; 00401fc4
    POP EBX                             ; 00401fc5
    RET                                 ; 00401fc6
    MOV ECX,dword ptr [ESP + 0x20]      ; 00401fc7
        ;   Label: LAB_00401fc7
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401fcb
    ADD ECX,0xb                         ; 00401fcf
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401fd2
    MOV dword ptr [ESP + 0x20],ECX      ; 00401fd6
    CMP ECX,EBX                         ; 00401fda
    JG 0x00401fbf                       ; 00401fdc
        ;   XREF to: 00401fbf (CONDITIONAL_JUMP)  ; LAB_00401fbf
    JMP 0x00401f79                      ; 00401fde
        ;   XREF to: 00401f79 (UNCONDITIONAL_JUMP)  ; LAB_00401f79

