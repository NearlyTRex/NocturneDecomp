; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int dll_dx7_cpp_FUN_10001090(int param_1)
;
;
; XREF[2]:
;   dll_dx7.cpp_FUN_10001180 at 100011d5
;   dll_dx7.cpp_resolveTextureSlot_FUN_10001470 at 1000149e
;
; Called Functions:
;   dll_dx7.cpp_FUN_100030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10001090
        ;   Label: dll_dx7.cpp_FUN_10001090
    XOR EAX,EAX                         ; 10001091
    PUSH ESI                            ; 10001093
    PUSH EDI                            ; 10001094
    PUSH EBP                            ; 10001095
    CMP dword ptr [ECX + 0x8],EAX       ; 10001096
    MOV EBP,ECX                         ; 10001099
    JLE 0x100010dd                      ; 1000109b
        ;   XREF to: 100010dd (CONDITIONAL_JUMP)  ; LAB_100010dd
    LEA ECX,[EBP + 0x14]                ; 1000109d
    MOV EDI,dword ptr [ESP + 0x14]      ; 100010a0
    MOV EDX,ECX                         ; 100010a4
        ;   Label: LAB_100010a4
    LEA ESI,[EDI + 0x8]                 ; 100010a6
    MOV BL,byte ptr [EDX]               ; 100010a9
        ;   Label: LAB_100010a9
    CMP BL,byte ptr [ESI]               ; 100010ab
    JNZ 0x100010c9                      ; 100010ad
        ;   XREF to: 100010c9 (CONDITIONAL_JUMP)  ; LAB_100010c9
    OR BL,BL                            ; 100010af
    JZ 0x100010c5                       ; 100010b1
        ;   XREF to: 100010c5 (CONDITIONAL_JUMP)  ; LAB_100010c5
    MOV BL,byte ptr [EDX + 0x1]         ; 100010b3
    CMP BL,byte ptr [ESI + 0x1]         ; 100010b6
    JNZ 0x100010c9                      ; 100010b9
        ;   XREF to: 100010c9 (CONDITIONAL_JUMP)  ; LAB_100010c9
    ADD EDX,0x2                         ; 100010bb
    ADD ESI,0x2                         ; 100010be
    OR BL,BL                            ; 100010c1
    JNZ 0x100010a9                      ; 100010c3
        ;   XREF to: 100010a9 (CONDITIONAL_JUMP)  ; LAB_100010a9
    XOR EDX,EDX                         ; 100010c5
        ;   Label: LAB_100010c5
    JMP 0x100010ce                      ; 100010c7
        ;   XREF to: 100010ce (UNCONDITIONAL_JUMP)  ; LAB_100010ce
    SBB EDX,EDX                         ; 100010c9
        ;   Label: LAB_100010c9
    SBB EDX,-0x1                        ; 100010cb
    TEST EDX,EDX                        ; 100010ce
        ;   Label: LAB_100010ce
    JZ 0x100010e1                       ; 100010d0
        ;   XREF to: 100010e1 (CONDITIONAL_JUMP)  ; LAB_100010e1
    ADD ECX,0x48                        ; 100010d2
    INC EAX                             ; 100010d5
    CMP dword ptr [EBP + 0x8],EAX       ; 100010d6
    JG 0x100010a4                       ; 100010d9
        ;   XREF to: 100010a4 (CONDITIONAL_JUMP)  ; LAB_100010a4
    JMP 0x100010e1                      ; 100010db
        ;   XREF to: 100010e1 (UNCONDITIONAL_JUMP)  ; LAB_100010e1
    MOV EDI,dword ptr [ESP + 0x14]      ; 100010dd
        ;   Label: LAB_100010dd
    MOV EDX,dword ptr [EBP + 0x8]       ; 100010e1
        ;   Label: LAB_100010e1
    CMP EAX,EDX                         ; 100010e4
    JGE 0x10001103                      ; 100010e6
        ;   XREF to: 10001103 (CONDITIONAL_JUMP)  ; LAB_10001103
    SHL EAX,0x3                         ; 100010e8
    MOV ECX,dword ptr [EBP + 0xc]       ; 100010eb
    LEA EAX,[EAX + EAX*0x8]             ; 100010ee
    ADD EAX,EBP                         ; 100010f1
    MOV dword ptr [EAX + 0x54],ECX      ; 100010f3
    INC dword ptr [EBP + 0xc]           ; 100010f6
    POP EBP                             ; 100010f9
    MOV EAX,dword ptr [EAX + 0x10]      ; 100010fa
    POP EDI                             ; 100010fd
    POP ESI                             ; 100010fe
    POP EBX                             ; 100010ff
    RET 0x4                             ; 10001100
    MOV EBX,dword ptr [EBP]             ; 10001103
        ;   Label: LAB_10001103
    CMP EDX,EBX                         ; 10001106
    JGE 0x10001112                      ; 10001108
        ;   XREF to: 10001112 (CONDITIONAL_JUMP)  ; LAB_10001112
    LEA EAX,[EDX + 0x1]                 ; 1000110a
    MOV dword ptr [EBP + 0x8],EAX       ; 1000110d
    JMP 0x10001132                      ; 10001110
        ;   XREF to: 10001132 (UNCONDITIONAL_JUMP)  ; LAB_10001132
    MOV ESI,0xffffffff                  ; 10001112
        ;   Label: LAB_10001112
    XOR EDX,EDX                         ; 10001117
    XOR EAX,EAX                         ; 10001119
    TEST EBX,EBX                        ; 1000111b
    JLE 0x10001132                      ; 1000111d
        ;   XREF to: 10001132 (CONDITIONAL_JUMP)  ; LAB_10001132
    LEA ECX,[EBP + 0x54]                ; 1000111f
    CMP dword ptr [ECX],ESI             ; 10001122
        ;   Label: LAB_10001122
    JNC 0x1000112a                      ; 10001124
        ;   XREF to: 1000112a (CONDITIONAL_JUMP)  ; LAB_1000112a
    MOV ESI,dword ptr [ECX]             ; 10001126
    MOV EDX,EAX                         ; 10001128
    ADD ECX,0x48                        ; 1000112a
        ;   Label: LAB_1000112a
    INC EAX                             ; 1000112d
    CMP EAX,EBX                         ; 1000112e
    JL 0x10001122                       ; 10001130
        ;   XREF to: 10001122 (CONDITIONAL_JUMP)  ; LAB_10001122
    SHL EDX,0x3                         ; 10001132
        ;   Label: LAB_10001132
    LEA EAX,[EDX + EDX*0x8]             ; 10001135
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x10] ; 10001138
    LEA EBX,[EAX + EBP*0x1]             ; 1000113c
    PUSH ECX                            ; 1000113f
    ADD EDI,0x8                         ; 10001140
    CALL dll_dx7.cpp_FUN_100030e0       ; 10001143
        ;   XREF to: 100030e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100030e0()
    ADD ESP,0x4                         ; 10001148
    MOV EAX,dword ptr [EBP + 0xc]       ; 1000114b
    MOV ECX,0xffffffff                  ; 1000114e
    MOV dword ptr [EBX + 0x54],EAX      ; 10001153
    SUB EAX,EAX                         ; 10001156
    SCASB.REPNE ES:EDI                  ; 10001158
    NOT ECX                             ; 1000115a
    SUB EDI,ECX                         ; 1000115c
    MOV EDX,ECX                         ; 1000115e
    SHR ECX,0x2                         ; 10001160
    MOV ESI,EDI                         ; 10001163
    LEA EDI,[EBX + 0x14]                ; 10001165
    MOVSD.REP ES:EDI,ESI                ; 10001168
    MOV ECX,EDX                         ; 1000116a
    AND ECX,0x3                         ; 1000116c
    MOVSB.REP ES:EDI,ESI                ; 1000116f
    INC dword ptr [EBP + 0xc]           ; 10001171
    POP EBP                             ; 10001174
    MOV EAX,dword ptr [EBX + 0x10]      ; 10001175
    POP EDI                             ; 10001178
    POP ESI                             ; 10001179
    POP EBX                             ; 1000117a
    RET 0x4                             ; 1000117b

