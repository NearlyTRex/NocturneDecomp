; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_fillRectColor_FUN_004031c0(int x1,int y1,int x2,int y2,int color)
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
; XREF[16]:
;   core_flashlit.cpp_FUN_004b9f70 at 004b9fbb
;   core_fldnotes.cpp_FUN_004be0f0 at 004be425
;   core_game.cpp_CGame_renderIrisFade_FUN_004d61e0 at 004d62c8
;   core_game.cpp_CGame_renderOverlay_FUN_004cc2b0 at 004cc5e8
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d909d
;   core_game.cpp_drawHealthBar_FUN_004cc210 at 004cc29a
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004feedc
;   core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0 at 0050a755
;   core_script.cpp_CScript_renderSubtitles_FUN_005439b0 at 00543a5c
;   engine_2d.c_fillRectWithBorder_FUN_00403250 at 0040326c
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004031c0
        ;   Label: engine_2d.c_fillRectColor_FUN_004031c0
    PUSH ESI                            ; 004031c1
    PUSH EDI                            ; 004031c2
    PUSH EBP                            ; 004031c3
    SUB ESP,0x4                         ; 004031c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004031c7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004031cb
    MOV EDI,dword ptr [ESP + 0x20]      ; 004031cf
    MOV ESI,dword ptr [ESP + 0x24]      ; 004031d3
    MOV EDX,dword ptr [0x01c4f008]      ; 004031d7 | DAT_01c4f008
    CMP EBP,EDX                         ; 004031dd
    JGE 0x004031e3                      ; 004031df
        ;   XREF to: 004031e3 (CONDITIONAL_JUMP)  ; LAB_004031e3
    MOV EBP,EDX                         ; 004031e1
    MOV ECX,dword ptr [0x01c4f010]      ; 004031e3 | DAT_01c4f010
        ;   Label: LAB_004031e3
    CMP EDI,ECX                         ; 004031e9
    JLE 0x004031ef                      ; 004031eb
        ;   XREF to: 004031ef (CONDITIONAL_JUMP)  ; LAB_004031ef
    MOV EDI,ECX                         ; 004031ed
    CMP EBP,EDI                         ; 004031ef
        ;   Label: LAB_004031ef
    JG 0x00403248                       ; 004031f1
        ;   XREF to: 00403248 (CONDITIONAL_JUMP)  ; LAB_00403248
    MOV EAX,[0x01c4f00c]                ; 004031f3 | DAT_01c4f00c
    CMP EBX,EAX                         ; 004031f8
    JGE 0x004031fe                      ; 004031fa
        ;   XREF to: 004031fe (CONDITIONAL_JUMP)  ; LAB_004031fe
    MOV EBX,EAX                         ; 004031fc
    MOV EDX,dword ptr [0x01c4f014]      ; 004031fe | DAT_01c4f014
        ;   Label: LAB_004031fe
    CMP ESI,EDX                         ; 00403204
    JLE 0x0040320a                      ; 00403206
        ;   XREF to: 0040320a (CONDITIONAL_JUMP)  ; LAB_0040320a
    MOV ESI,EDX                         ; 00403208
    CMP EBX,ESI                         ; 0040320a
        ;   Label: LAB_0040320a
    JG 0x00403248                       ; 0040320c
        ;   XREF to: 00403248 (CONDITIONAL_JUMP)  ; LAB_00403248
    MOV EAX,[0x01c4f020]                ; 0040320e | DAT_01c4f020
    MOV dword ptr [ESP],EAX             ; 00403213
    MOV EAX,dword ptr [ESP + 0x28]      ; 00403216
    MOV [0x01c4f020],EAX                ; 0040321a | DAT_01c4f020
    JG 0x00403240                       ; 0040321f
        ;   XREF to: 00403240 (CONDITIONAL_JUMP)  ; LAB_00403240
    PUSH EDI                            ; 00403221
        ;   Label: LAB_00403221
    PUSH EBX                            ; 00403222
    PUSH EBP                            ; 00403223
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00403224
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    INC EBX                             ; 00403229
    ADD ESP,0xc                         ; 0040322a
    CMP EBX,ESI                         ; 0040322d
    JLE 0x00403221                      ; 0040322f
        ;   XREF to: 00403221 (CONDITIONAL_JUMP)  ; LAB_00403221
    LEA EAX,[EAX]                       ; 00403231
    LEA EDX,[EDX]                       ; 00403237
    LEA EAX,[EAX]                       ; 0040323d
    MOV EAX,dword ptr [ESP]             ; 00403240
        ;   Label: LAB_00403240
    MOV [0x01c4f020],EAX                ; 00403243 | DAT_01c4f020
    ADD ESP,0x4                         ; 00403248
        ;   Label: LAB_00403248
    POP EBP                             ; 0040324b
    POP EDI                             ; 0040324c
    POP ESI                             ; 0040324d
    POP EBX                             ; 0040324e
    RET                                 ; 0040324f

