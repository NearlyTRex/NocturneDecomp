; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043d830(int param_1,int param_2,int param_3)
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
;   FUN_0043e2a0 at 0043e4ee
;
; Called Functions:
;   FUN_005833e0
;   FUN_00584560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d830
        ;   Label: FUN_0043d830
    PUSH ESI                            ; 0043d831
    PUSH EDI                            ; 0043d832
    SUB ESP,0x138                       ; 0043d833
    IMUL EBX,dword ptr [ESP + 0x14c],0xac ; 0043d839
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043d844
    ADD EAX,0x37b50                     ; 0043d84b
    ADD EBX,EAX                         ; 0043d850
    MOV ESI,dword ptr [EBX + 0x40]      ; 0043d852
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d855
    SUB EAX,ESI                         ; 0043d85c
    MOV ESI,EAX                         ; 0043d85e
    MOV EAX,dword ptr [ESP + 0x150]     ; 0043d860
    SHL ESI,0x4                         ; 0043d867
    ADD EAX,0xe80                       ; 0043d86a
    ADD EAX,ESI                         ; 0043d86f
    PUSH EAX                            ; 0043d871
    LEA ESI,[ESP + 0xf4]                ; 0043d872
    LEA EDI,[ESP + 0xc4]                ; 0043d879
    CALL FUN_00584560                   ; 0043d880
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined FUN_00584560()
    MOV ECX,0xc                         ; 0043d885
    ADD ESP,0x4                         ; 0043d88a
    LEA EAX,[EBX + 0x48]                ; 0043d88d
    LEA ESI,[ESP + 0xf0]                ; 0043d890
    PUSH EAX                            ; 0043d897
    LEA EAX,[ESP + 0xc4]                ; 0043d898
    MOVSD.REP ES:EDI,ESI                ; 0043d89f
    PUSH EAX                            ; 0043d8a1
    LEA ESI,[ESP + 0x38]                ; 0043d8a2
    LEA EDI,[ESP + 0x8]                 ; 0043d8a6
    CALL FUN_005833e0                   ; 0043d8aa
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 0043d8af
    LEA ESI,[ESP + 0x38]                ; 0043d8b4
    ADD ESP,0x8                         ; 0043d8b8
    MOVSD.REP ES:EDI,ESI                ; 0043d8bb
    MOV EAX,dword ptr [ESP]             ; 0043d8bd
    MOV dword ptr [EBX + 0x78],EAX      ; 0043d8c0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043d8c3
    MOV dword ptr [EBX + 0x7c],EAX      ; 0043d8c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043d8ca
    MOV dword ptr [EBX + 0x80],EAX      ; 0043d8ce
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043d8d4
    MOV dword ptr [EBX + 0x84],EAX      ; 0043d8d8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043d8de
    MOV dword ptr [EBX + 0x88],EAX      ; 0043d8e2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043d8e8
    MOV dword ptr [EBX + 0x8c],EAX      ; 0043d8ec
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043d8f2
    MOV dword ptr [EBX + 0x90],EAX      ; 0043d8f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043d8fc
    MOV dword ptr [EBX + 0x94],EAX      ; 0043d900
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043d906
    MOV dword ptr [EBX + 0x98],EAX      ; 0043d90a
    MOV EAX,ESP                         ; 0043d910
    PUSH EAX                            ; 0043d912
    LEA ESI,[ESP + 0x64]                ; 0043d913
    LEA EDI,[ESP + 0x94]                ; 0043d917
    CALL FUN_00584560                   ; 0043d91e
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined FUN_00584560()
    MOV ECX,0xc                         ; 0043d923
    LEA ESI,[ESP + 0x64]                ; 0043d928
    ADD ESP,0x4                         ; 0043d92c
    MOVSD.REP ES:EDI,ESI                ; 0043d92f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043d931
    ADD EBX,0xa0                        ; 0043d938
    MOV dword ptr [ESP + 0x120],EAX     ; 0043d93e
    MOV EAX,dword ptr [ESP + 0xac]      ; 0043d945
    LEA EDI,[ESP + 0x12c]               ; 0043d94c
    MOV dword ptr [ESP + 0x124],EAX     ; 0043d953
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043d95a
    LEA ESI,[ESP + 0x120]               ; 0043d961
    MOV dword ptr [ESP + 0x128],EAX     ; 0043d968
    LEA EAX,[ESP + 0x12c]               ; 0043d96f
    MOVSD ES:EDI,ESI                    ; 0043d976
    MOVSD ES:EDI,ESI                    ; 0043d977
    MOVSD ES:EDI,ESI                    ; 0043d978
    CMP EBX,EAX                         ; 0043d979
    JNZ 0x0043d987                      ; 0043d97b
        ;   XREF to: 0043d987 (CONDITIONAL_JUMP)  ; LAB_0043d987
    ADD ESP,0x138                       ; 0043d97d
    POP EDI                             ; 0043d983
    POP ESI                             ; 0043d984
    POP EBX                             ; 0043d985
    RET                                 ; 0043d986
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0043d987
        ;   Label: LAB_0043d987
    MOV dword ptr [EBX],EAX             ; 0043d98e
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043d990
    MOV dword ptr [EBX + 0x4],EAX       ; 0043d997
    MOV EAX,dword ptr [ESP + 0x134]     ; 0043d99a
    MOV dword ptr [EBX + 0x8],EAX       ; 0043d9a1
    ADD ESP,0x138                       ; 0043d9a4
    POP EDI                             ; 0043d9aa
    POP ESI                             ; 0043d9ab
    POP EBX                             ; 0043d9ac
    RET                                 ; 0043d9ad

