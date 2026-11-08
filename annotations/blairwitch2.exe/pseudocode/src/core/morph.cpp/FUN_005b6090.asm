; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6090(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[2]:
;   FUN_005b63b0 at 005b63ee
;   FUN_005b6ec0 at 005b6f09
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f14cf
;   TerminatedCString s_CMorphModel_addPart_too_005f14e1
;   TerminatedCString s_core_morph_cpp_005f1508
;   TerminatedCString s_CMorphModel_setup_out_of_005f151a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b6400
;   FUN_005b65a0
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6090
        ;   Label: FUN_005b6090
    PUSH ESI                            ; 005b6091
    PUSH EDI                            ; 005b6092
    PUSH EBP                            ; 005b6093
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b6094
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b6098
    CMP dword ptr [ESI],0x5             ; 005b609c
    JGE 0x005b61a6                      ; 005b609f
        ;   XREF to: 005b61a6 (CONDITIONAL_JUMP)  ; LAB_005b61a6
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b60a5
        ;   Label: LAB_005b60a5
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b60a9
    MOV EDX,EBP                         ; 005b60ad
    XOR ECX,ECX                         ; 005b60af
    TEST EAX,EAX                        ; 005b60b1
    JLE 0x005b60d0                      ; 005b60b3
        ;   XREF to: 005b60d0 (CONDITIONAL_JUMP)  ; LAB_005b60d0
    MOV EBX,dword ptr [EDX + 0x4]       ; 005b60b5
        ;   Label: LAB_005b60b5
    DEC EAX                             ; 005b60b8
    SUB EBX,0x2                         ; 005b60b9
    ADD EDX,EDI                         ; 005b60bc
    ADD ECX,EBX                         ; 005b60be
    TEST EAX,EAX                        ; 005b60c0
    JG 0x005b60b5                       ; 005b60c2
        ;   XREF to: 005b60b5 (CONDITIONAL_JUMP)  ; LAB_005b60b5
    LEA EAX,[EAX]                       ; 005b60c4
    LEA EDX,[EDX]                       ; 005b60ca
    MOV EAX,dword ptr [ESI]             ; 005b60d0
        ;   Label: LAB_005b60d0
    SHL EAX,0x4                         ; 005b60d2
    LEA EDX,[ESI + EAX*0x1]             ; 005b60d5
    MOV EAX,dword ptr [ESI + 0x54]      ; 005b60d8
    MOV dword ptr [EDX + 0xc],EAX       ; 005b60db
    MOV EAX,dword ptr [ESI]             ; 005b60de
    SHL EAX,0x4                         ; 005b60e0
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b60e3
    MOV dword ptr [ESI + EAX*0x1 + 0x4],EDX ; 005b60e7
    MOV EAX,dword ptr [ESI]             ; 005b60eb
    SHL EAX,0x4                         ; 005b60ed
    MOV EDX,dword ptr [ESI + 0x5c]      ; 005b60f0
    MOV dword ptr [ESI + EAX*0x1 + 0x10],EDX ; 005b60f3
    MOV EAX,dword ptr [ESI]             ; 005b60f7
    SHL EAX,0x4                         ; 005b60f9
    MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 005b60fc
    MOV EAX,dword ptr [ESI]             ; 005b6100
    SHL EAX,0x4                         ; 005b6102
    MOV EDI,dword ptr [ESI + 0x54]      ; 005b6105
    ADD EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 005b6108
    MOV EAX,dword ptr [ESI]             ; 005b610c
    MOV dword ptr [ESI + 0x54],EDI      ; 005b610e
    SHL EAX,0x4                         ; 005b6111
    MOV EDX,dword ptr [ESI + 0x5c]      ; 005b6114
    ADD EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 005b6117
    MOV EAX,dword ptr [ESI + 0x54]      ; 005b611b
    SHL EAX,0x4                         ; 005b611e
    PUSH EAX                            ; 005b6121
    MOV ECX,dword ptr [ESI + 0x58]      ; 005b6122
    PUSH ECX                            ; 005b6125
    MOV dword ptr [ESI + 0x5c],EDX      ; 005b6126
    CALL FUN_005b8ce0                   ; 005b6129
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    MOV dword ptr [ESI + 0x58],EAX      ; 005b612e
    MOV EAX,dword ptr [ESI + 0x5c]      ; 005b6131
    SHL EAX,0x2                         ; 005b6134
    MOV EDX,EAX                         ; 005b6137
    SHL EAX,0x4                         ; 005b6139
    ADD ESP,0x8                         ; 005b613c
    SUB EAX,EDX                         ; 005b613f
    PUSH EAX                            ; 005b6141
    MOV EBX,dword ptr [ESI + 0x60]      ; 005b6142
    PUSH EBX                            ; 005b6145
    CALL FUN_005b8ce0                   ; 005b6146
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 005b614b
    MOV EDI,dword ptr [ESI]             ; 005b614e
    MOV dword ptr [ESI + 0x60],EAX      ; 005b6150
    INC EDI                             ; 005b6153
    MOV EAX,dword ptr [ESI + 0x58]      ; 005b6154
    MOV dword ptr [ESI],EDI             ; 005b6157
    TEST EAX,EAX                        ; 005b6159
    JNZ 0x005b61ce                      ; 005b615b
        ;   XREF to: 005b61ce (CONDITIONAL_JUMP)  ; LAB_005b61ce
    MOV ECX,0x5f1508                    ; 005b615d | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b615d
    MOV EBX,0x90                        ; 005b6162
    PUSH 0x5f151a                       ; 005b6167 | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01d046a0],ECX      ; 005b616c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005b6172 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005b6178
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005b617d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005b6180
        ;   Label: LAB_005b6180
    TEST EDI,EDI                        ; 005b6184
    JZ 0x005b619d                       ; 005b6186
        ;   XREF to: 005b619d (CONDITIONAL_JUMP)  ; LAB_005b619d
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b6188
    PUSH EAX                            ; 005b618c
    PUSH 0x0                            ; 005b618d
    MOV EAX,dword ptr [ESI]             ; 005b618f
    PUSH EDI                            ; 005b6191
    DEC EAX                             ; 005b6192
    PUSH EAX                            ; 005b6193
    PUSH ESI                            ; 005b6194
    CALL FUN_005b6400                   ; 005b6195
        ;   XREF to: 005b6400 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6400()
    ADD ESP,0x14                        ; 005b619a
    TEST EBP,EBP                        ; 005b619d
        ;   Label: LAB_005b619d
    JNZ 0x005b61d6                      ; 005b619f
        ;   XREF to: 005b61d6 (CONDITIONAL_JUMP)  ; LAB_005b61d6
    POP EBP                             ; 005b61a1
    POP EDI                             ; 005b61a2
    POP ESI                             ; 005b61a3
    POP EBX                             ; 005b61a4
    RET                                 ; 005b61a5
    MOV ECX,0x5f14cf                    ; 005b61a6 | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b61a6
    MOV EBX,0x77                        ; 005b61ab
    PUSH 0x5f14e1                       ; 005b61b0 | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01d046a0],ECX      ; 005b61b5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005b61bb | DAT_01d046a4
    CALL FUN_004e4500                   ; 005b61c1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005b61c6
    JMP 0x005b60a5                      ; 005b61c9
        ;   XREF to: 005b60a5 (UNCONDITIONAL_JUMP)  ; LAB_005b60a5
    CMP dword ptr [ESI + 0x60],0x0      ; 005b61ce
        ;   Label: LAB_005b61ce
    JZ 0x005b615d                       ; 005b61d2
        ;   XREF to: 005b615d (CONDITIONAL_JUMP)  ; LAB_005b615d
    JMP 0x005b6180                      ; 005b61d4
        ;   XREF to: 005b6180 (UNCONDITIONAL_JUMP)  ; LAB_005b6180
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b61d6
        ;   Label: LAB_005b61d6
    PUSH ECX                            ; 005b61da
    PUSH 0x0                            ; 005b61db
    MOV EBX,dword ptr [ESP + 0x38]      ; 005b61dd
    PUSH EBX                            ; 005b61e1
    MOV EDI,dword ptr [ESP + 0x38]      ; 005b61e2
    PUSH EDI                            ; 005b61e6
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b61e7
    PUSH EAX                            ; 005b61eb
    MOV EAX,dword ptr [ESI]             ; 005b61ec
    PUSH EBP                            ; 005b61ee
    DEC EAX                             ; 005b61ef
    PUSH EAX                            ; 005b61f0
    PUSH ESI                            ; 005b61f1
    CALL FUN_005b65a0                   ; 005b61f2
        ;   XREF to: 005b65a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b65a0()
    ADD ESP,0x20                        ; 005b61f7
    POP EBP                             ; 005b61fa
    POP EDI                             ; 005b61fb
    POP ESI                             ; 005b61fc
    POP EBX                             ; 005b61fd
    RET                                 ; 005b61fe

