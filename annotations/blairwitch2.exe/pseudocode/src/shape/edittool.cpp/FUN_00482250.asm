; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00482250(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[7]:
;   FUN_0047c970 at 0047ca57
;   FUN_004b6170 at 004b677c
;   FUN_004ed260 at 004ee0ed
;   FUN_004eed60 at 004efab0
;   FUN_004fd280 at 004fd2ff
;   FUN_0055b110 at 0055b15c
;   FUN_0059c3d0 at 0059c4fb
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_006138e0
;   undefined4 DAT_006141cc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004032b0
;   FUN_0047e760
;   FUN_00482320
;   FUN_00482770
;   FUN_004831d0
;   FUN_004ab560
;   FUN_004e4500
;   FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482250
        ;   Label: FUN_00482250
    PUSH ESI                            ; 00482251
    PUSH EDI                            ; 00482252
    PUSH EBP                            ; 00482253
    MOV ESI,dword ptr [ESP + 0x14]      ; 00482254
    CMP dword ptr [0x01c25590],0x0      ; 00482258 | DAT_01c25590
    JNZ 0x00482284                      ; 0048225f
        ;   XREF to: 00482284 (CONDITIONAL_JUMP)  ; LAB_00482284
    MOV ECX,0x5d1e6f                    ; 00482261 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa0                        ; 00482266
    PUSH 0x5d1e85                       ; 0048226b | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 00482270 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00482276 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0048227c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00482281
    MOV EAX,[0x01c25590]                ; 00482284 | DAT_01c25590
        ;   Label: LAB_00482284
    PUSH 0x6a                           ; 00482289
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0048228b
    PUSH EAX                            ; 00482291
    MOV dword ptr [0x01c25f78],EBX      ; 00482292 | DAT_01c25f78
    CALL FUN_004ab560                   ; 00482298
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 0048229d
    MOV EDI,dword ptr [ESI]             ; 004822a0
    MOV [0x01c25f7c],EAX                ; 004822a2 | DAT_01c25f7c
    CMP EDI,0x1                         ; 004822a7
    JL 0x00482314                       ; 004822aa
        ;   XREF to: 00482314 (CONDITIONAL_JUMP)  ; LAB_00482314
    MOV EAX,dword ptr [ESP + 0x20]      ; 004822ac
    PUSH EAX                            ; 004822b0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004822b1
    PUSH EDX                            ; 004822b5
    MOV ECX,dword ptr [ESP + 0x20]      ; 004822b6
    PUSH ECX                            ; 004822ba
    MOV EBP,0x7f                        ; 004822bb
    PUSH ESI                            ; 004822c0
    MOV EDI,dword ptr [0x006141cc]      ; 004822c1 | DAT_006141cc
    MOV dword ptr [0x006141cc],EBP      ; 004822c7 | DAT_006141cc
    CALL FUN_00482320                   ; 004822cd
        ;   XREF to: 00482320 (UNCONDITIONAL_CALL)  ; undefined FUN_00482320()
    ADD ESP,0x10                        ; 004822d2
    PUSH ESI                            ; 004822d5
        ;   Label: LAB_004822d5
    CALL FUN_00482770                   ; 004822d6
        ;   XREF to: 00482770 (UNCONDITIONAL_CALL)  ; undefined FUN_00482770()
    ADD ESP,0x4                         ; 004822db
    PUSH ESI                            ; 004822de
    MOV EBX,EAX                         ; 004822df
    CALL FUN_004831d0                   ; 004822e1
        ;   XREF to: 004831d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004831d0()
    ADD ESP,0x4                         ; 004822e6
    CALL FUN_00589560                   ; 004822e9
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CMP EBX,-0x2                        ; 004822ee
    JZ 0x004822d5                       ; 004822f1
        ;   XREF to: 004822d5 (CONDITIONAL_JUMP)  ; LAB_004822d5
    CALL FUN_004032b0                   ; 004822f3
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV ESI,dword ptr [0x006138e0]      ; 004822f8 | DAT_006138e0
    PUSH ESI                            ; 004822fe
    CALL FUN_0047e760                   ; 004822ff
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e760()
    ADD ESP,0x4                         ; 00482304
    MOV dword ptr [0x006141cc],EDI      ; 00482307 | DAT_006141cc
    MOV EAX,EBX                         ; 0048230d
    POP EBP                             ; 0048230f
    POP EDI                             ; 00482310
    POP ESI                             ; 00482311
    POP EBX                             ; 00482312
    RET                                 ; 00482313
    MOV EAX,0xffffffff                  ; 00482314
        ;   Label: LAB_00482314
    POP EBP                             ; 00482319
    POP EDI                             ; 0048231a
    POP ESI                             ; 0048231b
    POP EBX                             ; 0048231c
    RET                                 ; 0048231d

