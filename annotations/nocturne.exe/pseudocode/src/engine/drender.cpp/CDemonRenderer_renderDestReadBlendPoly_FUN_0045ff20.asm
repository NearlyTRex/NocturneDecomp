; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0 at 0050d902
;   core_set.cpp_FUN_0050d910 at 0050dd4b
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ff20
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20
    PUSH ESI                            ; 0045ff21
    PUSH EDI                            ; 0045ff22
    PUSH EBP                            ; 0045ff23
    SUB ESP,0x4                         ; 0045ff24
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045ff27
    CMP dword ptr [EBX + 0xc],0x0       ; 0045ff2b
    JNZ 0x0045ffde                      ; 0045ff2f
        ;   XREF to: 0045ffde (CONDITIONAL_JUMP)  ; LAB_0045ffde
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045ff35
        ;   Label: LAB_0045ff35
    MOV ECX,0xffffffff                  ; 0045ff39
    XOR EDX,EDX                         ; 0045ff3e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045ff40
    MOV dword ptr [ESP],ECX             ; 0045ff43
    TEST ESI,ESI                        ; 0045ff46
    JLE 0x0045ff80                      ; 0045ff48
        ;   XREF to: 0045ff80 (CONDITIONAL_JUMP)  ; LAB_0045ff80
    XOR ECX,ECX                         ; 0045ff4a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045ff4c
        ;   Label: LAB_0045ff4c
    MOV dword ptr [ECX + 0x1b4d76c],ESI ; 0045ff4f | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,ESI,0x30                   ; 0045ff55
    MOV EDI,dword ptr [EBX]             ; 0045ff58
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0045ff5a
    MOV EDI,dword ptr [ESP]             ; 0045ff5e
    ADD ECX,0x4                         ; 0045ff61
    AND EDI,ESI                         ; 0045ff64
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045ff66
    ADD EAX,0xc                         ; 0045ff6a
    INC EDX                             ; 0045ff6d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045ff6e
    MOV dword ptr [ESP],EDI             ; 0045ff71
    CMP EDX,EBP                         ; 0045ff74
    JL 0x0045ff4c                       ; 0045ff76
        ;   XREF to: 0045ff4c (CONDITIONAL_JUMP)  ; LAB_0045ff4c
    LEA EAX,[EAX]                       ; 0045ff78
    MOV EDX,EDX                         ; 0045ff7e
    TEST byte ptr [ESP + 0x3],0x80      ; 0045ff80
        ;   Label: LAB_0045ff80
    JZ 0x0045ff8d                       ; 0045ff85
        ;   XREF to: 0045ff8d (CONDITIONAL_JUMP)  ; LAB_0045ff8d
    TEST byte ptr [ESP],0x1f            ; 0045ff87
    JNZ 0x0045ffd6                      ; 0045ff8b
        ;   XREF to: 0045ffd6 (CONDITIONAL_JUMP)  ; LAB_0045ffd6
    CMP dword ptr [EBX + 0x4],0x0       ; 0045ff8d
        ;   Label: LAB_0045ff8d
    JZ 0x0045fff7                       ; 0045ff91
        ;   XREF to: 0045fff7 (CONDITIONAL_JUMP)  ; LAB_0045fff7
    MOV ESI,0x1                         ; 0045ff93
    MOV ECX,0x463b27                    ; 0045ff98
    XOR EDI,EDI                         ; 0045ff9d
    MOV dword ptr [0x01c039a0],ESI      ; 0045ff9f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDI      ; 0045ffa5 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ECX      ; 0045ffab | DAT_01c00c7c
    LEA EAX,[EAX]                       ; 0045ffb1
    LEA EDX,[EDX]                       ; 0045ffb7
    LEA EAX,[EAX]                       ; 0045ffbd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045ffc0
        ;   Label: LAB_0045ffc0
    PUSH 0x1b4d76c                      ; 0045ffc4 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045ffc9
    PUSH EDX                            ; 0045ffcc
    PUSH EBX                            ; 0045ffcd
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045ffce
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045ffd3
    ADD ESP,0x4                         ; 0045ffd6
        ;   Label: LAB_0045ffd6
    POP EBP                             ; 0045ffd9
    POP EDI                             ; 0045ffda
    POP ESI                             ; 0045ffdb
    POP EBX                             ; 0045ffdc
    RET                                 ; 0045ffdd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045ffde
        ;   Label: LAB_0045ffde
    ADD EAX,0x8                         ; 0045ffe2
    PUSH EAX                            ; 0045ffe5
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045ffe6
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045ffeb
    TEST EAX,EAX                        ; 0045ffee
    JZ 0x0045ffd6                       ; 0045fff0
        ;   XREF to: 0045ffd6 (CONDITIONAL_JUMP)  ; LAB_0045ffd6
    JMP 0x0045ff35                      ; 0045fff2
        ;   XREF to: 0045ff35 (UNCONDITIONAL_JUMP)  ; LAB_0045ff35
    CMP dword ptr [0x005b7624],0x20     ; 0045fff7 | DAT_005b7624
        ;   Label: LAB_0045fff7
    JNZ 0x00460069                      ; 0045fffe
        ;   XREF to: 00460069 (CONDITIONAL_JUMP)  ; LAB_00460069
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00460000 | DAT_01c00c7c
    MOV EBP,0x6                         ; 0046000a
        ;   Label: LAB_0046000a
    MOV EDI,0x2e7                       ; 0046000f
    MOV EAX,dword ptr [EBX + 0x20]      ; 00460014
    MOV dword ptr [0x01c039a4],EBP      ; 00460017 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDI      ; 0046001d | DAT_01c039a0
    TEST EAX,EAX                        ; 00460023
    JNZ 0x0045ffc0                      ; 00460025
        ;   XREF to: 0045ffc0 (CONDITIONAL_JUMP)  ; LAB_0045ffc0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460027
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046002b
    XOR ECX,ECX                         ; 0046002e
    TEST EDX,EDX                        ; 00460030
    JLE 0x0045ffc0                      ; 00460032
        ;   XREF to: 0045ffc0 (CONDITIONAL_JUMP)  ; LAB_0045ffc0
    XOR EDX,EDX                         ; 00460034
    MOV ESI,dword ptr [EDX + 0x1b4d76c] ; 00460036 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_00460036
    IMUL ESI,ESI,0x30                   ; 0046003c
    MOV EDI,dword ptr [EBX]             ; 0046003f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00460041
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00460044
    MOV EDI,dword ptr [EBX]             ; 00460048
    ADD EDI,ESI                         ; 0046004a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046004c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046004f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460052
    ADD EAX,0xc                         ; 00460056
    INC ECX                             ; 00460059
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046005a
    ADD EDX,0x4                         ; 0046005d
    CMP ECX,EBP                         ; 00460060
    JL 0x00460036                       ; 00460062
        ;   XREF to: 00460036 (CONDITIONAL_JUMP)  ; LAB_00460036
    JMP 0x0045ffc0                      ; 00460064
        ;   XREF to: 0045ffc0 (UNCONDITIONAL_JUMP)  ; LAB_0045ffc0
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00460069 | DAT_01c00c7c
        ;   Label: LAB_00460069
    JMP 0x0046000a                      ; 00460073
        ;   XREF to: 0046000a (UNCONDITIONAL_JUMP)  ; LAB_0046000a

