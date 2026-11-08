; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00505d70(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050a280 at 0050a3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505d70
        ;   Label: FUN_00505d70
    PUSH ESI                            ; 00505d71
    PUSH EDI                            ; 00505d72
    PUSH EBP                            ; 00505d73
    MOV EBP,ESP                         ; 00505d74
    SUB ESP,0x20                        ; 00505d76
    AND ESP,0xfffffff8                  ; 00505d79
    MOV EAX,dword ptr [EBP + 0x20]      ; 00505d7c
    XOR EDX,EDX                         ; 00505d7f
    MOV EAX,dword ptr [EAX + 0x10]      ; 00505d81
    MOV dword ptr [ESP + 0x8],EDX       ; 00505d84
    MOV dword ptr [ESP + 0x10],EAX      ; 00505d88
    XOR ECX,ECX                         ; 00505d8c
        ;   Label: LAB_00505d8c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00505d8e
    MOV dword ptr [ESP + 0x18],ECX      ; 00505d92
    TEST EBX,EBX                        ; 00505d96
    JLE 0x00505df5                      ; 00505d98
        ;   XREF to: 00505df5 (CONDITIONAL_JUMP)  ; LAB_00505df5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505d9a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00505d9e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00505da1
    MOV EDI,dword ptr [ESP + 0x8]       ; 00505da4
    MOV ESI,dword ptr [EBP + 0x14]      ; 00505da8
    MOV dword ptr [ESP + 0xc],EAX       ; 00505dab
    ADD EDI,ESI                         ; 00505daf
    ADD EAX,EDX                         ; 00505db1
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505db3
    MOV EBX,EAX                         ; 00505db7
    ADD EDX,ECX                         ; 00505db9
    IMUL ECX,dword ptr [ESP + 0x18],0x180 ; 00505dbb
        ;   Label: LAB_00505dbb
    MOV ESI,dword ptr [EDX]             ; 00505dc3
    TEST ESI,ESI                        ; 00505dc5
    JNZ 0x00505e0f                      ; 00505dc7
        ;   XREF to: 00505e0f (CONDITIONAL_JUMP)  ; LAB_00505e0f
    MOV dword ptr [EBX],ESI             ; 00505dc9
    MOV ESI,dword ptr [ESP + 0x18]      ; 00505dcb
        ;   Label: LAB_00505dcb
    ADD EBX,0x180                       ; 00505dcf
    ADD EDX,0x80                        ; 00505dd5
    INC ESI                             ; 00505ddb
    ADD EDI,0x180                       ; 00505ddc
    MOV dword ptr [ESP + 0x18],ESI      ; 00505de2
    MOV ECX,ESI                         ; 00505de6
    MOV ESI,dword ptr [ESP + 0x10]      ; 00505de8
    ADD EAX,0x180                       ; 00505dec
    CMP ECX,ESI                         ; 00505df1
    JL 0x00505dbb                       ; 00505df3
        ;   XREF to: 00505dbb (CONDITIONAL_JUMP)  ; LAB_00505dbb
    MOV EDI,dword ptr [ESP + 0x8]       ; 00505df5
        ;   Label: LAB_00505df5
    ADD EDI,0x4                         ; 00505df9
    MOV dword ptr [ESP + 0x8],EDI       ; 00505dfc
    CMP EDI,0x80                        ; 00505e00
    JNZ 0x00505d8c                      ; 00505e06
        ;   XREF to: 00505d8c (CONDITIONAL_JUMP)  ; LAB_00505d8c
    MOV ESP,EBP                         ; 00505e08
    POP EBP                             ; 00505e0a
    POP EDI                             ; 00505e0b
    POP ESI                             ; 00505e0c
    POP EBX                             ; 00505e0d
    RET                                 ; 00505e0e
    INC ESI                             ; 00505e0f
        ;   Label: LAB_00505e0f
    MOV dword ptr [ESP + 0x14],ESI      ; 00505e10
    ADD ECX,dword ptr [EBP + 0x14]      ; 00505e14
    MOV ESI,dword ptr [ESP + 0xc]       ; 00505e17
    ADD ESI,ECX                         ; 00505e1b
    MOV ECX,dword ptr [EDX]             ; 00505e1d
    MOV ESI,dword ptr [ESI]             ; 00505e1f
    SHR ESI,CL                          ; 00505e21
    MOV ECX,ESI                         ; 00505e23
    AND ECX,0x1                         ; 00505e25
    CMP ECX,0x1                         ; 00505e28
    JNZ 0x00505ea3                      ; 00505e2b
        ;   XREF to: 00505ea3 (CONDITIONAL_JUMP)  ; LAB_00505ea3
    MOV dword ptr [EBX],0x0             ; 00505e2d
    MOV ECX,dword ptr [ESP + 0x14]      ; 00505e33
        ;   Label: LAB_00505e33
    MOV ESI,0x1                         ; 00505e37
    DEC ECX                             ; 00505e3c
    SHL ESI,CL                          ; 00505e3d
    MOV ECX,ESI                         ; 00505e3f
    DEC ESI                             ; 00505e41
    MOV dword ptr [ESP + 0x1c],ESI      ; 00505e42
    MOV ESI,dword ptr [EDI]             ; 00505e46
    AND ESI,dword ptr [ESP + 0x1c]      ; 00505e48
    MOV dword ptr [ESP + 0x1c],ESI      ; 00505e4c
    XOR ESI,ESI                         ; 00505e50
    MOV dword ptr [ESP + 0x4],ESI       ; 00505e52
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00505e56
    MOV dword ptr [ESP],ESI             ; 00505e5a
    MOV dword ptr [ESP + 0x1c],ECX      ; 00505e5d
    FILD qword ptr [ESP]                ; 00505e61
    FILD dword ptr [ESP + 0x1c]         ; 00505e64
    FLD1                                ; 00505e68
    FDIVRP                              ; 00505e6a
    MOV CL,byte ptr [ESP + 0x14]        ; 00505e6c
    MOV ESI,0x1                         ; 00505e70
    FXCH                                ; 00505e75
    FMUL ST1                            ; 00505e77
    SHL ESI,CL                          ; 00505e79
    FLD float ptr [EAX]                 ; 00505e7b
    FXCH                                ; 00505e7d
    FADD ST0,ST1                        ; 00505e7f
    MOV dword ptr [ESP + 0x1c],ESI      ; 00505e81
    FSTP ST1                            ; 00505e85
    FADDP                               ; 00505e87
    LEA ECX,[ESI + -0x1]                ; 00505e89
    FILD dword ptr [ESP + 0x1c]         ; 00505e8c
    FMULP                               ; 00505e90
    MOV dword ptr [ESP + 0x1c],ECX      ; 00505e92
    FILD dword ptr [ESP + 0x1c]         ; 00505e96
    FDIVP                               ; 00505e9a
    FSTP float ptr [EAX]                ; 00505e9c
    JMP 0x00505dcb                      ; 00505e9e
        ;   XREF to: 00505dcb (UNCONDITIONAL_JUMP)  ; LAB_00505dcb
    MOV dword ptr [EBX],0xbf800000      ; 00505ea3
        ;   Label: LAB_00505ea3
    JMP 0x00505e33                      ; 00505ea9
        ;   XREF to: 00505e33 (UNCONDITIONAL_JUMP)  ; LAB_00505e33

