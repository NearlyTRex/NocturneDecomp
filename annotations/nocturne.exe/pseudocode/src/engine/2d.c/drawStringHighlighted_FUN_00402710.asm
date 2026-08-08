; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawStringHighlighted_FUN_00402710(char *text,int x_pos,int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
;
; Called Functions:
;   engine_2d.c_drawCharacterHighlighted_FUN_004021a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402710
        ;   Label: engine_2d.c_drawStringHighlighted_FUN_00402710
    PUSH ESI                            ; 00402711
    PUSH EDI                            ; 00402712
    PUSH EBP                            ; 00402713
    MOV ESI,dword ptr [ESP + 0x14]      ; 00402714
    MOV EBP,dword ptr [ESP + 0x18]      ; 00402718
    MOV EDI,ESI                         ; 0040271c
    SUB ECX,ECX                         ; 0040271e
    DEC ECX                             ; 00402720
    XOR EAX,EAX                         ; 00402721
    SCASB.REPNE ES:EDI                  ; 00402723
    NOT ECX                             ; 00402725
    DEC ECX                             ; 00402727
    XOR EBX,EBX                         ; 00402728
    MOV EDI,ECX                         ; 0040272a
    TEST ECX,ECX                        ; 0040272c
    JLE 0x00402757                      ; 0040272e
        ;   XREF to: 00402757 (CONDITIONAL_JUMP)  ; LAB_00402757
    XOR EAX,EAX                         ; 00402730
        ;   Label: LAB_00402730
    MOV AL,byte ptr [ESI]               ; 00402732
    CMP EAX,0x20                        ; 00402734
    JL 0x00402751                       ; 00402737
        ;   XREF to: 00402751 (CONDITIONAL_JUMP)  ; LAB_00402751
    CMP EAX,0x100                       ; 00402739
    JGE 0x00402751                      ; 0040273e
        ;   XREF to: 00402751 (CONDITIONAL_JUMP)  ; LAB_00402751
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00402740
    PUSH EDX                            ; 00402744
    PUSH EBP                            ; 00402745
    PUSH EAX                            ; 00402746
    CALL engine_2d.c_drawCharacterHighlighted_FUN_004021a0 ; 00402747
        ;   XREF to: 004021a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterHighlighted_FUN_004021a0(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0040274c
    ADD EBP,EAX                         ; 0040274f
    INC EBX                             ; 00402751
        ;   Label: LAB_00402751
    INC ESI                             ; 00402752
    CMP EBX,EDI                         ; 00402753
    JL 0x00402730                       ; 00402755
        ;   XREF to: 00402730 (CONDITIONAL_JUMP)  ; LAB_00402730
    POP EBP                             ; 00402757
        ;   Label: LAB_00402757
    POP EDI                             ; 00402758
    POP ESI                             ; 00402759
    POP EBX                             ; 0040275a
    RET                                 ; 0040275b

