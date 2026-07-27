; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_FUN_004ede70(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ede70
        ;   Label: core_netgame.cpp_FUN_004ede70
    PUSH ESI                            ; 004ede71
    PUSH EDI                            ; 004ede72
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ede73
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ede77
    MOV EDI,EAX                         ; 004ede7b
    MOV ESI,EDX                         ; 004ede7d
    MOVSD ES:EDI,ESI                    ; 004ede7f
    MOVSD ES:EDI,ESI                    ; 004ede80
    MOVSD ES:EDI,ESI                    ; 004ede81
    MOVSD ES:EDI,ESI                    ; 004ede82
    MOVSD ES:EDI,ESI                    ; 004ede83
    MOV ECX,dword ptr [EDX + 0x14]      ; 004ede84
    MOV dword ptr [EAX + 0x14],ECX      ; 004ede87
    MOV ECX,dword ptr [EDX + 0x18]      ; 004ede8a
    MOV dword ptr [EAX + 0x18],ECX      ; 004ede8d
    LEA ECX,[EDX + 0x1c]                ; 004ede90
    MOV EBX,dword ptr [ECX]             ; 004ede93
    MOV dword ptr [EAX + 0x1c],EBX      ; 004ede95
    MOV CX,word ptr [ECX + 0x4]         ; 004ede98
    MOV word ptr [EAX + 0x20],CX        ; 004ede9c
    MOV ECX,dword ptr [EDX + 0x24]      ; 004edea0
    MOV dword ptr [EAX + 0x24],ECX      ; 004edea3
    MOV ECX,dword ptr [EDX + 0x28]      ; 004edea6
    MOV dword ptr [EAX + 0x28],ECX      ; 004edea9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004edeac
    MOV dword ptr [EAX + 0x2c],ECX      ; 004edeaf
    MOV ECX,dword ptr [EDX + 0x30]      ; 004edeb2
    MOV dword ptr [EAX + 0x30],ECX      ; 004edeb5
    MOV ECX,dword ptr [EDX + 0x34]      ; 004edeb8
    MOV dword ptr [EAX + 0x34],ECX      ; 004edebb
    MOV ECX,dword ptr [EDX + 0x38]      ; 004edebe
    MOV dword ptr [EAX + 0x38],ECX      ; 004edec1
    MOV ECX,dword ptr [EDX + 0x3c]      ; 004edec4
    MOV dword ptr [EAX + 0x3c],ECX      ; 004edec7
    MOV ECX,dword ptr [EDX + 0x40]      ; 004edeca
    MOV dword ptr [EAX + 0x40],ECX      ; 004edecd
    MOV ECX,dword ptr [EDX + 0x44]      ; 004eded0
    MOV dword ptr [EAX + 0x44],ECX      ; 004eded3
    MOV ECX,dword ptr [EDX + 0x48]      ; 004eded6
    MOV dword ptr [EAX + 0x48],ECX      ; 004eded9
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004ededc
    MOV dword ptr [EAX + 0x4c],ECX      ; 004ededf
    MOV ECX,dword ptr [EDX + 0x50]      ; 004edee2
    MOV dword ptr [EAX + 0x50],ECX      ; 004edee5
    MOV ECX,dword ptr [EDX + 0x54]      ; 004edee8
    MOV dword ptr [EAX + 0x54],ECX      ; 004edeeb
    MOV ECX,dword ptr [EDX + 0x58]      ; 004edeee
    MOV dword ptr [EAX + 0x58],ECX      ; 004edef1
    MOV ECX,dword ptr [EDX + 0x5c]      ; 004edef4
    MOV dword ptr [EAX + 0x5c],ECX      ; 004edef7
    ADD EAX,0x1c                        ; 004edefa
    MOV ECX,dword ptr [EDX + 0x60]      ; 004edefd
    MOV dword ptr [EAX + 0x44],ECX      ; 004edf00
    SUB EAX,0x1c                        ; 004edf03
    MOV ECX,dword ptr [EDX + 0x64]      ; 004edf06
    MOV dword ptr [EAX + 0x64],ECX      ; 004edf09
    ADD EAX,0x4c                        ; 004edf0c
    MOV ECX,dword ptr [EDX + 0x68]      ; 004edf0f
    MOV dword ptr [EAX + 0x1c],ECX      ; 004edf12
    SUB EAX,0x4c                        ; 004edf15
    MOV ECX,dword ptr [EDX + 0x6c]      ; 004edf18
    MOV dword ptr [EAX + 0x6c],ECX      ; 004edf1b
    MOV ECX,dword ptr [EDX + 0x70]      ; 004edf1e
    MOV dword ptr [EAX + 0x70],ECX      ; 004edf21
    MOV ECX,dword ptr [EDX + 0x74]      ; 004edf24
    MOV dword ptr [EAX + 0x74],ECX      ; 004edf27
    POP EDI                             ; 004edf2a
    POP ESI                             ; 004edf2b
    POP EBX                             ; 004edf2c
    RET                                 ; 004edf2d

