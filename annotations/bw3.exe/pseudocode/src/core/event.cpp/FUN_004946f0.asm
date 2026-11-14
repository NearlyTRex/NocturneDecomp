; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004946f0(CEventList *param_1,char *param_2,int param_3)
;
;
; XREF[3]:
;   core_event.cpp_FUN_0048c2e0 at 0048e0dc
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8d88
;   core_styldemo.cpp_CStylerDemon_processDamage_FUN_005a0330 at 005a03f0
;
; Referenced Globals:
;   undefined4 DAT_005bfdf0
;   TerminatedCString s_events_txt_005bfdf3
;   undefined4 DAT_005bfdfe
;   TerminatedCString s_core_event_cpp_005bfe02
;   TerminatedCString s_Too_many_persistent_even_005bfe14
;   TerminatedCString s_core_event_cpp_005bfe42
;   TerminatedCString s_Event_name_s_too_long_005bfe54
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_string.c_memmove_FUN_005a54c0
;   crt_string.c_strupr_FUN_005a5b10
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004946f0
        ;   Label: core_event.cpp_FUN_004946f0
    PUSH ESI                            ; 004946f1
    PUSH EDI                            ; 004946f2
    PUSH EBP                            ; 004946f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004946f4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004946f8
    TEST EDX,EDX                        ; 004946fc
    JZ 0x00494705                       ; 004946fe
        ;   XREF to: 00494705 (CONDITIONAL_JUMP)  ; LAB_00494705
    CMP byte ptr [EDX],0x0              ; 00494700
    JNZ 0x0049470a                      ; 00494703
        ;   XREF to: 0049470a (CONDITIONAL_JUMP)  ; LAB_0049470a
    POP EBP                             ; 00494705
        ;   Label: LAB_00494705
    POP EDI                             ; 00494706
    POP ESI                             ; 00494707
    POP EBX                             ; 00494708
    RET                                 ; 00494709
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049470a
        ;   Label: LAB_0049470a
    PUSH ECX                            ; 0049470e
    PUSH EBP                            ; 0049470f
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30 ; 00494710
        ;   XREF to: 00494d30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00494715
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00494718
    LEA ESI,[EBP + 0x2590]              ; 0049471c
    TEST EBX,EBX                        ; 00494722
    JZ 0x00494841                       ; 00494724
        ;   XREF to: 00494841 (CONDITIONAL_JUMP)  ; LAB_00494841
    TEST EAX,EAX                        ; 0049472a
    JGE 0x00494705                      ; 0049472c
        ;   XREF to: 00494705 (CONDITIONAL_JUMP)  ; LAB_00494705
    CMP dword ptr [EBP + 0x258c],0x64   ; 0049472e
    JGE 0x004947ca                      ; 00494735
        ;   XREF to: 004947ca (CONDITIONAL_JUMP)  ; LAB_004947ca
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049473b
        ;   Label: LAB_0049473b
    SUB ECX,ECX                         ; 0049473f
    DEC ECX                             ; 00494741
    XOR EAX,EAX                         ; 00494742
    SCASB.REPNE ES:EDI                  ; 00494744
    NOT ECX                             ; 00494746
    DEC ECX                             ; 00494748
    CMP ECX,0x20                        ; 00494749
    JC 0x00494775                       ; 0049474c
        ;   XREF to: 00494775 (CONDITIONAL_JUMP)  ; LAB_00494775
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049474e
    PUSH EDX                            ; 00494752
    MOV EDI,0x5bfe42                    ; 00494753 | = "..\\core\\event.cpp"
    MOV EAX,0xdf0                       ; 00494758
    PUSH 0x5bfe54                       ; 0049475d | = "Event name %s too long!"
    MOV dword ptr [0x01d71de0],EDI      ; 00494762 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00494768 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0049476d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00494772
    MOV EDI,dword ptr [EBP + 0x258c]    ; 00494775
        ;   Label: LAB_00494775
    LEA ECX,[EBP + 0x2590]              ; 0049477b
    SHL EDI,0x5                         ; 00494781
    MOV ESI,dword ptr [ESP + 0x18]      ; 00494784
    ADD EDI,ECX                         ; 00494788
    PUSH EDI                            ; 0049478a
    MOV AL,byte ptr [ESI]               ; 0049478b
        ;   Label: LAB_0049478b
    MOV byte ptr [EDI],AL               ; 0049478d
    CMP AL,0x0                          ; 0049478f
    JZ 0x004947a3                       ; 00494791
        ;   XREF to: 004947a3 (CONDITIONAL_JUMP)  ; LAB_004947a3
    MOV AL,byte ptr [ESI + 0x1]         ; 00494793
    ADD ESI,0x2                         ; 00494796
    MOV byte ptr [EDI + 0x1],AL         ; 00494799
    ADD EDI,0x2                         ; 0049479c
    CMP AL,0x0                          ; 0049479f
    JNZ 0x0049478b                      ; 004947a1
        ;   XREF to: 0049478b (CONDITIONAL_JUMP)  ; LAB_0049478b
    POP EDI                             ; 004947a3
        ;   Label: LAB_004947a3
    MOV EAX,dword ptr [EBP + 0x258c]    ; 004947a4
    SHL EAX,0x5                         ; 004947aa
    ADD EAX,ECX                         ; 004947ad
    PUSH EAX                            ; 004947af
    CALL crt_string.c_strupr_FUN_005a5b10 ; 004947b0
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    MOV ECX,dword ptr [EBP + 0x258c]    ; 004947b5
    INC ECX                             ; 004947bb
    ADD ESP,0x4                         ; 004947bc
    MOV dword ptr [EBP + 0x258c],ECX    ; 004947bf
    POP EBP                             ; 004947c5
    POP EDI                             ; 004947c6
    POP ESI                             ; 004947c7
    POP EBX                             ; 004947c8
    RET                                 ; 004947c9
    PUSH 0x5bfdf0                       ; 004947ca | DAT_005bfdf0
        ;   Label: LAB_004947ca
    PUSH 0x5bfdf3                       ; 004947cf | = "events.txt"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004947d4
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    ADD ESP,0x8                         ; 004947d9
    MOV EDI,EAX                         ; 004947dc
    TEST EAX,EAX                        ; 004947de
    JZ 0x00494819                       ; 004947e0
        ;   XREF to: 00494819 (CONDITIONAL_JUMP)  ; LAB_00494819
    MOV EDX,dword ptr [EBP + 0x258c]    ; 004947e2
    XOR EBX,EBX                         ; 004947e8
    TEST EDX,EDX                        ; 004947ea
    JLE 0x00494810                      ; 004947ec
        ;   XREF to: 00494810 (CONDITIONAL_JUMP)  ; LAB_00494810
    PUSH ESI                            ; 004947ee
        ;   Label: LAB_004947ee
    PUSH 0x5bfdfe                       ; 004947ef | DAT_005bfdfe
    PUSH EDI                            ; 004947f4
    INC EBX                             ; 004947f5
    ADD ESI,0x20                        ; 004947f6
    CALL crt_unknown.c_FUN_005a3140     ; 004947f9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBP + 0x258c]    ; 004947fe
    ADD ESP,0xc                         ; 00494804
    CMP EBX,ECX                         ; 00494807
    JL 0x004947ee                       ; 00494809
        ;   XREF to: 004947ee (CONDITIONAL_JUMP)  ; LAB_004947ee
    LEA EAX,[EAX]                       ; 0049480b
    MOV ECX,ECX                         ; 0049480e
    PUSH EDI                            ; 00494810
        ;   Label: LAB_00494810
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00494811
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00494816
    MOV EBX,0x5bfe02                    ; 00494819 | = "..\\core\\event.cpp"
        ;   Label: LAB_00494819
    MOV ESI,0xdea                       ; 0049481e
    PUSH 0x5bfe14                       ; 00494823 | = "Too many persistent events - check ev..."
    MOV dword ptr [0x01d71de0],EBX      ; 00494828 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0049482e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00494834
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00494839
    JMP 0x0049473b                      ; 0049483c
        ;   XREF to: 0049473b (UNCONDITIONAL_JUMP)  ; LAB_0049473b
    TEST EAX,EAX                        ; 00494841
        ;   Label: LAB_00494841
    JL 0x00494705                       ; 00494843
        ;   XREF to: 00494705 (CONDITIONAL_JUMP)  ; LAB_00494705
    MOV EDI,dword ptr [EBP + 0x258c]    ; 00494849
    DEC EDI                             ; 0049484f
    MOV ECX,EDI                         ; 00494850
    SUB ECX,EAX                         ; 00494852
    SHL ECX,0x5                         ; 00494854
    SHL EAX,0x5                         ; 00494857
    PUSH ECX                            ; 0049485a
    LEA ECX,[EAX + 0x20]                ; 0049485b
    ADD ECX,ESI                         ; 0049485e
    PUSH ECX                            ; 00494860
    ADD EAX,ESI                         ; 00494861
    PUSH EAX                            ; 00494863
    MOV dword ptr [EBP + 0x258c],EDI    ; 00494864
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0049486a
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049486f
    POP EBP                             ; 00494872
    POP EDI                             ; 00494873
    POP ESI                             ; 00494874
    POP EBX                             ; 00494875
    RET                                 ; 00494876

