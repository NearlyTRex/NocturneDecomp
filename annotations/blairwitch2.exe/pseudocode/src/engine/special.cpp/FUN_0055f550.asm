; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_0055f550(int clear_lock_flag)
;
; Parameters:
; int              Stack[0x4]:4   clear_lock_flag
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760 at 004407d3
;   core_game.cpp_FUN_004b5190 at 004b5c49
;   core_game.cpp_FUN_004bcbf0 at 004bcdee
;   engine_special.cpp_presentToExternalRenderer_FUN_0055ff40 at 0055fff2
;   engine_special.cpp_setResolutionAndColorTable_FUN_0055f770 at 0055f848
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047baf0 at 0047bbb3
;   shape_edittool.cpp_FUN_0047bbd0 at 0047bc83
;   unkafter_minecar.cpp_FUN_004f23e0 at 004f23e2
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbdc
;   undefined4 DAT_0264bcfc
;   undefined4 DAT_0264bd00
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bd00],0x0      ; 0055f550 | DAT_0264bd00
        ;   Label: engine_special.cpp_FUN_0055f550
    JZ 0x0055f510                       ; 0055f557
        ;   XREF to: 0055f510 (CONDITIONAL_JUMP)  ; LAB_0055f510
    PUSH EBX                            ; 0055f559
    MOV ECX,0x1                         ; 0055f55a
    MOV EAX,[0x0264bcfc]                ; 0055f55f | DAT_0264bcfc
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f564
    MOV [0x006141c0],EAX                ; 0055f568 | DAT_006141c0
    MOV dword ptr [0x01c37788],ECX      ; 0055f56d | DAT_01c37788
    TEST EBX,EBX                        ; 0055f573
    JZ 0x0055f581                       ; 0055f575
        ;   XREF to: 0055f581 (CONDITIONAL_JUMP)  ; LAB_0055f581
    PUSH ESI                            ; 0055f577
    XOR ESI,ESI                         ; 0055f578
    MOV dword ptr [0x0264bd00],ESI      ; 0055f57a | DAT_0264bd00
    POP ESI                             ; 0055f580
    CALL dword ptr [0x0264bbdc]         ; 0055f581 | DAT_0264bbdc
        ;   Label: LAB_0055f581
    POP EBX                             ; 0055f587
    RET                                 ; 0055f588

