; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_fillRectColor_FUN_00403170(int x1,int y1,int x2,int y2,int color)
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
; XREF[31]:
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043ca97
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d6d1
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cc6c
;   core_game.cpp_CGame_FUN_004e0aa0 at 004e0b78
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d8378
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4287
;   core_game.cpp_FUN_004d7fa0 at 004d802a
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500d1c
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 00504709
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 00510935
;   ... and 21 more
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403170
        ;   Label: engine_2d.c_fillRectColor_FUN_00403170
    PUSH ESI                            ; 00403171
    PUSH EDI                            ; 00403172
    PUSH EBP                            ; 00403173
    SUB ESP,0x4                         ; 00403174
    MOV EBP,dword ptr [ESP + 0x18]      ; 00403177
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040317b
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040317f
    MOV ESI,dword ptr [ESP + 0x24]      ; 00403183
    MOV EDX,dword ptr [0x02d02558]      ; 00403187 | g_ClipLeft
    CMP EBP,EDX                         ; 0040318d
    JGE 0x00403193                      ; 0040318f
        ;   XREF to: 00403193 (CONDITIONAL_JUMP)  ; LAB_00403193
    MOV EBP,EDX                         ; 00403191
    MOV ECX,dword ptr [0x02d02560]      ; 00403193 | g_ClipRight
        ;   Label: LAB_00403193
    CMP EDI,ECX                         ; 00403199
    JLE 0x0040319f                      ; 0040319b
        ;   XREF to: 0040319f (CONDITIONAL_JUMP)  ; LAB_0040319f
    MOV EDI,ECX                         ; 0040319d
    CMP EBP,EDI                         ; 0040319f
        ;   Label: LAB_0040319f
    JG 0x004031f8                       ; 004031a1
        ;   XREF to: 004031f8 (CONDITIONAL_JUMP)  ; LAB_004031f8
    MOV EAX,[0x02d0255c]                ; 004031a3 | g_ClipTop
    CMP EBX,EAX                         ; 004031a8
    JGE 0x004031ae                      ; 004031aa
        ;   XREF to: 004031ae (CONDITIONAL_JUMP)  ; LAB_004031ae
    MOV EBX,EAX                         ; 004031ac
    MOV EDX,dword ptr [0x02d02564]      ; 004031ae | g_ClipBottom
        ;   Label: LAB_004031ae
    CMP ESI,EDX                         ; 004031b4
    JLE 0x004031ba                      ; 004031b6
        ;   XREF to: 004031ba (CONDITIONAL_JUMP)  ; LAB_004031ba
    MOV ESI,EDX                         ; 004031b8
    CMP EBX,ESI                         ; 004031ba
        ;   Label: LAB_004031ba
    JG 0x004031f8                       ; 004031bc
        ;   XREF to: 004031f8 (CONDITIONAL_JUMP)  ; LAB_004031f8
    MOV EAX,[0x02d02570]                ; 004031be | g_ActiveRenderColor
    MOV dword ptr [ESP],EAX             ; 004031c3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004031c6
    MOV [0x02d02570],EAX                ; 004031ca | g_ActiveRenderColor
    JG 0x004031f0                       ; 004031cf
        ;   XREF to: 004031f0 (CONDITIONAL_JUMP)  ; LAB_004031f0
    PUSH EDI                            ; 004031d1
        ;   Label: LAB_004031d1
    PUSH EBX                            ; 004031d2
    PUSH EBP                            ; 004031d3
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004031d4
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    INC EBX                             ; 004031d9
    ADD ESP,0xc                         ; 004031da
    CMP EBX,ESI                         ; 004031dd
    JLE 0x004031d1                      ; 004031df
        ;   XREF to: 004031d1 (CONDITIONAL_JUMP)  ; LAB_004031d1
    LEA EAX,[EAX]                       ; 004031e1
    LEA EDX,[EDX]                       ; 004031e7
    LEA EAX,[EAX]                       ; 004031ed
    MOV EAX,dword ptr [ESP]             ; 004031f0
        ;   Label: LAB_004031f0
    MOV [0x02d02570],EAX                ; 004031f3 | g_ActiveRenderColor
    ADD ESP,0x4                         ; 004031f8
        ;   Label: LAB_004031f8
    POP EBP                             ; 004031fb
    POP EDI                             ; 004031fc
    POP ESI                             ; 004031fd
    POP EBX                             ; 004031fe
    RET                                 ; 004031ff

