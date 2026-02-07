; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_tvbat_cpp_CTVBat_showEditorHelp_FUN_005e5400(CTVBat *this_ptr,int *y_pos)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__00656a72
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5400
        ;   Label: core_tvbat.cpp_CTVBat_showEditorHelp_FUN_005e5400
    PUSH EDI                            ; 005e5401
    PUSH EBP                            ; 005e5402
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e5403
    PUSH EBX                            ; 005e5407
    MOV EDX,dword ptr [ESP + 0x14]      ; 005e5408
    PUSH EDX                            ; 005e540c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 005e540d
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 005e5412
    ADD ESP,0x8                         ; 005e5414
    ADD ECX,0xb                         ; 005e5417
    PUSH ECX                            ; 005e541a
    MOV EDI,dword ptr [0x02d02558]      ; 005e541b | g_ClipLeft
    PUSH EDI                            ; 005e5421
    PUSH 0x656a72                       ; 005e5422 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 005e5427
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005e5429
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 005e542e
    ADD EBP,0xb                         ; 005e5430
    ADD ESP,0xc                         ; 005e5433
    MOV dword ptr [EBX],EBP             ; 005e5436
    POP EBP                             ; 005e5438
    POP EDI                             ; 005e5439
    POP EBX                             ; 005e543a
    RET                                 ; 005e543b

