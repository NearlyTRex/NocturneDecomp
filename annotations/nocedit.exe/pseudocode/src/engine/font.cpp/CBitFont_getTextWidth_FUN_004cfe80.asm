; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *this_ptr,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[30]:
;   cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00489d00 at 00489d10
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d8522
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe1c8
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 005011e0
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 00504693
;   core_main.c_drawCenteredText_FUN_00508250 at 00508260
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508629
;   core_main.c_initializeGameSystems_FUN_00507a60 at 0050808d
;   core_main.c_showPromoScreen_FUN_00508340 at 005083c8
;   core_menu.cpp_calibrateGamepad_FUN_005104d0 at 0051050e
;   ... and 20 more
;
; Called Functions:
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfe80
        ;   Label: engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
    PUSH ESI                            ; 004cfe81
    PUSH EDI                            ; 004cfe82
    PUSH EBP                            ; 004cfe83
    SUB ESP,0x4                         ; 004cfe84
    MOV EDI,dword ptr [ESP + 0x18]      ; 004cfe87
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004cfe8b
    MOV EDX,dword ptr [EDI + 0x3190]    ; 004cfe8f
    XOR EBP,EBP                         ; 004cfe95
    TEST EDX,EDX                        ; 004cfe97
    JZ 0x004cfee8                       ; 004cfe99
        ;   XREF to: 004cfee8 (CONDITIONAL_JUMP)  ; LAB_004cfee8
    MOV EBX,ESI                         ; 004cfe9b
    MOV DL,0xa                          ; 004cfe9d
        ;   Label: LAB_004cfe9d
    MOV ESI,EBX                         ; 004cfe9f
    MOV AL,byte ptr [ESI]               ; 004cfea1
        ;   Label: LAB_004cfea1
    CMP AL,DL                           ; 004cfea3
    JZ 0x004cfeb9                       ; 004cfea5
        ;   XREF to: 004cfeb9 (CONDITIONAL_JUMP)  ; LAB_004cfeb9
    CMP AL,0x0                          ; 004cfea7
    JZ 0x004cfeb7                       ; 004cfea9
        ;   XREF to: 004cfeb7 (CONDITIONAL_JUMP)  ; LAB_004cfeb7
    INC ESI                             ; 004cfeab
    MOV AL,byte ptr [ESI]               ; 004cfeac
    CMP AL,DL                           ; 004cfeae
    JZ 0x004cfeb9                       ; 004cfeb0
        ;   XREF to: 004cfeb9 (CONDITIONAL_JUMP)  ; LAB_004cfeb9
    INC ESI                             ; 004cfeb2
    CMP AL,0x0                          ; 004cfeb3
    JNZ 0x004cfea1                      ; 004cfeb5
        ;   XREF to: 004cfea1 (CONDITIONAL_JUMP)  ; LAB_004cfea1
    SUB ESI,ESI                         ; 004cfeb7
        ;   Label: LAB_004cfeb7
    MOV dword ptr [ESP],ESI             ; 004cfeb9
        ;   Label: LAB_004cfeb9
    TEST ESI,ESI                        ; 004cfebc
    JZ 0x004cfec3                       ; 004cfebe
        ;   XREF to: 004cfec3 (CONDITIONAL_JUMP)  ; LAB_004cfec3
    MOV byte ptr [ESI],0x0              ; 004cfec0
    PUSH EBX                            ; 004cfec3
        ;   Label: LAB_004cfec3
    MOV EAX,dword ptr [EDI + 0x3194]    ; 004cfec4
    PUSH EAX                            ; 004cfeca
    MOV ESI,dword ptr [EAX]             ; 004cfecb
    CALL dword ptr [ESI + 0x8]          ; 004cfecd
    ADD ESP,0x8                         ; 004cfed0
    CMP EAX,EBP                         ; 004cfed3
    JLE 0x004cfed9                      ; 004cfed5
        ;   XREF to: 004cfed9 (CONDITIONAL_JUMP)  ; LAB_004cfed9
    MOV EBP,EAX                         ; 004cfed7
    MOV ECX,dword ptr [ESP]             ; 004cfed9
        ;   Label: LAB_004cfed9
    TEST ECX,ECX                        ; 004cfedc
    JZ 0x004cff27                       ; 004cfede
        ;   XREF to: 004cff27 (CONDITIONAL_JUMP)  ; LAB_004cff27
    LEA EBX,[ECX + 0x1]                 ; 004cfee0
    MOV byte ptr [ECX],0xa              ; 004cfee3
    JMP 0x004cfe9d                      ; 004cfee6
        ;   XREF to: 004cfe9d (UNCONDITIONAL_JUMP)  ; LAB_004cfe9d
    CMP byte ptr [ESI],0x0              ; 004cfee8
        ;   Label: LAB_004cfee8
    JZ 0x004cff27                       ; 004cfeeb
        ;   XREF to: 004cff27 (CONDITIONAL_JUMP)  ; LAB_004cff27
    XOR EBX,EBX                         ; 004cfeed
    XOR EAX,EAX                         ; 004cfeef
        ;   Label: LAB_004cfeef
    MOV AL,byte ptr [ESI]               ; 004cfef1
    INC ESI                             ; 004cfef3
    CMP EAX,0xa                         ; 004cfef4
    JNZ 0x004cff0b                      ; 004cfef7
        ;   XREF to: 004cff0b (CONDITIONAL_JUMP)  ; LAB_004cff0b
    TEST EBX,EBX                        ; 004cfef9
        ;   Label: LAB_004cfef9
    JLE 0x004cff03                      ; 004cfefb
        ;   XREF to: 004cff03 (CONDITIONAL_JUMP)  ; LAB_004cff03
    SUB EBX,dword ptr [EDI + 0x3174]    ; 004cfefd
    CMP EBX,EBP                         ; 004cff03
        ;   Label: LAB_004cff03
    JLE 0x004cfee8                      ; 004cff05
        ;   XREF to: 004cfee8 (CONDITIONAL_JUMP)  ; LAB_004cfee8
    MOV EBP,EBX                         ; 004cff07
    JMP 0x004cfee8                      ; 004cff09
        ;   XREF to: 004cfee8 (UNCONDITIONAL_JUMP)  ; LAB_004cfee8
    PUSH EAX                            ; 004cff0b
        ;   Label: LAB_004cff0b
    PUSH EDI                            ; 004cff0c
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 004cff0d
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
    MOV EDX,dword ptr [EDI + 0x3174]    ; 004cff12
    ADD ESP,0x8                         ; 004cff18
    ADD EAX,EDX                         ; 004cff1b
    MOV DL,byte ptr [ESI]               ; 004cff1d
    ADD EBX,EAX                         ; 004cff1f
    TEST DL,DL                          ; 004cff21
    JNZ 0x004cfeef                      ; 004cff23
        ;   XREF to: 004cfeef (CONDITIONAL_JUMP)  ; LAB_004cfeef
    JMP 0x004cfef9                      ; 004cff25
        ;   XREF to: 004cfef9 (UNCONDITIONAL_JUMP)  ; LAB_004cfef9
    MOV EAX,EBP                         ; 004cff27
        ;   Label: LAB_004cff27
    ADD ESP,0x4                         ; 004cff29
    POP EBP                             ; 004cff2c
    POP EDI                             ; 004cff2d
    POP ESI                             ; 004cff2e
    POP EBX                             ; 004cff2f
    RET                                 ; 004cff30

