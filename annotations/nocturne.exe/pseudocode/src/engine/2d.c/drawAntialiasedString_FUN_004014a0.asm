; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawAntialiasedString_FUN_004014a0(char *text,int x_pos,int y_pos,int intensity_shift)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   intensity_shift
;
; Called Functions:
;   engine_2d.c_drawAntialiasedChar_FUN_004013d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004014a0
        ;   Label: engine_2d.c_drawAntialiasedString_FUN_004014a0
    PUSH ESI                            ; 004014a1
    PUSH EDI                            ; 004014a2
    PUSH EBP                            ; 004014a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004014a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004014a8
    MOV EDI,ESI                         ; 004014ac
    SUB ECX,ECX                         ; 004014ae
    DEC ECX                             ; 004014b0
    XOR EAX,EAX                         ; 004014b1
    SCASB.REPNE ES:EDI                  ; 004014b3
    NOT ECX                             ; 004014b5
    DEC ECX                             ; 004014b7
    XOR EBX,EBX                         ; 004014b8
    MOV EDI,ECX                         ; 004014ba
    TEST ECX,ECX                        ; 004014bc
    JLE 0x004014e0                      ; 004014be
        ;   XREF to: 004014e0 (CONDITIONAL_JUMP)  ; LAB_004014e0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004014c0
        ;   Label: LAB_004014c0
    PUSH EDX                            ; 004014c4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004014c5
    PUSH ECX                            ; 004014c9
    XOR EAX,EAX                         ; 004014ca
    PUSH EBP                            ; 004014cc
    MOV AL,byte ptr [ESI]               ; 004014cd
    PUSH EAX                            ; 004014cf
    INC ESI                             ; 004014d0
    INC EBX                             ; 004014d1
    CALL engine_2d.c_drawAntialiasedChar_FUN_004013d0 ; 004014d2
        ;   XREF to: 004013d0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawAntialiasedChar_FUN_004013d0(int char_code, int x_pos, int y_pos, int intensity_shift)
    ADD ESP,0x10                        ; 004014d7
    ADD EBP,EAX                         ; 004014da
    CMP EBX,EDI                         ; 004014dc
    JL 0x004014c0                       ; 004014de
        ;   XREF to: 004014c0 (CONDITIONAL_JUMP)  ; LAB_004014c0
    POP EBP                             ; 004014e0
        ;   Label: LAB_004014e0
    POP EDI                             ; 004014e1
    POP ESI                             ; 004014e2
    POP EBX                             ; 004014e3
    RET                                 ; 004014e4

