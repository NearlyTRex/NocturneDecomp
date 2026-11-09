; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_imp_cpp_FUN_004d7fb0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d5bc0c
;   undefined4 DAT_01d5bc20
;   undefined4 DAT_01d5bc24
;   undefined4 DAT_01d5bc30
;   undefined4 DAT_01d5bc38
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7fb0
        ;   Label: core_imp.cpp_FUN_004d7fb0
    PUSH ESI                            ; 004d7fb1
    PUSH EDI                            ; 004d7fb2
    PUSH EBP                            ; 004d7fb3
    SUB ESP,0x78                        ; 004d7fb4
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004d7fb7
    MOV EAX,dword ptr [EBP + 0xd088]    ; 004d7fbe
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x2298] ; 004d7fc4
    XOR EBX,EBX                         ; 004d7fcb
    TEST EDX,EDX                        ; 004d7fcd
    JNZ 0x004d8120                      ; 004d7fcf
        ;   XREF to: 004d8120 (CONDITIONAL_JUMP)  ; LAB_004d8120
    MOV EAX,dword ptr [EBP + 0xd060]    ; 004d7fd5
        ;   Label: LAB_004d7fd5
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004d7fdb
    JZ 0x004d8038                       ; 004d7fe3
        ;   XREF to: 004d8038 (CONDITIONAL_JUMP)  ; LAB_004d8038
    MOV EAX,[0x01d5bc20]                ; 004d7fe5 | DAT_01d5bc20
    PUSH EAX                            ; 004d7fea
    LEA EAX,[EBP + 0x158]               ; 004d7feb
    PUSH EAX                            ; 004d7ff1
    LEA ESI,[ESP + 0x5c]                ; 004d7ff2
    LEA EDI,[ESP + 0x8]                 ; 004d7ff6
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d7ffa
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d7fff
    ADD ESP,0x8                         ; 004d8006
    SUB EAX,EBX                         ; 004d8009
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d800b
    SHL EAX,0x2                         ; 004d8012
    LEA ESI,[ESP + 0x54]                ; 004d8015
    ADD EDX,EAX                         ; 004d8019
    MOV EAX,ESP                         ; 004d801b
    MOVSD ES:EDI,ESI                    ; 004d801d
    MOVSD ES:EDI,ESI                    ; 004d801e
    MOVSD ES:EDI,ESI                    ; 004d801f
    CMP EDX,EAX                         ; 004d8020
    JZ 0x004d8037                       ; 004d8022
        ;   XREF to: 004d8037 (CONDITIONAL_JUMP)  ; LAB_004d8037
    MOV EAX,dword ptr [ESP]             ; 004d8024
    MOV dword ptr [EDX],EAX             ; 004d8027
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d8029
    MOV dword ptr [EDX + 0x4],EAX       ; 004d802d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d8030
    MOV dword ptr [EDX + 0x8],EAX       ; 004d8034
    INC EBX                             ; 004d8037
        ;   Label: LAB_004d8037
    MOV EAX,dword ptr [EBP + 0xd068]    ; 004d8038
        ;   Label: LAB_004d8038
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004d803e
    JZ 0x004d809f                       ; 004d8046
        ;   XREF to: 004d809f (CONDITIONAL_JUMP)  ; LAB_004d809f
    MOV ECX,dword ptr [0x01d5bc24]      ; 004d8048 | DAT_01d5bc24
    PUSH ECX                            ; 004d804e
    LEA EAX,[EBP + 0x158]               ; 004d804f
    PUSH EAX                            ; 004d8055
    LEA ESI,[ESP + 0x14]                ; 004d8056
    LEA EDI,[ESP + 0x74]                ; 004d805a
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d805e
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d8063
    ADD ESP,0x8                         ; 004d806a
    SUB EAX,EBX                         ; 004d806d
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d806f
    SHL EAX,0x2                         ; 004d8076
    LEA ESI,[ESP + 0xc]                 ; 004d8079
    ADD EDX,EAX                         ; 004d807d
    LEA EAX,[ESP + 0x6c]                ; 004d807f
    MOVSD ES:EDI,ESI                    ; 004d8083
    MOVSD ES:EDI,ESI                    ; 004d8084
    MOVSD ES:EDI,ESI                    ; 004d8085
    CMP EDX,EAX                         ; 004d8086
    JZ 0x004d809e                       ; 004d8088
        ;   XREF to: 004d809e (CONDITIONAL_JUMP)  ; LAB_004d809e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004d808a
    MOV dword ptr [EDX],EAX             ; 004d808e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004d8090
    MOV dword ptr [EDX + 0x4],EAX       ; 004d8094
    MOV EAX,dword ptr [ESP + 0x74]      ; 004d8097
    MOV dword ptr [EDX + 0x8],EAX       ; 004d809b
    INC EBX                             ; 004d809e
        ;   Label: LAB_004d809e
    MOV EAX,dword ptr [EBP + 0xd080]    ; 004d809f
        ;   Label: LAB_004d809f
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004d80a5
    JZ 0x004d8106                       ; 004d80ad
        ;   XREF to: 004d8106 (CONDITIONAL_JUMP)  ; LAB_004d8106
    MOV EDI,dword ptr [0x01d5bc30]      ; 004d80af | DAT_01d5bc30
    PUSH EDI                            ; 004d80b5
    LEA EAX,[EBP + 0x158]               ; 004d80b6
    PUSH EAX                            ; 004d80bc
    LEA ESI,[ESP + 0x2c]                ; 004d80bd
    LEA EDI,[ESP + 0x68]                ; 004d80c1
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d80c5
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d80ca
    ADD ESP,0x8                         ; 004d80d1
    SUB EAX,EBX                         ; 004d80d4
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d80d6
    SHL EAX,0x2                         ; 004d80dd
    LEA ESI,[ESP + 0x24]                ; 004d80e0
    ADD EDX,EAX                         ; 004d80e4
    LEA EAX,[ESP + 0x60]                ; 004d80e6
    MOVSD ES:EDI,ESI                    ; 004d80ea
    MOVSD ES:EDI,ESI                    ; 004d80eb
    MOVSD ES:EDI,ESI                    ; 004d80ec
    CMP EDX,EAX                         ; 004d80ed
    JZ 0x004d8105                       ; 004d80ef
        ;   XREF to: 004d8105 (CONDITIONAL_JUMP)  ; LAB_004d8105
    MOV EAX,dword ptr [ESP + 0x60]      ; 004d80f1
    MOV dword ptr [EDX],EAX             ; 004d80f5
    MOV EAX,dword ptr [ESP + 0x64]      ; 004d80f7
    MOV dword ptr [EDX + 0x4],EAX       ; 004d80fb
    MOV EAX,dword ptr [ESP + 0x68]      ; 004d80fe
    MOV dword ptr [EDX + 0x8],EAX       ; 004d8102
    INC EBX                             ; 004d8105
        ;   Label: LAB_004d8105
    MOV EAX,dword ptr [EBP + 0xd084]    ; 004d8106
        ;   Label: LAB_004d8106
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004d810c
    JNZ 0x004d816e                      ; 004d8114
        ;   XREF to: 004d816e (CONDITIONAL_JUMP)  ; LAB_004d816e
    MOV EAX,EBX                         ; 004d8116
    ADD ESP,0x78                        ; 004d8118
    POP EBP                             ; 004d811b
    POP EDI                             ; 004d811c
    POP ESI                             ; 004d811d
    POP EBX                             ; 004d811e
    RET                                 ; 004d811f
    MOV ECX,dword ptr [0x01d5bc0c]      ; 004d8120 | DAT_01d5bc0c
        ;   Label: LAB_004d8120
    PUSH ECX                            ; 004d8126
    LEA EAX,[EBP + 0x158]               ; 004d8127
    PUSH EAX                            ; 004d812d
    LEA ESI,[ESP + 0x20]                ; 004d812e
    LEA EDI,[ESP + 0x44]                ; 004d8132
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d8136
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x20]                ; 004d813b
    ADD ESP,0x8                         ; 004d813f
    MOVSD ES:EDI,ESI                    ; 004d8142
    MOVSD ES:EDI,ESI                    ; 004d8143
    MOVSD ES:EDI,ESI                    ; 004d8144
    LEA EAX,[ESP + 0x3c]                ; 004d8145
    MOV ESI,dword ptr [ESP + 0x90]      ; 004d8149
    CMP EAX,ESI                         ; 004d8150
    JZ 0x004d8168                       ; 004d8152
        ;   XREF to: 004d8168 (CONDITIONAL_JUMP)  ; LAB_004d8168
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d8154
    MOV dword ptr [ESI],EAX             ; 004d8158
    MOV EAX,dword ptr [ESP + 0x40]      ; 004d815a
    MOV dword ptr [ESI + 0x4],EAX       ; 004d815e
    MOV EAX,dword ptr [ESP + 0x44]      ; 004d8161
    MOV dword ptr [ESI + 0x8],EAX       ; 004d8165
    INC EBX                             ; 004d8168
        ;   Label: LAB_004d8168
    JMP 0x004d7fd5                      ; 004d8169
        ;   XREF to: 004d7fd5 (UNCONDITIONAL_JUMP)  ; LAB_004d7fd5
    MOV ECX,dword ptr [0x01d5bc38]      ; 004d816e | DAT_01d5bc38
        ;   Label: LAB_004d816e
    PUSH ECX                            ; 004d8174
    ADD EBP,0x158                       ; 004d8175
    PUSH EBP                            ; 004d817b
    LEA ESI,[ESP + 0x38]                ; 004d817c
    LEA EDI,[ESP + 0x50]                ; 004d8180
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d8184
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d8189
    ADD ESP,0x8                         ; 004d8190
    SUB EAX,EBX                         ; 004d8193
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d8195
    SHL EAX,0x2                         ; 004d819c
    LEA ESI,[ESP + 0x30]                ; 004d819f
    ADD EDX,EAX                         ; 004d81a3
    LEA EAX,[ESP + 0x48]                ; 004d81a5
    MOVSD ES:EDI,ESI                    ; 004d81a9
    MOVSD ES:EDI,ESI                    ; 004d81aa
    MOVSD ES:EDI,ESI                    ; 004d81ab
    CMP EDX,EAX                         ; 004d81ac
    JZ 0x004d81c4                       ; 004d81ae
        ;   XREF to: 004d81c4 (CONDITIONAL_JUMP)  ; LAB_004d81c4
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d81b0
    MOV dword ptr [EDX],EAX             ; 004d81b4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004d81b6
    MOV dword ptr [EDX + 0x4],EAX       ; 004d81ba
    MOV EAX,dword ptr [ESP + 0x50]      ; 004d81bd
    MOV dword ptr [EDX + 0x8],EAX       ; 004d81c1
    INC EBX                             ; 004d81c4
        ;   Label: LAB_004d81c4
    MOV EAX,EBX                         ; 004d81c5
    ADD ESP,0x78                        ; 004d81c7
    POP EBP                             ; 004d81ca
    POP EDI                             ; 004d81cb
    POP ESI                             ; 004d81cc
    POP EBX                             ; 004d81cd
    RET                                 ; 004d81ce

