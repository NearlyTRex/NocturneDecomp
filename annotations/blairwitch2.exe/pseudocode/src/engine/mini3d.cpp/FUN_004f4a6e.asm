; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_mini3d_cpp_FUN_004f4a6e(float param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dde38
;   undefined4 DAT_01d09870
;   undefined4 DAT_01d09878
;   undefined4 DAT_01d098c8
;   undefined4 DAT_01d09918
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004f4a6e
        ;   Label: engine_mini3d.cpp_FUN_004f4a6e
    SUB ESP,0x8                         ; 004f4a70
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f4a73
    TEST EDX,EDX                        ; 004f4a77
    JZ 0x004f4ac2                       ; 004f4a79
        ;   XREF to: 004f4ac2 (CONDITIONAL_JUMP)  ; LAB_004f4ac2
    MOV EAX,[0x01d09918]                ; 004f4a7b | DAT_01d09918
    FLD float ptr [EDX + 0x4]           ; 004f4a80
    FSUB float ptr [EAX + 0x28]         ; 004f4a83
    FMUL float ptr [EAX + 0x14]         ; 004f4a86
    FLD float ptr [EDX]                 ; 004f4a89
    FSUB float ptr [EAX + 0x24]         ; 004f4a8b
    FMUL float ptr [EAX + 0x8]          ; 004f4a8e
    FADDP                               ; 004f4a91
    FLD float ptr [EDX + 0x8]           ; 004f4a93
    FSUB float ptr [EAX + 0x2c]         ; 004f4a96
    FMUL float ptr [EAX + 0x20]         ; 004f4a99
    FADDP                               ; 004f4a9c
    FSTP float ptr [ESP + 0x4]          ; 004f4a9e
        ;   Label: LAB_004f4a9e
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 004f4aa2
    JGE 0x004f4ae1                      ; 004f4aaa
        ;   XREF to: 004f4ae1 (CONDITIONAL_JUMP)  ; LAB_004f4ae1
    FLD float ptr [0x01d09878]          ; 004f4aac | DAT_01d09878
    FSUB float ptr [0x01d09870]         ; 004f4ab2 | DAT_01d09870
    FSTP float ptr [ESP]                ; 004f4ab8
    MOV EAX,dword ptr [ESP]             ; 004f4abb
    ADD ESP,0x8                         ; 004f4abe
    RET                                 ; 004f4ac1
    MOV EAX,[0x01d09918]                ; 004f4ac2 | DAT_01d09918
        ;   Label: LAB_004f4ac2
    FLD float ptr [EAX + 0x24]          ; 004f4ac7
    FCHS                                ; 004f4aca
    FMUL float ptr [EAX + 0x8]          ; 004f4acc
    FLD float ptr [EAX + 0x28]          ; 004f4acf
    FMUL float ptr [EAX + 0x14]         ; 004f4ad2
    FSUBP                               ; 004f4ad5
    FLD float ptr [EAX + 0x2c]          ; 004f4ad7
    FMUL float ptr [EAX + 0x20]         ; 004f4ada
    FSUBP                               ; 004f4add
    JMP 0x004f4a9e                      ; 004f4adf
        ;   XREF to: 004f4a9e (UNCONDITIONAL_JUMP)  ; LAB_004f4a9e
    FLD float ptr [ESP + 0xc]           ; 004f4ae1
        ;   Label: LAB_004f4ae1
    FDIV float ptr [ESP + 0x4]          ; 004f4ae5
    FMUL float ptr [0x005dde38]         ; 004f4ae9 | DAT_005dde38
    FMUL float ptr [0x01d098c8]         ; 004f4aef | DAT_01d098c8
    FSTP float ptr [ESP]                ; 004f4af5
    MOV EAX,dword ptr [ESP]             ; 004f4af8
    ADD ESP,0x8                         ; 004f4afb
    RET                                 ; 004f4afe

