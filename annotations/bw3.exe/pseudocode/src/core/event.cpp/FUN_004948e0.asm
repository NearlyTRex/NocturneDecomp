; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004948e0(CEventList *param_1,CEventList *param_2,int param_3)
;
;
; XREF[2]:
;   core_event.cpp_FUN_0048c2e0 at 0048e1ed
;   core_event.cpp_FUN_00494880 at 004948b8
;
; Referenced Globals:
;   undefined4 DAT_005bfe8a
;   TerminatedCString s_events_txt_005bfe8d
;   undefined4 DAT_005bfe98
;   TerminatedCString s_core_event_cpp_005bfe9c
;   TerminatedCString s_Too_many_game_flags_chec_005bfeae
;   TerminatedCString s_core_event_cpp_005bfed6
;   TerminatedCString s_Event_name_s_too_long_005bfee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_00494d80
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_string.c_memmove_FUN_005a54c0
;   crt_string.c_strupr_FUN_005a5b10
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004948e0
        ;   Label: core_event.cpp_FUN_004948e0
    PUSH ESI                            ; 004948e1
    PUSH EDI                            ; 004948e2
    PUSH EBP                            ; 004948e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004948e4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004948e8
    TEST EDX,EDX                        ; 004948ec
    JZ 0x004948f5                       ; 004948ee
        ;   XREF to: 004948f5 (CONDITIONAL_JUMP)  ; LAB_004948f5
    CMP byte ptr [EDX],0x0              ; 004948f0
    JNZ 0x004948fa                      ; 004948f3
        ;   XREF to: 004948fa (CONDITIONAL_JUMP)  ; LAB_004948fa
    POP EBP                             ; 004948f5
        ;   Label: LAB_004948f5
    POP EDI                             ; 004948f6
    POP ESI                             ; 004948f7
    POP EBX                             ; 004948f8
    RET                                 ; 004948f9
    MOV ECX,dword ptr [ESP + 0x18]      ; 004948fa
        ;   Label: LAB_004948fa
    PUSH ECX                            ; 004948fe
    PUSH EBP                            ; 004948ff
    CALL core_event.cpp_CEventList_findGameFlag_FUN_00494d80 ; 00494900
        ;   XREF to: 00494d80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findGameFlag_FUN_00494d80(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00494905
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00494908
    LEA ESI,[EBP + 0x190c]              ; 0049490c
    TEST EBX,EBX                        ; 00494912
    JZ 0x00494a31                       ; 00494914
        ;   XREF to: 00494a31 (CONDITIONAL_JUMP)  ; LAB_00494a31
    TEST EAX,EAX                        ; 0049491a
    JGE 0x004948f5                      ; 0049491c
        ;   XREF to: 004948f5 (CONDITIONAL_JUMP)  ; LAB_004948f5
    CMP dword ptr [EBP + 0x1908],0x32   ; 0049491e
    JGE 0x004949ba                      ; 00494925
        ;   XREF to: 004949ba (CONDITIONAL_JUMP)  ; LAB_004949ba
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049492b
        ;   Label: LAB_0049492b
    SUB ECX,ECX                         ; 0049492f
    DEC ECX                             ; 00494931
    XOR EAX,EAX                         ; 00494932
    SCASB.REPNE ES:EDI                  ; 00494934
    NOT ECX                             ; 00494936
    DEC ECX                             ; 00494938
    CMP ECX,0x20                        ; 00494939
    JC 0x00494965                       ; 0049493c
        ;   XREF to: 00494965 (CONDITIONAL_JUMP)  ; LAB_00494965
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049493e
    PUSH EDX                            ; 00494942
    MOV EDI,0x5bfed6                    ; 00494943 | = "..\\core\\event.cpp"
    MOV EAX,0xe46                       ; 00494948
    PUSH 0x5bfee8                       ; 0049494d | = "Event name %s too long!"
    MOV dword ptr [0x01d71de0],EDI      ; 00494952 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00494958 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0049495d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00494962
    MOV EDI,dword ptr [EBP + 0x1908]    ; 00494965
        ;   Label: LAB_00494965
    LEA ECX,[EBP + 0x190c]              ; 0049496b
    SHL EDI,0x5                         ; 00494971
    MOV ESI,dword ptr [ESP + 0x18]      ; 00494974
    ADD EDI,ECX                         ; 00494978
    PUSH EDI                            ; 0049497a
    MOV AL,byte ptr [ESI]               ; 0049497b
        ;   Label: LAB_0049497b
    MOV byte ptr [EDI],AL               ; 0049497d
    CMP AL,0x0                          ; 0049497f
    JZ 0x00494993                       ; 00494981
        ;   XREF to: 00494993 (CONDITIONAL_JUMP)  ; LAB_00494993
    MOV AL,byte ptr [ESI + 0x1]         ; 00494983
    ADD ESI,0x2                         ; 00494986
    MOV byte ptr [EDI + 0x1],AL         ; 00494989
    ADD EDI,0x2                         ; 0049498c
    CMP AL,0x0                          ; 0049498f
    JNZ 0x0049497b                      ; 00494991
        ;   XREF to: 0049497b (CONDITIONAL_JUMP)  ; LAB_0049497b
    POP EDI                             ; 00494993
        ;   Label: LAB_00494993
    MOV EAX,dword ptr [EBP + 0x1908]    ; 00494994
    SHL EAX,0x5                         ; 0049499a
    ADD EAX,ECX                         ; 0049499d
    PUSH EAX                            ; 0049499f
    CALL crt_string.c_strupr_FUN_005a5b10 ; 004949a0
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    MOV ECX,dword ptr [EBP + 0x1908]    ; 004949a5
    INC ECX                             ; 004949ab
    ADD ESP,0x4                         ; 004949ac
    MOV dword ptr [EBP + 0x1908],ECX    ; 004949af
    POP EBP                             ; 004949b5
    POP EDI                             ; 004949b6
    POP ESI                             ; 004949b7
    POP EBX                             ; 004949b8
    RET                                 ; 004949b9
    PUSH 0x5bfe8a                       ; 004949ba | DAT_005bfe8a
        ;   Label: LAB_004949ba
    PUSH 0x5bfe8d                       ; 004949bf | = "events.txt"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004949c4
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 004949c9
    MOV EDI,EAX                         ; 004949cc
    TEST EAX,EAX                        ; 004949ce
    JZ 0x00494a09                       ; 004949d0
        ;   XREF to: 00494a09 (CONDITIONAL_JUMP)  ; LAB_00494a09
    MOV EDX,dword ptr [EBP + 0x1908]    ; 004949d2
    XOR EBX,EBX                         ; 004949d8
    TEST EDX,EDX                        ; 004949da
    JLE 0x00494a00                      ; 004949dc
        ;   XREF to: 00494a00 (CONDITIONAL_JUMP)  ; LAB_00494a00
    PUSH ESI                            ; 004949de
        ;   Label: LAB_004949de
    PUSH 0x5bfe98                       ; 004949df | DAT_005bfe98
    PUSH EDI                            ; 004949e4
    INC EBX                             ; 004949e5
    ADD ESI,0x20                        ; 004949e6
    CALL crt_unknown.c_FUN_005a3140     ; 004949e9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBP + 0x1908]    ; 004949ee
    ADD ESP,0xc                         ; 004949f4
    CMP EBX,ECX                         ; 004949f7
    JL 0x004949de                       ; 004949f9
        ;   XREF to: 004949de (CONDITIONAL_JUMP)  ; LAB_004949de
    LEA EAX,[EAX]                       ; 004949fb
    MOV ECX,ECX                         ; 004949fe
    PUSH EDI                            ; 00494a00
        ;   Label: LAB_00494a00
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00494a01
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00494a06
    MOV EBX,0x5bfe9c                    ; 00494a09 | = "..\\core\\event.cpp"
        ;   Label: LAB_00494a09
    MOV ESI,0xe40                       ; 00494a0e
    PUSH 0x5bfeae                       ; 00494a13 | = "Too many game flags - check events.txt!"
    MOV dword ptr [0x01d71de0],EBX      ; 00494a18 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00494a1e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00494a24
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00494a29
    JMP 0x0049492b                      ; 00494a2c
        ;   XREF to: 0049492b (UNCONDITIONAL_JUMP)  ; LAB_0049492b
    TEST EAX,EAX                        ; 00494a31
        ;   Label: LAB_00494a31
    JL 0x004948f5                       ; 00494a33
        ;   XREF to: 004948f5 (CONDITIONAL_JUMP)  ; LAB_004948f5
    MOV EDI,dword ptr [EBP + 0x1908]    ; 00494a39
    DEC EDI                             ; 00494a3f
    MOV ECX,EDI                         ; 00494a40
    SUB ECX,EAX                         ; 00494a42
    SHL ECX,0x5                         ; 00494a44
    SHL EAX,0x5                         ; 00494a47
    PUSH ECX                            ; 00494a4a
    LEA ECX,[EAX + 0x20]                ; 00494a4b
    ADD ECX,ESI                         ; 00494a4e
    PUSH ECX                            ; 00494a50
    ADD EAX,ESI                         ; 00494a51
    PUSH EAX                            ; 00494a53
    MOV dword ptr [EBP + 0x1908],EDI    ; 00494a54
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00494a5a
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00494a5f
    POP EBP                             ; 00494a62
    POP EDI                             ; 00494a63
    POP ESI                             ; 00494a64
    POP EBX                             ; 00494a65
    RET                                 ; 00494a66

