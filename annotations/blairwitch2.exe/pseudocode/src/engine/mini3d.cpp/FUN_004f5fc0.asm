; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f5fc0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f6300 at 004f63c2
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5fc0
        ;   Label: engine_mini3d.cpp_FUN_004f5fc0
    SUB ESP,0x4                         ; 004f5fc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f5fc4
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f5fc8
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f5fcc
    FLD float ptr [ECX]                 ; 004f5fd0
    FADD float ptr [EAX + 0x8]          ; 004f5fd2
    FLD float ptr [EAX]                 ; 004f5fd5
    FADD float ptr [ECX + 0x8]          ; 004f5fd7
    FSUBP                               ; 004f5fda
    FLD float ptr [EAX + 0x8]           ; 004f5fdc
    FSUB float ptr [EAX]                ; 004f5fdf
    FDIVRP                              ; 004f5fe1
    FLD float ptr [ECX + 0x8]           ; 004f5fe3
    FSUB float ptr [EAX + 0x8]          ; 004f5fe6
    FXCH                                ; 004f5fe9
    FSTP float ptr [ESP]                ; 004f5feb
    FMUL float ptr [ESP]                ; 004f5fee
    FADD float ptr [EAX + 0x8]          ; 004f5ff1
    FST float ptr [EDX + 0x8]           ; 004f5ff4
    FSTP float ptr [EDX]                ; 004f5ff7
    FLD float ptr [ECX + 0x4]           ; 004f5ff9
    FSUB float ptr [EAX + 0x4]          ; 004f5ffc
    FMUL float ptr [ESP]                ; 004f5fff
    FADD float ptr [EAX + 0x4]          ; 004f6002
    MOV EBX,dword ptr [0x01d0d2b4]      ; 004f6005 | DAT_01d0d2b4
    FSTP float ptr [EDX + 0x4]          ; 004f600b
    TEST EBX,EBX                        ; 004f600e
    JZ 0x004f6017                       ; 004f6010
        ;   XREF to: 004f6017 (CONDITIONAL_JUMP)  ; LAB_004f6017
    ADD ESP,0x4                         ; 004f6012
    POP EBX                             ; 004f6015
    RET                                 ; 004f6016
    FLD float ptr [ECX + 0x2c]          ; 004f6017
        ;   Label: LAB_004f6017
    FSUB float ptr [EAX + 0x2c]         ; 004f601a
    FLD float ptr [ESP]                 ; 004f601d
    FXCH                                ; 004f6020
    FMUL ST1                            ; 004f6022
    FADD float ptr [EAX + 0x2c]         ; 004f6024
    FSTP float ptr [EDX + 0x2c]         ; 004f6027
    FLD float ptr [ECX + 0x28]          ; 004f602a
    FSUB float ptr [EAX + 0x28]         ; 004f602d
    FMUL ST1                            ; 004f6030
    FADD float ptr [EAX + 0x28]         ; 004f6032
    FSTP float ptr [EDX + 0x28]         ; 004f6035
    FLD float ptr [ECX + 0x24]          ; 004f6038
    FSUB float ptr [EAX + 0x24]         ; 004f603b
    FMUL ST1                            ; 004f603e
    FADD float ptr [EAX + 0x24]         ; 004f6040
    FSTP float ptr [EDX + 0x24]         ; 004f6043
    FLD float ptr [ECX + 0x1c]          ; 004f6046
    FSUB float ptr [EAX + 0x1c]         ; 004f6049
    FMUL ST1                            ; 004f604c
    FADD float ptr [EAX + 0x1c]         ; 004f604e
    FSTP float ptr [EDX + 0x1c]         ; 004f6051
    FLD float ptr [ECX + 0x20]          ; 004f6054
    FSUB float ptr [EAX + 0x20]         ; 004f6057
    FMUL ST1                            ; 004f605a
    FADD float ptr [EAX + 0x20]         ; 004f605c
    FSTP float ptr [EDX + 0x20]         ; 004f605f
    FLD float ptr [ECX + 0x30]          ; 004f6062
    FSUB float ptr [EAX + 0x30]         ; 004f6065
    FMUL ST1                            ; 004f6068
    FADD float ptr [EAX + 0x30]         ; 004f606a
    FSTP float ptr [EDX + 0x30]         ; 004f606d
    FLD float ptr [ECX + 0x34]          ; 004f6070
    FSUB float ptr [EAX + 0x34]         ; 004f6073
    FMULP                               ; 004f6076
    FADD float ptr [EAX + 0x34]         ; 004f6078
    FSTP float ptr [EDX + 0x34]         ; 004f607b
    ADD ESP,0x4                         ; 004f607e
    POP EBX                             ; 004f6081
    RET                                 ; 004f6082

