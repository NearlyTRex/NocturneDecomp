; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00(int *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
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

    PUSH EBX                            ; 0045fc00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00
    PUSH ESI                            ; 0045fc01
    PUSH EDI                            ; 0045fc02
    PUSH EBP                            ; 0045fc03
    MOV EBP,dword ptr [ESP + 0x14]      ; 0045fc04
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045fc08
    CMP dword ptr [EBP + 0xc],0x0       ; 0045fc0c
    JNZ 0x0045fc86                      ; 0045fc10
        ;   XREF to: 0045fc86 (CONDITIONAL_JUMP)  ; LAB_0045fc86
    MOV ECX,0xffffffff                  ; 0045fc16
        ;   Label: LAB_0045fc16
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045fc1b
    XOR EDX,EDX                         ; 0045fc1e
    TEST EBX,EBX                        ; 0045fc20
    JLE 0x0045fc40                      ; 0045fc22
        ;   XREF to: 0045fc40 (CONDITIONAL_JUMP)  ; LAB_0045fc40
    MOV EAX,ESI                         ; 0045fc24
    MOV EDI,dword ptr [EBP]             ; 0045fc26
    MOV EBX,dword ptr [EAX + 0x18]      ; 0045fc29
        ;   Label: LAB_0045fc29
    IMUL EBX,EBX,0x30                   ; 0045fc2c
    INC EDX                             ; 0045fc2f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0045fc30
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045fc34
    ADD EAX,0x4                         ; 0045fc37
    CMP EDX,EBX                         ; 0045fc3a
    JL 0x0045fc29                       ; 0045fc3c
        ;   XREF to: 0045fc29 (CONDITIONAL_JUMP)  ; LAB_0045fc29
    MOV EAX,EAX                         ; 0045fc3e
    TEST ECX,0x80000000                 ; 0045fc40
        ;   Label: LAB_0045fc40
    JZ 0x0045fc4d                       ; 0045fc46
        ;   XREF to: 0045fc4d (CONDITIONAL_JUMP)  ; LAB_0045fc4d
    TEST CL,0x1f                        ; 0045fc48
    JNZ 0x0045fc81                      ; 0045fc4b
        ;   XREF to: 0045fc81 (CONDITIONAL_JUMP)  ; LAB_0045fc81
    CMP dword ptr [EBP + 0x4],0x0       ; 0045fc4d
        ;   Label: LAB_0045fc4d
    JZ 0x0045fc9b                       ; 0045fc51
        ;   XREF to: 0045fc9b (CONDITIONAL_JUMP)  ; LAB_0045fc9b
    MOV EDX,0x1                         ; 0045fc53
    MOV EAX,0x463b27                    ; 0045fc58 | LAB_00463b27
    XOR ECX,ECX                         ; 0045fc5d
    MOV dword ptr [0x01c039a0],EDX      ; 0045fc5f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ECX      ; 0045fc65 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 0045fc6b | DAT_01c00c7c
    LEA EAX,[ESI + 0x18]                ; 0045fc70
        ;   Label: LAB_0045fc70
    PUSH EAX                            ; 0045fc73
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045fc74
    PUSH EBX                            ; 0045fc77
    PUSH EBP                            ; 0045fc78
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045fc79
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045fc7e
    POP EBP                             ; 0045fc81
        ;   Label: LAB_0045fc81
    POP EDI                             ; 0045fc82
    POP ESI                             ; 0045fc83
    POP EBX                             ; 0045fc84
    RET                                 ; 0045fc85
    LEA EAX,[ESI + 0x8]                 ; 0045fc86
        ;   Label: LAB_0045fc86
    PUSH EAX                            ; 0045fc89
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045fc8a
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045fc8f
    TEST EAX,EAX                        ; 0045fc92
    JZ 0x0045fc81                       ; 0045fc94
        ;   XREF to: 0045fc81 (CONDITIONAL_JUMP)  ; LAB_0045fc81
    JMP 0x0045fc16                      ; 0045fc96
        ;   XREF to: 0045fc16 (UNCONDITIONAL_JUMP)  ; LAB_0045fc16
    CMP dword ptr [0x005b7624],0x20     ; 0045fc9b | DAT_005b7624
        ;   Label: LAB_0045fc9b
    JNZ 0x0045fcc6                      ; 0045fca2
        ;   XREF to: 0045fcc6 (CONDITIONAL_JUMP)  ; LAB_0045fcc6
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045fca4 | DAT_01c00c7c | LAB_0052f031
    MOV EDI,0x6                         ; 0045fcae
        ;   Label: LAB_0045fcae
    MOV EBX,0x3e7                       ; 0045fcb3
    MOV dword ptr [0x01c039a4],EDI      ; 0045fcb8 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EBX      ; 0045fcbe | DAT_01c039a0
    JMP 0x0045fc70                      ; 0045fcc4
        ;   XREF to: 0045fc70 (UNCONDITIONAL_JUMP)  ; LAB_0045fc70
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045fcc6 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0045fcc6
    JMP 0x0045fcae                      ; 0045fcd0
        ;   XREF to: 0045fcae (UNCONDITIONAL_JUMP)  ; LAB_0045fcae

