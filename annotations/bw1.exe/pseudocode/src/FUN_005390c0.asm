; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005390c0(CPackedBitmapSet *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00538db0
;   crt_string.c__stricmp_FUN_005c04e0
;   FUN_00539090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005390c0
        ;   Label: FUN_005390c0
    PUSH ESI                            ; 005390c1
    PUSH EDI                            ; 005390c2
    PUSH EBP                            ; 005390c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005390c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005390c8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005390cc
    CMP byte ptr [EDI + 0x8],0x0        ; 005390d0
    JNZ 0x00539125                      ; 005390d4
        ;   XREF to: 00539125 (CONDITIONAL_JUMP)  ; LAB_00539125
    TEST EBX,EBX                        ; 005390d6
    JGE 0x00539105                      ; 005390d8
        ;   XREF to: 00539105 (CONDITIONAL_JUMP)  ; LAB_00539105
    MOV EDX,dword ptr [EDI]             ; 005390da
    XOR EBX,EBX                         ; 005390dc
    TEST EDX,EDX                        ; 005390de
    JLE 0x00539100                      ; 005390e0
        ;   XREF to: 00539100 (CONDITIONAL_JUMP)  ; LAB_00539100
    XOR ESI,ESI                         ; 005390e2
    MOV EAX,dword ptr [EDI + 0x4]       ; 005390e4
        ;   Label: LAB_005390e4
    PUSH EBP                            ; 005390e7
    ADD EAX,ESI                         ; 005390e8
    PUSH EAX                            ; 005390ea
    INC EBX                             ; 005390eb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0 ; 005390ec
        ;   XREF to: 005380c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESI,0x24                        ; 005390f1
    MOV ECX,dword ptr [EDI]             ; 005390f4
    ADD ESP,0x8                         ; 005390f6
    CMP EBX,ECX                         ; 005390f9
    JL 0x005390e4                       ; 005390fb
        ;   XREF to: 005390e4 (CONDITIONAL_JUMP)  ; LAB_005390e4
    LEA EAX,[EAX]                       ; 005390fd
    POP EBP                             ; 00539100
        ;   Label: LAB_00539100
    POP EDI                             ; 00539101
    POP ESI                             ; 00539102
    POP EBX                             ; 00539103
    RET                                 ; 00539104
    LEA EAX,[EBX*0x8 + 0x0]             ; 00539105
        ;   Label: LAB_00539105
    ADD EBX,EAX                         ; 0053910c
    SHL EBX,0x2                         ; 0053910e
    MOV EAX,dword ptr [EDI + 0x4]       ; 00539111
    PUSH EBP                            ; 00539114
    ADD EAX,EBX                         ; 00539115
    PUSH EAX                            ; 00539117
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0 ; 00539118
        ;   XREF to: 005380c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 0053911d
    POP EBP                             ; 00539120
    POP EDI                             ; 00539121
    POP ESI                             ; 00539122
    POP EBX                             ; 00539123
    RET                                 ; 00539124
    MOV DL,0x2e                         ; 00539125
        ;   Label: LAB_00539125
    LEA ESI,[EDI + 0x8]                 ; 00539127
    MOV AL,byte ptr [ESI]               ; 0053912a
        ;   Label: LAB_0053912a
    CMP AL,DL                           ; 0053912c
    JZ 0x00539142                       ; 0053912e
        ;   XREF to: 00539142 (CONDITIONAL_JUMP)  ; LAB_00539142
    CMP AL,0x0                          ; 00539130
    JZ 0x00539140                       ; 00539132
        ;   XREF to: 00539140 (CONDITIONAL_JUMP)  ; LAB_00539140
    INC ESI                             ; 00539134
    MOV AL,byte ptr [ESI]               ; 00539135
    CMP AL,DL                           ; 00539137
    JZ 0x00539142                       ; 00539139
        ;   XREF to: 00539142 (CONDITIONAL_JUMP)  ; LAB_00539142
    INC ESI                             ; 0053913b
    CMP AL,0x0                          ; 0053913c
    JNZ 0x0053912a                      ; 0053913e
        ;   XREF to: 0053912a (CONDITIONAL_JUMP)  ; LAB_0053912a
    SUB ESI,ESI                         ; 00539140
        ;   Label: LAB_00539140
    TEST ESI,ESI                        ; 00539142
        ;   Label: LAB_00539142
    JZ 0x00539100                       ; 00539144
        ;   XREF to: 00539100 (CONDITIONAL_JUMP)  ; LAB_00539100
    PUSH 0x5ed401                       ; 00539146
    PUSH ESI                            ; 0053914b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053914c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00539151
    TEST EAX,EAX                        ; 00539154
    JZ 0x0053917a                       ; 00539156
        ;   XREF to: 0053917a (CONDITIONAL_JUMP)  ; LAB_0053917a
    PUSH 0x5ed406                       ; 00539158
    PUSH ESI                            ; 0053915d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053915e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00539163
    TEST EAX,EAX                        ; 00539166
    JNZ 0x00539100                      ; 00539168
        ;   XREF to: 00539100 (CONDITIONAL_JUMP)  ; LAB_00539100
    PUSH EBX                            ; 0053916a
    PUSH EBP                            ; 0053916b
    PUSH EDI                            ; 0053916c
    CALL FUN_00539090                   ; 0053916d
        ;   XREF to: 00539090 (UNCONDITIONAL_CALL)  ; undefined FUN_00539090()
    ADD ESP,0xc                         ; 00539172
    POP EBP                             ; 00539175
    POP EDI                             ; 00539176
    POP ESI                             ; 00539177
    POP EBX                             ; 00539178
    RET                                 ; 00539179
    PUSH EBX                            ; 0053917a
        ;   Label: LAB_0053917a
    PUSH EBP                            ; 0053917b
    PUSH EDI                            ; 0053917c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00538db0 ; 0053917d
        ;   XREF to: 00538db0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00538db0(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 00539182
    POP EBP                             ; 00539185
    POP EDI                             ; 00539186
    POP ESI                             ; 00539187
    POP EBX                             ; 00539188
    RET                                 ; 00539189

