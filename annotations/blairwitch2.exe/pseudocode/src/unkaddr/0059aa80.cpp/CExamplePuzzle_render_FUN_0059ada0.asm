; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkaddr_0059aa80_cpp_CExamplePuzzle_render_FUN_0059ada0(CExamplePuzzle *this_ptr)
;
; Parameters:
; CExamplePuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_drawRect_FUN_00403170
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   shape_edittool.cpp_FUN_0047f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ada0
        ;   Label: unkaddr_0059aa80.cpp_CExamplePuzzle_render_FUN_0059ada0
    PUSH ESI                            ; 0059ada1
    PUSH EDI                            ; 0059ada2
    PUSH EBP                            ; 0059ada3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059ada4
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0059ada8
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    MOV ECX,dword ptr [ESI + 0x10]      ; 0059adad
    PUSH ECX                            ; 0059adb0
    MOV EBX,dword ptr [ESI + 0xc]       ; 0059adb1
    PUSH EBX                            ; 0059adb4
    MOV EDI,dword ptr [ESI + 0x8]       ; 0059adb5
    PUSH EDI                            ; 0059adb8
    MOV EBP,dword ptr [ESI + 0x4]       ; 0059adb9
    MOV EDX,0xff                        ; 0059adbc
    PUSH EBP                            ; 0059adc1
    MOV dword ptr [0x01c35e60],EDX      ; 0059adc2 | DAT_01c35e60
    CALL engine_2d.c_drawRect_FUN_00403170 ; 0059adc8
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawRect_FUN_00403170(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0059adcd
    PUSH 0x0                            ; 0059add0
    MOV EAX,[0x006138e0]                ; 0059add2 | g_CEditorToolsPtr
    PUSH EAX                            ; 0059add7
    CALL shape_edittool.cpp_FUN_0047f210 ; 0059add8
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f210()
    ADD ESP,0x8                         ; 0059addd
    POP EBP                             ; 0059ade0
    POP EDI                             ; 0059ade1
    POP ESI                             ; 0059ade2
    POP EBX                             ; 0059ade3
    RET                                 ; 0059ade4

