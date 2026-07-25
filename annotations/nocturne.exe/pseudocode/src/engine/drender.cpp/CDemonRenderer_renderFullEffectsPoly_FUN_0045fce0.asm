; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_drender_cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0045fce0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
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

    PUSH EBX                            ; 0045fce0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0045fce0
    PUSH ESI                            ; 0045fce1
    PUSH EDI                            ; 0045fce2
    PUSH EBP                            ; 0045fce3
    SUB ESP,0x4                         ; 0045fce4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045fce7
    CMP dword ptr [EBX + 0xc],0x0       ; 0045fceb
    JNZ 0x0045fd9e                      ; 0045fcef
        ;   XREF to: 0045fd9e (CONDITIONAL_JUMP)  ; LAB_0045fd9e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fcf5
        ;   Label: LAB_0045fcf5
    MOV ECX,0xffffffff                  ; 0045fcf9
    XOR EDX,EDX                         ; 0045fcfe
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045fd00
    MOV dword ptr [ESP],ECX             ; 0045fd03
    TEST ESI,ESI                        ; 0045fd06
    JLE 0x0045fd40                      ; 0045fd08
        ;   XREF to: 0045fd40 (CONDITIONAL_JUMP)  ; LAB_0045fd40
    XOR ECX,ECX                         ; 0045fd0a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045fd0c
        ;   Label: LAB_0045fd0c
    MOV dword ptr [ECX + 0x1b4d76c],ESI ; 0045fd0f | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,ESI,0x30                   ; 0045fd15
    MOV EDI,dword ptr [EBX]             ; 0045fd18
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0045fd1a
    MOV EDI,dword ptr [ESP]             ; 0045fd1e
    ADD ECX,0x4                         ; 0045fd21
    AND EDI,ESI                         ; 0045fd24
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045fd26
    ADD EAX,0xc                         ; 0045fd2a
    INC EDX                             ; 0045fd2d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045fd2e
    MOV dword ptr [ESP],EDI             ; 0045fd31
    CMP EDX,EBP                         ; 0045fd34
    JL 0x0045fd0c                       ; 0045fd36
        ;   XREF to: 0045fd0c (CONDITIONAL_JUMP)  ; LAB_0045fd0c
    LEA EAX,[EAX]                       ; 0045fd38
    MOV EDX,EDX                         ; 0045fd3e
    TEST byte ptr [ESP + 0x3],0x80      ; 0045fd40
        ;   Label: LAB_0045fd40
    JZ 0x0045fd4d                       ; 0045fd45
        ;   XREF to: 0045fd4d (CONDITIONAL_JUMP)  ; LAB_0045fd4d
    TEST byte ptr [ESP],0x1f            ; 0045fd47
    JNZ 0x0045fd96                      ; 0045fd4b
        ;   XREF to: 0045fd96 (CONDITIONAL_JUMP)  ; LAB_0045fd96
    CMP dword ptr [EBX + 0x4],0x0       ; 0045fd4d
        ;   Label: LAB_0045fd4d
    JZ 0x0045fdb7                       ; 0045fd51
        ;   XREF to: 0045fdb7 (CONDITIONAL_JUMP)  ; LAB_0045fdb7
    MOV ESI,0x1                         ; 0045fd53
    MOV ECX,0x463b27                    ; 0045fd58
    XOR EDI,EDI                         ; 0045fd5d
    MOV dword ptr [0x01c039a0],ESI      ; 0045fd5f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDI      ; 0045fd65 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ECX      ; 0045fd6b | DAT_01c00c7c
    LEA EAX,[EAX]                       ; 0045fd71
    LEA EDX,[EDX]                       ; 0045fd77
    LEA EAX,[EAX]                       ; 0045fd7d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fd80
        ;   Label: LAB_0045fd80
    PUSH 0x1b4d76c                      ; 0045fd84 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045fd89
    PUSH EDX                            ; 0045fd8c
    PUSH EBX                            ; 0045fd8d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045fd8e
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045fd93
    ADD ESP,0x4                         ; 0045fd96
        ;   Label: LAB_0045fd96
    POP EBP                             ; 0045fd99
    POP EDI                             ; 0045fd9a
    POP ESI                             ; 0045fd9b
    POP EBX                             ; 0045fd9c
    RET                                 ; 0045fd9d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fd9e
        ;   Label: LAB_0045fd9e
    ADD EAX,0x8                         ; 0045fda2
    PUSH EAX                            ; 0045fda5
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045fda6
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045fdab
    TEST EAX,EAX                        ; 0045fdae
    JZ 0x0045fd96                       ; 0045fdb0
        ;   XREF to: 0045fd96 (CONDITIONAL_JUMP)  ; LAB_0045fd96
    JMP 0x0045fcf5                      ; 0045fdb2
        ;   XREF to: 0045fcf5 (UNCONDITIONAL_JUMP)  ; LAB_0045fcf5
    CMP dword ptr [0x005b7624],0x20     ; 0045fdb7 | DAT_005b7624
        ;   Label: LAB_0045fdb7
    JNZ 0x0045fe29                      ; 0045fdbe
        ;   XREF to: 0045fe29 (CONDITIONAL_JUMP)  ; LAB_0045fe29
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045fdc0 | DAT_01c00c7c
    MOV EBP,0x6                         ; 0045fdca
        ;   Label: LAB_0045fdca
    MOV EDI,0x3e7                       ; 0045fdcf
    MOV EAX,dword ptr [EBX + 0x20]      ; 0045fdd4
    MOV dword ptr [0x01c039a4],EBP      ; 0045fdd7 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDI      ; 0045fddd | DAT_01c039a0
    TEST EAX,EAX                        ; 0045fde3
    JNZ 0x0045fd80                      ; 0045fde5
        ;   XREF to: 0045fd80 (CONDITIONAL_JUMP)  ; LAB_0045fd80
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fde7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045fdeb
    XOR ECX,ECX                         ; 0045fdee
    TEST EDX,EDX                        ; 0045fdf0
    JLE 0x0045fd80                      ; 0045fdf2
        ;   XREF to: 0045fd80 (CONDITIONAL_JUMP)  ; LAB_0045fd80
    XOR EDX,EDX                         ; 0045fdf4
    MOV ESI,dword ptr [EDX + 0x1b4d76c] ; 0045fdf6 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_0045fdf6
    IMUL ESI,ESI,0x30                   ; 0045fdfc
    MOV EDI,dword ptr [EBX]             ; 0045fdff
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0045fe01
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0045fe04
    MOV EDI,dword ptr [EBX]             ; 0045fe08
    ADD EDI,ESI                         ; 0045fe0a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0045fe0c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0045fe0f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045fe12
    ADD EAX,0xc                         ; 0045fe16
    INC ECX                             ; 0045fe19
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045fe1a
    ADD EDX,0x4                         ; 0045fe1d
    CMP ECX,EBP                         ; 0045fe20
    JL 0x0045fdf6                       ; 0045fe22
        ;   XREF to: 0045fdf6 (CONDITIONAL_JUMP)  ; LAB_0045fdf6
    JMP 0x0045fd80                      ; 0045fe24
        ;   XREF to: 0045fd80 (UNCONDITIONAL_JUMP)  ; LAB_0045fd80
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045fe29 | DAT_01c00c7c
        ;   Label: LAB_0045fe29
    JMP 0x0045fdca                      ; 0045fe33
        ;   XREF to: 0045fdca (UNCONDITIONAL_JUMP)  ; LAB_0045fdca

