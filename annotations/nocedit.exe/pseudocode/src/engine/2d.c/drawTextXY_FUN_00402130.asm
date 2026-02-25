; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextXY_FUN_00402130(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; XREF[5]:
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d9ac
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da967
;   core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0 at 00577eff
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057e023
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057ab7c
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402130
        ;   Label: engine_2d.c_drawTextXY_FUN_00402130
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402131
    PUSH EDX                            ; 00402135
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402136
    PUSH ECX                            ; 0040213a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040213b
    PUSH EBX                            ; 0040213f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00402140
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402145
    POP EBX                             ; 00402148
    RET                                 ; 00402149

