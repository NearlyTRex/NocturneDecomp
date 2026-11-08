; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502f20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e705a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502f20
        ;   Label: FUN_00502f20
    PUSH EDI                            ; 00502f21
    SUB ESP,0x1c                        ; 00502f22
    MOV ECX,dword ptr [ESP + 0x28]      ; 00502f25
    MOV EDX,ESI                         ; 00502f29
    FLD float ptr [ECX + 0x158]         ; 00502f2b
    FDIVR double ptr [0x005e705a]       ; 00502f31 | DAT_005e705a
    FMUL float ptr [ECX + 0x15c]        ; 00502f37
    MOV EDI,ESI                         ; 00502f3d
    FST float ptr [ESP + 0x18]          ; 00502f3f
    FCHS                                ; 00502f43
    FSTP float ptr [ESP]                ; 00502f45
    MOV EAX,dword ptr [ESP]             ; 00502f48
    XOR EBX,EBX                         ; 00502f4b
    MOV dword ptr [ESP + 0x4],EAX       ; 00502f4d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00502f51
    MOV ESI,ESP                         ; 00502f55
    MOV dword ptr [ESP + 0xc],EAX       ; 00502f57
    MOV dword ptr [ESP + 0x10],EAX      ; 00502f5b
    MOV EAX,dword ptr [ECX + 0x15c]     ; 00502f5f
    MOV ECX,0x6                         ; 00502f65
    MOV dword ptr [ESP + 0x8],EBX       ; 00502f6a
    MOV dword ptr [ESP + 0x14],EAX      ; 00502f6e
    MOVSD.REP ES:EDI,ESI                ; 00502f72
    MOV EAX,EDX                         ; 00502f74
    ADD ESP,0x1c                        ; 00502f76
    POP EDI                             ; 00502f79
    POP EBX                             ; 00502f7a
    RET                                 ; 00502f7b

