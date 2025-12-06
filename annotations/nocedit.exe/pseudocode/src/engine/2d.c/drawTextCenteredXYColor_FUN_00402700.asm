; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredXYColor_FUN_00402700(int left_x, int right_x, int y_pos, char * text)
;
; Parameters:
; int              Stack[0x4]:4   left_x
; int              Stack[0x8]:4   right_x
; int              Stack[0xc]:4   y_pos
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 at 004735a9
;
; Called Functions:
;   engine_2d.c_drawTextCenteredColor_FUN_004026c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402700
        ;   Label: engine_2d.c_drawTextCenteredXYColor_FUN_00402700
    PUSH ESI                            ; 00402701
    MOV EDX,dword ptr [ESP + 0x14]      ; 00402702
    PUSH EDX                            ; 00402706
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402707
    PUSH ECX                            ; 0040270b
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040270c
    PUSH EBX                            ; 00402710
    MOV ESI,dword ptr [ESP + 0x24]      ; 00402711
    PUSH ESI                            ; 00402715
    CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0 ; 00402716 | void engine_2d.c_drawTextCenteredColor_FUN_004026c0(char * text, int left_x, int right_x, int y_pos)
        ;   XREF to: 004026c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0040271b
    POP ESI                             ; 0040271e
    POP EBX                             ; 0040271f
    RET                                 ; 00402720

