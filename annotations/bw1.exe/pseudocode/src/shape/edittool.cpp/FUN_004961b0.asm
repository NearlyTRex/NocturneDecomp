; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_004961b0(CEditorTools *this_ptr,char *message_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message_text
;
; XREF[3]:
;   core_dtrace.cpp_FUN_0048aaee at 0048ab07
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 at 0052cb31
;   engine_pod.cpp_FUN_0053bfbe at 0053c115
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   undefined4 DAT_0061b498
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_font.cpp_FUN_004c3ea0
;   engine_font.cpp_FUN_004c4510
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;   shape_edittool.cpp_FUN_004962b0
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004961b0
        ;   Label: shape_edittool.cpp_FUN_004961b0
    PUSH ESI                            ; 004961b1
    PUSH EDI                            ; 004961b2
    PUSH EBP                            ; 004961b3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004961b4
    CMP dword ptr [0x01c3eb50],0x0      ; 004961b8 | DAT_01c3eb50
    JNZ 0x004961e4                      ; 004961bf
        ;   XREF to: 004961e4 (CONDITIONAL_JUMP)  ; LAB_004961e4
    MOV ECX,0x5dbc68                    ; 004961c1 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa4                        ; 004961c6
    PUSH 0x5dbc7e                       ; 004961cb | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 004961d0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004961d6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004961dc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004961e1
    MOV EAX,[0x01c3eb50]                ; 004961e4 | DAT_01c3eb50
        ;   Label: LAB_004961e4
    PUSH 0x6a                           ; 004961e9
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 004961eb
    PUSH EAX                            ; 004961f1
    MOV dword ptr [0x01c3f538],EBX      ; 004961f2 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 004961f8
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV [0x01c3f53c],EAX                ; 004961fd | DAT_01c3f53c
    MOV EAX,[0x0061b498]                ; 00496202 | DAT_0061b498
    MOV EDX,EAX                         ; 00496207
    SAR EDX,0x1f                        ; 00496209
    SUB EAX,EDX                         ; 0049620c
    SAR EAX,0x1                         ; 0049620e
    ADD ESP,0x8                         ; 00496210
    MOV EBX,EAX                         ; 00496213
    TEST ESI,ESI                        ; 00496215
    JNZ 0x0049627d                      ; 00496217
        ;   XREF to: 0049627d (CONDITIONAL_JUMP)  ; LAB_0049627d
    PUSH 0x0                            ; 00496219
        ;   Label: LAB_00496219
    PUSH ESI                            ; 0049621b
    MOV ESI,dword ptr [0x01c3f53c]      ; 0049621c | DAT_01c3f53c
    LEA EAX,[ESI*0x4 + 0x0]             ; 00496222
    SUB EAX,ESI                         ; 00496229
    ADD EAX,EAX                         ; 0049622b
    PUSH EAX                            ; 0049622d
    PUSH EBX                            ; 0049622e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049622f
    PUSH EAX                            ; 00496233
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 00496234
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 00496239
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0049623c
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV ESI,EAX                         ; 00496241
    MOV EAX,[0x01c3eb5c]                ; 00496243 | DAT_01c3eb5c
    DEC EAX                             ; 00496248
    SHL EAX,0x3                         ; 00496249
    PUSH 0x3f800000                     ; 0049624c
    MOV EBX,EAX                         ; 00496251
    SHL EAX,0x6                         ; 00496253
    MOV EDX,0xffffffff                  ; 00496256
    SUB EAX,EBX                         ; 0049625b
    PUSH 0x0                            ; 0049625d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0049625f
    MOV dword ptr [EAX + 0x1c3ed4c],ESI ; 00496263
    PUSH ECX                            ; 00496269
    MOV dword ptr [EAX + 0x1c3ed50],EDX ; 0049626a
    CALL shape_edittool.cpp_FUN_004962b0 ; 00496270
        ;   XREF to: 004962b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004962b0()
    ADD ESP,0xc                         ; 00496275
    POP EBP                             ; 00496278
    POP EDI                             ; 00496279
    POP ESI                             ; 0049627a
    POP EBX                             ; 0049627b
    RET                                 ; 0049627c
    PUSH ESI                            ; 0049627d
        ;   Label: LAB_0049627d
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049627e | DAT_01c3eb50
    PUSH EDI                            ; 00496284
    CALL engine_font.cpp_FUN_004c3ea0   ; 00496285
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049628a
    CMP EBX,EAX                         ; 0049628d
    JGE 0x00496219                      ; 0049628f
        ;   XREF to: 00496219 (CONDITIONAL_JUMP)  ; LAB_00496219
    PUSH ESI                            ; 00496291
    MOV EBP,dword ptr [0x01c3eb50]      ; 00496292 | DAT_01c3eb50
    PUSH EBP                            ; 00496298
    CALL engine_font.cpp_FUN_004c3ea0   ; 00496299
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049629e
    MOV EBX,EAX                         ; 004962a1
    JMP 0x00496219                      ; 004962a3
        ;   XREF to: 00496219 (UNCONDITIONAL_JUMP)  ; LAB_00496219

