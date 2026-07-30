; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_swapPlayerData_FUN_004edd30(CNetGame *this_ptr,SNetPlayer *other)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetPlayer *     Stack[0x8]:4   other
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
;   core_netgame.cpp_assignInt2_FUN_004edfb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edd30
        ;   Label: core_netgame.cpp_CNetGame_swapPlayerData_FUN_004edd30
    PUSH ESI                            ; 004edd31
    PUSH EDI                            ; 004edd32
    PUSH EBP                            ; 004edd33
    SUB ESP,0x78                        ; 004edd34
    MOV EBX,dword ptr [ESP + 0x8c]      ; 004edd37
    MOV EBP,dword ptr [ESP + 0x90]      ; 004edd3e
    MOV EDI,ESP                         ; 004edd45
    MOV ESI,EBX                         ; 004edd47
    MOVSD ES:EDI,ESI                    ; 004edd49
    MOVSD ES:EDI,ESI                    ; 004edd4a
    MOVSD ES:EDI,ESI                    ; 004edd4b
    MOVSD ES:EDI,ESI                    ; 004edd4c
    MOVSD ES:EDI,ESI                    ; 004edd4d
    MOV EAX,dword ptr [EBX + 0x14]      ; 004edd4e
    MOV dword ptr [ESP + 0x14],EAX      ; 004edd51
    LEA ESI,[EBX + 0x1c]                ; 004edd55
    MOV EAX,dword ptr [EBX + 0x18]      ; 004edd58
    PUSH ESI                            ; 004edd5b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004edd5c
    LEA EAX,[ESP + 0x20]                ; 004edd60
    PUSH EAX                            ; 004edd64
    CALL core_netgame.cpp_assignInt2_FUN_004edfb0 ; 004edd65
        ;   XREF to: 004edfb0 (UNCONDITIONAL_CALL)  ; int * core_netgame.cpp_assignInt2_FUN_004edfb0(int * dest, int * src)
    ADD ESP,0x8                         ; 004edd6a
    MOV AX,word ptr [ESI + 0x4]         ; 004edd6d
    MOV word ptr [ESP + 0x20],AX        ; 004edd71
    MOV EAX,dword ptr [EBX + 0x24]      ; 004edd76
    MOV dword ptr [ESP + 0x24],EAX      ; 004edd79
    MOV EAX,dword ptr [EBX + 0x28]      ; 004edd7d
    MOV dword ptr [ESP + 0x28],EAX      ; 004edd80
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004edd84
    MOV dword ptr [ESP + 0x2c],EAX      ; 004edd87
    MOV EAX,dword ptr [EBX + 0x30]      ; 004edd8b
    MOV dword ptr [ESP + 0x30],EAX      ; 004edd8e
    MOV EAX,dword ptr [EBX + 0x34]      ; 004edd92
    MOV dword ptr [ESP + 0x34],EAX      ; 004edd95
    MOV EAX,dword ptr [EBX + 0x38]      ; 004edd99
    MOV dword ptr [ESP + 0x38],EAX      ; 004edd9c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004edda0
    MOV dword ptr [ESP + 0x3c],EAX      ; 004edda3
    MOV EAX,dword ptr [EBX + 0x40]      ; 004edda7
    MOV dword ptr [ESP + 0x40],EAX      ; 004eddaa
    MOV EAX,dword ptr [EBX + 0x44]      ; 004eddae
    MOV dword ptr [ESP + 0x44],EAX      ; 004eddb1
    MOV EAX,dword ptr [EBX + 0x48]      ; 004eddb5
    LEA EDX,[EBX + 0x4c]                ; 004eddb8
    MOV dword ptr [ESP + 0x48],EAX      ; 004eddbb
    MOV EAX,dword ptr [EDX]             ; 004eddbf
    MOV dword ptr [ESP + 0x4c],EAX      ; 004eddc1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004eddc5
    MOV dword ptr [ESP + 0x50],EAX      ; 004eddc8
    MOV EAX,dword ptr [EDX + 0x8]       ; 004eddcc
    MOV dword ptr [ESP + 0x54],EAX      ; 004eddcf
    MOV EAX,dword ptr [EDX + 0xc]       ; 004eddd3
    MOV dword ptr [ESP + 0x58],EAX      ; 004eddd6
    MOV EAX,dword ptr [EDX + 0x10]      ; 004eddda
    MOV dword ptr [ESP + 0x5c],EAX      ; 004edddd
    MOV EAX,dword ptr [EDX + 0x14]      ; 004edde1
    MOV dword ptr [ESP + 0x60],EAX      ; 004edde4
    MOV EAX,dword ptr [EDX + 0x18]      ; 004edde8
    MOV dword ptr [ESP + 0x64],EAX      ; 004eddeb
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004eddef
    MOV dword ptr [ESP + 0x68],EAX      ; 004eddf2
    MOV EAX,dword ptr [EDX + 0x20]      ; 004eddf6
    MOV dword ptr [ESP + 0x6c],EAX      ; 004eddf9
    MOV EAX,dword ptr [EDX + 0x24]      ; 004eddfd
    MOV ECX,0x1e                        ; 004ede00
    MOV dword ptr [ESP + 0x70],EAX      ; 004ede05
    MOV EDI,EBX                         ; 004ede09
    MOV EAX,dword ptr [EDX + 0x28]      ; 004ede0b
    MOV ESI,EBP                         ; 004ede0e
    MOV dword ptr [ESP + 0x74],EAX      ; 004ede10
    MOVSD.REP ES:EDI,ESI                ; 004ede14
    MOV ECX,0x1e                        ; 004ede16
    MOV ESI,ESP                         ; 004ede1b
    MOV EDI,EBP                         ; 004ede1d
    MOVSD.REP ES:EDI,ESI                ; 004ede1f
    ADD ESP,0x78                        ; 004ede21
    POP EBP                             ; 004ede24
    POP EDI                             ; 004ede25
    POP ESI                             ; 004ede26
    POP EBX                             ; 004ede27
    RET                                 ; 004ede28

