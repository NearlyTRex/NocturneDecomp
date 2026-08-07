; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_fillRectColor_FUN_00403e60(int x1,int y1,int x2,int y2,int color)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   color
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_game.cpp_CGame_renderIrisFade_FUN_004a3960 at 004a3a38
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50 at 0049ae88
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a70dd
;   core_game.cpp_drawHealthBar_FUN_0049aab0 at 0049ab3a
;   core_inv.cpp_CInventory_FUN_004c2470 at 004c2afc
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5eea
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfd35
;   core_script.cpp_CScript_FUN_004fe770 at 004fe81c
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0 at 00403f0c
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760 at 004937c1
;   ... and 5 more
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00403bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403e60
        ;   Label: engine_2d.c_fillRectColor_FUN_00403e60
    PUSH ESI                            ; 00403e61
    PUSH EDI                            ; 00403e62
    PUSH EBP                            ; 00403e63
    SUB ESP,0x4                         ; 00403e64
    MOV EBP,dword ptr [ESP + 0x18]      ; 00403e67
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00403e6b
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403e6f
    MOV ESI,dword ptr [ESP + 0x24]      ; 00403e73
    MOV EDX,dword ptr [0x01c00c58]      ; 00403e77 | g_ClipLeft
    CMP EBP,EDX                         ; 00403e7d
    JGE 0x00403e83                      ; 00403e7f
        ;   XREF to: 00403e83 (CONDITIONAL_JUMP)  ; LAB_00403e83
    MOV EBP,EDX                         ; 00403e81
    MOV ECX,dword ptr [0x01c00c60]      ; 00403e83 | g_ClipRight
        ;   Label: LAB_00403e83
    CMP EDI,ECX                         ; 00403e89
    JLE 0x00403e8f                      ; 00403e8b
        ;   XREF to: 00403e8f (CONDITIONAL_JUMP)  ; LAB_00403e8f
    MOV EDI,ECX                         ; 00403e8d
    CMP EBP,EDI                         ; 00403e8f
        ;   Label: LAB_00403e8f
    JG 0x00403ee8                       ; 00403e91
        ;   XREF to: 00403ee8 (CONDITIONAL_JUMP)  ; LAB_00403ee8
    MOV EAX,[0x01c00c5c]                ; 00403e93 | g_ClipTop
    CMP EBX,EAX                         ; 00403e98
    JGE 0x00403e9e                      ; 00403e9a
        ;   XREF to: 00403e9e (CONDITIONAL_JUMP)  ; LAB_00403e9e
    MOV EBX,EAX                         ; 00403e9c
    MOV EDX,dword ptr [0x01c00c64]      ; 00403e9e | g_ClipBottom
        ;   Label: LAB_00403e9e
    CMP ESI,EDX                         ; 00403ea4
    JLE 0x00403eaa                      ; 00403ea6
        ;   XREF to: 00403eaa (CONDITIONAL_JUMP)  ; LAB_00403eaa
    MOV ESI,EDX                         ; 00403ea8
    CMP EBX,ESI                         ; 00403eaa
        ;   Label: LAB_00403eaa
    JG 0x00403ee8                       ; 00403eac
        ;   XREF to: 00403ee8 (CONDITIONAL_JUMP)  ; LAB_00403ee8
    MOV EAX,[0x01c00c70]                ; 00403eae | g_ActiveRenderColor
    MOV dword ptr [ESP],EAX             ; 00403eb3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00403eb6
    MOV [0x01c00c70],EAX                ; 00403eba | g_ActiveRenderColor
    JG 0x00403ee0                       ; 00403ebf
        ;   XREF to: 00403ee0 (CONDITIONAL_JUMP)  ; LAB_00403ee0
    PUSH EDI                            ; 00403ec1
        ;   Label: LAB_00403ec1
    PUSH EBX                            ; 00403ec2
    PUSH EBP                            ; 00403ec3
    CALL engine_2d.c_drawHLine_FUN_00403bd0 ; 00403ec4
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00403bd0(int x1, int y, int x2)
    INC EBX                             ; 00403ec9
    ADD ESP,0xc                         ; 00403eca
    CMP EBX,ESI                         ; 00403ecd
    JLE 0x00403ec1                      ; 00403ecf
        ;   XREF to: 00403ec1 (CONDITIONAL_JUMP)  ; LAB_00403ec1
    LEA EAX,[EAX]                       ; 00403ed1
    LEA EDX,[EDX]                       ; 00403ed7
    LEA EAX,[EAX]                       ; 00403edd
    MOV EAX,dword ptr [ESP]             ; 00403ee0
        ;   Label: LAB_00403ee0
    MOV [0x01c00c70],EAX                ; 00403ee3 | g_ActiveRenderColor
    ADD ESP,0x4                         ; 00403ee8
        ;   Label: LAB_00403ee8
    POP EBP                             ; 00403eeb
    POP EDI                             ; 00403eec
    POP ESI                             ; 00403eed
    POP EBX                             ; 00403eee
    RET                                 ; 00403eef

