; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_drawTextLine_FUN_0040d240(int *y_position,char *text)
;
; Parameters:
; int *            Stack[0x4]:4   y_position
; char *           Stack[0x8]:4   text
;
; XREF[5]:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 at 0040d1a1
;   core_barrier.cpp_CBarrier_showEditorHelp_FUN_00414610 at 00414662
;   core_lever.cpp_CLever_showEditorHelp_FUN_00505390 at 005053c0
;   core_stairs.cpp_CStairs_showEditorHelp_FUN_005bab90 at 005babcc
;   core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350 at 005e13c0
;
; Referenced Globals:
;   int g_ClipLeft
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d240
        ;   Label: core_actor.cpp_drawTextLine_FUN_0040d240
    PUSH ESI                            ; 0040d241
    PUSH EDI                            ; 0040d242
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d243
    MOV EDX,dword ptr [EBX]             ; 0040d247
    PUSH EDX                            ; 0040d249
    MOV ECX,dword ptr [0x02d02558]      ; 0040d24a | g_ClipLeft
    PUSH ECX                            ; 0040d250
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040d251
    PUSH ESI                            ; 0040d255
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040d256
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0040d25b
    ADD EDI,0xb                         ; 0040d25d
    ADD ESP,0xc                         ; 0040d260
    MOV dword ptr [EBX],EDI             ; 0040d263
    POP EDI                             ; 0040d265
    POP ESI                             ; 0040d266
    POP EBX                             ; 0040d267
    RET                                 ; 0040d268

