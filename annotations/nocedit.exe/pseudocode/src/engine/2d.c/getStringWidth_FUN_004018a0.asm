; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
;
; Parameters:
; char *           Stack[0x4]:4   text
;
; XREF[15]:
;   cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_00489ca0 at 00489ccb
;   cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00489d00 at 00489d1a
;   core_actor.cpp_CActorPropertyList_FUN_0040e770 at 0040e7e0
;   core_actor.cpp_FUN_0040ee30 at 0040ee38
;   core_actor.cpp_FUN_0040ee50 at 0040ee74
;   core_msnedit.cpp_FUN_00536cd0 at 00536ce6
;   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 at 004025fb
;   engine_2d.c_drawTextCenteredAt_FUN_00402280 at 0040228b
;   engine_2d.c_drawTextCenteredColor_FUN_004026c0 at 004026d6
;   engine_2d.c_drawTextCentered_FUN_00402350 at 00402366
;   ... and 5 more
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004018a0
        ;   Label: engine_2d.c_getStringWidth_FUN_004018a0
    PUSH ESI                            ; 004018a1
    PUSH EDI                            ; 004018a2
    PUSH EBP                            ; 004018a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004018a4
    MOV EDX,EBP                         ; 004018a8
    XOR EBX,EBX                         ; 004018aa
    XOR ESI,ESI                         ; 004018ac
    MOV EDI,EBP                         ; 004018ae
        ;   Label: LAB_004018ae
    SUB ECX,ECX                         ; 004018b0
    DEC ECX                             ; 004018b2
    XOR EAX,EAX                         ; 004018b3
    SCASB.REPNE ES:EDI                  ; 004018b5
    NOT ECX                             ; 004018b7
    DEC ECX                             ; 004018b9
    CMP EBX,ECX                         ; 004018ba
    JNC 0x004018eb                      ; 004018bc
        ;   XREF to: 004018eb (CONDITIONAL_JUMP)  ; LAB_004018eb
    XOR EAX,EAX                         ; 004018be
    MOV AL,byte ptr [EDX]               ; 004018c0
    CMP EAX,0x20                        ; 004018c2
    JGE 0x004018cb                      ; 004018c5
        ;   XREF to: 004018cb (CONDITIONAL_JUMP)  ; LAB_004018cb
    INC EBX                             ; 004018c7
        ;   Label: LAB_004018c7
    INC EDX                             ; 004018c8
    JMP 0x004018ae                      ; 004018c9
        ;   XREF to: 004018ae (UNCONDITIONAL_JUMP)  ; LAB_004018ae
    CMP EAX,0x100                       ; 004018cb
        ;   Label: LAB_004018cb
    JGE 0x004018c7                      ; 004018d0
        ;   XREF to: 004018c7 (CONDITIONAL_JUMP)  ; LAB_004018c7
    SUB EAX,0x20                        ; 004018d2
    IMUL EAX,EAX,0x91                   ; 004018d5
    MOV AL,byte ptr [EAX + 0x666040]    ; 004018db | g_FontTable
    AND EAX,0xff                        ; 004018e1
    INC EAX                             ; 004018e6
    ADD ESI,EAX                         ; 004018e7
    JMP 0x004018c7                      ; 004018e9
        ;   XREF to: 004018c7 (UNCONDITIONAL_JUMP)  ; LAB_004018c7
    MOV EAX,ESI                         ; 004018eb
        ;   Label: LAB_004018eb
    POP EBP                             ; 004018ed
    POP EDI                             ; 004018ee
    POP ESI                             ; 004018ef
    POP EBX                             ; 004018f0
    RET                                 ; 004018f1

