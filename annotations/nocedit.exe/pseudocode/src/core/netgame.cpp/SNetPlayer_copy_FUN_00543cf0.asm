; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other)
;
; Parameters:
; SNetPlayer *     Stack[0x4]:4   this_ptr
; SNetPlayer *     Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543cf0
        ;   Label: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
    PUSH ESI                            ; 00543cf1
    PUSH EDI                            ; 00543cf2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00543cf3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00543cf7
    MOV EDI,EAX                         ; 00543cfb
    MOV ESI,EDX                         ; 00543cfd
    MOVSD ES:EDI,ESI                    ; 00543cff
    MOVSD ES:EDI,ESI                    ; 00543d00
    MOVSD ES:EDI,ESI                    ; 00543d01
    MOVSD ES:EDI,ESI                    ; 00543d02
    MOVSD ES:EDI,ESI                    ; 00543d03
    MOV ECX,dword ptr [EDX + 0x14]      ; 00543d04
    MOV dword ptr [EAX + 0x14],ECX      ; 00543d07
    MOV ECX,dword ptr [EDX + 0x18]      ; 00543d0a
    MOV dword ptr [EAX + 0x18],ECX      ; 00543d0d
    LEA ECX,[EDX + 0x1c]                ; 00543d10
    MOV EBX,dword ptr [ECX]             ; 00543d13
    MOV dword ptr [EAX + 0x1c],EBX      ; 00543d15
    MOV CX,word ptr [ECX + 0x4]         ; 00543d18
    MOV word ptr [EAX + 0x20],CX        ; 00543d1c
    MOV ECX,dword ptr [EDX + 0x24]      ; 00543d20
    MOV dword ptr [EAX + 0x24],ECX      ; 00543d23
    MOV ECX,dword ptr [EDX + 0x28]      ; 00543d26
    MOV dword ptr [EAX + 0x28],ECX      ; 00543d29
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00543d2c
    MOV dword ptr [EAX + 0x2c],ECX      ; 00543d2f
    MOV ECX,dword ptr [EDX + 0x30]      ; 00543d32
    MOV dword ptr [EAX + 0x30],ECX      ; 00543d35
    MOV ECX,dword ptr [EDX + 0x34]      ; 00543d38
    MOV dword ptr [EAX + 0x34],ECX      ; 00543d3b
    MOV ECX,dword ptr [EDX + 0x38]      ; 00543d3e
    MOV dword ptr [EAX + 0x38],ECX      ; 00543d41
    MOV ECX,dword ptr [EDX + 0x3c]      ; 00543d44
    MOV dword ptr [EAX + 0x3c],ECX      ; 00543d47
    MOV ECX,dword ptr [EDX + 0x40]      ; 00543d4a
    MOV dword ptr [EAX + 0x40],ECX      ; 00543d4d
    MOV ECX,dword ptr [EDX + 0x44]      ; 00543d50
    MOV dword ptr [EAX + 0x44],ECX      ; 00543d53
    MOV ECX,dword ptr [EDX + 0x48]      ; 00543d56
    MOV dword ptr [EAX + 0x48],ECX      ; 00543d59
    MOV ECX,dword ptr [EDX + 0x4c]      ; 00543d5c
    MOV dword ptr [EAX + 0x4c],ECX      ; 00543d5f
    MOV ECX,dword ptr [EDX + 0x50]      ; 00543d62
    MOV dword ptr [EAX + 0x50],ECX      ; 00543d65
    MOV ECX,dword ptr [EDX + 0x54]      ; 00543d68
    MOV dword ptr [EAX + 0x54],ECX      ; 00543d6b
    MOV ECX,dword ptr [EDX + 0x58]      ; 00543d6e
    MOV dword ptr [EAX + 0x58],ECX      ; 00543d71
    MOV ECX,dword ptr [EDX + 0x5c]      ; 00543d74
    MOV dword ptr [EAX + 0x5c],ECX      ; 00543d77
    ADD EAX,0x1c                        ; 00543d7a
    MOV ECX,dword ptr [EDX + 0x60]      ; 00543d7d
    MOV dword ptr [EAX + 0x44],ECX      ; 00543d80
    SUB EAX,0x1c                        ; 00543d83
    MOV ECX,dword ptr [EDX + 0x64]      ; 00543d86
    MOV dword ptr [EAX + 0x64],ECX      ; 00543d89
    ADD EAX,0x4c                        ; 00543d8c
    MOV ECX,dword ptr [EDX + 0x68]      ; 00543d8f
    MOV dword ptr [EAX + 0x1c],ECX      ; 00543d92
    SUB EAX,0x4c                        ; 00543d95
    MOV ECX,dword ptr [EDX + 0x6c]      ; 00543d98
    MOV dword ptr [EAX + 0x6c],ECX      ; 00543d9b
    MOV ECX,dword ptr [EDX + 0x70]      ; 00543d9e
    MOV dword ptr [EAX + 0x70],ECX      ; 00543da1
    MOV ECX,dword ptr [EDX + 0x74]      ; 00543da4
    MOV dword ptr [EAX + 0x74],ECX      ; 00543da7
    POP EDI                             ; 00543daa
    POP ESI                             ; 00543dab
    POP EBX                             ; 00543dac
    RET                                 ; 00543dad

