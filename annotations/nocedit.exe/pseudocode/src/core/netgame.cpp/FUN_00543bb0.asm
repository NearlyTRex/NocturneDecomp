; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_00543bb0()
;
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined2       Stack[-0x68]:2  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_netgame.cpp_FUN_00543e30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543bb0
        ;   Label: core_netgame.cpp_FUN_00543bb0
    PUSH ESI                            ; 00543bb1
    PUSH EDI                            ; 00543bb2
    PUSH EBP                            ; 00543bb3
    SUB ESP,0x78                        ; 00543bb4
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00543bb7
    MOV EBP,dword ptr [ESP + 0x90]      ; 00543bbe
    MOV EDI,ESP                         ; 00543bc5
    MOV ESI,EBX                         ; 00543bc7
    MOVSD ES:EDI,ESI                    ; 00543bc9
    MOVSD ES:EDI,ESI                    ; 00543bca
    MOVSD ES:EDI,ESI                    ; 00543bcb
    MOVSD ES:EDI,ESI                    ; 00543bcc
    MOVSD ES:EDI,ESI                    ; 00543bcd
    MOV EAX,dword ptr [EBX + 0x14]      ; 00543bce
    MOV dword ptr [ESP + 0x14],EAX      ; 00543bd1
    LEA ESI,[EBX + 0x1c]                ; 00543bd5
    MOV EAX,dword ptr [EBX + 0x18]      ; 00543bd8
    PUSH ESI                            ; 00543bdb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00543bdc
    LEA EAX,[ESP + 0x20]                ; 00543be0
    PUSH EAX                            ; 00543be4
    CALL core_netgame.cpp_FUN_00543e30  ; 00543be5
        ;   XREF to: 00543e30 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_00543e30()
    ADD ESP,0x8                         ; 00543bea
    MOV AX,word ptr [ESI + 0x4]         ; 00543bed
    MOV word ptr [ESP + 0x20],AX        ; 00543bf1
    MOV EAX,dword ptr [EBX + 0x24]      ; 00543bf6
    MOV dword ptr [ESP + 0x24],EAX      ; 00543bf9
    MOV EAX,dword ptr [EBX + 0x28]      ; 00543bfd
    MOV dword ptr [ESP + 0x28],EAX      ; 00543c00
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00543c04
    MOV dword ptr [ESP + 0x2c],EAX      ; 00543c07
    MOV EAX,dword ptr [EBX + 0x30]      ; 00543c0b
    MOV dword ptr [ESP + 0x30],EAX      ; 00543c0e
    MOV EAX,dword ptr [EBX + 0x34]      ; 00543c12
    MOV dword ptr [ESP + 0x34],EAX      ; 00543c15
    MOV EAX,dword ptr [EBX + 0x38]      ; 00543c19
    MOV dword ptr [ESP + 0x38],EAX      ; 00543c1c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00543c20
    MOV dword ptr [ESP + 0x3c],EAX      ; 00543c23
    MOV EAX,dword ptr [EBX + 0x40]      ; 00543c27
    MOV dword ptr [ESP + 0x40],EAX      ; 00543c2a
    MOV EAX,dword ptr [EBX + 0x44]      ; 00543c2e
    MOV dword ptr [ESP + 0x44],EAX      ; 00543c31
    MOV EAX,dword ptr [EBX + 0x48]      ; 00543c35
    LEA EDX,[EBX + 0x4c]                ; 00543c38
    MOV dword ptr [ESP + 0x48],EAX      ; 00543c3b
    MOV EAX,dword ptr [EDX]             ; 00543c3f
    MOV dword ptr [ESP + 0x4c],EAX      ; 00543c41
    MOV EAX,dword ptr [EDX + 0x4]       ; 00543c45
    MOV dword ptr [ESP + 0x50],EAX      ; 00543c48
    MOV EAX,dword ptr [EDX + 0x8]       ; 00543c4c
    MOV dword ptr [ESP + 0x54],EAX      ; 00543c4f
    MOV EAX,dword ptr [EDX + 0xc]       ; 00543c53
    MOV dword ptr [ESP + 0x58],EAX      ; 00543c56
    MOV EAX,dword ptr [EDX + 0x10]      ; 00543c5a
    MOV dword ptr [ESP + 0x5c],EAX      ; 00543c5d
    MOV EAX,dword ptr [EDX + 0x14]      ; 00543c61
    MOV dword ptr [ESP + 0x60],EAX      ; 00543c64
    MOV EAX,dword ptr [EDX + 0x18]      ; 00543c68
    MOV dword ptr [ESP + 0x64],EAX      ; 00543c6b
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00543c6f
    MOV dword ptr [ESP + 0x68],EAX      ; 00543c72
    MOV EAX,dword ptr [EDX + 0x20]      ; 00543c76
    MOV dword ptr [ESP + 0x6c],EAX      ; 00543c79
    MOV EAX,dword ptr [EDX + 0x24]      ; 00543c7d
    MOV ECX,0x1e                        ; 00543c80
    MOV dword ptr [ESP + 0x70],EAX      ; 00543c85
    MOV EDI,EBX                         ; 00543c89
    MOV EAX,dword ptr [EDX + 0x28]      ; 00543c8b
    MOV ESI,EBP                         ; 00543c8e
    MOV dword ptr [ESP + 0x74],EAX      ; 00543c90
    MOVSD.REP ES:EDI,ESI                ; 00543c94
    MOV ECX,0x1e                        ; 00543c96
    MOV ESI,ESP                         ; 00543c9b
    MOV EDI,EBP                         ; 00543c9d
    MOVSD.REP ES:EDI,ESI                ; 00543c9f
    ADD ESP,0x78                        ; 00543ca1
    POP EBP                             ; 00543ca4
    POP EDI                             ; 00543ca5
    POP ESI                             ; 00543ca6
    POP EBX                             ; 00543ca7
    RET                                 ; 00543ca8

