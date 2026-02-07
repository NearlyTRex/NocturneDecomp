; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_emitter_cpp_CEmitter_showEditorHelp_FUN_004a9350(CEmitter *this_ptr,int *y_pos)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__006242d2
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9350
        ;   Label: core_emitter.cpp_CEmitter_showEditorHelp_FUN_004a9350
    PUSH EDI                            ; 004a9351
    PUSH EBP                            ; 004a9352
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a9353
    PUSH EBX                            ; 004a9357
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a9358
    PUSH EDX                            ; 004a935c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 004a935d
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 004a9362
    ADD ESP,0x8                         ; 004a9364
    ADD ECX,0xb                         ; 004a9367
    PUSH ECX                            ; 004a936a
    MOV EDI,dword ptr [0x02d02558]      ; 004a936b | g_ClipLeft
    PUSH EDI                            ; 004a9371
    PUSH 0x6242d2                       ; 004a9372 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 004a9377
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004a9379
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 004a937e
    ADD EBP,0xb                         ; 004a9380
    ADD ESP,0xc                         ; 004a9383
    MOV dword ptr [EBX],EBP             ; 004a9386
    POP EBP                             ; 004a9388
    POP EDI                             ; 004a9389
    POP EBX                             ; 004a938a
    RET                                 ; 004a938b

