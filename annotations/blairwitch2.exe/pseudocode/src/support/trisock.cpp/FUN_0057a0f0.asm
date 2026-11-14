; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a0f0(void)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0
;   support_trisock.cpp_FUN_00579e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a0f0
        ;   Label: support_trisock.cpp_FUN_0057a0f0
    PUSH ESI                            ; 0057a0f1
    PUSH EDI                            ; 0057a0f2
    PUSH EBP                            ; 0057a0f3
    SUB ESP,0x800                       ; 0057a0f4
    MOV EBX,dword ptr [ESP + 0x828]     ; 0057a0fa
    TEST EBX,EBX                        ; 0057a101
    JNZ 0x0057a10a                      ; 0057a103
        ;   XREF to: 0057a10a (CONDITIONAL_JUMP)  ; LAB_0057a10a
    MOV EBX,0x579880                    ; 0057a105
    MOV ESI,0x5ed1db                    ; 0057a10a
        ;   Label: LAB_0057a10a
    MOV EDI,ESP                         ; 0057a10f
    PUSH EDI                            ; 0057a111
    MOV AL,byte ptr [ESI]               ; 0057a112
        ;   Label: LAB_0057a112
    MOV byte ptr [EDI],AL               ; 0057a114
    CMP AL,0x0                          ; 0057a116
    JZ 0x0057a12a                       ; 0057a118
        ;   XREF to: 0057a12a (CONDITIONAL_JUMP)  ; LAB_0057a12a
    MOV AL,byte ptr [ESI + 0x1]         ; 0057a11a
    ADD ESI,0x2                         ; 0057a11d
    MOV byte ptr [EDI + 0x1],AL         ; 0057a120
    ADD EDI,0x2                         ; 0057a123
    CMP AL,0x0                          ; 0057a126
    JNZ 0x0057a112                      ; 0057a128
        ;   XREF to: 0057a112 (CONDITIONAL_JUMP)  ; LAB_0057a112
    POP EDI                             ; 0057a12a
        ;   Label: LAB_0057a12a
    MOV EAX,ESP                         ; 0057a12b
    PUSH EAX                            ; 0057a12d
    PUSH 0x0                            ; 0057a12e
    CALL EBX                            ; 0057a130
    ADD ESP,0x8                         ; 0057a132
    TEST EAX,EAX                        ; 0057a135
    JNZ 0x0057a144                      ; 0057a137
        ;   XREF to: 0057a144 (CONDITIONAL_JUMP)  ; LAB_0057a144
    ADD ESP,0x800                       ; 0057a139
        ;   Label: LAB_0057a139
    POP EBP                             ; 0057a13f
    POP EDI                             ; 0057a140
    POP ESI                             ; 0057a141
    POP EBX                             ; 0057a142
    RET                                 ; 0057a143
    XOR EAX,EAX                         ; 0057a144
        ;   Label: LAB_0057a144
    MOV AX,word ptr [ESP + 0x81c]       ; 0057a146
    PUSH EAX                            ; 0057a14e
    MOV EDX,dword ptr [ESP + 0x81c]     ; 0057a14f
    PUSH EDX                            ; 0057a156
    MOV ECX,dword ptr [ESP + 0x828]     ; 0057a157
    PUSH ECX                            ; 0057a15e
    PUSH 0x5ed1ef                       ; 0057a15f
    LEA EAX,[ESP + 0x10]                ; 0057a164
    PUSH EAX                            ; 0057a168
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057a169
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 0057a16e
    PUSH 0x0                            ; 0057a171
    LEA EDI,[ESP + 0x4]                 ; 0057a173
    SUB ECX,ECX                         ; 0057a177
    DEC ECX                             ; 0057a179
    XOR EAX,EAX                         ; 0057a17a
    SCASB.REPNE ES:EDI                  ; 0057a17c
    NOT ECX                             ; 0057a17e
    DEC ECX                             ; 0057a180
    PUSH ECX                            ; 0057a181
    LEA EAX,[ESP + 0x8]                 ; 0057a182
    PUSH EAX                            ; 0057a186
    MOV ESI,dword ptr [ESP + 0x820]     ; 0057a187
    PUSH ESI                            ; 0057a18e
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0 ; 0057a18f
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057a194
    TEST EAX,EAX                        ; 0057a197
    JNZ 0x0057a1aa                      ; 0057a199
        ;   XREF to: 0057a1aa (CONDITIONAL_JUMP)  ; LAB_0057a1aa
    PUSH 0x5ed223                       ; 0057a19b
    PUSH EAX                            ; 0057a1a0
    CALL EBX                            ; 0057a1a1
    ADD ESP,0x8                         ; 0057a1a3
    TEST EAX,EAX                        ; 0057a1a6
    JZ 0x0057a139                       ; 0057a1a8
        ;   XREF to: 0057a139 (CONDITIONAL_JUMP)  ; LAB_0057a139
    PUSH EBX                            ; 0057a1aa
        ;   Label: LAB_0057a1aa
    PUSH 0x5ed243                       ; 0057a1ab
    MOV EDI,dword ptr [ESP + 0x82c]     ; 0057a1b0
    PUSH EDI                            ; 0057a1b7
    MOV EBP,dword ptr [ESP + 0x820]     ; 0057a1b8
    PUSH EBP                            ; 0057a1bf
    CALL support_trisock.cpp_FUN_00579e40 ; 0057a1c0
        ;   XREF to: 00579e40 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579e40()
    ADD ESP,0x10                        ; 0057a1c5
    ADD ESP,0x800                       ; 0057a1c8
    POP EBP                             ; 0057a1ce
    POP EDI                             ; 0057a1cf
    POP ESI                             ; 0057a1d0
    POP EBX                             ; 0057a1d1
    RET                                 ; 0057a1d2

