; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_004e8380(char *message_text)
;
; Parameters:
; char *           Stack[0x4]:4   message_text
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   core_menu.cpp_showCalibrationTest_FUN_004e84d0 at 004e850b
;
; Referenced Globals:
;   undefined4 s_Press_any_key_to_continu_005c72ad+1
;   TerminatedCString s_Monitor_calibration_005c72cb
;   undefined4 DAT_01549ab4
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b30f0
;   engine_special.cpp_clearScreen_FUN_00560d70
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   wincore_wddvmem.cpp_FUN_0057a8a0
;   wincore_winrun.cpp_getNextKeypress_FUN_00580790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8380
        ;   Label: core_menu.cpp_showCalibrationTestPattern_FUN_004e8380
    PUSH ESI                            ; 004e8381
    PUSH EDI                            ; 004e8382
    PUSH EBP                            ; 004e8383
    SUB ESP,0x100                       ; 004e8384
    MOV ESI,dword ptr [ESP + 0x114]     ; 004e838a
    MOV EDI,ESP                         ; 004e8391
    PUSH EDI                            ; 004e8393
    MOV AL,byte ptr [ESI]               ; 004e8394
        ;   Label: LAB_004e8394
    MOV byte ptr [EDI],AL               ; 004e8396
    CMP AL,0x0                          ; 004e8398
    JZ 0x004e83ac                       ; 004e839a
        ;   XREF to: 004e83ac (CONDITIONAL_JUMP)  ; LAB_004e83ac
    MOV AL,byte ptr [ESI + 0x1]         ; 004e839c
    ADD ESI,0x2                         ; 004e839f
    MOV byte ptr [EDI + 0x1],AL         ; 004e83a2
    ADD EDI,0x2                         ; 004e83a5
    CMP AL,0x0                          ; 004e83a8
    JNZ 0x004e8394                      ; 004e83aa
        ;   XREF to: 004e8394 (CONDITIONAL_JUMP)  ; LAB_004e8394
    POP EDI                             ; 004e83ac
        ;   Label: LAB_004e83ac
    PUSH 0x5c72ae                       ; 004e83ad | s_Press_any_key_to_continu_005c72ad+1
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e83b2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e83b7
    MOV EDI,ESP                         ; 004e83ba
    MOV ESI,EAX                         ; 004e83bc
    PUSH EDI                            ; 004e83be
    SUB ECX,ECX                         ; 004e83bf
    DEC ECX                             ; 004e83c1
    MOV AL,0x0                          ; 004e83c2
    SCASB.REPNE ES:EDI                  ; 004e83c4
    DEC EDI                             ; 004e83c6
    MOV AL,byte ptr [ESI]               ; 004e83c7
        ;   Label: LAB_004e83c7
    MOV byte ptr [EDI],AL               ; 004e83c9
    CMP AL,0x0                          ; 004e83cb
    JZ 0x004e83df                       ; 004e83cd
        ;   XREF to: 004e83df (CONDITIONAL_JUMP)  ; LAB_004e83df
    MOV AL,byte ptr [ESI + 0x1]         ; 004e83cf
    ADD ESI,0x2                         ; 004e83d2
    MOV byte ptr [EDI + 0x1],AL         ; 004e83d5
    ADD EDI,0x2                         ; 004e83d8
    CMP AL,0x0                          ; 004e83db
    JNZ 0x004e83c7                      ; 004e83dd
        ;   XREF to: 004e83c7 (CONDITIONAL_JUMP)  ; LAB_004e83c7
    POP EDI                             ; 004e83df
        ;   Label: LAB_004e83df
    PUSH 0x58                           ; 004e83e0
    MOV EDX,dword ptr [0x01549ab4]      ; 004e83e2 | DAT_01549ab4
    PUSH EDX                            ; 004e83e8
    CALL engine_font.cpp_FUN_004b30f0   ; 004e83e9
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e83ee
    MOV EDI,EAX                         ; 004e83f1
    MOV EAX,ESP                         ; 004e83f3
    PUSH EAX                            ; 004e83f5
    MOV ECX,dword ptr [0x01549ab4]      ; 004e83f6 | DAT_01549ab4
    PUSH ECX                            ; 004e83fc
    CALL engine_font.cpp_FUN_004b2a80   ; 004e83fd
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004e8402
    MOV ESI,EAX                         ; 004e8405
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004e8407
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0xffff                         ; 004e840c
    PUSH 0x0                            ; 004e8411
    PUSH 0x0                            ; 004e8413
    PUSH 0x1d737e8                      ; 004e8415
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004e841a
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,EDI                         ; 004e841f
    ADD ESP,0x10                        ; 004e8421
    LEA EDX,[EAX*0x4 + 0x0]             ; 004e8424
    PUSH -0x1                           ; 004e842b
    SUB EDX,EAX                         ; 004e842d
    MOV EAX,0x1e0                       ; 004e842f
    PUSH 0xf8                           ; 004e8434
    SUB EAX,EDX                         ; 004e8439
    PUSH EAX                            ; 004e843b
    MOV EDX,ESI                         ; 004e843c
    MOV EAX,ESI                         ; 004e843e
    SAR EDX,0x1f                        ; 004e8440
    SUB EAX,EDX                         ; 004e8443
    SAR EAX,0x1                         ; 004e8445
    MOV EDX,0x140                       ; 004e8447
    SUB EDX,EAX                         ; 004e844c
    PUSH EDX                            ; 004e844e
    LEA EAX,[ESP + 0x10]                ; 004e844f
    PUSH EAX                            ; 004e8453
    MOV EBX,dword ptr [0x01549ab4]      ; 004e8454 | DAT_01549ab4
    PUSH EBX                            ; 004e845a
    CALL engine_font.cpp_FUN_004b0a20   ; 004e845b
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e8460
    PUSH 0x5c72cb                       ; 004e8463 | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e8468
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e846d
    PUSH EAX                            ; 004e8470
    MOV EBP,dword ptr [0x01549ab4]      ; 004e8471 | DAT_01549ab4
    PUSH EBP                            ; 004e8477
    MOV ESI,EAX                         ; 004e8478
    CALL engine_font.cpp_FUN_004b2a80   ; 004e847a
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004e847f
    SAR EDX,0x1f                        ; 004e8481
    SUB EAX,EDX                         ; 004e8484
    SAR EAX,0x1                         ; 004e8486
    ADD ESP,0x8                         ; 004e8488
    PUSH -0x1                           ; 004e848b
    PUSH 0xf8                           ; 004e848d
    ADD EDI,EDI                         ; 004e8492
    MOV EDX,0x140                       ; 004e8494
    PUSH EDI                            ; 004e8499
    SUB EDX,EAX                         ; 004e849a
    PUSH EDX                            ; 004e849c
    PUSH ESI                            ; 004e849d
    MOV EAX,[0x01549ab4]                ; 004e849e | DAT_01549ab4
    PUSH EAX                            ; 004e84a3
    CALL engine_font.cpp_FUN_004b0a20   ; 004e84a4
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e84a9
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 004e84ac
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004e84b1
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00580790 ; 004e84b6
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00580790()
    ADD ESP,0x100                       ; 004e84bb
    POP EBP                             ; 004e84c1
    POP EDI                             ; 004e84c2
    POP ESI                             ; 004e84c3
    POP EBX                             ; 004e84c4
    RET                                 ; 004e84c5

