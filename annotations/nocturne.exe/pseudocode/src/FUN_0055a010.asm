; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055a010(HWND param_1)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0xa3]:1  local_a3
; undefined1       Stack[-0xa2]:1  local_a2
; undefined1       Stack[-0xa1]:1  local_a1
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9f]:1  local_9f
; undefined1       Stack[-0x9e]:1  local_9e
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005753e0 = 00175816
;   void* PTR_GetClientRect_0057542c = 0017595c
;   void* PTR_MoveWindow_00575450 = 001759ee
;   void* PTR_SetRectEmpty_00575478 = 00175a92
;   TerminatedCString s_where_mov_source_0059817e
;   undefined4 DAT_02de311c
;   undefined4 DAT_02de3124
;
; Called Functions:
;   GetClientRect
;   mciSendStringA
;   MoveWindow
;   SetRectEmpty
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055a010
        ;   Label: FUN_0055a010
    SUB ESP,0xa0                        ; 0055a011
    CMP dword ptr [0x02de3124],0x0      ; 0055a017 | DAT_02de3124
    JNZ 0x0055a028                      ; 0055a01e
        ;   XREF to: 0055a028 (CONDITIONAL_JUMP)  ; LAB_0055a028
    ADD ESP,0xa0                        ; 0055a020
    POP EBP                             ; 0055a026
    RET                                 ; 0055a027
    LEA EAX,[ESP + 0x80]                ; 0055a028
        ;   Label: LAB_0055a028
    PUSH EAX                            ; 0055a02f
    MOV ECX,dword ptr [ESP + 0xac]      ; 0055a030
    PUSH ECX                            ; 0055a037
    CALL dword ptr CS:[0x57542c]        ; 0055a038 | PTR_GetClientRect_0057542c
    PUSH 0x0                            ; 0055a03f
    PUSH 0x80                           ; 0055a041
    LEA EAX,[ESP + 0x8]                 ; 0055a046
    PUSH EAX                            ; 0055a04a
    PUSH 0x59817e                       ; 0055a04b | = "where mov source"
    CALL dword ptr CS:[0x5753e0]        ; 0055a050 | PTR_mciSendStringA_005753e0
    LEA EAX,[ESP + 0x90]                ; 0055a057
    PUSH EAX                            ; 0055a05e
    CALL dword ptr CS:[0x575478]        ; 0055a05f | PTR_SetRectEmpty_00575478
    MOV DL,byte ptr [ESP]               ; 0055a066
    MOV EAX,ESP                         ; 0055a069
    CMP DL,0x20                         ; 0055a06b
    JNZ 0x0055a080                      ; 0055a06e
        ;   XREF to: 0055a080 (CONDITIONAL_JUMP)  ; LAB_0055a080
    MOV DH,byte ptr [EAX + 0x1]         ; 0055a070
        ;   Label: LAB_0055a070
    INC EAX                             ; 0055a073
    CMP DH,0x20                         ; 0055a074
    JZ 0x0055a070                       ; 0055a077
        ;   XREF to: 0055a070 (CONDITIONAL_JUMP)  ; LAB_0055a070
    LEA EAX,[EAX]                       ; 0055a079
    NOP                                 ; 0055a07f
    CMP byte ptr [EAX],0x20             ; 0055a080
        ;   Label: LAB_0055a080
    JZ 0x0055a088                       ; 0055a083
        ;   XREF to: 0055a088 (CONDITIONAL_JUMP)  ; LAB_0055a088
    INC EAX                             ; 0055a085
    JMP 0x0055a080                      ; 0055a086
        ;   XREF to: 0055a080 (UNCONDITIONAL_JUMP)  ; LAB_0055a080
    CMP byte ptr [EAX],0x20             ; 0055a088
        ;   Label: LAB_0055a088
    JNZ 0x0055a090                      ; 0055a08b
        ;   XREF to: 0055a090 (CONDITIONAL_JUMP)  ; LAB_0055a090
    INC EAX                             ; 0055a08d
    JMP 0x0055a088                      ; 0055a08e
        ;   XREF to: 0055a088 (UNCONDITIONAL_JUMP)  ; LAB_0055a088
    CMP byte ptr [EAX],0x20             ; 0055a090
        ;   Label: LAB_0055a090
    JZ 0x0055a098                       ; 0055a093
        ;   XREF to: 0055a098 (CONDITIONAL_JUMP)  ; LAB_0055a098
    INC EAX                             ; 0055a095
    JMP 0x0055a090                      ; 0055a096
        ;   XREF to: 0055a090 (UNCONDITIONAL_JUMP)  ; LAB_0055a090
    CMP byte ptr [EAX],0x20             ; 0055a098
        ;   Label: LAB_0055a098
    JNZ 0x0055a0b9                      ; 0055a09b
        ;   XREF to: 0055a0b9 (CONDITIONAL_JUMP)  ; LAB_0055a0b9
    INC EAX                             ; 0055a09d
    JMP 0x0055a098                      ; 0055a09e
        ;   XREF to: 0055a098 (UNCONDITIONAL_JUMP)  ; LAB_0055a098
    IMUL ECX,dword ptr [ESP + 0x98],0xa ; 0055a0a0
        ;   Label: LAB_0055a0a0
    XOR EDX,EDX                         ; 0055a0a8
    MOV DL,byte ptr [EAX]               ; 0055a0aa
    SUB EDX,0x30                        ; 0055a0ac
    ADD ECX,EDX                         ; 0055a0af
    INC EAX                             ; 0055a0b1
    MOV dword ptr [ESP + 0x98],ECX      ; 0055a0b2
    MOV DL,byte ptr [EAX]               ; 0055a0b9
        ;   Label: LAB_0055a0b9
    CMP DL,0x30                         ; 0055a0bb
    JNC 0x0055a0cc                      ; 0055a0be
        ;   XREF to: 0055a0cc (CONDITIONAL_JUMP)  ; LAB_0055a0cc
    CMP byte ptr [EAX],0x20             ; 0055a0c0
        ;   Label: LAB_0055a0c0
    JNZ 0x0055a19e                      ; 0055a0c3
        ;   XREF to: 0055a19e (CONDITIONAL_JUMP)  ; LAB_0055a19e
    INC EAX                             ; 0055a0c9
    JMP 0x0055a0c0                      ; 0055a0ca
        ;   XREF to: 0055a0c0 (UNCONDITIONAL_JUMP)  ; LAB_0055a0c0
    CMP DL,0x39                         ; 0055a0cc
        ;   Label: LAB_0055a0cc
    JBE 0x0055a0a0                      ; 0055a0cf
        ;   XREF to: 0055a0a0 (CONDITIONAL_JUMP)  ; LAB_0055a0a0
    JMP 0x0055a0c0                      ; 0055a0d1
        ;   XREF to: 0055a0c0 (UNCONDITIONAL_JUMP)  ; LAB_0055a0c0
    IMUL ECX,dword ptr [ESP + 0xa8],0xa ; 0055a0d3
        ;   Label: LAB_0055a0d3
    XOR EDX,EDX                         ; 0055a0db
    MOV DL,BH                           ; 0055a0dd
    SUB EDX,0x30                        ; 0055a0df
    ADD ECX,EDX                         ; 0055a0e2
    INC EAX                             ; 0055a0e4
    MOV dword ptr [ESP + 0xa8],ECX      ; 0055a0e5
    MOV BH,byte ptr [EAX]               ; 0055a0ec
        ;   Label: LAB_0055a0ec
    CMP BH,0x30                         ; 0055a0ee
    JC 0x0055a0f8                       ; 0055a0f1
        ;   XREF to: 0055a0f8 (CONDITIONAL_JUMP)  ; LAB_0055a0f8
    CMP BH,0x39                         ; 0055a0f3
    JBE 0x0055a0d3                      ; 0055a0f6
        ;   XREF to: 0055a0d3 (CONDITIONAL_JUMP)  ; LAB_0055a0d3
    CMP dword ptr [ESP + 0x94],0x190    ; 0055a0f8
        ;   Label: LAB_0055a0f8
    JLE 0x0055a1a6                      ; 0055a103
        ;   XREF to: 0055a1a6 (CONDITIONAL_JUMP)  ; LAB_0055a1a6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0055a109
        ;   Label: LAB_0055a109
    MOV EBP,dword ptr [ESP + 0xa8]      ; 0055a110
    ADD EAX,EAX                         ; 0055a117
    ADD EBP,EBP                         ; 0055a119
    MOV dword ptr [ESP + 0xa4],EAX      ; 0055a11b
    MOV dword ptr [ESP + 0xa8],EBP      ; 0055a122
    MOV EAX,dword ptr [ESP + 0x94]      ; 0055a129
        ;   Label: LAB_0055a129
    MOV EDX,EAX                         ; 0055a130
    SAR EDX,0x1f                        ; 0055a132
    SUB EAX,EDX                         ; 0055a135
    SAR EAX,0x1                         ; 0055a137
    MOV EBX,EAX                         ; 0055a139
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0055a13b
    MOV EDX,EAX                         ; 0055a142
    SAR EDX,0x1f                        ; 0055a144
    SUB EAX,EDX                         ; 0055a147
    SAR EAX,0x1                         ; 0055a149
    SUB EBX,EAX                         ; 0055a14b
    MOV EAX,dword ptr [ESP + 0x98]      ; 0055a14d
    MOV EDX,EAX                         ; 0055a154
    SAR EDX,0x1f                        ; 0055a156
    SUB EAX,EDX                         ; 0055a159
    SAR EAX,0x1                         ; 0055a15b
    MOV ECX,EAX                         ; 0055a15d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0055a15f
    MOV EDX,EAX                         ; 0055a166
    SAR EDX,0x1f                        ; 0055a168
    SUB EAX,EDX                         ; 0055a16b
    SAR EAX,0x1                         ; 0055a16d
    PUSH 0x1                            ; 0055a16f
    MOV EDX,dword ptr [ESP + 0xac]      ; 0055a171
    PUSH EDX                            ; 0055a178
    MOV ESI,dword ptr [ESP + 0xac]      ; 0055a179
    PUSH ESI                            ; 0055a180
    SUB ECX,EAX                         ; 0055a181
    PUSH ECX                            ; 0055a183
    PUSH EBX                            ; 0055a184
    MOV EDI,dword ptr [0x02de311c]      ; 0055a185 | DAT_02de311c
    PUSH EDI                            ; 0055a18b
    CALL dword ptr CS:[0x575450]        ; 0055a18c | PTR_MoveWindow_00575450
    POP EBX                             ; 0055a193
    POP ESI                             ; 0055a194
    POP EDI                             ; 0055a195
    ADD ESP,0xa0                        ; 0055a196
    POP EBP                             ; 0055a19c
    RET                                 ; 0055a19d
    PUSH EDI                            ; 0055a19e
        ;   Label: LAB_0055a19e
    PUSH ESI                            ; 0055a19f
    PUSH EBX                            ; 0055a1a0
    JMP 0x0055a0ec                      ; 0055a1a1
        ;   XREF to: 0055a0ec (UNCONDITIONAL_JUMP)  ; LAB_0055a0ec
    CMP dword ptr [ESP + 0x98],0x12c    ; 0055a1a6
        ;   Label: LAB_0055a1a6
    JG 0x0055a109                       ; 0055a1b1
        ;   XREF to: 0055a109 (CONDITIONAL_JUMP)  ; LAB_0055a109
    JMP 0x0055a129                      ; 0055a1b7
        ;   XREF to: 0055a129 (UNCONDITIONAL_JUMP)  ; LAB_0055a129

