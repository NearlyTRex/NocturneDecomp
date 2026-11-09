; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_004864f0(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[4]:
;   shape_edittool.cpp_FUN_0047d230 at 0047d388
;   shape_edittool.cpp_FUN_00483c00 at 00484024
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047c937
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c3a2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005bd95a
;   undefined4 DAT_005fba18
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b30f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004864f0
        ;   Label: shape_edittool.cpp_FUN_004864f0
    PUSH EDI                            ; 004864f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004864f2
    CMP dword ptr [0x01c5b0e0],0x0      ; 004864f6 | DAT_01c5b0e0
    JNZ 0x00486524                      ; 004864fd
        ;   XREF to: 00486524 (CONDITIONAL_JUMP)  ; LAB_00486524
    PUSH ESI                            ; 004864ff
    MOV ECX,0x5bcd25                    ; 00486500 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa7                        ; 00486505
    PUSH 0x5bcd3b                       ; 0048650a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0048650f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00486515 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0048651b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00486520
    POP ESI                             ; 00486523
    MOV EAX,[0x01c5b0e0]                ; 00486524 | DAT_01c5b0e0
        ;   Label: LAB_00486524
    PUSH 0x6a                           ; 00486529
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0048652b
    PUSH EAX                            ; 00486531
    MOV dword ptr [0x01c5bae0],ECX      ; 00486532 | DAT_01c5bae0
    CALL engine_font.cpp_FUN_004b30f0   ; 00486538
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0048653d
    MOV [0x01c5bae4],EAX                ; 00486540 | DAT_01c5bae4
    TEST EBX,EBX                        ; 00486545
    JNZ 0x0048654e                      ; 00486547
        ;   XREF to: 0048654e (CONDITIONAL_JUMP)  ; LAB_0048654e
    MOV EBX,0x5bd95a                    ; 00486549 | DAT_005bd95a
    PUSH EBX                            ; 0048654e | DAT_005bd95a
        ;   Label: LAB_0048654e
    MOV EDI,dword ptr [0x01c5b0e0]      ; 0048654f | DAT_01c5b0e0
    PUSH EDI                            ; 00486555
    CALL engine_font.cpp_FUN_004b2a80   ; 00486556
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV ECX,EAX                         ; 0048655b
    MOV EAX,[0x005fba18]                ; 0048655d | DAT_005fba18
    MOV EDX,EAX                         ; 00486562
    MOV EBX,0x28                        ; 00486564
    SAR EDX,0x1f                        ; 00486569
    IDIV EBX                            ; 0048656c
    ADD ESP,0x8                         ; 0048656e
    ADD EAX,ECX                         ; 00486571
    POP EDI                             ; 00486573
    POP EBX                             ; 00486574
    RET                                 ; 00486575

