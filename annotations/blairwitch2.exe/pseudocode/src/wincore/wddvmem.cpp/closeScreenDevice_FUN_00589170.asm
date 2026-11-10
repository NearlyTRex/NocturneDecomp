; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170(void)
;
;
; XREF[4]:
;   core_game.cpp_FUN_004b5190 at 004b5c5b
;   core_game.cpp_FUN_004bcbf0 at 004bcdf6
;   engine_special.cpp_presentToExternalRenderer_FUN_0055ff40 at 0055fffa
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560 at 00589603
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee2f1
;   TerminatedCString s_closeScreenDevice_Unable_005ee308
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_00622010
;   undefined4 DAT_0070c62c
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661af4
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00589170
        ;   Label: wincore_wddvmem.cpp_closeScreenDevice_FUN_00589170
    CMP dword ptr [0x02661afc],0x0      ; 00589171 | DAT_02661afc
    JNZ 0x0058923a                      ; 00589178
        ;   XREF to: 0058923a (CONDITIONAL_JUMP)  ; LAB_0058923a
    MOV ECX,dword ptr [0x01c37788]      ; 0058917e | DAT_01c37788
    TEST ECX,ECX                        ; 00589184
    JNZ 0x0058923c                      ; 00589186
        ;   XREF to: 0058923c (CONDITIONAL_JUMP)  ; LAB_0058923c
    PUSH EDI                            ; 0058918c
    PUSH ESI                            ; 0058918d
    CMP dword ptr [0x006141bc],0x0      ; 0058918e | DAT_006141bc
    JLE 0x005891f7                      ; 00589195
        ;   XREF to: 005891f7 (CONDITIONAL_JUMP)  ; LAB_005891f7
    PUSH EBX                            ; 00589197
    MOV EAX,[0x006141c0]                ; 00589198 | DAT_006141c0
    MOV EDX,EAX                         ; 0058919d
    SAR EDX,0x1f                        ; 0058919f
    SHL EDX,0x3                         ; 005891a2
    SBB EAX,EDX                         ; 005891a5
    SAR EAX,0x3                         ; 005891a7
    MOV EDI,EAX                         ; 005891aa
    IMUL EDX,dword ptr [0x006141b8],0x0 ; 005891ac | DAT_006141b8
    MOV EBP,dword ptr [0x006141b8]      ; 005891b3 | DAT_006141b8
    SHL EBP,0x2                         ; 005891b9
    XOR EAX,EAX                         ; 005891bc
    MOV ESI,dword ptr [0x006141b8]      ; 005891be | DAT_006141b8
        ;   Label: LAB_005891be
    IMUL ESI,ECX                        ; 005891c4
    IMUL ESI,EDI                        ; 005891c7
    MOV EBX,dword ptr [0x00622010]      ; 005891ca | DAT_00622010
    ADD EBX,ESI                         ; 005891d0
    MOV dword ptr [EAX + 0x1c2a38c],EBX ; 005891d2 | DAT_01c2a38c | DAT_01c2a390
    MOV EBX,dword ptr [0x0070c62c]      ; 005891d8 | DAT_0070c62c
    ADD EAX,0x4                         ; 005891de
    ADD EBX,EDX                         ; 005891e1
    INC ECX                             ; 005891e3
    MOV dword ptr [EAX + 0x1c2b648],EBX ; 005891e4 | DAT_01c2b64c
    MOV EBX,dword ptr [0x006141bc]      ; 005891ea | DAT_006141bc
    ADD EDX,EBP                         ; 005891f0
    CMP ECX,EBX                         ; 005891f2
    JL 0x005891be                       ; 005891f4
        ;   XREF to: 005891be (CONDITIONAL_JUMP)  ; LAB_005891be
    POP EBX                             ; 005891f6
    PUSH 0x0                            ; 005891f7
        ;   Label: LAB_005891f7
    MOV EAX,[0x02661ae8]                ; 005891f9 | DAT_02661ae8
    PUSH EAX                            ; 005891fe
    MOV EDX,dword ptr [EAX]             ; 005891ff
    CALL dword ptr [EDX + 0x80]         ; 00589201
    TEST EAX,EAX                        ; 00589207
    JZ 0x0058922e                       ; 00589209
        ;   XREF to: 0058922e (CONDITIONAL_JUMP)  ; LAB_0058922e
    MOV ESI,0x5ee2f1                    ; 0058920b | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x265                       ; 00589210
    PUSH 0x5ee308                       ; 00589215 | = "closeScreenDevice - Unable to unlock"
    MOV dword ptr [0x01d046a0],ESI      ; 0058921a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00589220 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00589226
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0058922b
    MOV dword ptr [0x02661af4],0x1      ; 0058922e | DAT_02661af4
        ;   Label: LAB_0058922e
    POP ESI                             ; 00589238
    POP EDI                             ; 00589239
    POP EBP                             ; 0058923a
        ;   Label: LAB_0058923a
    RET                                 ; 0058923b
    MOV dword ptr [0x02661af4],0x1      ; 0058923c | DAT_02661af4
        ;   Label: LAB_0058923c
    POP EBP                             ; 00589246
    RET                                 ; 00589247

