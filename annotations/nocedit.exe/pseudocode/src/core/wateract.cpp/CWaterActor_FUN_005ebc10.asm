; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_wateract.cpp_CWaterActor_FUN_005ebc10(CWaterActor * this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__006574bf
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ebc10
        ;   Label: core_wateract.cpp_CWaterActor_FUN_005ebc10
    PUSH EDI                            ; 005ebc11
    PUSH EBP                            ; 005ebc12
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ebc13
    PUSH EBX                            ; 005ebc17
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ebc18
    PUSH EDX                            ; 005ebc1c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 005ebc1d
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 005ebc22
    ADD ESP,0x8                         ; 005ebc24
    ADD ECX,0xb                         ; 005ebc27
    PUSH ECX                            ; 005ebc2a
    MOV EDI,dword ptr [0x02d02558]      ; 005ebc2b | g_ClipLeft
    PUSH EDI                            ; 005ebc31
    PUSH 0x6574bf                       ; 005ebc32 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 005ebc37
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005ebc39
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EBP,dword ptr [EBX]             ; 005ebc3e
    ADD EBP,0xb                         ; 005ebc40
    ADD ESP,0xc                         ; 005ebc43
    MOV dword ptr [EBX],EBP             ; 005ebc46
    POP EBP                             ; 005ebc48
    POP EDI                             ; 005ebc49
    POP EBX                             ; 005ebc4a
    LEA EAX,[EAX]                       ; 005ebc4b
    MOV ECX,ECX                         ; 005ebc4e

