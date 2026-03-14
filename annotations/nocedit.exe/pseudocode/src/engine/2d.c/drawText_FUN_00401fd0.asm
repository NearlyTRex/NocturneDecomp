; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[134]:
;   core_actor.cpp_CActorPropertyList_render_FUN_0040e850 at 0040e960
;   core_actor.cpp_drawTextLine_FUN_0040d240 at 0040d256
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 at 0040d222
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043ccac
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043dbd2
;   core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0 at 0043de28
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443f8d
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443083
;   core_course.cpp_renderCourseGizmo_FUN_00443760 at 00443b1a
;   core_curtain.cpp_CCurtain_showEditorHelp_FUN_0044b8d0 at 0044b94d
;   ... and 124 more
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_drawTextMultiline_FUN_00401cf0
;   engine_2d.c_drawTextWrapped_FUN_00401c60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00401fd0
        ;   Label: engine_2d.c_drawText_FUN_00401fd0
    PUSH EDI                            ; 00401fd1
    PUSH EBP                            ; 00401fd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00401fd3
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401fd7
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401fdb
    CMP dword ptr [0x0066df74],0x0      ; 00401fdf | g_TextWrapEnabled
    JZ 0x00402007                       ; 00401fe6
        ;   XREF to: 00402007 (CONDITIONAL_JUMP)  ; LAB_00402007
    PUSH EBX                            ; 00401fe8
    MOV EBP,dword ptr [0x02d02564]      ; 00401fe9 | g_ClipBottom
    PUSH EBP                            ; 00401fef
    MOV EBX,dword ptr [0x02d02560]      ; 00401ff0 | g_ClipRight
    PUSH EBX                            ; 00401ff6
    PUSH EDX                            ; 00401ff7
    PUSH ECX                            ; 00401ff8
    PUSH EAX                            ; 00401ff9
    CALL engine_2d.c_drawTextWrapped_FUN_00401c60 ; 00401ffa
        ;   XREF to: 00401c60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextWrapped_FUN_00401c60(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x14                        ; 00401fff
    POP EBX                             ; 00402002
    POP EBP                             ; 00402003
    POP EDI                             ; 00402004
    POP ESI                             ; 00402005
    RET                                 ; 00402006
    MOV ESI,dword ptr [0x02d02564]      ; 00402007 | g_ClipBottom
        ;   Label: LAB_00402007
    PUSH ESI                            ; 0040200d
    MOV EDI,dword ptr [0x02d02560]      ; 0040200e | g_ClipRight
    PUSH EDI                            ; 00402014
    PUSH EDX                            ; 00402015
    PUSH ECX                            ; 00402016
    PUSH EAX                            ; 00402017
    CALL engine_2d.c_drawTextMultiline_FUN_00401cf0 ; 00402018
        ;   XREF to: 00401cf0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextMultiline_FUN_00401cf0(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x14                        ; 0040201d
    POP EBP                             ; 00402020
    POP EDI                             ; 00402021
    POP ESI                             ; 00402022
    RET                                 ; 00402023

