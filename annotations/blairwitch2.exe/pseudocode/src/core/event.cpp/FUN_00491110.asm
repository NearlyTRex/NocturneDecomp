; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_FUN_00491110(CEventList *this_ptr,char *name,int add_flag)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   add_flag
;
; XREF[2]:
;   core_event.cpp_FUN_00489670 at 0048b4e6
;   core_event.cpp_FUN_004910b0 at 004910e8
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005d4d31
;   TerminatedCString s_Too_many_game_flags_005d4d43
;   TerminatedCString s_core_event_cpp_005d4d58
;   TerminatedCString s_Event_name_s_too_long_005d4d6a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_00491590
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_string.c_strupr_FUN_005ba840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491110
        ;   Label: core_event.cpp_FUN_00491110
    PUSH ESI                            ; 00491111
    PUSH EBP                            ; 00491112
    MOV EBX,dword ptr [ESP + 0x10]      ; 00491113
    MOV ESI,dword ptr [ESP + 0x14]      ; 00491117
    TEST ESI,ESI                        ; 0049111b
    JZ 0x00491124                       ; 0049111d
        ;   XREF to: 00491124 (CONDITIONAL_JUMP)  ; LAB_00491124
    CMP byte ptr [ESI],0x0              ; 0049111f
    JNZ 0x00491128                      ; 00491122
        ;   XREF to: 00491128 (CONDITIONAL_JUMP)  ; LAB_00491128
    POP EBP                             ; 00491124
        ;   Label: LAB_00491124
    POP ESI                             ; 00491125
    POP EBX                             ; 00491126
    RET                                 ; 00491127
    PUSH ESI                            ; 00491128
        ;   Label: LAB_00491128
    PUSH EBX                            ; 00491129
    CALL core_event.cpp_CEventList_findGameFlag_FUN_00491590 ; 0049112a
        ;   XREF to: 00491590 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findGameFlag_FUN_00491590(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 0049112f
    CMP dword ptr [ESP + 0x18],0x0      ; 00491132
    JZ 0x004911fc                       ; 00491137
        ;   XREF to: 004911fc (CONDITIONAL_JUMP)  ; LAB_004911fc
    TEST EAX,EAX                        ; 0049113d
    JGE 0x00491124                      ; 0049113f
        ;   XREF to: 00491124 (CONDITIONAL_JUMP)  ; LAB_00491124
    CMP dword ptr [EBX + 0x1908],0xa    ; 00491141
    JGE 0x004911d5                      ; 00491148
        ;   XREF to: 004911d5 (CONDITIONAL_JUMP)  ; LAB_004911d5
    PUSH EDI                            ; 0049114e
        ;   Label: LAB_0049114e
    MOV EDI,ESI                         ; 0049114f
    SUB ECX,ECX                         ; 00491151
    DEC ECX                             ; 00491153
    XOR EAX,EAX                         ; 00491154
    SCASB.REPNE ES:EDI                  ; 00491156
    NOT ECX                             ; 00491158
    DEC ECX                             ; 0049115a
    CMP ECX,0x20                        ; 0049115b
    JC 0x00491184                       ; 0049115e
        ;   XREF to: 00491184 (CONDITIONAL_JUMP)  ; LAB_00491184
    PUSH ESI                            ; 00491160
    MOV EDX,0x5d4d58                    ; 00491161 | = "..\\core\\event.cpp"
    MOV ECX,0xd43                       ; 00491166
    PUSH 0x5d4d6a                       ; 0049116b | = "Event name %s too long!"
    MOV dword ptr [0x01d046a0],EDX      ; 00491170 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00491176 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0049117c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00491181
    MOV EDI,dword ptr [EBX + 0x1908]    ; 00491184
        ;   Label: LAB_00491184
    LEA EDX,[EBX + 0x190c]              ; 0049118a
    SHL EDI,0x5                         ; 00491190
    ADD EDI,EDX                         ; 00491193
    PUSH EDI                            ; 00491195
    MOV AL,byte ptr [ESI]               ; 00491196
        ;   Label: LAB_00491196
    MOV byte ptr [EDI],AL               ; 00491198
    CMP AL,0x0                          ; 0049119a
    JZ 0x004911ae                       ; 0049119c
        ;   XREF to: 004911ae (CONDITIONAL_JUMP)  ; LAB_004911ae
    MOV AL,byte ptr [ESI + 0x1]         ; 0049119e
    ADD ESI,0x2                         ; 004911a1
    MOV byte ptr [EDI + 0x1],AL         ; 004911a4
    ADD EDI,0x2                         ; 004911a7
    CMP AL,0x0                          ; 004911aa
    JNZ 0x00491196                      ; 004911ac
        ;   XREF to: 00491196 (CONDITIONAL_JUMP)  ; LAB_00491196
    POP EDI                             ; 004911ae
        ;   Label: LAB_004911ae
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004911af
    SHL EAX,0x5                         ; 004911b5
    ADD EDX,EAX                         ; 004911b8
    PUSH EDX                            ; 004911ba
    CALL crt_string.c_strupr_FUN_005ba840 ; 004911bb
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    MOV ESI,dword ptr [EBX + 0x1908]    ; 004911c0
    INC ESI                             ; 004911c6
    ADD ESP,0x4                         ; 004911c7
    MOV dword ptr [EBX + 0x1908],ESI    ; 004911ca
    POP EDI                             ; 004911d0
    POP EBP                             ; 004911d1
    POP ESI                             ; 004911d2
    POP EBX                             ; 004911d3
    RET                                 ; 004911d4
    MOV EBP,0x5d4d31                    ; 004911d5 | = "..\\core\\event.cpp"
        ;   Label: LAB_004911d5
    MOV EAX,0xd3d                       ; 004911da
    PUSH 0x5d4d43                       ; 004911df | = "Too many game flags!"
    MOV dword ptr [0x01d046a0],EBP      ; 004911e4 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004911ea | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004911ef
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004911f4
    JMP 0x0049114e                      ; 004911f7
        ;   XREF to: 0049114e (UNCONDITIONAL_JUMP)  ; LAB_0049114e
    TEST EAX,EAX                        ; 004911fc
        ;   Label: LAB_004911fc
    JL 0x00491124                       ; 004911fe
        ;   XREF to: 00491124 (CONDITIONAL_JUMP)  ; LAB_00491124
    MOV ECX,dword ptr [EBX + 0x1908]    ; 00491204
    DEC ECX                             ; 0049120a
    MOV EDX,ECX                         ; 0049120b
    SUB EDX,EAX                         ; 0049120d
    ADD EBX,0x190c                      ; 0049120f
    SHL EDX,0x5                         ; 00491215
    SHL EAX,0x5                         ; 00491218
    PUSH EDX                            ; 0049121b
    LEA EDX,[EAX + 0x20]                ; 0049121c
    ADD EDX,EBX                         ; 0049121f
    PUSH EDX                            ; 00491221
    ADD EAX,EBX                         ; 00491222
    PUSH EAX                            ; 00491224
    MOV dword ptr [EBX + -0x4],ECX      ; 00491225
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00491228
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049122d
    POP EBP                             ; 00491230
    POP ESI                             ; 00491231
    POP EBX                             ; 00491232
    RET                                 ; 00491233

