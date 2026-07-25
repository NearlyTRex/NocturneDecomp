; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0045fe40(int *param_1,int param_2)
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

    PUSH EBX                            ; 0045fe40
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0045fe40
    PUSH ESI                            ; 0045fe41
    PUSH EDI                            ; 0045fe42
    PUSH EBP                            ; 0045fe43
    MOV EBP,dword ptr [ESP + 0x14]      ; 0045fe44
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045fe48
    CMP dword ptr [EBP + 0xc],0x0       ; 0045fe4c
    JNZ 0x0045fec6                      ; 0045fe50
        ;   XREF to: 0045fec6 (CONDITIONAL_JUMP)  ; LAB_0045fec6
    MOV ECX,0xffffffff                  ; 0045fe56
        ;   Label: LAB_0045fe56
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045fe5b
    XOR EDX,EDX                         ; 0045fe5e
    TEST EBX,EBX                        ; 0045fe60
    JLE 0x0045fe80                      ; 0045fe62
        ;   XREF to: 0045fe80 (CONDITIONAL_JUMP)  ; LAB_0045fe80
    MOV EAX,ESI                         ; 0045fe64
    MOV EDI,dword ptr [EBP]             ; 0045fe66
    MOV EBX,dword ptr [EAX + 0x18]      ; 0045fe69
        ;   Label: LAB_0045fe69
    IMUL EBX,EBX,0x30                   ; 0045fe6c
    INC EDX                             ; 0045fe6f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0045fe70
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045fe74
    ADD EAX,0x4                         ; 0045fe77
    CMP EDX,EBX                         ; 0045fe7a
    JL 0x0045fe69                       ; 0045fe7c
        ;   XREF to: 0045fe69 (CONDITIONAL_JUMP)  ; LAB_0045fe69
    MOV EAX,EAX                         ; 0045fe7e
    TEST ECX,0x80000000                 ; 0045fe80
        ;   Label: LAB_0045fe80
    JZ 0x0045fe8d                       ; 0045fe86
        ;   XREF to: 0045fe8d (CONDITIONAL_JUMP)  ; LAB_0045fe8d
    TEST CL,0x1f                        ; 0045fe88
    JNZ 0x0045fec1                      ; 0045fe8b
        ;   XREF to: 0045fec1 (CONDITIONAL_JUMP)  ; LAB_0045fec1
    CMP dword ptr [EBP + 0x4],0x0       ; 0045fe8d
        ;   Label: LAB_0045fe8d
    JZ 0x0045fedb                       ; 0045fe91
        ;   XREF to: 0045fedb (CONDITIONAL_JUMP)  ; LAB_0045fedb
    MOV EDX,0x1                         ; 0045fe93
    MOV EAX,0x463b27                    ; 0045fe98
    XOR ECX,ECX                         ; 0045fe9d
    MOV dword ptr [0x01c039a0],EDX      ; 0045fe9f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ECX      ; 0045fea5 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 0045feab | DAT_01c00c7c
    LEA EAX,[ESI + 0x18]                ; 0045feb0
        ;   Label: LAB_0045feb0
    PUSH EAX                            ; 0045feb3
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045feb4
    PUSH EBX                            ; 0045feb7
    PUSH EBP                            ; 0045feb8
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045feb9
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045febe
    POP EBP                             ; 0045fec1
        ;   Label: LAB_0045fec1
    POP EDI                             ; 0045fec2
    POP ESI                             ; 0045fec3
    POP EBX                             ; 0045fec4
    RET                                 ; 0045fec5
    LEA EAX,[ESI + 0x8]                 ; 0045fec6
        ;   Label: LAB_0045fec6
    PUSH EAX                            ; 0045fec9
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045feca
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045fecf
    TEST EAX,EAX                        ; 0045fed2
    JZ 0x0045fec1                       ; 0045fed4
        ;   XREF to: 0045fec1 (CONDITIONAL_JUMP)  ; LAB_0045fec1
    JMP 0x0045fe56                      ; 0045fed6
        ;   XREF to: 0045fe56 (UNCONDITIONAL_JUMP)  ; LAB_0045fe56
    CMP dword ptr [0x005b7624],0x20     ; 0045fedb | DAT_005b7624
        ;   Label: LAB_0045fedb
    JNZ 0x0045ff06                      ; 0045fee2
        ;   XREF to: 0045ff06 (CONDITIONAL_JUMP)  ; LAB_0045ff06
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045fee4 | DAT_01c00c7c
    MOV EDI,0x6                         ; 0045feee
        ;   Label: LAB_0045feee
    MOV EBX,0x2e7                       ; 0045fef3
    MOV dword ptr [0x01c039a4],EDI      ; 0045fef8 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EBX      ; 0045fefe | DAT_01c039a0
    JMP 0x0045feb0                      ; 0045ff04
        ;   XREF to: 0045feb0 (UNCONDITIONAL_JUMP)  ; LAB_0045feb0
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045ff06 | DAT_01c00c7c
        ;   Label: LAB_0045ff06
    JMP 0x0045feee                      ; 0045ff10
        ;   XREF to: 0045feee (UNCONDITIONAL_JUMP)  ; LAB_0045feee

