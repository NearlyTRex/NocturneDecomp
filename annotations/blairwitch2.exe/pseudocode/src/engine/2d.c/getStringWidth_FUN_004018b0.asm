; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_getStringWidth_FUN_004018b0(char *text)
;
; Parameters:
; char *           Stack[0x4]:4   text
;
; XREF[6]:
;   cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00468b50 at 00468b6a
;   cockpit_drawsurf.cpp_FUN_00468af0 at 00468b1b
;   engine_2d.c_drawTextCenteredAtColor_FUN_00402600 at 0040260b
;   engine_2d.c_drawTextCenteredColor_FUN_004026d0 at 004026e6
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402540 at 0040254b
;   engine_2d.c_wrapTextToWidth_FUN_00401d90 at 00401dea
;
; Referenced Globals:
;   undefined4 DAT_00601440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004018b0
        ;   Label: engine_2d.c_getStringWidth_FUN_004018b0
    PUSH ESI                            ; 004018b1
    PUSH EDI                            ; 004018b2
    PUSH EBP                            ; 004018b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004018b4
    MOV EDX,EBP                         ; 004018b8
    XOR EBX,EBX                         ; 004018ba
    XOR ESI,ESI                         ; 004018bc
    MOV EDI,EBP                         ; 004018be
        ;   Label: LAB_004018be
    SUB ECX,ECX                         ; 004018c0
    DEC ECX                             ; 004018c2
    XOR EAX,EAX                         ; 004018c3
    SCASB.REPNE ES:EDI                  ; 004018c5
    NOT ECX                             ; 004018c7
    DEC ECX                             ; 004018c9
    CMP EBX,ECX                         ; 004018ca
    JNC 0x004018fb                      ; 004018cc
        ;   XREF to: 004018fb (CONDITIONAL_JUMP)  ; LAB_004018fb
    XOR EAX,EAX                         ; 004018ce
    MOV AL,byte ptr [EDX]               ; 004018d0
    CMP EAX,0x20                        ; 004018d2
    JGE 0x004018db                      ; 004018d5
        ;   XREF to: 004018db (CONDITIONAL_JUMP)  ; LAB_004018db
    INC EBX                             ; 004018d7
        ;   Label: LAB_004018d7
    INC EDX                             ; 004018d8
    JMP 0x004018be                      ; 004018d9
        ;   XREF to: 004018be (UNCONDITIONAL_JUMP)  ; LAB_004018be
    CMP EAX,0x100                       ; 004018db
        ;   Label: LAB_004018db
    JGE 0x004018d7                      ; 004018e0
        ;   XREF to: 004018d7 (CONDITIONAL_JUMP)  ; LAB_004018d7
    SUB EAX,0x20                        ; 004018e2
    IMUL EAX,EAX,0x91                   ; 004018e5
    MOV AL,byte ptr [EAX + 0x601440]    ; 004018eb | DAT_00601440
    AND EAX,0xff                        ; 004018f1
    INC EAX                             ; 004018f6
    ADD ESI,EAX                         ; 004018f7
    JMP 0x004018d7                      ; 004018f9
        ;   XREF to: 004018d7 (UNCONDITIONAL_JUMP)  ; LAB_004018d7
    MOV EAX,ESI                         ; 004018fb
        ;   Label: LAB_004018fb
    POP EBP                             ; 004018fd
    POP EDI                             ; 004018fe
    POP ESI                             ; 004018ff
    POP EBX                             ; 00401900
    RET                                 ; 00401901

