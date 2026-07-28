; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660(CEditorTools *this_ptr,char *message_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message_text
;
; XREF[3]:
;   core_dtrace.cpp_FUN_004673e0 at 004673f7
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004e9f11
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f8416
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   undefined4 DAT_005b761c
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd07c
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471660
        ;   Label: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
    PUSH ESI                            ; 00471661
    PUSH EDI                            ; 00471662
    PUSH EBP                            ; 00471663
    MOV ESI,dword ptr [ESP + 0x18]      ; 00471664
    CMP dword ptr [0x01bcd070],0x0      ; 00471668 | DAT_01bcd070
    JNZ 0x00471694                      ; 0047166f
        ;   XREF to: 00471694 (CONDITIONAL_JUMP)  ; LAB_00471694
    MOV ECX,0x57e4fa                    ; 00471671 | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8b                        ; 00471676
    PUSH 0x57e510                       ; 0047167b | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 00471680 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00471686 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0047168c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00471691
    MOV EAX,[0x01bcd070]                ; 00471694 | DAT_01bcd070
        ;   Label: LAB_00471694
    PUSH 0x6a                           ; 00471699
    MOV EBX,dword ptr [EAX + 0x3168]    ; 0047169b
    PUSH EAX                            ; 004716a1
    MOV dword ptr [0x01bcd9b8],EBX      ; 004716a2 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004716a8
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    MOV [0x01bcd9bc],EAX                ; 004716ad | DAT_01bcd9bc
    MOV EAX,[0x005b761c]                ; 004716b2 | DAT_005b761c
    MOV EDX,EAX                         ; 004716b7
    SAR EDX,0x1f                        ; 004716b9
    SUB EAX,EDX                         ; 004716bc
    SAR EAX,0x1                         ; 004716be
    ADD ESP,0x8                         ; 004716c0
    MOV EBX,EAX                         ; 004716c3
    TEST ESI,ESI                        ; 004716c5
    JNZ 0x00471732                      ; 004716c7
        ;   XREF to: 00471732 (CONDITIONAL_JUMP)  ; LAB_00471732
    PUSH 0x0                            ; 004716c9
        ;   Label: LAB_004716c9
    PUSH ESI                            ; 004716cb
    MOV ESI,dword ptr [0x01bcd9bc]      ; 004716cc | DAT_01bcd9bc
    LEA EAX,[ESI*0x4 + 0x0]             ; 004716d2
    SUB EAX,ESI                         ; 004716d9
    ADD EAX,EAX                         ; 004716db
    PUSH EAX                            ; 004716dd
    PUSH EBX                            ; 004716de
    MOV EAX,dword ptr [ESP + 0x24]      ; 004716df
    PUSH EAX                            ; 004716e3
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 004716e4
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004716e9
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004716ec
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EBX,dword ptr [0x01bcd07c]      ; 004716f1 | DAT_01bcd07c
    DEC EBX                             ; 004716f7
    MOV ESI,EAX                         ; 004716f8
    MOV EAX,EBX                         ; 004716fa
    SHL EAX,0x4                         ; 004716fc
    SUB EAX,EBX                         ; 004716ff
    PUSH 0x3f800000                     ; 00471701
    SHL EAX,0x2                         ; 00471706
    MOV EDX,0xffffffff                  ; 00471709
    SUB EAX,EBX                         ; 0047170e
    PUSH 0x0                            ; 00471710
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00471712
    MOV dword ptr [EAX*0x8 + 0x1bcd24c],ESI ; 00471716
    PUSH ECX                            ; 0047171d
    MOV dword ptr [EAX*0x8 + 0x1bcd250],EDX ; 0047171e
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 ; 00471725
        ;   XREF to: 00471760 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760(CEditorTools * this_ptr, float current_progress, float total_progress)
    ADD ESP,0xc                         ; 0047172a
    POP EBP                             ; 0047172d
    POP EDI                             ; 0047172e
    POP ESI                             ; 0047172f
    POP EBX                             ; 00471730
    RET                                 ; 00471731
    PUSH ESI                            ; 00471732
        ;   Label: LAB_00471732
    MOV EDI,dword ptr [0x01bcd070]      ; 00471733 | DAT_01bcd070
    PUSH EDI                            ; 00471739
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0047173a
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0047173f
    CMP EBX,EAX                         ; 00471742
    JGE 0x004716c9                      ; 00471744
        ;   XREF to: 004716c9 (CONDITIONAL_JUMP)  ; LAB_004716c9
    PUSH ESI                            ; 00471746
    MOV EBP,dword ptr [0x01bcd070]      ; 00471747 | DAT_01bcd070
    PUSH EBP                            ; 0047174d
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0047174e
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 00471753
    MOV EBX,EAX                         ; 00471756
    JMP 0x004716c9                      ; 00471758
        ;   XREF to: 004716c9 (UNCONDITIONAL_JUMP)  ; LAB_004716c9

