; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc850(int *param_1,int param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fbb70 at 004fbd82
;
; Referenced Globals:
;   undefined4 DAT_005c9d94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc850
        ;   Label: FUN_004fc850
    PUSH ESI                            ; 004fc851
    PUSH EBP                            ; 004fc852
    MOV EBP,ESP                         ; 004fc853
    SUB ESP,0x18                        ; 004fc855
    AND ESP,0xfffffff8                  ; 004fc858
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fc85b
    MOV EBX,dword ptr [EBP + 0x10]      ; 004fc85e
    LEA EDX,[ECX*0x8 + 0x0]             ; 004fc861
    MOV EBX,dword ptr [EBX]             ; 004fc868
    ADD EDX,ECX                         ; 004fc86a
    ADD EBX,0x1c28                      ; 004fc86c
    SHL EDX,0x5                         ; 004fc872
    ADD EBX,EDX                         ; 004fc875
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004fc877
    FLD float ptr [EDX]                 ; 004fc87a
    FMUL float ptr [EBX + 0x20]         ; 004fc87c
    FADD float ptr [EBP + 0x18]         ; 004fc87f
    FSTP float ptr [ESP + 0xc]          ; 004fc882
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc886
    MOV ECX,dword ptr [EBX + 0x78]      ; 004fc88a
    MOV dword ptr [ESP + 0x10],EDX      ; 004fc88d
    XOR EDX,EDX                         ; 004fc891
    TEST ECX,ECX                        ; 004fc893
    JLE 0x004fc8b7                      ; 004fc895
        ;   XREF to: 004fc8b7 (CONDITIONAL_JUMP)  ; LAB_004fc8b7
    MOV ECX,EBX                         ; 004fc897
    FLD float ptr [EBP + 0x18]          ; 004fc899
        ;   Label: LAB_004fc899
    FILD dword ptr [ECX + 0x7c]         ; 004fc89c
    FSTP float ptr [ESP + 0x8]          ; 004fc89f
    FCOMP float ptr [ESP + 0x8]         ; 004fc8a3
    FNSTSW AX                           ; 004fc8a7
    SAHF                                ; 004fc8a9
    JBE 0x004fc8e6                      ; 004fc8aa
        ;   XREF to: 004fc8e6 (CONDITIONAL_JUMP)  ; LAB_004fc8e6
    INC EDX                             ; 004fc8ac
        ;   Label: LAB_004fc8ac
    MOV ESI,dword ptr [EBX + 0x78]      ; 004fc8ad
    ADD ECX,0x8                         ; 004fc8b0
    CMP EDX,ESI                         ; 004fc8b3
    JL 0x004fc899                       ; 004fc8b5
        ;   XREF to: 004fc899 (CONDITIONAL_JUMP)  ; LAB_004fc899
    FLD float ptr [ESP + 0xc]           ; 004fc8b7
        ;   Label: LAB_004fc8b7
    FILD dword ptr [EBX + 0x64]         ; 004fc8bb
    FSTP float ptr [ESP + 0x14]         ; 004fc8be
    FCOMP float ptr [ESP + 0x14]        ; 004fc8c2
    FNSTSW AX                           ; 004fc8c6
    SAHF                                ; 004fc8c8
    JBE 0x004fc8d3                      ; 004fc8c9
        ;   XREF to: 004fc8d3 (CONDITIONAL_JUMP)  ; LAB_004fc8d3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fc8cb
    MOV dword ptr [ESP + 0xc],EDX       ; 004fc8cf
    FLD float ptr [ESP + 0xc]           ; 004fc8d3
        ;   Label: LAB_004fc8d3
    FCOMP float ptr [ESP + 0x10]        ; 004fc8d7
    FNSTSW AX                           ; 004fc8db
    SAHF                                ; 004fc8dd
    JC 0x004fc90e                       ; 004fc8de
        ;   XREF to: 004fc90e (CONDITIONAL_JUMP)  ; LAB_004fc90e
    MOV ESP,EBP                         ; 004fc8e0
    POP EBP                             ; 004fc8e2
    POP ESI                             ; 004fc8e3
    POP EBX                             ; 004fc8e4
    RET                                 ; 004fc8e5
    FLD float ptr [ESP + 0xc]           ; 004fc8e6
        ;   Label: LAB_004fc8e6
    FADD double ptr [0x005c9d94]        ; 004fc8ea | DAT_005c9d94
    FLD float ptr [ESP + 0x8]           ; 004fc8f0
    FSTP double ptr [ESP]               ; 004fc8f4
    FCOMP double ptr [ESP]              ; 004fc8f7
    FNSTSW AX                           ; 004fc8fa
    SAHF                                ; 004fc8fc
    JC 0x004fc8ac                       ; 004fc8fd
        ;   XREF to: 004fc8ac (CONDITIONAL_JUMP)  ; LAB_004fc8ac
    FLD double ptr [ESP]                ; 004fc8ff
    FADD double ptr [0x005c9d94]        ; 004fc902 | DAT_005c9d94
    FSTP float ptr [ESP + 0xc]          ; 004fc908
    JMP 0x004fc8ac                      ; 004fc90c
        ;   XREF to: 004fc8ac (UNCONDITIONAL_JUMP)  ; LAB_004fc8ac
    FLD float ptr [ESP + 0xc]           ; 004fc90e
        ;   Label: LAB_004fc90e
    FSUB float ptr [EBP + 0x18]         ; 004fc912
    FDIV float ptr [EBX + 0x20]         ; 004fc915
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004fc918
    FSTP float ptr [EDX]                ; 004fc91b
    MOV ESP,EBP                         ; 004fc91d
    POP EBP                             ; 004fc91f
    POP ESI                             ; 004fc920
    POP EBX                             ; 004fc921
    RET                                 ; 004fc922

