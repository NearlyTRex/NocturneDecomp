; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_mini3d_cpp_FUN_004eef8e(float param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c8181
;   undefined4 DAT_01d76c50
;   undefined4 DAT_01d76c58
;   undefined4 DAT_01d76ca8
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004eef8e
        ;   Label: engine_mini3d.cpp_FUN_004eef8e
    SUB ESP,0x8                         ; 004eef90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004eef93
    TEST EDX,EDX                        ; 004eef97
    JZ 0x004eefe2                       ; 004eef99
        ;   XREF to: 004eefe2 (CONDITIONAL_JUMP)  ; LAB_004eefe2
    MOV EAX,[0x01d76cfc]                ; 004eef9b | DAT_01d76cfc
    FLD float ptr [EDX + 0x4]           ; 004eefa0
    FSUB float ptr [EAX + 0x28]         ; 004eefa3
    FMUL float ptr [EAX + 0x14]         ; 004eefa6
    FLD float ptr [EDX]                 ; 004eefa9
    FSUB float ptr [EAX + 0x24]         ; 004eefab
    FMUL float ptr [EAX + 0x8]          ; 004eefae
    FADDP                               ; 004eefb1
    FLD float ptr [EDX + 0x8]           ; 004eefb3
    FSUB float ptr [EAX + 0x2c]         ; 004eefb6
    FMUL float ptr [EAX + 0x20]         ; 004eefb9
    FADDP                               ; 004eefbc
    FSTP float ptr [ESP + 0x4]          ; 004eefbe
        ;   Label: LAB_004eefbe
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 004eefc2
    JGE 0x004ef001                      ; 004eefca
        ;   XREF to: 004ef001 (CONDITIONAL_JUMP)  ; LAB_004ef001
    FLD float ptr [0x01d76c58]          ; 004eefcc | DAT_01d76c58
    FSUB float ptr [0x01d76c50]         ; 004eefd2 | DAT_01d76c50
    FSTP float ptr [ESP]                ; 004eefd8
    MOV EAX,dword ptr [ESP]             ; 004eefdb
    ADD ESP,0x8                         ; 004eefde
    RET                                 ; 004eefe1
    MOV EAX,[0x01d76cfc]                ; 004eefe2 | DAT_01d76cfc
        ;   Label: LAB_004eefe2
    FLD float ptr [EAX + 0x24]          ; 004eefe7
    FCHS                                ; 004eefea
    FMUL float ptr [EAX + 0x8]          ; 004eefec
    FLD float ptr [EAX + 0x28]          ; 004eefef
    FMUL float ptr [EAX + 0x14]         ; 004eeff2
    FSUBP                               ; 004eeff5
    FLD float ptr [EAX + 0x2c]          ; 004eeff7
    FMUL float ptr [EAX + 0x20]         ; 004eeffa
    FSUBP                               ; 004eeffd
    JMP 0x004eefbe                      ; 004eefff
        ;   XREF to: 004eefbe (UNCONDITIONAL_JUMP)  ; LAB_004eefbe
    FLD float ptr [ESP + 0xc]           ; 004ef001
        ;   Label: LAB_004ef001
    FDIV float ptr [ESP + 0x4]          ; 004ef005
    FMUL float ptr [0x005c8181]         ; 004ef009 | DAT_005c8181
    FMUL float ptr [0x01d76ca8]         ; 004ef00f | DAT_01d76ca8
    FSTP float ptr [ESP]                ; 004ef015
    MOV EAX,dword ptr [ESP]             ; 004ef018
    ADD ESP,0x8                         ; 004ef01b
    RET                                 ; 004ef01e

