; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * __cftoe2(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)
;
;
; XREF[2]:
;   __cftoe at 10007097
;   __cftog at 1000736b
;
; Referenced Globals:
;   undefined4 DAT_10012408
;   undefined2 DAT_1001240c
;   undefined1 DAT_10017694
;
; Called Functions:
;   __shift
;
; *****************************************************************************

section .text

    CMP byte ptr [ESP + 0x14],0x0       ; 100070b0
        ;   Label: __cftoe2
    PUSH EBX                            ; 100070b5
    PUSH ESI                            ; 100070b6
    PUSH EDI                            ; 100070b7
    JZ 0x100070eb                       ; 100070b8
        ;   XREF to: 100070eb (CONDITIONAL_JUMP)  ; LAB_100070eb
    MOV ESI,dword ptr [ESP + 0x1c]      ; 100070ba
    MOV EDI,dword ptr [ESP + 0x10]      ; 100070be
    MOV EBX,dword ptr [ESP + 0x14]      ; 100070c2
    MOV EAX,dword ptr [ESI]             ; 100070c6
    SUB EAX,0x2d                        ; 100070c8
    MOV ECX,0x1                         ; 100070cb
    CMP EAX,0x1                         ; 100070d0
    SBB EAX,EAX                         ; 100070d3
    NEG EAX                             ; 100070d5
    ADD EAX,EDI                         ; 100070d7
    TEST EBX,EBX                        ; 100070d9
    JG 0x100070df                       ; 100070db
        ;   XREF to: 100070df (CONDITIONAL_JUMP)  ; LAB_100070df
    XOR ECX,ECX                         ; 100070dd
    PUSH ECX                            ; 100070df
        ;   Label: LAB_100070df
    PUSH EAX                            ; 100070e0
    CALL __shift                        ; 100070e1
        ;   XREF to: 100073f0 (UNCONDITIONAL_CALL)  ; undefined __shift()
    ADD ESP,0x8                         ; 100070e6
    JMP 0x100070f7                      ; 100070e9
        ;   XREF to: 100070f7 (UNCONDITIONAL_JUMP)  ; LAB_100070f7
    MOV EDI,dword ptr [ESP + 0x10]      ; 100070eb
        ;   Label: LAB_100070eb
    MOV EBX,dword ptr [ESP + 0x14]      ; 100070ef
    MOV ESI,dword ptr [ESP + 0x1c]      ; 100070f3
    MOV ECX,EDI                         ; 100070f7
        ;   Label: LAB_100070f7
    CMP dword ptr [ESI],0x2d            ; 100070f9
    JNZ 0x10007104                      ; 100070fc
        ;   XREF to: 10007104 (CONDITIONAL_JUMP)  ; LAB_10007104
    LEA ECX,[EDI + 0x1]                 ; 100070fe
    MOV byte ptr [EDI],0x2d             ; 10007101
    TEST EBX,EBX                        ; 10007104
        ;   Label: LAB_10007104
    JLE 0x10007118                      ; 10007106
        ;   XREF to: 10007118 (CONDITIONAL_JUMP)  ; LAB_10007118
    LEA EDX,[ECX + 0x1]                 ; 10007108
    MOV AL,byte ptr [EDX]               ; 1000710b
    MOV byte ptr [ECX],AL               ; 1000710d
    MOV ECX,EDX                         ; 1000710f
    MOV AL,[0x10017694]                 ; 10007111 | DAT_10017694
    MOV byte ptr [EDX],AL               ; 10007116
    CMP byte ptr [ESP + 0x20],0x1       ; 10007118
        ;   Label: LAB_10007118
    SBB EAX,EAX                         ; 1000711d
    NEG EAX                             ; 1000711f
    ADD EAX,ECX                         ; 10007121
    ADD EBX,EAX                         ; 10007123
    MOV ECX,dword ptr [0x10012408]      ; 10007125 | DAT_10012408
    MOV EAX,0x10012408                  ; 1000712b | DAT_10012408
    MOV dword ptr [EBX],ECX             ; 10007130
    CMP dword ptr [ESP + 0x18],0x0      ; 10007132
    MOV AX,word ptr [EAX + 0x4]         ; 10007137 | DAT_1001240c
    MOV word ptr [EBX + 0x4],AX         ; 1000713b
    JZ 0x10007144                       ; 1000713f
        ;   XREF to: 10007144 (CONDITIONAL_JUMP)  ; LAB_10007144
    MOV byte ptr [EBX],0x45             ; 10007141
    INC EBX                             ; 10007144
        ;   Label: LAB_10007144
    MOV EAX,dword ptr [ESI + 0xc]       ; 10007145
    CMP byte ptr [EAX],0x30             ; 10007148
    JZ 0x1000718d                       ; 1000714b
        ;   XREF to: 1000718d (CONDITIONAL_JUMP)  ; LAB_1000718d
    MOV ECX,dword ptr [ESI + 0x4]       ; 1000714d
    DEC ECX                             ; 10007150
    JNS 0x10007158                      ; 10007151
        ;   XREF to: 10007158 (CONDITIONAL_JUMP)  ; LAB_10007158
    NEG ECX                             ; 10007153
    MOV byte ptr [EBX],0x2d             ; 10007155
    INC EBX                             ; 10007158
        ;   Label: LAB_10007158
    CMP ECX,0x64                        ; 10007159
    JL 0x10007171                       ; 1000715c
        ;   XREF to: 10007171 (CONDITIONAL_JUMP)  ; LAB_10007171
    MOV ESI,0x64                        ; 1000715e
    MOV EAX,ECX                         ; 10007163
    CDQ                                 ; 10007165
    IDIV ESI                            ; 10007166
    ADD byte ptr [EBX],AL               ; 10007168
    MOV EAX,ECX                         ; 1000716a
    CDQ                                 ; 1000716c
    IDIV ESI                            ; 1000716d
    MOV ECX,EDX                         ; 1000716f
    INC EBX                             ; 10007171
        ;   Label: LAB_10007171
    CMP ECX,0xa                         ; 10007172
    JL 0x1000718a                       ; 10007175
        ;   XREF to: 1000718a (CONDITIONAL_JUMP)  ; LAB_1000718a
    MOV ESI,0xa                         ; 10007177
    MOV EAX,ECX                         ; 1000717c
    CDQ                                 ; 1000717e
    IDIV ESI                            ; 1000717f
    ADD byte ptr [EBX],AL               ; 10007181
    MOV EAX,ECX                         ; 10007183
    CDQ                                 ; 10007185
    IDIV ESI                            ; 10007186
    MOV ECX,EDX                         ; 10007188
    ADD byte ptr [EBX + 0x1],CL         ; 1000718a
        ;   Label: LAB_1000718a
    MOV EAX,EDI                         ; 1000718d
        ;   Label: LAB_1000718d
    POP EDI                             ; 1000718f
    POP ESI                             ; 10007190
    POP EBX                             ; 10007191
    RET                                 ; 10007192

