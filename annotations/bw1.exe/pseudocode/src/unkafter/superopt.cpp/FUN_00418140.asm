; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_superopt_cpp_FUN_00418140(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418140
        ;   Label: unkafter_superopt.cpp_FUN_00418140
    PUSH ESI                            ; 00418141
    PUSH EDI                            ; 00418142
    PUSH EBP                            ; 00418143
    MOV EDI,dword ptr [ESP + 0x14]      ; 00418144
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 00418148
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 0041814d
    PUSH 0x0                            ; 00418152
    LEA EAX,[EDI + 0x4]                 ; 00418154
    PUSH 0x0                            ; 00418157
    LEA EBP,[EDI + 0x70]                ; 00418159
    PUSH EAX                            ; 0041815c
    XOR ESI,ESI                         ; 0041815d
    MOV EBX,EDI                         ; 0041815f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 00418161
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00418166
    MOV EAX,dword ptr [EDI + 0x20]      ; 00418169
        ;   Label: LAB_00418169
    INC EAX                             ; 0041816c
    CMP ESI,EAX                         ; 0041816d
    JGE 0x004181a3                      ; 0041816f
        ;   XREF to: 004181a3 (CONDITIONAL_JUMP)  ; LAB_004181a3
    IMUL EAX,ESI,0x2c                   ; 00418171
    CMP dword ptr [EBX + 0x98],0x1      ; 00418174
    JZ 0x00418183                       ; 0041817b
        ;   XREF to: 00418183 (CONDITIONAL_JUMP)  ; LAB_00418183
    INC ESI                             ; 0041817d
        ;   Label: LAB_0041817d
    ADD EBX,0x2c                        ; 0041817e
    JMP 0x00418169                      ; 00418181
        ;   XREF to: 00418169 (UNCONDITIONAL_JUMP)  ; LAB_00418169
    PUSH 0xffff                         ; 00418183
        ;   Label: LAB_00418183
    MOV EDX,dword ptr [EBX + 0x8c]      ; 00418188
    PUSH EDX                            ; 0041818e
    MOV ECX,dword ptr [EBX + 0x88]      ; 0041818f
    PUSH ECX                            ; 00418195
    ADD EAX,EBP                         ; 00418196
    PUSH EAX                            ; 00418198
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 00418199
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0041819e
    JMP 0x0041817d                      ; 004181a1
        ;   XREF to: 0041817d (UNCONDITIONAL_JUMP)  ; LAB_0041817d
    CMP dword ptr [EDI + 0x34],0x0      ; 004181a3
        ;   Label: LAB_004181a3
    JNZ 0x004181ee                      ; 004181a7
        ;   XREF to: 004181ee (CONDITIONAL_JUMP)  ; LAB_004181ee
    MOV EDX,dword ptr [EDI + 0x18]      ; 004181a9
        ;   Label: LAB_004181a9
    MOV EAX,[0x01c43540]                ; 004181ac | DAT_01c43540
    MOV ECX,dword ptr [EDI + EDX*0x4 + 0x91c] ; 004181b1
    PUSH 0xffff                         ; 004181b8
    SUB EAX,ECX                         ; 004181bd
    MOV EBX,dword ptr [EDI + EDX*0x4 + 0x908] ; 004181bf
    PUSH EAX                            ; 004181c6
    MOV EAX,[0x01c4353c]                ; 004181c7 | DAT_01c4353c
    SUB EAX,EBX                         ; 004181cc
    PUSH EAX                            ; 004181ce
    LEA EAX,[EDX*0x4 + 0x0]             ; 004181cf
    ADD EAX,EDX                         ; 004181d6
    SHL EAX,0x2                         ; 004181d8
    ADD EAX,0x7c39d4                    ; 004181db
    PUSH EAX                            ; 004181e0
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004181e1
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004181e6
    POP EBP                             ; 004181e9
    POP EDI                             ; 004181ea
    POP ESI                             ; 004181eb
    POP EBX                             ; 004181ec
    RET                                 ; 004181ed
    MOV EAX,[0x01c43540]                ; 004181ee | DAT_01c43540
        ;   Label: LAB_004181ee
    MOV ECX,dword ptr [EDI + 0x92c]     ; 004181f3
    PUSH 0xffff                         ; 004181f9
    SUB EAX,ECX                         ; 004181fe
    MOV EBX,dword ptr [EDI + 0x918]     ; 00418200
    PUSH EAX                            ; 00418206
    MOV EAX,[0x01c4353c]                ; 00418207 | DAT_01c4353c
    SUB EAX,EBX                         ; 0041820c
    PUSH EAX                            ; 0041820e
    PUSH 0x7c3a24                       ; 0041820f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 00418214
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00418219
    JMP 0x004181a9                      ; 0041821c
        ;   XREF to: 004181a9 (UNCONDITIONAL_JUMP)  ; LAB_004181a9

