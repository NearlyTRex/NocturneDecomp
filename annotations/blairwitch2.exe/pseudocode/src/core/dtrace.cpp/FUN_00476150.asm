; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476150(int param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0052d0e0 at 0052d183
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d1c24
;   TerminatedCString s_CDemonRenderer_getPVS_PV_005d1c37
;   TerminatedCString s_core_dtrace_cpp_005d1c62
;   TerminatedCString s_CDemonRaytrace_getPVS_no_005d1c75
;   TerminatedCString s_core_dtrace_cpp_005d1ca3
;   TerminatedCString s_CDemonRaytrace_getPVS_ou_005d1cb6
;   TerminatedCString s_core_dtrace_cpp_005d1cdd
;   TerminatedCString s_CDemonRenderer_savePVS_c_005d1cf0
;   undefined4 DAT_01bd3c5c
;   undefined4 DAT_01bd3c60
;   undefined4 DAT_01bd3c68
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476150
        ;   Label: FUN_00476150
    PUSH ESI                            ; 00476151
    PUSH EDI                            ; 00476152
    PUSH EBP                            ; 00476153
    MOV EBX,dword ptr [ESP + 0x18]      ; 00476154
    CMP dword ptr [0x01bd3c60],0x0      ; 00476158 | DAT_01bd3c60
    JNZ 0x00476184                      ; 0047615f
        ;   XREF to: 00476184 (CONDITIONAL_JUMP)  ; LAB_00476184
    MOV ECX,0x5d1c24                    ; 00476161 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8ea                       ; 00476166
    PUSH 0x5d1c37                       ; 0047616b | = "CDemonRenderer::getPVS - PVS is not v..."
    MOV dword ptr [0x01d046a0],ECX      ; 00476170 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00476176 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0047617c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00476181
    MOV EAX,[0x01bd3c5c]                ; 00476184 | DAT_01bd3c5c
        ;   Label: LAB_00476184
    MOV dword ptr [EBX],EAX             ; 00476189
    SHL EAX,0x2                         ; 0047618b
    PUSH EAX                            ; 0047618e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047618f
    MOV EDI,dword ptr [EAX]             ; 00476193
    PUSH EDI                            ; 00476195
    CALL FUN_005b8ce0                   ; 00476196
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 0047619b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047619e
    MOV dword ptr [EDX],EAX             ; 004761a2
    CMP dword ptr [EBX],0x1             ; 004761a4
    JGE 0x004761cb                      ; 004761a7
        ;   XREF to: 004761cb (CONDITIONAL_JUMP)  ; LAB_004761cb
    MOV EAX,0x5d1c62                    ; 004761a9 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x8f6                       ; 004761ae
    PUSH 0x5d1c75                       ; 004761b3 | = "CDemonRaytrace::getPVS - no cubes ren..."
    MOV [0x01d046a0],EAX                ; 004761b8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004761bd | DAT_01d046a4
    CALL FUN_004e4500                   ; 004761c3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004761c8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004761cb
        ;   Label: LAB_004761cb
    CMP dword ptr [EAX],0x0             ; 004761cf
    JNZ 0x004761f7                      ; 004761d2
        ;   XREF to: 004761f7 (CONDITIONAL_JUMP)  ; LAB_004761f7
    MOV EBX,0x5d1ca3                    ; 004761d4 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8fa                       ; 004761d9
    PUSH 0x5d1cb6                       ; 004761de | = "CDemonRaytrace::getPVS - out of memory"
    MOV dword ptr [0x01d046a0],EBX      ; 004761e3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004761e9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004761ef
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004761f4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004761f7
        ;   Label: LAB_004761f7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004761fb
    MOV EDI,dword ptr [EDX + 0x44]      ; 004761ff
    MOV EAX,dword ptr [EAX + 0x40]      ; 00476202
    IMUL EAX,EDI                        ; 00476205
    MOV ESI,dword ptr [EDX + 0x48]      ; 00476208
    IMUL ESI,EAX                        ; 0047620b
    MOV EAX,[0x01bd3c5c]                ; 0047620e | DAT_01bd3c5c
    XOR EBP,EBP                         ; 00476213
    TEST EAX,EAX                        ; 00476215
    JLE 0x00476270                      ; 00476217
        ;   XREF to: 00476270 (CONDITIONAL_JUMP)  ; LAB_00476270
    XOR EDI,EDI                         ; 00476219
    XOR EBX,EBX                         ; 0047621b
        ;   Label: LAB_0047621b
    TEST ESI,ESI                        ; 0047621d
    JLE 0x00476232                      ; 0047621f
        ;   XREF to: 00476232 (CONDITIONAL_JUMP)  ; LAB_00476232
    MOV EAX,dword ptr [ESP + 0x14]      ; 00476221
    MOV EDX,EDI                         ; 00476225
    MOV EAX,dword ptr [EAX + 0x50]      ; 00476227
    CMP EAX,dword ptr [EDX + 0x1bd3c64] ; 0047622a | DAT_01bd3c68
        ;   Label: LAB_0047622a
    JNZ 0x00476275                      ; 00476230
        ;   XREF to: 00476275 (CONDITIONAL_JUMP)  ; LAB_00476275
    CMP EBX,ESI                         ; 00476232
        ;   Label: LAB_00476232
    JL 0x00476258                       ; 00476234
        ;   XREF to: 00476258 (CONDITIONAL_JUMP)  ; LAB_00476258
    MOV EAX,0x5d1cdd                    ; 00476236 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x907                       ; 0047623b
    PUSH 0x5d1cf0                       ; 00476240 | = "CDemonRenderer::savePVS - can't find ..."
    MOV [0x01d046a0],EAX                ; 00476245 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0047624a | DAT_01d046a4
    CALL FUN_004e4500                   ; 00476250
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00476255
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00476258
        ;   Label: LAB_00476258
    ADD EDI,0x4                         ; 0047625c
    MOV EAX,dword ptr [EAX]             ; 0047625f
    MOV EDX,dword ptr [0x01bd3c5c]      ; 00476261 | DAT_01bd3c5c
    INC EBP                             ; 00476267
    MOV dword ptr [EDI + EAX*0x1 + -0x4],EBX ; 00476268
    CMP EBP,EDX                         ; 0047626c
    JL 0x0047621b                       ; 0047626e
        ;   XREF to: 0047621b (CONDITIONAL_JUMP)  ; LAB_0047621b
    POP EBP                             ; 00476270
        ;   Label: LAB_00476270
    POP EDI                             ; 00476271
    POP ESI                             ; 00476272
    POP EBX                             ; 00476273
    RET                                 ; 00476274
    INC EBX                             ; 00476275
        ;   Label: LAB_00476275
    ADD EAX,0x34                        ; 00476276
    CMP EBX,ESI                         ; 00476279
    JL 0x0047622a                       ; 0047627b
        ;   XREF to: 0047622a (CONDITIONAL_JUMP)  ; LAB_0047622a
    JMP 0x00476232                      ; 0047627d
        ;   XREF to: 00476232 (UNCONDITIONAL_JUMP)  ; LAB_00476232

