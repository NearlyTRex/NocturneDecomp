; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextMultiline_FUN_00401d00(char *text,int x_start,int y_start,int x_max,int y_max)
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
;   engine_2d.c_drawText_FUN_00401fe0 at 00402028
;
; Referenced Globals:
;   undefined4 DAT_005e8840
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401d00
        ;   Label: engine_2d.c_drawTextMultiline_FUN_00401d00
    PUSH ESI                            ; 00401d01
    PUSH EDI                            ; 00401d02
    PUSH EBP                            ; 00401d03
    SUB ESP,0x4                         ; 00401d04
    MOV ESI,dword ptr [ESP + 0x18]      ; 00401d07
    MOV EDI,ESI                         ; 00401d0b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401d0d
    SUB ECX,ECX                         ; 00401d11
    DEC ECX                             ; 00401d13
    XOR EAX,EAX                         ; 00401d14
    SCASB.REPNE ES:EDI                  ; 00401d16
    NOT ECX                             ; 00401d18
    DEC ECX                             ; 00401d1a
    MOV dword ptr [ESP],ECX             ; 00401d1b
    XOR EDI,EDI                         ; 00401d1e
    TEST ECX,ECX                        ; 00401d20
    JLE 0x00401d6a                      ; 00401d22
        ;   XREF to: 00401d6a (CONDITIONAL_JUMP)  ; LAB_00401d6a
    CMP byte ptr [ESI],0xa              ; 00401d24
        ;   Label: LAB_00401d24
    JZ 0x00401d72                       ; 00401d27
        ;   XREF to: 00401d72 (CONDITIONAL_JUMP)  ; LAB_00401d72
    XOR EBX,EBX                         ; 00401d29
        ;   Label: LAB_00401d29
    MOV BL,byte ptr [ESI]               ; 00401d2b
    CMP EBX,0x20                        ; 00401d2d
    JL 0x00401d61                       ; 00401d30
        ;   XREF to: 00401d61 (CONDITIONAL_JUMP)  ; LAB_00401d61
    CMP EBX,0x100                       ; 00401d32
    JGE 0x00401d61                      ; 00401d38
        ;   XREF to: 00401d61 (CONDITIONAL_JUMP)  ; LAB_00401d61
    MOV EAX,dword ptr [ESP + 0x20]      ; 00401d3a
    PUSH EAX                            ; 00401d3e
    PUSH EBP                            ; 00401d3f
    PUSH EBX                            ; 00401d40
    SUB EBX,0x20                        ; 00401d41
    IMUL EBX,EBX,0x91                   ; 00401d44
    CALL engine_2d.c_drawCharacter_FUN_00401620 ; 00401d4a
        ;   XREF to: 00401620 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacter_FUN_00401620(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00401d4f
    MOV BL,byte ptr [EBX + 0x5e8840]    ; 00401d52 | DAT_005e8840
    AND EBX,0xff                        ; 00401d58
    INC EBX                             ; 00401d5e
    ADD EBP,EBX                         ; 00401d5f
    MOV EDX,dword ptr [ESP]             ; 00401d61
        ;   Label: LAB_00401d61
    INC EDI                             ; 00401d64
    INC ESI                             ; 00401d65
    CMP EDI,EDX                         ; 00401d66
    JL 0x00401d24                       ; 00401d68
        ;   XREF to: 00401d24 (CONDITIONAL_JUMP)  ; LAB_00401d24
    ADD ESP,0x4                         ; 00401d6a
        ;   Label: LAB_00401d6a
    POP EBP                             ; 00401d6d
    POP EDI                             ; 00401d6e
    POP ESI                             ; 00401d6f
    POP EBX                             ; 00401d70
    RET                                 ; 00401d71
    MOV ECX,dword ptr [ESP + 0x20]      ; 00401d72
        ;   Label: LAB_00401d72
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401d76
    ADD ECX,0xb                         ; 00401d7a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401d7d
    MOV dword ptr [ESP + 0x20],ECX      ; 00401d81
    CMP ECX,EBX                         ; 00401d85
    JG 0x00401d6a                       ; 00401d87
        ;   XREF to: 00401d6a (CONDITIONAL_JUMP)  ; LAB_00401d6a
    JMP 0x00401d29                      ; 00401d89
        ;   XREF to: 00401d29 (UNCONDITIONAL_JUMP)  ; LAB_00401d29

