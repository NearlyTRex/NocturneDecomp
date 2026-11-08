; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043fbd0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00440640 at 0044088e
;
; Called Functions:
;   FUN_005b5200
;   FUN_005b6380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fbd0
        ;   Label: FUN_0043fbd0
    PUSH ESI                            ; 0043fbd1
    PUSH EDI                            ; 0043fbd2
    SUB ESP,0x138                       ; 0043fbd3
    IMUL EBX,dword ptr [ESP + 0x14c],0xac ; 0043fbd9
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043fbe4
    ADD EAX,0x37b50                     ; 0043fbeb
    ADD EBX,EAX                         ; 0043fbf0
    MOV ESI,dword ptr [EBX + 0x40]      ; 0043fbf2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043fbf5
    SUB EAX,ESI                         ; 0043fbfc
    MOV ESI,EAX                         ; 0043fbfe
    MOV EAX,dword ptr [ESP + 0x150]     ; 0043fc00
    SHL ESI,0x4                         ; 0043fc07
    ADD EAX,0xe80                       ; 0043fc0a
    ADD EAX,ESI                         ; 0043fc0f
    PUSH EAX                            ; 0043fc11
    LEA ESI,[ESP + 0xf4]                ; 0043fc12
    LEA EDI,[ESP + 0xc4]                ; 0043fc19
    CALL FUN_005b6380                   ; 0043fc20
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6380()
    MOV ECX,0xc                         ; 0043fc25
    ADD ESP,0x4                         ; 0043fc2a
    LEA EAX,[EBX + 0x48]                ; 0043fc2d
    LEA ESI,[ESP + 0xf0]                ; 0043fc30
    PUSH EAX                            ; 0043fc37
    LEA EAX,[ESP + 0xc4]                ; 0043fc38
    MOVSD.REP ES:EDI,ESI                ; 0043fc3f
    PUSH EAX                            ; 0043fc41
    LEA ESI,[ESP + 0x38]                ; 0043fc42
    LEA EDI,[ESP + 0x8]                 ; 0043fc46
    CALL FUN_005b5200                   ; 0043fc4a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 0043fc4f
    LEA ESI,[ESP + 0x38]                ; 0043fc54
    ADD ESP,0x8                         ; 0043fc58
    MOVSD.REP ES:EDI,ESI                ; 0043fc5b
    MOV EAX,dword ptr [ESP]             ; 0043fc5d
    MOV dword ptr [EBX + 0x78],EAX      ; 0043fc60
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fc63
    MOV dword ptr [EBX + 0x7c],EAX      ; 0043fc67
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043fc6a
    MOV dword ptr [EBX + 0x80],EAX      ; 0043fc6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043fc74
    MOV dword ptr [EBX + 0x84],EAX      ; 0043fc78
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043fc7e
    MOV dword ptr [EBX + 0x88],EAX      ; 0043fc82
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043fc88
    MOV dword ptr [EBX + 0x8c],EAX      ; 0043fc8c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043fc92
    MOV dword ptr [EBX + 0x90],EAX      ; 0043fc96
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043fc9c
    MOV dword ptr [EBX + 0x94],EAX      ; 0043fca0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043fca6
    MOV dword ptr [EBX + 0x98],EAX      ; 0043fcaa
    MOV EAX,ESP                         ; 0043fcb0
    PUSH EAX                            ; 0043fcb2
    LEA ESI,[ESP + 0x64]                ; 0043fcb3
    LEA EDI,[ESP + 0x94]                ; 0043fcb7
    CALL FUN_005b6380                   ; 0043fcbe
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6380()
    MOV ECX,0xc                         ; 0043fcc3
    LEA ESI,[ESP + 0x64]                ; 0043fcc8
    ADD ESP,0x4                         ; 0043fccc
    MOVSD.REP ES:EDI,ESI                ; 0043fccf
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043fcd1
    ADD EBX,0xa0                        ; 0043fcd8
    MOV dword ptr [ESP + 0x120],EAX     ; 0043fcde
    MOV EAX,dword ptr [ESP + 0xac]      ; 0043fce5
    LEA EDI,[ESP + 0x12c]               ; 0043fcec
    MOV dword ptr [ESP + 0x124],EAX     ; 0043fcf3
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043fcfa
    LEA ESI,[ESP + 0x120]               ; 0043fd01
    MOV dword ptr [ESP + 0x128],EAX     ; 0043fd08
    LEA EAX,[ESP + 0x12c]               ; 0043fd0f
    MOVSD ES:EDI,ESI                    ; 0043fd16
    MOVSD ES:EDI,ESI                    ; 0043fd17
    MOVSD ES:EDI,ESI                    ; 0043fd18
    CMP EBX,EAX                         ; 0043fd19
    JNZ 0x0043fd27                      ; 0043fd1b
        ;   XREF to: 0043fd27 (CONDITIONAL_JUMP)  ; LAB_0043fd27
    ADD ESP,0x138                       ; 0043fd1d
    POP EDI                             ; 0043fd23
    POP ESI                             ; 0043fd24
    POP EBX                             ; 0043fd25
    RET                                 ; 0043fd26
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0043fd27
        ;   Label: LAB_0043fd27
    MOV dword ptr [EBX],EAX             ; 0043fd2e
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043fd30
    MOV dword ptr [EBX + 0x4],EAX       ; 0043fd37
    MOV EAX,dword ptr [ESP + 0x134]     ; 0043fd3a
    MOV dword ptr [EBX + 0x8],EAX       ; 0043fd41
    ADD ESP,0x138                       ; 0043fd44
    POP EDI                             ; 0043fd4a
    POP ESI                             ; 0043fd4b
    POP EBX                             ; 0043fd4c
    RET                                 ; 0043fd4d

