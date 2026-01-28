; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 (int *y_position,char *left_text,char *right_text)
;
; Parameters:
; int *            Stack[0x4]:4   y_position
; char *           Stack[0x8]:4   left_text
; char *           Stack[0xc]:4   right_text
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 at 0040d1d0
;   core_bat.cpp_CBat_FUN_00414fb0 at 00414fd5
;   core_frankgen.cpp_FUN_004d2740 at 004d2765
;   core_platfrm.cpp_FUN_0054f060 at 0054f073
;   core_teleport.cpp_CTeleportDest_FUN_005da970 at 005da995
;   core_teleport.cpp_CTeleport_FUN_005dadc0 at 005dae03
;   core_waypoint.cpp_CWayPoint_FUN_005ec690 at 005ec6c8
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_ClipLeft
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d1e0
        ;   Label: core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
    PUSH ESI                            ; 0040d1e1
    PUSH EDI                            ; 0040d1e2
    PUSH EBP                            ; 0040d1e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d1e4
    MOV EDX,dword ptr [EBX]             ; 0040d1e8
    PUSH EDX                            ; 0040d1ea
    MOV ECX,dword ptr [0x02d02558]      ; 0040d1eb | g_ClipLeft
    PUSH ECX                            ; 0040d1f1
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040d1f2
    PUSH ESI                            ; 0040d1f6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040d1f7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x00679394]                ; 0040d1fc | g_WindowWidth
    MOV EDX,EAX                         ; 0040d201
    SAR EDX,0x1f                        ; 0040d203
    SHL EDX,0x3                         ; 0040d206
    SBB EAX,EDX                         ; 0040d209
    SAR EAX,0x3                         ; 0040d20b
    ADD ESP,0xc                         ; 0040d20e
    MOV EDI,dword ptr [EBX]             ; 0040d211
    MOV EBP,dword ptr [0x02d02558]      ; 0040d213 | g_ClipLeft
    PUSH EDI                            ; 0040d219
    ADD EAX,EBP                         ; 0040d21a
    PUSH EAX                            ; 0040d21c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040d21d
    PUSH EAX                            ; 0040d221
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040d222
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EDX,dword ptr [EBX]             ; 0040d227
    ADD EDX,0xb                         ; 0040d229
    ADD ESP,0xc                         ; 0040d22c
    MOV dword ptr [EBX],EDX             ; 0040d22f
    POP EBP                             ; 0040d231
    POP EDI                             ; 0040d232
    POP ESI                             ; 0040d233
    POP EBX                             ; 0040d234
    RET                                 ; 0040d235

