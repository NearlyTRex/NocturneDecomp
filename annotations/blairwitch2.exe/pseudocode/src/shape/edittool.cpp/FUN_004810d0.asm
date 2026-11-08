; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004810d0(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00483cb0 at 00483cd1
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d26bf
;   TerminatedCString s_CStrList_remove_invalid_005d26d5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b86a0
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004810d0
        ;   Label: FUN_004810d0
    PUSH ESI                            ; 004810d1
    PUSH EDI                            ; 004810d2
    PUSH EBP                            ; 004810d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004810d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004810d8
    TEST EBP,EBP                        ; 004810dc
    JL 0x004810ec                       ; 004810de
        ;   XREF to: 004810ec (CONDITIONAL_JUMP)  ; LAB_004810ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004810e0
    CMP EAX,dword ptr [ESI]             ; 004810e4
    JL 0x00481178                       ; 004810e6
        ;   XREF to: 00481178 (CONDITIONAL_JUMP)  ; LAB_00481178
    MOV EBX,0x5d26bf                    ; 004810ec | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004810ec
    MOV EDI,0xbfb                       ; 004810f1
    PUSH 0x5d26d5                       ; 004810f6 | = "CStrList::remove - invalid range"
    MOV dword ptr [0x01d046a0],EBX      ; 004810fb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00481101 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00481107
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0048110c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048110f
        ;   Label: LAB_0048110f
    CMP EBP,EAX                         ; 00481113
    JG 0x00481140                       ; 00481115
        ;   XREF to: 00481140 (CONDITIONAL_JUMP)  ; LAB_00481140
    LEA EDI,[EAX*0x4 + 0x0]             ; 00481117
    LEA EBX,[EBP*0x4 + 0x0]             ; 0048111e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00481125
        ;   Label: LAB_00481125
    ADD EAX,EBX                         ; 00481128
    MOV EDX,dword ptr [EAX]             ; 0048112a
    TEST EDX,EDX                        ; 0048112c
    JZ 0x00481139                       ; 0048112e
        ;   XREF to: 00481139 (CONDITIONAL_JUMP)  ; LAB_00481139
    PUSH EDX                            ; 00481130
    CALL FUN_005b86a0                   ; 00481131
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00481136
    ADD EBX,0x4                         ; 00481139
        ;   Label: LAB_00481139
    CMP EBX,EDI                         ; 0048113c
    JLE 0x00481125                      ; 0048113e
        ;   XREF to: 00481125 (CONDITIONAL_JUMP)  ; LAB_00481125
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00481140
        ;   Label: LAB_00481140
    SUB EAX,EBP                         ; 00481144
    MOV EBX,dword ptr [ESI]             ; 00481146
    INC EAX                             ; 00481148
    SUB EBX,EAX                         ; 00481149
    MOV EAX,EBX                         ; 0048114b
    MOV dword ptr [ESI],EBX             ; 0048114d
    SUB EAX,EBP                         ; 0048114f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00481151
    SHL EAX,0x2                         ; 00481155
    SHL EBX,0x2                         ; 00481158
    PUSH EAX                            ; 0048115b
    ADD EBX,0x4                         ; 0048115c
    MOV EAX,dword ptr [ESI + 0x8]       ; 0048115f
    ADD EBX,EAX                         ; 00481162
    SHL EBP,0x2                         ; 00481164
    PUSH EBX                            ; 00481167
    ADD EAX,EBP                         ; 00481168
    PUSH EAX                            ; 0048116a
    CALL FUN_005ba1f0                   ; 0048116b
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 00481170
    POP EBP                             ; 00481173
    POP EDI                             ; 00481174
    POP ESI                             ; 00481175
    POP EBX                             ; 00481176
    RET                                 ; 00481177
    CMP EBP,EAX                         ; 00481178
        ;   Label: LAB_00481178
    JG 0x004810ec                       ; 0048117a
        ;   XREF to: 004810ec (CONDITIONAL_JUMP)  ; LAB_004810ec
    JMP 0x0048110f                      ; 00481180
        ;   XREF to: 0048110f (UNCONDITIONAL_JUMP)  ; LAB_0048110f

