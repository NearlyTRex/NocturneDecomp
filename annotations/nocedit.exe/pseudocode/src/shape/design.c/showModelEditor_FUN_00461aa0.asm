; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_showModelEditor_FUN_00461aa0(void)
;
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f691
;
; Referenced Globals:
;   TerminatedCString s_The_Model_Editor_is_not__0061bf7d
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461aa0
        ;   Label: shape_design.c_showModelEditor_FUN_00461aa0
    PUSH ESI                            ; 00461aa1
    PUSH EDI                            ; 00461aa2
    PUSH EBP                            ; 00461aa3
    MOV EBP,ESP                         ; 00461aa4
    SUB ESP,0x0                         ; 00461aa6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00461aac
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00461ab1
    PUSH 0x0                            ; 00461ab3
    MOV EAX,0x61bf7d                    ; 00461ab5 | = "The Model Editor is not available.  H..."
    PUSH EAX                            ; 00461aba | = "The Model Editor is not available.  H..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461abb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461ac0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00461ac3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00461ac8
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    POP EBP                             ; 00461acd
    POP EDI                             ; 00461ace
    POP ESI                             ; 00461acf
    POP EBX                             ; 00461ad0
    RET                                 ; 00461ad1

