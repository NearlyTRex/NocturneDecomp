; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503d80(int *param_1,int param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005030c0 at 005032d2
;
; Referenced Globals:
;   undefined4 DAT_005dfd28
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503d80
        ;   Label: FUN_00503d80
    PUSH ESI                            ; 00503d81
    PUSH EBP                            ; 00503d82
    MOV EBP,ESP                         ; 00503d83
    SUB ESP,0x18                        ; 00503d85
    AND ESP,0xfffffff8                  ; 00503d88
    MOV ECX,dword ptr [EBP + 0x14]      ; 00503d8b
    LEA EDX,[ECX*0x8 + 0x0]             ; 00503d8e
    ADD EDX,ECX                         ; 00503d95
    MOV EBX,dword ptr [EBP + 0x10]      ; 00503d97
    SHL EDX,0x2                         ; 00503d9a
    MOV EBX,dword ptr [EBX]             ; 00503d9d
    SUB EDX,ECX                         ; 00503d9f
    ADD EBX,0x1c28                      ; 00503da1
    SHL EDX,0x3                         ; 00503da7
    ADD EBX,EDX                         ; 00503daa
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00503dac
    FLD float ptr [EDX]                 ; 00503daf
    FMUL float ptr [EBX + 0x20]         ; 00503db1
    FADD float ptr [EBP + 0x18]         ; 00503db4
    FSTP float ptr [ESP + 0xc]          ; 00503db7
    MOV EDX,dword ptr [ESP + 0xc]       ; 00503dbb
    MOV ECX,dword ptr [EBX + 0x70]      ; 00503dbf
    MOV dword ptr [ESP + 0x10],EDX      ; 00503dc2
    XOR EDX,EDX                         ; 00503dc6
    TEST ECX,ECX                        ; 00503dc8
    JLE 0x00503dec                      ; 00503dca
        ;   XREF to: 00503dec (CONDITIONAL_JUMP)  ; LAB_00503dec
    MOV ECX,EBX                         ; 00503dcc
    FLD float ptr [EBP + 0x18]          ; 00503dce
        ;   Label: LAB_00503dce
    FILD dword ptr [ECX + 0x74]         ; 00503dd1
    FSTP float ptr [ESP + 0x8]          ; 00503dd4
    FCOMP float ptr [ESP + 0x8]         ; 00503dd8
    FNSTSW AX                           ; 00503ddc
    SAHF                                ; 00503dde
    JBE 0x00503e1b                      ; 00503ddf
        ;   XREF to: 00503e1b (CONDITIONAL_JUMP)  ; LAB_00503e1b
    INC EDX                             ; 00503de1
        ;   Label: LAB_00503de1
    MOV ESI,dword ptr [EBX + 0x70]      ; 00503de2
    ADD ECX,0x8                         ; 00503de5
    CMP EDX,ESI                         ; 00503de8
    JL 0x00503dce                       ; 00503dea
        ;   XREF to: 00503dce (CONDITIONAL_JUMP)  ; LAB_00503dce
    FLD float ptr [ESP + 0xc]           ; 00503dec
        ;   Label: LAB_00503dec
    FILD dword ptr [EBX + 0x64]         ; 00503df0
    FSTP float ptr [ESP + 0x14]         ; 00503df3
    FCOMP float ptr [ESP + 0x14]        ; 00503df7
    FNSTSW AX                           ; 00503dfb
    SAHF                                ; 00503dfd
    JBE 0x00503e08                      ; 00503dfe
        ;   XREF to: 00503e08 (CONDITIONAL_JUMP)  ; LAB_00503e08
    MOV EDX,dword ptr [ESP + 0x14]      ; 00503e00
    MOV dword ptr [ESP + 0xc],EDX       ; 00503e04
    FLD float ptr [ESP + 0xc]           ; 00503e08
        ;   Label: LAB_00503e08
    FCOMP float ptr [ESP + 0x10]        ; 00503e0c
    FNSTSW AX                           ; 00503e10
    SAHF                                ; 00503e12
    JC 0x00503e43                       ; 00503e13
        ;   XREF to: 00503e43 (CONDITIONAL_JUMP)  ; LAB_00503e43
    MOV ESP,EBP                         ; 00503e15
    POP EBP                             ; 00503e17
    POP ESI                             ; 00503e18
    POP EBX                             ; 00503e19
    RET                                 ; 00503e1a
    FLD float ptr [ESP + 0xc]           ; 00503e1b
        ;   Label: LAB_00503e1b
    FADD double ptr [0x005dfd28]        ; 00503e1f | DAT_005dfd28
    FLD float ptr [ESP + 0x8]           ; 00503e25
    FSTP double ptr [ESP]               ; 00503e29
    FCOMP double ptr [ESP]              ; 00503e2c
    FNSTSW AX                           ; 00503e2f
    SAHF                                ; 00503e31
    JC 0x00503de1                       ; 00503e32
        ;   XREF to: 00503de1 (CONDITIONAL_JUMP)  ; LAB_00503de1
    FLD double ptr [ESP]                ; 00503e34
    FADD double ptr [0x005dfd28]        ; 00503e37 | DAT_005dfd28
    FSTP float ptr [ESP + 0xc]          ; 00503e3d
    JMP 0x00503de1                      ; 00503e41
        ;   XREF to: 00503de1 (UNCONDITIONAL_JUMP)  ; LAB_00503de1
    FLD float ptr [ESP + 0xc]           ; 00503e43
        ;   Label: LAB_00503e43
    FSUB float ptr [EBP + 0x18]         ; 00503e47
    FDIV float ptr [EBX + 0x20]         ; 00503e4a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00503e4d
    FSTP float ptr [EDX]                ; 00503e50
    MOV ESP,EBP                         ; 00503e52
    POP EBP                             ; 00503e54
    POP ESI                             ; 00503e55
    POP EBX                             ; 00503e56
    RET                                 ; 00503e57

