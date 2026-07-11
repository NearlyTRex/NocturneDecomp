; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5000(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e85b0 at 004e9470
;
; Called Functions:
;   FUN_004e4c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5000
        ;   Label: FUN_004e5000
    PUSH ESI                            ; 004e5001
    PUSH EDI                            ; 004e5002
    PUSH EBP                            ; 004e5003
    SUB ESP,0x10                        ; 004e5004
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e5007
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e500b
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e500f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5013
    ADD EAX,EDX                         ; 004e501a
    SHL EAX,0x5                         ; 004e501c
    LEA EDX,[ESI + 0x8]                 ; 004e501f
    LEA EDI,[EDX + EAX*0x1]             ; 004e5022
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e5025
    PUSH EDX                            ; 004e5029
    MOV EBP,dword ptr [ESP + 0x38]      ; 004e502a
    LEA EAX,[ECX*0x8 + 0x0]             ; 004e502e
    PUSH EBP                            ; 004e5035
    ADD EDI,0x10                        ; 004e5036
    ADD EAX,ECX                         ; 004e5039
    PUSH ECX                            ; 004e503b
    SHL EAX,0x3                         ; 004e503c
    PUSH ESI                            ; 004e503f
    ADD EDI,EAX                         ; 004e5040
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e5042
    PUSH EAX                            ; 004e5046
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e5047
    PUSH EDX                            ; 004e504b
    XOR EBX,EBX                         ; 004e504c
    CALL FUN_004e4c70                   ; 004e504e
        ;   XREF to: 004e4c70 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4c70()
    MOV ECX,dword ptr [EDI + 0x10]      ; 004e5053
    ADD ESP,0x18                        ; 004e5056
    TEST ECX,ECX                        ; 004e5059
    JNZ 0x004e50a6                      ; 004e505b
        ;   XREF to: 004e50a6 (CONDITIONAL_JUMP)  ; LAB_004e50a6
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e505d
        ;   Label: LAB_004e505d
    MOV EBP,dword ptr [ESP + 0x24]      ; 004e5061
    SHL EAX,0x3                         ; 004e5065
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e5068
    MOV EDI,EAX                         ; 004e506c
    LEA EDX,[EBX*0x4 + 0x0]             ; 004e506e
    SHL EDI,0x5                         ; 004e5075
    ADD EDX,EBP                         ; 004e5078
    SUB EDI,EAX                         ; 004e507a
    XOR EAX,EAX                         ; 004e507c
    ADD EDI,ECX                         ; 004e507e
    INC EBX                             ; 004e5080
        ;   Label: LAB_004e5080
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004e5081
    LEA ESI,[EDI + EAX*0x1]             ; 004e5087
    ADD EDX,0x4                         ; 004e508a
    ADD EAX,0x4                         ; 004e508d
    MOV dword ptr [ESI],ECX             ; 004e5090
    CMP EAX,0x54                        ; 004e5092
    JNZ 0x004e5080                      ; 004e5095
        ;   XREF to: 004e5080 (CONDITIONAL_JUMP)  ; LAB_004e5080
    MOV dword ptr [EDI + 0x58],0x0      ; 004e5097
    ADD ESP,0x10                        ; 004e509e
    POP EBP                             ; 004e50a1
    POP EDI                             ; 004e50a2
    POP ESI                             ; 004e50a3
    POP EBX                             ; 004e50a4
    RET                                 ; 004e50a5
    CMP dword ptr [EDI + 0x14],0x2      ; 004e50a6
        ;   Label: LAB_004e50a6
    JNZ 0x004e505d                      ; 004e50aa
        ;   XREF to: 004e505d (CONDITIONAL_JUMP)  ; LAB_004e505d
    LEA EAX,[EBP*0x8 + 0x0]             ; 004e50ac
    MOV EDX,EAX                         ; 004e50b3
    SHL EAX,0x5                         ; 004e50b5
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e50b8
    SUB EAX,EDX                         ; 004e50bc
    MOV EBP,dword ptr [EDI + 0x18]      ; 004e50be
    ADD ESI,EAX                         ; 004e50c1
    TEST EBP,EBP                        ; 004e50c3
    JZ 0x004e517c                       ; 004e50c5
        ;   XREF to: 004e517c (CONDITIONAL_JUMP)  ; LAB_004e517c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e50cb
    MOV EAX,ESI                         ; 004e50cf
    ADD ESI,0x20                        ; 004e50d1
    ADD EAX,0x4                         ; 004e50d4
        ;   Label: LAB_004e50d4
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004e50d7
    ADD EDX,0x4                         ; 004e50dd
    INC EBX                             ; 004e50e0
    MOV dword ptr [EAX + -0x4],ECX      ; 004e50e1
    CMP EAX,ESI                         ; 004e50e4
    JNZ 0x004e50d4                      ; 004e50e6
        ;   XREF to: 004e50d4 (CONDITIONAL_JUMP)  ; LAB_004e50d4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e50e8
    SHL EAX,0x3                         ; 004e50ec
    MOV EDX,EAX                         ; 004e50ef
    SHL EAX,0x5                         ; 004e50f1
    SUB EAX,EDX                         ; 004e50f4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e50f6
    MOV EBP,0xa8                        ; 004e50fa
    ADD EDX,EAX                         ; 004e50ff
    MOV EDI,0x3                         ; 004e5101
    MOV dword ptr [ESP + 0xc],EDX       ; 004e5106
    MOV dword ptr [ESP],EDX             ; 004e510a
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e510d
        ;   Label: LAB_004e510d
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e5111
    LEA EAX,[EDI*0x4 + 0x0]             ; 004e5115
    LEA EDX,[EBX*0x4 + 0x0]             ; 004e511c
    ADD EAX,ESI                         ; 004e5123
    MOV ESI,dword ptr [ESP]             ; 004e5125
    ADD EDX,ECX                         ; 004e5128
    ADD ESI,EBP                         ; 004e512a
    ADD EAX,0x34                        ; 004e512c
        ;   Label: LAB_004e512c
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004e512f
    ADD EDX,0x4                         ; 004e5135
    INC EBX                             ; 004e5138
    MOV dword ptr [EAX + 0x28],ECX      ; 004e5139
    CMP EAX,ESI                         ; 004e513c
    JNZ 0x004e512c                      ; 004e513e
        ;   XREF to: 004e512c (CONDITIONAL_JUMP)  ; LAB_004e512c
    INC EDI                             ; 004e5140
    ADD EBP,0x4                         ; 004e5141
    CMP EDI,0xc                         ; 004e5144
    JL 0x004e510d                       ; 004e5147
        ;   XREF to: 004e510d (CONDITIONAL_JUMP)  ; LAB_004e510d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e5149
    SHL EAX,0x3                         ; 004e514d
    MOV EDX,EAX                         ; 004e5150
    SHL EAX,0x5                         ; 004e5152
    SUB EAX,EDX                         ; 004e5155
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e5157
    ADD EDX,EAX                         ; 004e515b
    LEA EAX,[EDX + 0x30]                ; 004e515d
    ADD EDX,0xcc                        ; 004e5160
    ADD EAX,0x34                        ; 004e5166
        ;   Label: LAB_004e5166
    MOV dword ptr [EAX + 0x28],0x0      ; 004e5169
    CMP EAX,EDX                         ; 004e5170
    JNZ 0x004e5166                      ; 004e5172
        ;   XREF to: 004e5166 (CONDITIONAL_JUMP)  ; LAB_004e5166
    ADD ESP,0x10                        ; 004e5174
    POP EBP                             ; 004e5177
    POP EDI                             ; 004e5178
    POP ESI                             ; 004e5179
    POP EBX                             ; 004e517a
    RET                                 ; 004e517b
    MOV EBP,0x9c                        ; 004e517c
        ;   Label: LAB_004e517c
    MOV dword ptr [ESP + 0x8],ESI       ; 004e5181
    MOV dword ptr [ESP + 0x4],ESI       ; 004e5185
    XOR EDI,EDI                         ; 004e5189
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e518b
        ;   Label: LAB_004e518b
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e518f
    LEA EAX,[EDI*0x4 + 0x0]             ; 004e5193
    MOV ESI,dword ptr [ESP + 0x4]       ; 004e519a
    ADD EAX,EDX                         ; 004e519e
    LEA EDX,[EBX*0x4 + 0x0]             ; 004e51a0
    ADD ESI,EBP                         ; 004e51a7
    ADD EDX,ECX                         ; 004e51a9
    ADD EAX,0x34                        ; 004e51ab
        ;   Label: LAB_004e51ab
    MOV ECX,dword ptr [EDX + 0x7358]    ; 004e51ae
    ADD EDX,0x4                         ; 004e51b4
    INC EBX                             ; 004e51b7
    MOV dword ptr [EAX + 0x28],ECX      ; 004e51b8
    CMP EAX,ESI                         ; 004e51bb
    JNZ 0x004e51ab                      ; 004e51bd
        ;   XREF to: 004e51ab (CONDITIONAL_JUMP)  ; LAB_004e51ab
    INC EDI                             ; 004e51bf
    ADD EBP,0x4                         ; 004e51c0
    CMP EDI,0xc                         ; 004e51c3
    JL 0x004e518b                       ; 004e51c6
        ;   XREF to: 004e518b (CONDITIONAL_JUMP)  ; LAB_004e518b
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e51c8
    SHL EAX,0x3                         ; 004e51cc
    MOV EDX,EAX                         ; 004e51cf
    SHL EAX,0x5                         ; 004e51d1
    SUB EAX,EDX                         ; 004e51d4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e51d6
    ADD EDX,EAX                         ; 004e51da
    LEA EAX,[EDX + 0x30]                ; 004e51dc
    ADD EDX,0xcc                        ; 004e51df
    ADD EAX,0x34                        ; 004e51e5
        ;   Label: LAB_004e51e5
    MOV dword ptr [EAX + 0x28],0x0      ; 004e51e8
    CMP EAX,EDX                         ; 004e51ef
    JNZ 0x004e51e5                      ; 004e51f1
        ;   XREF to: 004e51e5 (CONDITIONAL_JUMP)  ; LAB_004e51e5
    ADD ESP,0x10                        ; 004e51f3
    POP EBP                             ; 004e51f6
    POP EDI                             ; 004e51f7
    POP ESI                             ; 004e51f8
    POP EBX                             ; 004e51f9
    RET                                 ; 004e51fa

