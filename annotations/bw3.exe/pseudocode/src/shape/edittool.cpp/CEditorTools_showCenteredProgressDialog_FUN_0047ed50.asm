; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50(CEditorTools *this_ptr,char *message_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message_text
;
; XREF[3]:
;   core_dtrace.cpp_FUN_00473670 at 00473687
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504431
;   engine_pod.cpp_FUN_00513d20 at 00513e75
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005fba18
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_FUN_0047ee50
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ed50
        ;   Label: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50
    PUSH ESI                            ; 0047ed51
    PUSH EDI                            ; 0047ed52
    PUSH EBP                            ; 0047ed53
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047ed54
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047ed58 | DAT_01c5b0e0
    JNZ 0x0047ed84                      ; 0047ed5f
        ;   XREF to: 0047ed84 (CONDITIONAL_JUMP)  ; LAB_0047ed84
    MOV ECX,0x5bcd25                    ; 0047ed61 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa7                        ; 0047ed66
    PUSH 0x5bcd3b                       ; 0047ed6b | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047ed70 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047ed76 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047ed7c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047ed81
    MOV EAX,[0x01c5b0e0]                ; 0047ed84 | DAT_01c5b0e0
        ;   Label: LAB_0047ed84
    PUSH 0x6a                           ; 0047ed89
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0047ed8b
    PUSH EAX                            ; 0047ed91
    MOV dword ptr [0x01c5bae0],EBX      ; 0047ed92 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047ed98
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV [0x01c5bae4],EAX                ; 0047ed9d | DAT_01c5bae4
    MOV EAX,[0x005fba18]                ; 0047eda2 | DAT_005fba18
    MOV EDX,EAX                         ; 0047eda7
    SAR EDX,0x1f                        ; 0047eda9
    SUB EAX,EDX                         ; 0047edac
    SAR EAX,0x1                         ; 0047edae
    ADD ESP,0x8                         ; 0047edb0
    MOV EBX,EAX                         ; 0047edb3
    TEST ESI,ESI                        ; 0047edb5
    JNZ 0x0047ee1d                      ; 0047edb7
        ;   XREF to: 0047ee1d (CONDITIONAL_JUMP)  ; LAB_0047ee1d
    PUSH 0x0                            ; 0047edb9
        ;   Label: LAB_0047edb9
    PUSH ESI                            ; 0047edbb
    MOV ESI,dword ptr [0x01c5bae4]      ; 0047edbc | DAT_01c5bae4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0047edc2
    SUB EAX,ESI                         ; 0047edc9
    ADD EAX,EAX                         ; 0047edcb
    PUSH EAX                            ; 0047edcd
    PUSH EBX                            ; 0047edce
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047edcf
    PUSH EAX                            ; 0047edd3
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 0047edd4
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047edd9
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0047eddc
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ESI,EAX                         ; 0047ede1
    MOV EAX,[0x01c5b104]                ; 0047ede3 | DAT_01c5b104
    DEC EAX                             ; 0047ede8
    SHL EAX,0x3                         ; 0047ede9
    PUSH 0x3f800000                     ; 0047edec
    MOV EBX,EAX                         ; 0047edf1
    SHL EAX,0x6                         ; 0047edf3
    MOV EDX,0xffffffff                  ; 0047edf6
    SUB EAX,EBX                         ; 0047edfb
    PUSH 0x0                            ; 0047edfd
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047edff
    MOV dword ptr [EAX + 0x1c5b2f4],ESI ; 0047ee03
    PUSH ECX                            ; 0047ee09
    MOV dword ptr [EAX + 0x1c5b2f8],EDX ; 0047ee0a
    CALL shape_edittool.cpp_FUN_0047ee50 ; 0047ee10
        ;   XREF to: 0047ee50 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047ee50()
    ADD ESP,0xc                         ; 0047ee15
    POP EBP                             ; 0047ee18
    POP EDI                             ; 0047ee19
    POP ESI                             ; 0047ee1a
    POP EBX                             ; 0047ee1b
    RET                                 ; 0047ee1c
    PUSH ESI                            ; 0047ee1d
        ;   Label: LAB_0047ee1d
    MOV EDI,dword ptr [0x01c5b0e0]      ; 0047ee1e | DAT_01c5b0e0
    PUSH EDI                            ; 0047ee24
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 0047ee25
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047ee2a
    CMP EBX,EAX                         ; 0047ee2d
    JGE 0x0047edb9                      ; 0047ee2f
        ;   XREF to: 0047edb9 (CONDITIONAL_JUMP)  ; LAB_0047edb9
    PUSH ESI                            ; 0047ee31
    MOV EBP,dword ptr [0x01c5b0e0]      ; 0047ee32 | DAT_01c5b0e0
    PUSH EBP                            ; 0047ee38
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 0047ee39
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047ee3e
    MOV EBX,EAX                         ; 0047ee41
    JMP 0x0047edb9                      ; 0047ee43
        ;   XREF to: 0047edb9 (UNCONDITIONAL_JUMP)  ; LAB_0047edb9

