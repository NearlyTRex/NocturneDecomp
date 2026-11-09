; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_0049d950(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[4]:
;   shape_edittool.cpp_FUN_00494690 at 004947e8
;   shape_edittool.cpp_FUN_0049b060 at 0049b484
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493d97
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493802
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   undefined4 DAT_005dc89d
;   undefined4 DAT_0061b498
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_font.cpp_FUN_004c3ea0
;   engine_font.cpp_FUN_004c4510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d950
        ;   Label: shape_edittool.cpp_FUN_0049d950
    PUSH EDI                            ; 0049d951
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049d952
    CMP dword ptr [0x01c3eb50],0x0      ; 0049d956 | DAT_01c3eb50
    JNZ 0x0049d984                      ; 0049d95d
        ;   XREF to: 0049d984 (CONDITIONAL_JUMP)  ; LAB_0049d984
    PUSH ESI                            ; 0049d95f
    MOV ECX,0x5dbc68                    ; 0049d960 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa4                        ; 0049d965
    PUSH 0x5dbc7e                       ; 0049d96a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 0049d96f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0049d975 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049d97b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049d980
    POP ESI                             ; 0049d983
    MOV EAX,[0x01c3eb50]                ; 0049d984 | DAT_01c3eb50
        ;   Label: LAB_0049d984
    PUSH 0x6a                           ; 0049d989
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0049d98b
    PUSH EAX                            ; 0049d991
    MOV dword ptr [0x01c3f538],ECX      ; 0049d992 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 0049d998
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049d99d
    MOV [0x01c3f53c],EAX                ; 0049d9a0 | DAT_01c3f53c
    TEST EBX,EBX                        ; 0049d9a5
    JNZ 0x0049d9ae                      ; 0049d9a7
        ;   XREF to: 0049d9ae (CONDITIONAL_JUMP)  ; LAB_0049d9ae
    MOV EBX,0x5dc89d                    ; 0049d9a9 | DAT_005dc89d
    PUSH EBX                            ; 0049d9ae | DAT_005dc89d
        ;   Label: LAB_0049d9ae
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049d9af | DAT_01c3eb50
    PUSH EDI                            ; 0049d9b5
    CALL engine_font.cpp_FUN_004c3ea0   ; 0049d9b6
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV ECX,EAX                         ; 0049d9bb
    MOV EAX,[0x0061b498]                ; 0049d9bd | DAT_0061b498
    MOV EDX,EAX                         ; 0049d9c2
    MOV EBX,0x28                        ; 0049d9c4
    SAR EDX,0x1f                        ; 0049d9c9
    IDIV EBX                            ; 0049d9cc
    ADD ESP,0x8                         ; 0049d9ce
    ADD EAX,ECX                         ; 0049d9d1
    POP EDI                             ; 0049d9d3
    POP EBX                             ; 0049d9d4
    RET                                 ; 0049d9d5

