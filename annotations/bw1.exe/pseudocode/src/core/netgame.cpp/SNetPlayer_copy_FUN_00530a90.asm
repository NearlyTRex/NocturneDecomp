; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNetPlayer * core_netgame_cpp_SNetPlayer_copy_FUN_00530a90(SNetPlayer *this_ptr,SNetPlayer *other)
;
; Parameters:
; SNetPlayer *     Stack[0x4]:4   this_ptr
; SNetPlayer *     Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530a90
        ;   Label: core_netgame.cpp_SNetPlayer_copy_FUN_00530a90
    PUSH ESI                            ; 00530a91
    PUSH EDI                            ; 00530a92
    MOV EAX,dword ptr [ESP + 0x10]      ; 00530a93
    MOV EDX,dword ptr [ESP + 0x14]      ; 00530a97
    MOV EDI,EAX                         ; 00530a9b
    MOV ESI,EDX                         ; 00530a9d
    MOVSD ES:EDI,ESI                    ; 00530a9f
    MOVSD ES:EDI,ESI                    ; 00530aa0
    MOVSD ES:EDI,ESI                    ; 00530aa1
    MOVSD ES:EDI,ESI                    ; 00530aa2
    MOVSD ES:EDI,ESI                    ; 00530aa3
    MOV ECX,dword ptr [EDX + 0x14]      ; 00530aa4
    MOV dword ptr [EAX + 0x14],ECX      ; 00530aa7
    MOV ECX,dword ptr [EDX + 0x18]      ; 00530aaa
    MOV dword ptr [EAX + 0x18],ECX      ; 00530aad
    LEA ECX,[EDX + 0x1c]                ; 00530ab0
    MOV EBX,dword ptr [ECX]             ; 00530ab3
    MOV dword ptr [EAX + 0x1c],EBX      ; 00530ab5
    MOV CX,word ptr [ECX + 0x4]         ; 00530ab8
    MOV word ptr [EAX + 0x20],CX        ; 00530abc
    MOV ECX,dword ptr [EDX + 0x24]      ; 00530ac0
    MOV dword ptr [EAX + 0x24],ECX      ; 00530ac3
    MOV ECX,dword ptr [EDX + 0x28]      ; 00530ac6
    MOV dword ptr [EAX + 0x28],ECX      ; 00530ac9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00530acc
    MOV dword ptr [EAX + 0x2c],ECX      ; 00530acf
    MOV ECX,dword ptr [EDX + 0x30]      ; 00530ad2
    MOV dword ptr [EAX + 0x30],ECX      ; 00530ad5
    MOV ECX,dword ptr [EDX + 0x34]      ; 00530ad8
    MOV dword ptr [EAX + 0x34],ECX      ; 00530adb
    MOV ECX,dword ptr [EDX + 0x38]      ; 00530ade
    MOV dword ptr [EAX + 0x38],ECX      ; 00530ae1
    MOV ECX,dword ptr [EDX + 0x3c]      ; 00530ae4
    MOV dword ptr [EAX + 0x3c],ECX      ; 00530ae7
    MOV ECX,dword ptr [EDX + 0x40]      ; 00530aea
    MOV dword ptr [EAX + 0x40],ECX      ; 00530aed
    MOV ECX,dword ptr [EDX + 0x44]      ; 00530af0
    MOV dword ptr [EAX + 0x44],ECX      ; 00530af3
    MOV ECX,dword ptr [EDX + 0x48]      ; 00530af6
    MOV dword ptr [EAX + 0x48],ECX      ; 00530af9
    MOV ECX,dword ptr [EDX + 0x4c]      ; 00530afc
    MOV dword ptr [EAX + 0x4c],ECX      ; 00530aff
    MOV ECX,dword ptr [EDX + 0x50]      ; 00530b02
    MOV dword ptr [EAX + 0x50],ECX      ; 00530b05
    MOV ECX,dword ptr [EDX + 0x54]      ; 00530b08
    MOV dword ptr [EAX + 0x54],ECX      ; 00530b0b
    MOV ECX,dword ptr [EDX + 0x58]      ; 00530b0e
    MOV dword ptr [EAX + 0x58],ECX      ; 00530b11
    MOV ECX,dword ptr [EDX + 0x5c]      ; 00530b14
    MOV dword ptr [EAX + 0x5c],ECX      ; 00530b17
    MOV ECX,dword ptr [EDX + 0x60]      ; 00530b1a
    MOV dword ptr [EAX + 0x60],ECX      ; 00530b1d
    ADD EAX,0x1c                        ; 00530b20
    MOV ECX,dword ptr [EDX + 0x64]      ; 00530b23
    MOV dword ptr [EAX + 0x48],ECX      ; 00530b26
    SUB EAX,0x1c                        ; 00530b29
    MOV ECX,dword ptr [EDX + 0x68]      ; 00530b2c
    MOV dword ptr [EAX + 0x68],ECX      ; 00530b2f
    ADD EAX,0x4c                        ; 00530b32
    MOV ECX,dword ptr [EDX + 0x6c]      ; 00530b35
    MOV dword ptr [EAX + 0x20],ECX      ; 00530b38
    SUB EAX,0x4c                        ; 00530b3b
    MOV ECX,dword ptr [EDX + 0x70]      ; 00530b3e
    MOV dword ptr [EAX + 0x70],ECX      ; 00530b41
    MOV ECX,dword ptr [EDX + 0x74]      ; 00530b44
    MOV dword ptr [EAX + 0x74],ECX      ; 00530b47
    MOV ECX,dword ptr [EDX + 0x78]      ; 00530b4a
    MOV dword ptr [EAX + 0x78],ECX      ; 00530b4d
    POP EDI                             ; 00530b50
    POP ESI                             ; 00530b51
    POP EBX                             ; 00530b52
    RET                                 ; 00530b53

