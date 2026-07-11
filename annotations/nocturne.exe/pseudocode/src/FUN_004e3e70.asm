; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3e70(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004e85b0 at 004e8ced
;
; Referenced Globals:
;   undefined4 DAT_005bbdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3e70
        ;   Label: FUN_004e3e70
    PUSH ESI                            ; 004e3e71
    PUSH EDI                            ; 004e3e72
    SUB ESP,0x10                        ; 004e3e73
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e3e76
    MOV ESI,dword ptr [EAX + 0x10]      ; 004e3e7a
    MOV EAX,dword ptr [EAX + 0x18]      ; 004e3e7d
    TEST EAX,EAX                        ; 004e3e80
    JLE 0x004e3f17                      ; 004e3e82
        ;   XREF to: 004e3f17 (CONDITIONAL_JUMP)  ; LAB_004e3f17
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e3e88
    SHL EAX,0x2                         ; 004e3e8c
    XOR EDI,EDI                         ; 004e3e8f
    SHL EDX,0x7                         ; 004e3e91
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3e94
    MOV dword ptr [ESP + 0x8],EDX       ; 004e3e98
    XOR ECX,ECX                         ; 004e3e9c
        ;   Label: LAB_004e3e9c
    TEST ESI,ESI                        ; 004e3e9e
    JLE 0x004e3f0c                      ; 004e3ea0
        ;   XREF to: 004e3f0c (CONDITIONAL_JUMP)  ; LAB_004e3f0c
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e3ea2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004e3ea6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e3eaa
    ADD EDX,EDI                         ; 004e3eae
    ADD EAX,EDI                         ; 004e3eb0
    ADD EDX,EBX                         ; 004e3eb2
    FLD float ptr [EAX]                 ; 004e3eb4
        ;   Label: LAB_004e3eb4
    MOV EBX,dword ptr [EDX]             ; 004e3eb6
    FLD ST0                             ; 004e3eb8
    FMUL double ptr [EBX*0x8 + 0x5bbdf0] ; 004e3eba | DAT_005bbdf0
    FLD float ptr [EAX + 0x80]          ; 004e3ec1
    FXCH                                ; 004e3ec7
    FSTP ST2                            ; 004e3ec9
    FXCH                                ; 004e3ecb
    FSTP float ptr [EAX]                ; 004e3ecd
    MOV EBX,dword ptr [EDX]             ; 004e3ecf
    FLD ST0                             ; 004e3ed1
    FMUL double ptr [EBX*0x8 + 0x5bbdf0] ; 004e3ed3 | DAT_005bbdf0
    FLD float ptr [EAX + 0x100]         ; 004e3eda
    FXCH                                ; 004e3ee0
    FSTP ST2                            ; 004e3ee2
    FXCH                                ; 004e3ee4
    FSTP float ptr [EAX + 0x80]         ; 004e3ee6
    MOV EBX,dword ptr [EDX]             ; 004e3eec
    FLD ST0                             ; 004e3eee
    FMUL double ptr [EBX*0x8 + 0x5bbdf0] ; 004e3ef0 | DAT_005bbdf0
    ADD EDX,0x180                       ; 004e3ef7
    ADD EAX,0x180                       ; 004e3efd
    INC ECX                             ; 004e3f02
    FSTP ST1                            ; 004e3f03
    FSTP float ptr [EAX + -0x80]        ; 004e3f05
    CMP ECX,ESI                         ; 004e3f08
    JL 0x004e3eb4                       ; 004e3f0a
        ;   XREF to: 004e3eb4 (CONDITIONAL_JUMP)  ; LAB_004e3eb4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e3f0c
        ;   Label: LAB_004e3f0c
    ADD EDI,0x4                         ; 004e3f10
    CMP EDI,EDX                         ; 004e3f13
    JL 0x004e3e9c                       ; 004e3f15
        ;   XREF to: 004e3e9c (CONDITIONAL_JUMP)  ; LAB_004e3e9c
    ADD ESP,0x10                        ; 004e3f17
        ;   Label: LAB_004e3f17
    POP EDI                             ; 004e3f1a
    POP ESI                             ; 004e3f1b
    POP EBX                             ; 004e3f1c
    RET                                 ; 004e3f1d

