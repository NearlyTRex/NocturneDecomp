; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e482
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 at 00474dff
;
; Called Functions:
;   FUN_00475470
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474e70
        ;   Label: shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00474e71
    MOV EDX,dword ptr [ESP + 0x14]      ; 00474e75
    PUSH EDX                            ; 00474e79
    MOV ECX,dword ptr [ESP + 0x10]      ; 00474e7a
    PUSH ECX                            ; 00474e7e
    PUSH EBX                            ; 00474e7f
    CALL FUN_00475470                   ; 00474e80
        ;   XREF to: 00475470 (UNCONDITIONAL_CALL)  ; undefined FUN_00475470()
    ADD ESP,0xc                         ; 00474e85
    MOV EAX,dword ptr [ESP + 0x10]      ; 00474e88
    PUSH EBX                            ; 00474e8c
    MOV dword ptr [EBX + 0x118],EAX     ; 00474e8d
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0 ; 00474e93
        ;   XREF to: 00475db0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0()
    ADD ESP,0x4                         ; 00474e98
    POP EBX                             ; 00474e9b
    RET                                 ; 00474e9c

