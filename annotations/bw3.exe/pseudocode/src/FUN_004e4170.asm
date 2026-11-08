; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4170(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c6b1f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4170
        ;   Label: FUN_004e4170
    PUSH EDI                            ; 004e4171
    SUB ESP,0x1c                        ; 004e4172
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e4175
    MOV EDX,ESI                         ; 004e4179
    FLD float ptr [ECX + 0x158]         ; 004e417b
    FDIVR double ptr [0x005c6b1f]       ; 004e4181 | DAT_005c6b1f
    FMUL float ptr [ECX + 0x15c]        ; 004e4187
    MOV EDI,ESI                         ; 004e418d
    FST float ptr [ESP + 0x18]          ; 004e418f
    FCHS                                ; 004e4193
    FSTP float ptr [ESP]                ; 004e4195
    MOV EAX,dword ptr [ESP]             ; 004e4198
    XOR EBX,EBX                         ; 004e419b
    MOV dword ptr [ESP + 0x4],EAX       ; 004e419d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e41a1
    MOV ESI,ESP                         ; 004e41a5
    MOV dword ptr [ESP + 0xc],EAX       ; 004e41a7
    MOV dword ptr [ESP + 0x10],EAX      ; 004e41ab
    MOV EAX,dword ptr [ECX + 0x15c]     ; 004e41af
    MOV ECX,0x6                         ; 004e41b5
    MOV dword ptr [ESP + 0x8],EBX       ; 004e41ba
    MOV dword ptr [ESP + 0x14],EAX      ; 004e41be
    MOVSD.REP ES:EDI,ESI                ; 004e41c2
    MOV EAX,EDX                         ; 004e41c4
    ADD ESP,0x1c                        ; 004e41c6
    POP EDI                             ; 004e41c9
    POP EBX                             ; 004e41ca
    RET                                 ; 004e41cb

