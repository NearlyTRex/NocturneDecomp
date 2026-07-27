; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_lockFrame_FUN_005322e0(void)
;
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 0044502e
;   core_game.cpp_FUN_0049cc10 at 0049cf3b
;   core_game.cpp_FUN_004a57c0 at 004a5984
;   engine_special.cpp_FUN_00532ba0 at 00532bec
;   engine_special.cpp_setResolutionAndColorTable_FUN_005324a0 at 00532542
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 at 00471de0
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d94
;   undefined4 DAT_02dc9e1c
;   undefined4 DAT_02dc9e20
;   undefined4 DAT_02dc9e24
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 005322e0 | DAT_01c02594
        ;   Label: engine_special.cpp_lockFrame_FUN_005322e0
    JNZ 0x005322ec                      ; 005322e7
        ;   XREF to: 005322ec (CONDITIONAL_JUMP)  ; LAB_005322ec
    XOR EAX,EAX                         ; 005322e9
    RET                                 ; 005322eb
        ;   Label: LAB_005322eb
    CALL dword ptr [0x02dc9d94]         ; 005322ec | DAT_02dc9d94
        ;   Label: LAB_005322ec
    TEST EAX,EAX                        ; 005322f2
    JZ 0x005322eb                       ; 005322f4
        ;   XREF to: 005322eb (CONDITIONAL_JUMP)  ; LAB_005322eb
    MOV EAX,[0x005b7624]                ; 005322f6 | DAT_005b7624
    MOV ECX,0x1                         ; 005322fb
    MOV [0x02dc9e20],EAX                ; 00532300 | DAT_02dc9e20
    MOV EAX,[0x02dc9e1c]                ; 00532305 | DAT_02dc9e1c
    MOV dword ptr [0x02dc9e24],ECX      ; 0053230a | DAT_02dc9e24
    MOV [0x005b7624],EAX                ; 00532310 | DAT_005b7624
    MOV EAX,ECX                         ; 00532315
    RET                                 ; 00532317

