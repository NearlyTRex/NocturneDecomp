; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_0050a870(char *message_text)
;
; Parameters:
; char *           Stack[0x4]:4   message_text
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   core_menu.cpp_showCalibrationTest_FUN_0050a9c0 at 0050a9fb
;
; Referenced Globals:
;   TerminatedCString s_Press_any_key_to_continu_005e7b12
;   TerminatedCString s_Monitor_calibration_005e7b2f
;   undefined4 DAT_0152d248
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_font.cpp_FUN_004c1dd0
;   engine_font.cpp_FUN_004c3ea0
;   engine_font.cpp_FUN_004c4510
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;   wincore_wddvmem.cpp_FUN_005acff0
;   wincore_winrun.cpp_getNextKeypress_FUN_005b2510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a870
        ;   Label: core_menu.cpp_showCalibrationTestPattern_FUN_0050a870
    PUSH ESI                            ; 0050a871
    PUSH EDI                            ; 0050a872
    PUSH EBP                            ; 0050a873
    SUB ESP,0x100                       ; 0050a874
    MOV ESI,dword ptr [ESP + 0x114]     ; 0050a87a
    MOV EDI,ESP                         ; 0050a881
    PUSH EDI                            ; 0050a883
    MOV AL,byte ptr [ESI]               ; 0050a884
        ;   Label: LAB_0050a884
    MOV byte ptr [EDI],AL               ; 0050a886
    CMP AL,0x0                          ; 0050a888
    JZ 0x0050a89c                       ; 0050a88a
        ;   XREF to: 0050a89c (CONDITIONAL_JUMP)  ; LAB_0050a89c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050a88c
    ADD ESI,0x2                         ; 0050a88f
    MOV byte ptr [EDI + 0x1],AL         ; 0050a892
    ADD EDI,0x2                         ; 0050a895
    CMP AL,0x0                          ; 0050a898
    JNZ 0x0050a884                      ; 0050a89a
        ;   XREF to: 0050a884 (CONDITIONAL_JUMP)  ; LAB_0050a884
    POP EDI                             ; 0050a89c
        ;   Label: LAB_0050a89c
    PUSH 0x5e7b12                       ; 0050a89d | = "  Press any key to continue."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050a8a2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050a8a7
    MOV EDI,ESP                         ; 0050a8aa
    MOV ESI,EAX                         ; 0050a8ac
    PUSH EDI                            ; 0050a8ae
    SUB ECX,ECX                         ; 0050a8af
    DEC ECX                             ; 0050a8b1
    MOV AL,0x0                          ; 0050a8b2
    SCASB.REPNE ES:EDI                  ; 0050a8b4
    DEC EDI                             ; 0050a8b6
    MOV AL,byte ptr [ESI]               ; 0050a8b7
        ;   Label: LAB_0050a8b7
    MOV byte ptr [EDI],AL               ; 0050a8b9
    CMP AL,0x0                          ; 0050a8bb
    JZ 0x0050a8cf                       ; 0050a8bd
        ;   XREF to: 0050a8cf (CONDITIONAL_JUMP)  ; LAB_0050a8cf
    MOV AL,byte ptr [ESI + 0x1]         ; 0050a8bf
    ADD ESI,0x2                         ; 0050a8c2
    MOV byte ptr [EDI + 0x1],AL         ; 0050a8c5
    ADD EDI,0x2                         ; 0050a8c8
    CMP AL,0x0                          ; 0050a8cb
    JNZ 0x0050a8b7                      ; 0050a8cd
        ;   XREF to: 0050a8b7 (CONDITIONAL_JUMP)  ; LAB_0050a8b7
    POP EDI                             ; 0050a8cf
        ;   Label: LAB_0050a8cf
    PUSH 0x58                           ; 0050a8d0
    MOV EDX,dword ptr [0x0152d248]      ; 0050a8d2 | DAT_0152d248
    PUSH EDX                            ; 0050a8d8
    CALL engine_font.cpp_FUN_004c4510   ; 0050a8d9
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0050a8de
    MOV EDI,EAX                         ; 0050a8e1
    MOV EAX,ESP                         ; 0050a8e3
    PUSH EAX                            ; 0050a8e5
    MOV ECX,dword ptr [0x0152d248]      ; 0050a8e6 | DAT_0152d248
    PUSH ECX                            ; 0050a8ec
    CALL engine_font.cpp_FUN_004c3ea0   ; 0050a8ed
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0050a8f2
    MOV ESI,EAX                         ; 0050a8f5
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0050a8f7
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 0050a8fc
    PUSH 0x0                            ; 0050a901
    PUSH 0x0                            ; 0050a903
    PUSH 0x1d1eea0                      ; 0050a905
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 0050a90a
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,EDI                         ; 0050a90f
    ADD ESP,0x10                        ; 0050a911
    LEA EDX,[EAX*0x4 + 0x0]             ; 0050a914
    PUSH -0x1                           ; 0050a91b
    SUB EDX,EAX                         ; 0050a91d
    MOV EAX,0x1e0                       ; 0050a91f
    PUSH 0xf8                           ; 0050a924
    SUB EAX,EDX                         ; 0050a929
    PUSH EAX                            ; 0050a92b
    MOV EDX,ESI                         ; 0050a92c
    MOV EAX,ESI                         ; 0050a92e
    SAR EDX,0x1f                        ; 0050a930
    SUB EAX,EDX                         ; 0050a933
    SAR EAX,0x1                         ; 0050a935
    MOV EDX,0x140                       ; 0050a937
    SUB EDX,EAX                         ; 0050a93c
    PUSH EDX                            ; 0050a93e
    LEA EAX,[ESP + 0x10]                ; 0050a93f
    PUSH EAX                            ; 0050a943
    MOV EBX,dword ptr [0x0152d248]      ; 0050a944 | DAT_0152d248
    PUSH EBX                            ; 0050a94a
    CALL engine_font.cpp_FUN_004c1dd0   ; 0050a94b
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a950
    PUSH 0x5e7b2f                       ; 0050a953 | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050a958
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050a95d
    PUSH EAX                            ; 0050a960
    MOV EBP,dword ptr [0x0152d248]      ; 0050a961 | DAT_0152d248
    PUSH EBP                            ; 0050a967
    MOV ESI,EAX                         ; 0050a968
    CALL engine_font.cpp_FUN_004c3ea0   ; 0050a96a
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 0050a96f
    SAR EDX,0x1f                        ; 0050a971
    SUB EAX,EDX                         ; 0050a974
    SAR EAX,0x1                         ; 0050a976
    ADD ESP,0x8                         ; 0050a978
    PUSH -0x1                           ; 0050a97b
    PUSH 0xf8                           ; 0050a97d
    ADD EDI,EDI                         ; 0050a982
    MOV EDX,0x140                       ; 0050a984
    PUSH EDI                            ; 0050a989
    SUB EDX,EAX                         ; 0050a98a
    PUSH EDX                            ; 0050a98c
    PUSH ESI                            ; 0050a98d
    MOV EAX,[0x0152d248]                ; 0050a98e | DAT_0152d248
    PUSH EAX                            ; 0050a993
    CALL engine_font.cpp_FUN_004c1dd0   ; 0050a994
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a999
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 0050a99c
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050a9a1
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 0050a9a6
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
    ADD ESP,0x100                       ; 0050a9ab
    POP EBP                             ; 0050a9b1
    POP EDI                             ; 0050a9b2
    POP ESI                             ; 0050a9b3
    POP EBX                             ; 0050a9b4
    RET                                 ; 0050a9b5

