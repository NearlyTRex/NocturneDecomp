; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1e77
;
; Called Functions:
;   FUN_0046f7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471630
        ;   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630
    PUSH ESI                            ; 00471631
    PUSH 0x1                            ; 00471632
    MOV EDX,dword ptr [ESP + 0x20]      ; 00471634
    PUSH EDX                            ; 00471638
    MOV ECX,dword ptr [ESP + 0x20]      ; 00471639
    PUSH ECX                            ; 0047163d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047163e
    PUSH EBX                            ; 00471642
    MOV ESI,dword ptr [ESP + 0x20]      ; 00471643
    PUSH ESI                            ; 00471647
    CALL FUN_0046f7e0                   ; 00471648
        ;   XREF to: 0046f7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f7e0()
    ADD ESP,0x14                        ; 0047164d
    POP ESI                             ; 00471650
    POP EBX                             ; 00471651
    RET                                 ; 00471652

