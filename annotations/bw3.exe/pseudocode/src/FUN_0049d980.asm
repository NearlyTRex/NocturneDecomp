; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d980(int *param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0049d590 at 0049d5ba
;   FUN_004a1e90 at 004a1f54
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fd5f4
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b044
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   ... and 13 more
;
; Called Functions:
;   FUN_0046c730
;   FUN_0046ce90
;   FUN_0046d4c0
;   FUN_0046e5e0
;   FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d980
        ;   Label: FUN_0049d980
    PUSH EBP                            ; 0049d981
    SUB ESP,0x58                        ; 0049d982
    MOV ESI,dword ptr [ESP + 0x64]      ; 0049d985
    CMP dword ptr [ESI],0x0             ; 0049d989
    JNZ 0x0049d994                      ; 0049d98c
        ;   XREF to: 0049d994 (CONDITIONAL_JUMP)  ; LAB_0049d994
    ADD ESP,0x58                        ; 0049d98e
    POP EBP                             ; 0049d991
    POP ESI                             ; 0049d992
    RET                                 ; 0049d993
    PUSH EDI                            ; 0049d994
        ;   Label: LAB_0049d994
    PUSH EBX                            ; 0049d995
    LEA EAX,[ESI + 0xc]                 ; 0049d996
    PUSH EAX                            ; 0049d999
    MOV ECX,dword ptr [0x005f2afc]      ; 0049d99a | DAT_005f2afc
    PUSH ECX                            ; 0049d9a0 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 0049d9a1
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 0049d9a6
    PUSH 0x5fd5f4                       ; 0049d9a9 | DAT_005fd5f4
    MOV EBX,dword ptr [0x005f2afc]      ; 0049d9ae | DAT_005f2afc
    PUSH EBX                            ; 0049d9b4 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0049d9b5
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0049d9ba
    LEA EBX,[ESP + 0x30]                ; 0049d9bd
    LEA EAX,[ESI + 0x40]                ; 0049d9c1
    FLD float ptr [EAX]                 ; 0049d9c4
    FMUL float ptr [0x005df8e4]         ; 0049d9c6 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049d9cc
    FLD float ptr [EAX + 0x4]           ; 0049d9ce
    FMUL float ptr [0x005df8e4]         ; 0049d9d1 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049d9d7
    FLD float ptr [EAX + 0x8]           ; 0049d9da
    FMUL float ptr [0x005df8e4]         ; 0049d9dd | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049d9e3
    LEA EAX,[ESP + 0x30]                ; 0049d9e6
    PUSH EAX                            ; 0049d9ea
    PUSH 0x60b014                       ; 0049d9eb | DAT_0060b014
    CALL FUN_0056356c                   ; 0049d9f0
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESP,0x8                         ; 0049d9f5
    LEA EBX,[ESP + 0x48]                ; 0049d9f8
    LEA EAX,[ESI + 0x4c]                ; 0049d9fc
    FLD float ptr [EAX]                 ; 0049d9ff
    FMUL float ptr [0x005df8e4]         ; 0049da01 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049da07
    FLD float ptr [EAX + 0x4]           ; 0049da09
    FMUL float ptr [0x005df8e4]         ; 0049da0c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049da12
    FLD float ptr [EAX + 0x8]           ; 0049da15
    FMUL float ptr [0x005df8e4]         ; 0049da18 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049da1e
    LEA EAX,[ESP + 0x48]                ; 0049da21
    PUSH EAX                            ; 0049da25
    PUSH 0x60b044                       ; 0049da26 | DAT_0060b044
    CALL FUN_0056356c                   ; 0049da2b
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESP,0x8                         ; 0049da30
    LEA EBX,[ESP + 0x3c]                ; 0049da33
    LEA EAX,[ESI + 0x58]                ; 0049da37
    FLD float ptr [EAX]                 ; 0049da3a
    FMUL float ptr [0x005df8e4]         ; 0049da3c | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049da42
    FLD float ptr [EAX + 0x4]           ; 0049da44
    FMUL float ptr [0x005df8e4]         ; 0049da47 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049da4d
    FLD float ptr [EAX + 0x8]           ; 0049da50
    FMUL float ptr [0x005df8e4]         ; 0049da53 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049da59
    LEA EAX,[ESP + 0x3c]                ; 0049da5c
    PUSH EAX                            ; 0049da60
    PUSH 0x60b074                       ; 0049da61 | DAT_0060b074
    CALL FUN_0056356c                   ; 0049da66
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESP,0x8                         ; 0049da6b
    LEA EAX,[ESI + 0x64]                ; 0049da6e
    LEA EBX,[ESP + 0x54]                ; 0049da71
    FLD float ptr [EAX]                 ; 0049da75
    FMUL float ptr [0x005df8e4]         ; 0049da77 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049da7d
    FLD float ptr [EAX + 0x4]           ; 0049da7f
    FMUL float ptr [0x005df8e4]         ; 0049da82 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049da88
    FLD float ptr [EAX + 0x8]           ; 0049da8b
    FMUL float ptr [0x005df8e4]         ; 0049da8e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049da94
    LEA EAX,[ESP + 0x54]                ; 0049da97
    PUSH EAX                            ; 0049da9b
    PUSH 0x60b0a4                       ; 0049da9c | DAT_0060b0a4
    MOV ESI,0xffff                      ; 0049daa1
    MOV EDI,0xffff                      ; 0049daa6
    CALL FUN_0056356c                   ; 0049daab
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV ECX,0x80000                     ; 0049dab0
    MOV EBX,0xf80000                    ; 0049dab5
    ADD ESP,0x8                         ; 0049daba
    MOV dword ptr [0x0060b034],ESI      ; 0049dabd | DAT_0060b034
    MOV dword ptr [0x0060b038],ESI      ; 0049dac3 | DAT_0060b038
    MOV dword ptr [0x0060b03c],ESI      ; 0049dac9 | DAT_0060b03c
    MOV dword ptr [0x0060b064],ESI      ; 0049dacf | DAT_0060b064
    MOV dword ptr [0x0060b068],ESI      ; 0049dad5 | DAT_0060b068
    MOV dword ptr [0x0060b06c],ESI      ; 0049dadb | DAT_0060b06c
    MOV dword ptr [0x0060b094],ESI      ; 0049dae1 | DAT_0060b094
    MOV dword ptr [0x0060b098],ESI      ; 0049dae7 | DAT_0060b098
    MOV dword ptr [0x0060b09c],ESI      ; 0049daed | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],ESI      ; 0049daf3 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],ESI      ; 0049daf9 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],ESI      ; 0049daff | DAT_0060b0cc
    MOV dword ptr [0x0060b02c],ECX      ; 0049db05 | DAT_0060b02c
    MOV dword ptr [0x0060b030],EBX      ; 0049db0b | DAT_0060b030
    MOV dword ptr [0x0060b05c],EBX      ; 0049db11 | DAT_0060b05c
    MOV dword ptr [0x0060b060],EBX      ; 0049db17 | DAT_0060b060
    MOV dword ptr [0x0060b08c],EBX      ; 0049db1d | DAT_0060b08c
    MOV EAX,ECX                         ; 0049db23
    MOV dword ptr [0x0060b090],ECX      ; 0049db25 | DAT_0060b090
    MOV EDX,ECX                         ; 0049db2b
    MOV dword ptr [0x0060b0bc],ECX      ; 0049db2d | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],ECX      ; 0049db33 | DAT_0060b0c0
    MOV dword ptr [ESP + 0x14],EDI      ; 0049db39
    PUSH EDI                            ; 0049db3d
    XOR ESI,ESI                         ; 0049db3e
    MOV EBX,0x3                         ; 0049db40
    MOV dword ptr [ESP + 0x14],ESI      ; 0049db45
    MOV dword ptr [ESP + 0x1c],ESI      ; 0049db49
    XOR EAX,ECX                         ; 0049db4d
    XOR EDX,ECX                         ; 0049db4f
    MOV ECX,0x1                         ; 0049db51
    MOV ESI,dword ptr [0x005f2afc]      ; 0049db56 | DAT_005f2afc
    MOV dword ptr [ESP + 0x10],EBX      ; 0049db5c
    MOV dword ptr [ESP + 0x20],EAX      ; 0049db60
    MOV dword ptr [ESP + 0x24],EDX      ; 0049db64
    MOV EBX,0x2                         ; 0049db68
    PUSH ESI                            ; 0049db6d | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2c],ECX      ; 0049db6e
    MOV dword ptr [ESP + 0x30],EBX      ; 0049db72
    CALL FUN_0046d4c0                   ; 0049db76
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0049db7b
    LEA EAX,[ESP + 0x8]                 ; 0049db7e
    PUSH EAX                            ; 0049db82
    MOV EDI,dword ptr [0x005f2afc]      ; 0049db83 | DAT_005f2afc
    PUSH EDI                            ; 0049db89 | DAT_01bdd7e4
    CALL FUN_0046c730                   ; 0049db8a
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0049db8f
    XOR EBP,EBP                         ; 0049db92
    MOV EDX,0x3                         ; 0049db94
    PUSH 0xffff                         ; 0049db99
    MOV ECX,dword ptr [0x005f2afc]      ; 0049db9e | DAT_005f2afc
    MOV dword ptr [ESP + 0x24],EBP      ; 0049dba4
    PUSH ECX                            ; 0049dba8 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049dba9
    MOV dword ptr [ESP + 0x30],EDX      ; 0049dbad
    CALL FUN_0046d4c0                   ; 0049dbb1
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0049dbb6
    LEA EAX,[ESP + 0x8]                 ; 0049dbb9
    PUSH EAX                            ; 0049dbbd
    MOV EBX,dword ptr [0x005f2afc]      ; 0049dbbe | DAT_005f2afc
    PUSH EBX                            ; 0049dbc4 | DAT_01bdd7e4
    CALL FUN_0046c730                   ; 0049dbc5
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0049dbca
    POP EBX                             ; 0049dbcd
    POP EDI                             ; 0049dbce
    ADD ESP,0x58                        ; 0049dbcf
    POP EBP                             ; 0049dbd2
    POP ESI                             ; 0049dbd3
    RET                                 ; 0049dbd4

