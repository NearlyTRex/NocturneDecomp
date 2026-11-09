; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004a9a60(CEventList *param_1,CEventList *param_2,int param_3)
;
;
; XREF[3]:
;   core_event.cpp_FUN_004a1d00 at 004a3bf1
;   core_event.cpp_FUN_004a9a00 at 004a9a38
;   core_game.cpp_FUN_004d27b0 at 004d5415
;
; Referenced Globals:
;   undefined4 DAT_005deb4e
;   TerminatedCString s_events_txt_005deb51
;   undefined4 DAT_005deb5c
;   TerminatedCString s_core_event_cpp_005deb60
;   TerminatedCString s_Too_many_game_flags_chec_005deb72
;   TerminatedCString s_core_event_cpp_005deb9a
;   TerminatedCString s_Event_name_s_too_long_005debac
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_004a9f00
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_string.c_memmove_FUN_005c25d0
;   crt_string.c_strupr_FUN_005c2c20
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9a60
        ;   Label: core_event.cpp_FUN_004a9a60
    PUSH ESI                            ; 004a9a61
    PUSH EDI                            ; 004a9a62
    PUSH EBP                            ; 004a9a63
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a9a64
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a9a68
    TEST EDX,EDX                        ; 004a9a6c
    JZ 0x004a9a75                       ; 004a9a6e
        ;   XREF to: 004a9a75 (CONDITIONAL_JUMP)  ; LAB_004a9a75
    CMP byte ptr [EDX],0x0              ; 004a9a70
    JNZ 0x004a9a7a                      ; 004a9a73
        ;   XREF to: 004a9a7a (CONDITIONAL_JUMP)  ; LAB_004a9a7a
    POP EBP                             ; 004a9a75
        ;   Label: LAB_004a9a75
    POP EDI                             ; 004a9a76
    POP ESI                             ; 004a9a77
    POP EBX                             ; 004a9a78
    RET                                 ; 004a9a79
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a9a7a
        ;   Label: LAB_004a9a7a
    PUSH ECX                            ; 004a9a7e
    PUSH EBP                            ; 004a9a7f
    CALL core_event.cpp_CEventList_findGameFlag_FUN_004a9f00 ; 004a9a80
        ;   XREF to: 004a9f00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findGameFlag_FUN_004a9f00(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a9a85
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a9a88
    LEA ESI,[EBP + 0x190c]              ; 004a9a8c
    TEST EBX,EBX                        ; 004a9a92
    JZ 0x004a9bb1                       ; 004a9a94
        ;   XREF to: 004a9bb1 (CONDITIONAL_JUMP)  ; LAB_004a9bb1
    TEST EAX,EAX                        ; 004a9a9a
    JGE 0x004a9a75                      ; 004a9a9c
        ;   XREF to: 004a9a75 (CONDITIONAL_JUMP)  ; LAB_004a9a75
    CMP dword ptr [EBP + 0x1908],0x28   ; 004a9a9e
    JGE 0x004a9b3a                      ; 004a9aa5
        ;   XREF to: 004a9b3a (CONDITIONAL_JUMP)  ; LAB_004a9b3a
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a9aab
        ;   Label: LAB_004a9aab
    SUB ECX,ECX                         ; 004a9aaf
    DEC ECX                             ; 004a9ab1
    XOR EAX,EAX                         ; 004a9ab2
    SCASB.REPNE ES:EDI                  ; 004a9ab4
    NOT ECX                             ; 004a9ab6
    DEC ECX                             ; 004a9ab8
    CMP ECX,0x20                        ; 004a9ab9
    JC 0x004a9ae5                       ; 004a9abc
        ;   XREF to: 004a9ae5 (CONDITIONAL_JUMP)  ; LAB_004a9ae5
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a9abe
    PUSH EDX                            ; 004a9ac2
    MOV EDI,0x5deb9a                    ; 004a9ac3 | = "..\\core\\event.cpp"
    MOV EAX,0xd94                       ; 004a9ac8
    PUSH 0x5debac                       ; 004a9acd | = "Event name %s too long!"
    MOV dword ptr [0x01d1d400],EDI      ; 004a9ad2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004a9ad8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a9add
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004a9ae2
    MOV EDI,dword ptr [EBP + 0x1908]    ; 004a9ae5
        ;   Label: LAB_004a9ae5
    LEA ECX,[EBP + 0x190c]              ; 004a9aeb
    SHL EDI,0x5                         ; 004a9af1
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a9af4
    ADD EDI,ECX                         ; 004a9af8
    PUSH EDI                            ; 004a9afa
    MOV AL,byte ptr [ESI]               ; 004a9afb
        ;   Label: LAB_004a9afb
    MOV byte ptr [EDI],AL               ; 004a9afd
    CMP AL,0x0                          ; 004a9aff
    JZ 0x004a9b13                       ; 004a9b01
        ;   XREF to: 004a9b13 (CONDITIONAL_JUMP)  ; LAB_004a9b13
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9b03
    ADD ESI,0x2                         ; 004a9b06
    MOV byte ptr [EDI + 0x1],AL         ; 004a9b09
    ADD EDI,0x2                         ; 004a9b0c
    CMP AL,0x0                          ; 004a9b0f
    JNZ 0x004a9afb                      ; 004a9b11
        ;   XREF to: 004a9afb (CONDITIONAL_JUMP)  ; LAB_004a9afb
    POP EDI                             ; 004a9b13
        ;   Label: LAB_004a9b13
    MOV EAX,dword ptr [EBP + 0x1908]    ; 004a9b14
    SHL EAX,0x5                         ; 004a9b1a
    ADD EAX,ECX                         ; 004a9b1d
    PUSH EAX                            ; 004a9b1f
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004a9b20
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    MOV ECX,dword ptr [EBP + 0x1908]    ; 004a9b25
    INC ECX                             ; 004a9b2b
    ADD ESP,0x4                         ; 004a9b2c
    MOV dword ptr [EBP + 0x1908],ECX    ; 004a9b2f
    POP EBP                             ; 004a9b35
    POP EDI                             ; 004a9b36
    POP ESI                             ; 004a9b37
    POP EBX                             ; 004a9b38
    RET                                 ; 004a9b39
    PUSH 0x5deb4e                       ; 004a9b3a | DAT_005deb4e
        ;   Label: LAB_004a9b3a
    PUSH 0x5deb51                       ; 004a9b3f | = "events.txt"
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004a9b44
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 004a9b49
    MOV EDI,EAX                         ; 004a9b4c
    TEST EAX,EAX                        ; 004a9b4e
    JZ 0x004a9b89                       ; 004a9b50
        ;   XREF to: 004a9b89 (CONDITIONAL_JUMP)  ; LAB_004a9b89
    MOV EDX,dword ptr [EBP + 0x1908]    ; 004a9b52
    XOR EBX,EBX                         ; 004a9b58
    TEST EDX,EDX                        ; 004a9b5a
    JLE 0x004a9b80                      ; 004a9b5c
        ;   XREF to: 004a9b80 (CONDITIONAL_JUMP)  ; LAB_004a9b80
    PUSH ESI                            ; 004a9b5e
        ;   Label: LAB_004a9b5e
    PUSH 0x5deb5c                       ; 004a9b5f | DAT_005deb5c
    PUSH EDI                            ; 004a9b64
    INC EBX                             ; 004a9b65
    ADD ESI,0x20                        ; 004a9b66
    CALL crt_unknown.c_FUN_005c03c0     ; 004a9b69
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBP + 0x1908]    ; 004a9b6e
    ADD ESP,0xc                         ; 004a9b74
    CMP EBX,ECX                         ; 004a9b77
    JL 0x004a9b5e                       ; 004a9b79
        ;   XREF to: 004a9b5e (CONDITIONAL_JUMP)  ; LAB_004a9b5e
    LEA EAX,[EAX]                       ; 004a9b7b
    MOV ECX,ECX                         ; 004a9b7e
    PUSH EDI                            ; 004a9b80
        ;   Label: LAB_004a9b80
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004a9b81
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004a9b86
    MOV EBX,0x5deb60                    ; 004a9b89 | = "..\\core\\event.cpp"
        ;   Label: LAB_004a9b89
    MOV ESI,0xd8e                       ; 004a9b8e
    PUSH 0x5deb72                       ; 004a9b93 | = "Too many game flags - check events.txt!"
    MOV dword ptr [0x01d1d400],EBX      ; 004a9b98 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004a9b9e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a9ba4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004a9ba9
    JMP 0x004a9aab                      ; 004a9bac
        ;   XREF to: 004a9aab (UNCONDITIONAL_JUMP)  ; LAB_004a9aab
    TEST EAX,EAX                        ; 004a9bb1
        ;   Label: LAB_004a9bb1
    JL 0x004a9a75                       ; 004a9bb3
        ;   XREF to: 004a9a75 (CONDITIONAL_JUMP)  ; LAB_004a9a75
    MOV EDI,dword ptr [EBP + 0x1908]    ; 004a9bb9
    DEC EDI                             ; 004a9bbf
    MOV ECX,EDI                         ; 004a9bc0
    SUB ECX,EAX                         ; 004a9bc2
    SHL ECX,0x5                         ; 004a9bc4
    SHL EAX,0x5                         ; 004a9bc7
    PUSH ECX                            ; 004a9bca
    LEA ECX,[EAX + 0x20]                ; 004a9bcb
    ADD ECX,ESI                         ; 004a9bce
    PUSH ECX                            ; 004a9bd0
    ADD EAX,ESI                         ; 004a9bd1
    PUSH EAX                            ; 004a9bd3
    MOV dword ptr [EBP + 0x1908],EDI    ; 004a9bd4
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a9bda
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a9bdf
    POP EBP                             ; 004a9be2
    POP EDI                             ; 004a9be3
    POP ESI                             ; 004a9be4
    POP EBX                             ; 004a9be5
    RET                                 ; 004a9be6

