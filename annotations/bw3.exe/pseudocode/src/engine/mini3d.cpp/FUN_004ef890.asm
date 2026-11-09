; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ef890(int param_1)
;
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004edea0 at 004ee07d
;   engine_mini3d.cpp_FUN_004ee1a0 at 004ee2ec
;   engine_mini3d.cpp_FUN_004ee430 at 004ee4df
;
; Referenced Globals:
;   undefined4 DAT_01d76c48
;   undefined4 DAT_01d76cf0
;   undefined4 DAT_01d7f538
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ef890
        ;   Label: engine_mini3d.cpp_FUN_004ef890
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ef893
    MOV ECX,dword ptr [0x01d76c48]      ; 004ef897 | DAT_01d76c48
    TEST ECX,ECX                        ; 004ef89d
    JZ 0x004ef8e3                       ; 004ef89f
        ;   XREF to: 004ef8e3 (CONDITIONAL_JUMP)  ; LAB_004ef8e3
    FLD float ptr [EDX + 0x8]           ; 004ef8a1
    FSUB float ptr [0x01d76cf0]         ; 004ef8a4 | DAT_01d76cf0
    FMUL float ptr [0x01d7f538]         ; 004ef8aa | DAT_01d7f538
    FLDZ                                ; 004ef8b0
    FXCH                                ; 004ef8b2
    FSTP float ptr [ESP]                ; 004ef8b4
    FCOMP float ptr [ESP]               ; 004ef8b7
    FNSTSW AX                           ; 004ef8ba
    SAHF                                ; 004ef8bc
    JA 0x004ef8d9                       ; 004ef8bd
        ;   XREF to: 004ef8d9 (CONDITIONAL_JUMP)  ; LAB_004ef8d9
    CMP dword ptr [ESP],0x3f800000      ; 004ef8bf
    JLE 0x004ef8cf                      ; 004ef8c6
        ;   XREF to: 004ef8cf (CONDITIONAL_JUMP)  ; LAB_004ef8cf
    MOV dword ptr [ESP],0x3f800000      ; 004ef8c8
    MOV EAX,dword ptr [ESP]             ; 004ef8cf
        ;   Label: LAB_004ef8cf
    MOV dword ptr [EDX + 0x34],EAX      ; 004ef8d2
    ADD ESP,0x4                         ; 004ef8d5
    RET                                 ; 004ef8d8
    PUSH EDI                            ; 004ef8d9
        ;   Label: LAB_004ef8d9
    XOR EDI,EDI                         ; 004ef8da
    MOV dword ptr [ESP + 0x4],EDI       ; 004ef8dc
    POP EDI                             ; 004ef8e0
    JMP 0x004ef8cf                      ; 004ef8e1
        ;   XREF to: 004ef8cf (UNCONDITIONAL_JUMP)  ; LAB_004ef8cf
    MOV dword ptr [EDX + 0x34],ECX      ; 004ef8e3
        ;   Label: LAB_004ef8e3
    ADD ESP,0x4                         ; 004ef8e6
    RET                                 ; 004ef8e9

