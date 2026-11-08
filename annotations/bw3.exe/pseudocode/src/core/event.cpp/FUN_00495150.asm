; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00495150(int param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0048c2e0 at 0048f286
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005c0076
;   TerminatedCString s_CEventList_setSfxHandle_005c0088
;   TerminatedCString s_core_event_cpp_005c00b1
;   TerminatedCString s_CEventList_setSfxHandle_005c00c3
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00495230
;   FUN_00495280
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495150
        ;   Label: FUN_00495150
    PUSH ESI                            ; 00495151
    PUSH EDI                            ; 00495152
    PUSH EBP                            ; 00495153
    MOV EBX,dword ptr [ESP + 0x14]      ; 00495154
    MOV ESI,dword ptr [ESP + 0x18]      ; 00495158
    PUSH EBX                            ; 0049515c
    CALL FUN_00495280                   ; 0049515d
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; undefined FUN_00495280()
    ADD ESP,0x4                         ; 00495162
    PUSH ESI                            ; 00495165
    PUSH EBX                            ; 00495166
    CALL FUN_00495230                   ; 00495167
        ;   XREF to: 00495230 (UNCONDITIONAL_CALL)  ; undefined FUN_00495230()
    ADD ESP,0x8                         ; 0049516c
    MOV EDX,EAX                         ; 0049516f
    TEST EAX,EAX                        ; 00495171
    JGE 0x004951b0                      ; 00495173
        ;   XREF to: 004951b0 (CONDITIONAL_JUMP)  ; LAB_004951b0
    CMP dword ptr [EBX + 0x3ac8],0x14   ; 00495175
    JL 0x004951a1                       ; 0049517c
        ;   XREF to: 004951a1 (CONDITIONAL_JUMP)  ; LAB_004951a1
    MOV ECX,0x5c0076                    ; 0049517e | = "..\\core\\event.cpp"
    MOV EDI,0xfaf                       ; 00495183
    PUSH 0x5c0088                       ; 00495188 | = "CEventList::setSfxHandle - too many sfx!"
    MOV dword ptr [0x01d71de0],ECX      ; 0049518d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00495193 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00495199
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0049519e
    MOV EDX,dword ptr [EBX + 0x3ac8]    ; 004951a1
        ;   Label: LAB_004951a1
    LEA EAX,[EDX + 0x1]                 ; 004951a7
    MOV dword ptr [EBX + 0x3ac8],EAX    ; 004951aa
    LEA EAX,[EDX*0x8 + 0x0]             ; 004951b0
        ;   Label: LAB_004951b0
    ADD EAX,EDX                         ; 004951b7
    LEA EBP,[EBX + 0x3acc]              ; 004951b9
    SHL EAX,0x5                         ; 004951bf
    MOV EDI,ESI                         ; 004951c2
    ADD EBP,EAX                         ; 004951c4
    SUB ECX,ECX                         ; 004951c6
    DEC ECX                             ; 004951c8
    XOR EAX,EAX                         ; 004951c9
    SCASB.REPNE ES:EDI                  ; 004951cb
    NOT ECX                             ; 004951cd
    DEC ECX                             ; 004951cf
    CMP ECX,0x14                        ; 004951d0
    JNC 0x00495207                      ; 004951d3
        ;   XREF to: 00495207 (CONDITIONAL_JUMP)  ; LAB_00495207
    LEA EDI,[EBP + 0x4]                 ; 004951d5
        ;   Label: LAB_004951d5
    PUSH EDI                            ; 004951d8
    MOV AL,byte ptr [ESI]               ; 004951d9
        ;   Label: LAB_004951d9
    MOV byte ptr [EDI],AL               ; 004951db
    CMP AL,0x0                          ; 004951dd
    JZ 0x004951f1                       ; 004951df
        ;   XREF to: 004951f1 (CONDITIONAL_JUMP)  ; LAB_004951f1
    MOV AL,byte ptr [ESI + 0x1]         ; 004951e1
    ADD ESI,0x2                         ; 004951e4
    MOV byte ptr [EDI + 0x1],AL         ; 004951e7
    ADD EDI,0x2                         ; 004951ea
    CMP AL,0x0                          ; 004951ed
    JNZ 0x004951d9                      ; 004951ef
        ;   XREF to: 004951d9 (CONDITIONAL_JUMP)  ; LAB_004951d9
    POP EDI                             ; 004951f1
        ;   Label: LAB_004951f1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004951f2
    PUSH EBX                            ; 004951f6
    MOV dword ptr [EBP],EAX             ; 004951f7
    CALL FUN_00495280                   ; 004951fa
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; undefined FUN_00495280()
    ADD ESP,0x4                         ; 004951ff
    POP EBP                             ; 00495202
    POP EDI                             ; 00495203
    POP ESI                             ; 00495204
    POP EBX                             ; 00495205
    RET                                 ; 00495206
    PUSH 0x13                           ; 00495207
        ;   Label: LAB_00495207
    PUSH ESI                            ; 00495209
    MOV EAX,0x5c00b1                    ; 0049520a | = "..\\core\\event.cpp"
    MOV EDX,0xfb7                       ; 0049520f
    PUSH 0x5c00c3                       ; 00495214 | = "CEventList::setSfxHandle - sfx handle..."
    MOV [0x01d71de0],EAX                ; 00495219 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0049521e | DAT_01d71de4
    CALL FUN_004e4330                   ; 00495224
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00495229
    JMP 0x004951d5                      ; 0049522c
        ;   XREF to: 004951d5 (UNCONDITIONAL_JUMP)  ; LAB_004951d5

