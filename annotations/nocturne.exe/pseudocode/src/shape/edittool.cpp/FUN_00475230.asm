; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_00475230(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049de75
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 at 00474e08
;
; Referenced Globals:
;   double DOUBLE_0057ee22 = 294912
;   undefined4 DAT_01bcde1c
;   undefined4 DAT_01bcde20
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01bd1d94
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920
;   shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0
;   wincore_winrun.cpp_getTime_FUN_00558a30
;   wincore_winrun.cpp_setCursorPosition_FUN_00558d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475230
        ;   Label: shape_edittool.cpp_FUN_00475230
    PUSH ESI                            ; 00475231
    PUSH EDI                            ; 00475232
    PUSH EBP                            ; 00475233
    MOV EBP,ESP                         ; 00475234
    SUB ESP,0x4                         ; 00475236
    AND ESP,0xfffffff8                  ; 00475239
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047523c
    PUSH EBX                            ; 0047523f
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0 ; 00475240
        ;   XREF to: 00475db0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0()
    MOV EDX,dword ptr [EBX + 0x10c]     ; 00475245
    ADD ESP,0x4                         ; 0047524b
    TEST EDX,EDX                        ; 0047524e
    JZ 0x00475270                       ; 00475250
        ;   XREF to: 00475270 (CONDITIONAL_JUMP)  ; LAB_00475270
    MOV ECX,dword ptr [EBX + 0x118]     ; 00475252
    PUSH ECX                            ; 00475258
    PUSH EBX                            ; 00475259
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040 ; 0047525a
        ;   XREF to: 00476040 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0047525f
    TEST EAX,EAX                        ; 00475262
    JNZ 0x004753f6                      ; 00475264
        ;   XREF to: 004753f6 (CONDITIONAL_JUMP)  ; LAB_004753f6
    MOV dword ptr [EBX + 0x10c],EAX     ; 0047526a
    PUSH EBX                            ; 00475270
        ;   Label: LAB_00475270
    MOV EAX,dword ptr [EBX + 0xc]       ; 00475271
    CALL dword ptr [EAX + 0x18]         ; 00475274
    ADD ESP,0x4                         ; 00475277
    TEST EAX,EAX                        ; 0047527a
    JL 0x00475403                       ; 0047527c
        ;   XREF to: 00475403 (CONDITIONAL_JUMP)  ; LAB_00475403
    PUSH EBX                            ; 00475282
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0 ; 00475283
        ;   XREF to: 00475db0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0()
    MOV ESI,dword ptr [EBX + 0x78]      ; 00475288
    ADD ESP,0x4                         ; 0047528b
    TEST ESI,ESI                        ; 0047528e
    JNZ 0x004753ea                      ; 00475290
        ;   XREF to: 004753ea (CONDITIONAL_JUMP)  ; LAB_004753ea
    MOV EDI,dword ptr [EBX + 0x16c]     ; 00475296
    LEA ECX,[EBX + 0x138]               ; 0047529c
    CMP EDI,0x1                         ; 004752a2
    JNZ 0x0047540f                      ; 004752a5
        ;   XREF to: 0047540f (CONDITIONAL_JUMP)  ; LAB_0047540f
    MOV EAX,dword ptr [EBX + 0x11c]     ; 004752ab
    MOV dword ptr [EBX + 0x138],EAX     ; 004752b1
    MOV EAX,dword ptr [EBX]             ; 004752b7
    MOV dword ptr [EBX + 0x13c],EAX     ; 004752b9
    MOV EAX,dword ptr [EBX + 0x124]     ; 004752bf
    PUSH ECX                            ; 004752c5
    MOV dword ptr [EBX + 0x140],EAX     ; 004752c6
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920 ; 004752cc
        ;   XREF to: 00476920 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x138]     ; 004752d1
    ADD ESP,0x4                         ; 004752d7
        ;   Label: LAB_004752d7
    MOV dword ptr [EBX + 0x11c],EAX     ; 004752da
    MOV ECX,dword ptr [EBX + 0x12c]     ; 004752e0
        ;   Label: LAB_004752e0
    MOV EAX,dword ptr [EBX + 0x124]     ; 004752e6
    IMUL EAX,ECX                        ; 004752ec
    MOV ESI,dword ptr [EBX + 0x11c]     ; 004752ef
    MOV EDI,dword ptr [EBX + 0x118]     ; 004752f5
    ADD EAX,ESI                         ; 004752fb
    CMP EAX,EDI                         ; 004752fd
    JG 0x00475308                       ; 004752ff
        ;   XREF to: 00475308 (CONDITIONAL_JUMP)  ; LAB_00475308
    DEC EAX                             ; 00475301
    MOV dword ptr [EBX + 0x118],EAX     ; 00475302
    MOV EDX,dword ptr [EBX + 0x11c]     ; 00475308
        ;   Label: LAB_00475308
    CMP EDX,dword ptr [EBX + 0x118]     ; 0047530e
    JLE 0x0047531c                      ; 00475314
        ;   XREF to: 0047531c (CONDITIONAL_JUMP)  ; LAB_0047531c
    MOV dword ptr [EBX + 0x118],EDX     ; 00475316
    MOV ECX,dword ptr [0x01c00c58]      ; 0047531c | DAT_01c00c58
        ;   Label: LAB_0047531c
    MOV EAX,[0x01bd1d8c]                ; 00475322 | DAT_01bd1d8c
    MOV EDX,dword ptr [0x01bd1d90]      ; 00475327 | DAT_01bd1d90
    CMP EAX,ECX                         ; 0047532d
    JGE 0x00475333                      ; 0047532f
        ;   XREF to: 00475333 (CONDITIONAL_JUMP)  ; LAB_00475333
    MOV EAX,ECX                         ; 00475331
    MOV ESI,dword ptr [0x01c00c60]      ; 00475333 | DAT_01c00c60
        ;   Label: LAB_00475333
    CMP EAX,ESI                         ; 00475339
    JLE 0x0047533f                      ; 0047533b
        ;   XREF to: 0047533f (CONDITIONAL_JUMP)  ; LAB_0047533f
    MOV EAX,ESI                         ; 0047533d
    MOV EDI,dword ptr [0x01c00c5c]      ; 0047533f | DAT_01c00c5c
        ;   Label: LAB_0047533f
    CMP EDX,EDI                         ; 00475345
    JGE 0x0047534b                      ; 00475347
        ;   XREF to: 0047534b (CONDITIONAL_JUMP)  ; LAB_0047534b
    MOV EDX,EDI                         ; 00475349
    MOV ECX,dword ptr [0x01c00c64]      ; 0047534b | DAT_01c00c64
        ;   Label: LAB_0047534b
    CMP EDX,ECX                         ; 00475351
    JLE 0x00475357                      ; 00475353
        ;   XREF to: 00475357 (CONDITIONAL_JUMP)  ; LAB_00475357
    MOV EDX,ECX                         ; 00475355
    PUSH EDX                            ; 00475357
        ;   Label: LAB_00475357
    PUSH EAX                            ; 00475358
    CALL wincore_winrun.cpp_setCursorPosition_FUN_00558d60 ; 00475359
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_00558d60(int x, int y)
    MOV AH,byte ptr [0x01bd1d94]        ; 0047535e | DAT_01bd1d94
    ADD ESP,0x8                         ; 00475364
    TEST AH,0x1                         ; 00475367
    JZ 0x004753ea                       ; 0047536a
        ;   XREF to: 004753ea (CONDITIONAL_JUMP)  ; LAB_004753ea
    MOV ESI,dword ptr [0x01bd1d90]      ; 00475370 | DAT_01bd1d90
    PUSH ESI                            ; 00475376
    MOV EDI,dword ptr [0x01bd1d8c]      ; 00475377 | DAT_01bd1d8c
    PUSH EDI                            ; 0047537d
    PUSH EBX                            ; 0047537e
    CALL shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10 ; 0047537f
        ;   XREF to: 00475f10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10(CPickList * this_ptr, int mouse_x, int mouse_y)
    ADD ESP,0xc                         ; 00475384
    MOV ESI,EAX                         ; 00475387
    TEST EAX,EAX                        ; 00475389
    JL 0x004753e4                       ; 0047538b
        ;   XREF to: 004753e4 (CONDITIONAL_JUMP)  ; LAB_004753e4
    MOV DL,byte ptr [0x01bd1d94]        ; 0047538d | DAT_01bd1d94
    AND DL,0xfe                         ; 00475393
    MOV dword ptr [EBX + 0x118],EAX     ; 00475396
    MOV byte ptr [0x01bd1d94],DL        ; 0047539c | DAT_01bd1d94
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004753a2
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [0x01bcde1c]      ; 004753a7 | DAT_01bcde1c
    MOV EDX,EAX                         ; 004753ad
    SUB EAX,ECX                         ; 004753af
    TEST EAX,EAX                        ; 004753b1
    JLE 0x004753de                      ; 004753b3
        ;   XREF to: 004753de (CONDITIONAL_JUMP)  ; LAB_004753de
    MOV dword ptr [ESP],EAX             ; 004753b5
    FILD dword ptr [ESP]                ; 004753b8
    FCOMP double ptr [0x0057ee22]       ; 004753bb | DOUBLE_0057ee22
    FNSTSW AX                           ; 004753c1
    SAHF                                ; 004753c3
    JNC 0x004753de                      ; 004753c4
        ;   XREF to: 004753de (CONDITIONAL_JUMP)  ; LAB_004753de
    MOV EDI,dword ptr [0x01bcde20]      ; 004753c6 | DAT_01bcde20
    CMP EDI,dword ptr [EBX + 0x118]     ; 004753cc
    JNZ 0x004753de                      ; 004753d2
        ;   XREF to: 004753de (CONDITIONAL_JUMP)  ; LAB_004753de
    MOV dword ptr [EBX + 0x10c],0x1     ; 004753d4
    MOV dword ptr [0x01bcde1c],EDX      ; 004753de | DAT_01bcde1c
        ;   Label: LAB_004753de
    MOV dword ptr [0x01bcde20],ESI      ; 004753e4 | DAT_01bcde20
        ;   Label: LAB_004753e4
    MOV EAX,0xfffffffe                  ; 004753ea
        ;   Label: LAB_004753ea
    MOV ESP,EBP                         ; 004753ef
    POP EBP                             ; 004753f1
    POP EDI                             ; 004753f2
    POP ESI                             ; 004753f3
    POP EBX                             ; 004753f4
    RET                                 ; 004753f5
    MOV EAX,dword ptr [EBX + 0x118]     ; 004753f6
        ;   Label: LAB_004753f6
    MOV ESP,EBP                         ; 004753fc
    POP EBP                             ; 004753fe
    POP EDI                             ; 004753ff
    POP ESI                             ; 00475400
    POP EBX                             ; 00475401
    RET                                 ; 00475402
    MOV EAX,0xffffffff                  ; 00475403
        ;   Label: LAB_00475403
    MOV ESP,EBP                         ; 00475408
    POP EBP                             ; 0047540a
    POP EDI                             ; 0047540b
    POP ESI                             ; 0047540c
    POP EBX                             ; 0047540d
    RET                                 ; 0047540e
    CMP EDI,0x2                         ; 0047540f
        ;   Label: LAB_0047540f
    JNZ 0x004752e0                      ; 00475412
        ;   XREF to: 004752e0 (CONDITIONAL_JUMP)  ; LAB_004752e0
    MOV EDX,dword ptr [EBX + 0x11c]     ; 00475418
    MOV ESI,dword ptr [EBX + 0x124]     ; 0047541e
    MOV EAX,EDX                         ; 00475424
    SAR EDX,0x1f                        ; 00475426
    IDIV ESI                            ; 00475429
    MOV dword ptr [EBX + 0x138],EAX     ; 0047542b
    MOV EDI,dword ptr [EBX + 0x124]     ; 00475431
    MOV EAX,dword ptr [EBX]             ; 00475437
    ADD EAX,EDI                         ; 00475439
    LEA EDX,[EAX + -0x1]                ; 0047543b
    MOV EAX,EDX                         ; 0047543e
    SAR EDX,0x1f                        ; 00475440
    IDIV EDI                            ; 00475443
    MOV dword ptr [EBX + 0x13c],EAX     ; 00475445
    MOV EAX,dword ptr [EBX + 0x12c]     ; 0047544b
    PUSH ECX                            ; 00475451
    MOV dword ptr [EBX + 0x140],EAX     ; 00475452
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920 ; 00475458
        ;   XREF to: 00476920 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x138]     ; 0047545d
    IMUL EAX,dword ptr [EBX + 0x124]    ; 00475463
    JMP 0x004752d7                      ; 0047546a
        ;   XREF to: 004752d7 (UNCONDITIONAL_JUMP)  ; LAB_004752d7

