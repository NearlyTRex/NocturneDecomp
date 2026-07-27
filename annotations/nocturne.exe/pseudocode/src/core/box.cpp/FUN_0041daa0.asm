; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_0041daa0(float *param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005797d5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041daa0
        ;   Label: core_box.cpp_FUN_0041daa0
    PUSH ESI                            ; 0041daa1
    PUSH EDI                            ; 0041daa2
    PUSH EBP                            ; 0041daa3
    MOV EBP,ESP                         ; 0041daa4
    SUB ESP,0x18                        ; 0041daa6
    AND ESP,0xfffffff8                  ; 0041daa9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0041daac
    MOV EBX,0x1                         ; 0041daaf
    MOV ESI,dword ptr [EAX]             ; 0041dab4
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041dab6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041dab9
    MOV dword ptr [ESP],ESI             ; 0041dabc
    MOV dword ptr [ESP + 0xc],EDX       ; 0041dabf
    MOV dword ptr [ESP + 0x8],EDX       ; 0041dac3
    MOV EDX,dword ptr [EBP + 0x18]      ; 0041dac7
    MOV dword ptr [ESP + 0x4],ECX       ; 0041daca
    CMP EDX,EBX                         ; 0041dace
    JLE 0x0041db15                      ; 0041dad0
        ;   XREF to: 0041db15 (CONDITIONAL_JUMP)  ; LAB_0041db15
    LEA EDX,[EAX + 0xc]                 ; 0041dad2
    MOV EDI,dword ptr [EDX]             ; 0041dad5
        ;   Label: LAB_0041dad5
    MOV EAX,EDX                         ; 0041dad7
    CMP EDI,dword ptr [ESP]             ; 0041dad9
    JL 0x0041db90                       ; 0041dadc
        ;   XREF to: 0041db90 (CONDITIONAL_JUMP)  ; LAB_0041db90
    CMP ESI,EDI                         ; 0041dae2
    JGE 0x0041dae8                      ; 0041dae4
        ;   XREF to: 0041dae8 (CONDITIONAL_JUMP)  ; LAB_0041dae8
    MOV ESI,EDI                         ; 0041dae6
    MOV EDI,dword ptr [EAX + 0x4]       ; 0041dae8
        ;   Label: LAB_0041dae8
    CMP EDI,dword ptr [ESP + 0x4]       ; 0041daeb
    JGE 0x0041db98                      ; 0041daef
        ;   XREF to: 0041db98 (CONDITIONAL_JUMP)  ; LAB_0041db98
    MOV dword ptr [ESP + 0x4],EDI       ; 0041daf5
    MOV EDI,dword ptr [EAX + 0x8]       ; 0041daf9
        ;   Label: LAB_0041daf9
    CMP EDI,dword ptr [ESP + 0x8]       ; 0041dafc
    JGE 0x0041dba7                      ; 0041db00
        ;   XREF to: 0041dba7 (CONDITIONAL_JUMP)  ; LAB_0041dba7
    MOV dword ptr [ESP + 0x8],EDI       ; 0041db06
    MOV EDI,dword ptr [EBP + 0x18]      ; 0041db0a
        ;   Label: LAB_0041db0a
    INC EBX                             ; 0041db0d
    ADD EDX,0xc                         ; 0041db0e
    CMP EBX,EDI                         ; 0041db11
    JL 0x0041dad5                       ; 0041db13
        ;   XREF to: 0041dad5 (CONDITIONAL_JUMP)  ; LAB_0041dad5
    MOV EAX,dword ptr [ESP]             ; 0041db15
        ;   Label: LAB_0041db15
    MOV dword ptr [ESP + 0x10],EAX      ; 0041db18
    MOV dword ptr [ESP + 0x14],ESI      ; 0041db1c
    FLD double ptr [0x005797d5]         ; 0041db20 | DAT_005797d5
    FILD dword ptr [ESP + 0x10]         ; 0041db26
    FMUL ST1                            ; 0041db2a
    FILD dword ptr [ESP + 0x14]         ; 0041db2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041db30
    FMUL ST2                            ; 0041db33
    FXCH                                ; 0041db35
    FSTP float ptr [EAX]                ; 0041db37
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041db39
    MOV dword ptr [ESP + 0x10],EAX      ; 0041db3d
    MOV dword ptr [ESP + 0x14],ECX      ; 0041db41
    FILD dword ptr [ESP + 0x10]         ; 0041db45
    FMUL ST2                            ; 0041db49
    FILD dword ptr [ESP + 0x14]         ; 0041db4b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041db4f
    FMUL ST3                            ; 0041db52
    FXCH                                ; 0041db54
    FSTP float ptr [EAX + 0x4]          ; 0041db56
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041db59
    MOV dword ptr [ESP + 0x14],EAX      ; 0041db5d
    FILD dword ptr [ESP + 0x14]         ; 0041db61
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041db65
    FMUL ST3                            ; 0041db68
    FXCH ST2                            ; 0041db6a
    FSTP float ptr [EAX + 0xc]          ; 0041db6c
    FSTP float ptr [EAX + 0x10]         ; 0041db6f
    FSTP float ptr [EAX + 0x8]          ; 0041db72
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041db75
    MOV dword ptr [ESP + 0x14],EAX      ; 0041db79
    FILD dword ptr [ESP + 0x14]         ; 0041db7d
    FMULP                               ; 0041db81
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041db83
    FSTP float ptr [EAX + 0x14]         ; 0041db86
    MOV ESP,EBP                         ; 0041db89
    POP EBP                             ; 0041db8b
    POP EDI                             ; 0041db8c
    POP ESI                             ; 0041db8d
    POP EBX                             ; 0041db8e
    RET                                 ; 0041db8f
    MOV dword ptr [ESP],EDI             ; 0041db90
        ;   Label: LAB_0041db90
    JMP 0x0041dae8                      ; 0041db93
        ;   XREF to: 0041dae8 (UNCONDITIONAL_JUMP)  ; LAB_0041dae8
    CMP ECX,EDI                         ; 0041db98
        ;   Label: LAB_0041db98
    JGE 0x0041daf9                      ; 0041db9a
        ;   XREF to: 0041daf9 (CONDITIONAL_JUMP)  ; LAB_0041daf9
    MOV ECX,EDI                         ; 0041dba0
    JMP 0x0041daf9                      ; 0041dba2
        ;   XREF to: 0041daf9 (UNCONDITIONAL_JUMP)  ; LAB_0041daf9
    CMP ECX,EDI                         ; 0041dba7
        ;   Label: LAB_0041dba7
    JGE 0x0041db0a                      ; 0041dba9
        ;   XREF to: 0041db0a (CONDITIONAL_JUMP)  ; LAB_0041db0a
    MOV dword ptr [ESP + 0xc],EDI       ; 0041dbaf
    JMP 0x0041db0a                      ; 0041dbb3
        ;   XREF to: 0041db0a (UNCONDITIONAL_JUMP)  ; LAB_0041db0a

