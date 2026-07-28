; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawString_FUN_004026b0(char *text,int x_pos,int y_pos,int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color
;
; XREF[1]:
;   engine_console.cpp_CConsole_render_FUN_0043aec0 at 0043af32
;
; Called Functions:
;   engine_2d.c_drawCharacterMaskedColor_FUN_00402040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004026b0
        ;   Label: engine_2d.c_drawString_FUN_004026b0
    PUSH ESI                            ; 004026b1
    PUSH EDI                            ; 004026b2
    PUSH EBP                            ; 004026b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004026b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004026b8
    MOV EDI,ESI                         ; 004026bc
    SUB ECX,ECX                         ; 004026be
    DEC ECX                             ; 004026c0
    XOR EAX,EAX                         ; 004026c1
    SCASB.REPNE ES:EDI                  ; 004026c3
    NOT ECX                             ; 004026c5
    DEC ECX                             ; 004026c7
    XOR EBX,EBX                         ; 004026c8
    MOV EDI,ECX                         ; 004026ca
    TEST ECX,ECX                        ; 004026cc
    JLE 0x004026fc                      ; 004026ce
        ;   XREF to: 004026fc (CONDITIONAL_JUMP)  ; LAB_004026fc
    XOR EAX,EAX                         ; 004026d0
        ;   Label: LAB_004026d0
    MOV AL,byte ptr [ESI]               ; 004026d2
    CMP EAX,0x20                        ; 004026d4
    JL 0x004026f6                       ; 004026d7
        ;   XREF to: 004026f6 (CONDITIONAL_JUMP)  ; LAB_004026f6
    CMP EAX,0x100                       ; 004026d9
    JGE 0x004026f6                      ; 004026de
        ;   XREF to: 004026f6 (CONDITIONAL_JUMP)  ; LAB_004026f6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004026e0
    PUSH EDX                            ; 004026e4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004026e5
    PUSH ECX                            ; 004026e9
    PUSH EBP                            ; 004026ea
    PUSH EAX                            ; 004026eb
    CALL engine_2d.c_drawCharacterMaskedColor_FUN_00402040 ; 004026ec
        ;   XREF to: 00402040 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterMaskedColor_FUN_00402040(int char_code, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 004026f1
    ADD EBP,EAX                         ; 004026f4
    INC EBX                             ; 004026f6
        ;   Label: LAB_004026f6
    INC ESI                             ; 004026f7
    CMP EBX,EDI                         ; 004026f8
    JL 0x004026d0                       ; 004026fa
        ;   XREF to: 004026d0 (CONDITIONAL_JUMP)  ; LAB_004026d0
    POP EBP                             ; 004026fc
        ;   Label: LAB_004026fc
    POP EDI                             ; 004026fd
    POP ESI                             ; 004026fe
    POP EBX                             ; 004026ff
    RET                                 ; 00402700

