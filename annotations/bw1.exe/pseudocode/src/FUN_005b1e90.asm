; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005b1e90(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined2       Stack[-0x3c]:2  local_3c
; undefined2       Stack[-0x3a]:2  local_3a
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_005b1c00 at 005b1c0b
;   FUN_005b2100 at 005b2111
;   FUN_005b2160 at 005b2172
;
; Referenced Globals:
;   void* PTR_CreateBrushIndirect_005d0400 = 001d07d4
;   void* PTR_CreateCompatibleDC_005d0404 = 001d07ea
;   void* PTR_CreateDIBSection_005d0408 = 001d0800
;   void* PTR_DeleteObject_005d0414 = 001d082e
;   void* PTR_Rectangle_005d0420 = 001d0868
;   void* PTR_SelectObject_005d0424 = 001d0874
;   void* PTR_SetBkColor_005d0428 = 001d0884
;   void* PTR_SetBkMode_005d042c = 001d0892
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b4a0
;
; Called Functions:
;   CreateBrushIndirect
;   CreateCompatibleDC
;   CreateDIBSection
;   DeleteObject
;   FUN_005b2080
;   FUN_005bfb70
;   Rectangle
;   SelectObject
;   SetBkColor
;   SetBkMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1e90
        ;   Label: FUN_005b1e90
    PUSH ESI                            ; 005b1e91
    PUSH EDI                            ; 005b1e92
    PUSH EBP                            ; 005b1e93
    SUB ESP,0x38                        ; 005b1e94
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005b1e97
    MOV EDI,dword ptr [ESP + 0x50]      ; 005b1e9b
    MOV ESI,dword ptr [ESP + 0x54]      ; 005b1e9f
    TEST EDI,EDI                        ; 005b1ea3
    JLE 0x005b1efb                      ; 005b1ea5
        ;   XREF to: 005b1efb (CONDITIONAL_JUMP)  ; LAB_005b1efb
    TEST ESI,ESI                        ; 005b1ea7
        ;   Label: LAB_005b1ea7
    JLE 0x005b1f03                      ; 005b1ea9
        ;   XREF to: 005b1f03 (CONDITIONAL_JUMP)  ; LAB_005b1f03
    CMP dword ptr [EBX + 0x6a48],0x0    ; 005b1eab
        ;   Label: LAB_005b1eab
    SETZ AL                             ; 005b1eb2
    MOV ECX,dword ptr [EBX + 0x6b64]    ; 005b1eb5
    AND EAX,0xff                        ; 005b1ebb
    CMP EDI,ECX                         ; 005b1ec0
    SETG DL                             ; 005b1ec2
    MOVZX EBP,DL                        ; 005b1ec5
    OR EAX,EBP                          ; 005b1ec8
    CMP ESI,dword ptr [EBX + 0x6b68]    ; 005b1eca
    SETG DL                             ; 005b1ed0
    MOVZX EBP,DL                        ; 005b1ed3
    MOV ECX,dword ptr [EBX + 0x6b6c]    ; 005b1ed6
    OR EAX,EBP                          ; 005b1edc
    CMP ECX,dword ptr [0x0061b4a0]      ; 005b1ede | DAT_0061b4a0
    SETNZ DL                            ; 005b1ee4
    MOVZX EBP,DL                        ; 005b1ee7
    OR EAX,EBP                          ; 005b1eea
    JNZ 0x005b1f0a                      ; 005b1eec
        ;   XREF to: 005b1f0a (CONDITIONAL_JUMP)  ; LAB_005b1f0a
    MOV EAX,0x1                         ; 005b1eee
    ADD ESP,0x38                        ; 005b1ef3
        ;   Label: LAB_005b1ef3
    POP EBP                             ; 005b1ef6
    POP EDI                             ; 005b1ef7
    POP ESI                             ; 005b1ef8
    POP EBX                             ; 005b1ef9
    RET                                 ; 005b1efa
    MOV EDI,dword ptr [0x0061b498]      ; 005b1efb | DAT_0061b498
        ;   Label: LAB_005b1efb
    JMP 0x005b1ea7                      ; 005b1f01
        ;   XREF to: 005b1ea7 (UNCONDITIONAL_JUMP)  ; LAB_005b1ea7
    MOV ESI,0x64                        ; 005b1f03
        ;   Label: LAB_005b1f03
    JMP 0x005b1eab                      ; 005b1f08
        ;   XREF to: 005b1eab (UNCONDITIONAL_JUMP)  ; LAB_005b1eab
    PUSH EBX                            ; 005b1f0a
        ;   Label: LAB_005b1f0a
    CALL FUN_005b2080                   ; 005b1f0b
        ;   XREF to: 005b2080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2080()
    ADD ESP,0x4                         ; 005b1f10
    PUSH 0x0                            ; 005b1f13
    CALL dword ptr CS:[0x5d0404]        ; 005b1f15 | PTR_CreateCompatibleDC_005d0404
    PUSH 0x2c                           ; 005b1f1c
    PUSH 0x0                            ; 005b1f1e
    MOV dword ptr [EBX + 0x6a48],EAX    ; 005b1f20
    LEA EAX,[ESP + 0x8]                 ; 005b1f26
    PUSH EAX                            ; 005b1f2a
    MOV EBP,0x28                        ; 005b1f2b
    CALL FUN_005bfb70                   ; 005b1f30
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EDX,0x1                         ; 005b1f35
    ADD ESP,0xc                         ; 005b1f3a
    MOV ECX,ESI                         ; 005b1f3d
    XOR EAX,EAX                         ; 005b1f3f
    MOV dword ptr [ESP],EBP             ; 005b1f41
    MOV word ptr [ESP + 0xc],DX         ; 005b1f44
    MOV dword ptr [ESP + 0x14],EAX      ; 005b1f49
    MOV dword ptr [ESP + 0x20],EAX      ; 005b1f4d
    MOV dword ptr [ESP + 0x4],EDI       ; 005b1f51
    MOV dword ptr [ESP + 0x8],ESI       ; 005b1f55
    NEG ECX                             ; 005b1f59
    MOV AX,[0x0061b4a0]                 ; 005b1f5b | DAT_0061b4a0
    XOR EBP,EBP                         ; 005b1f61
    MOV dword ptr [ESP + 0x8],ECX       ; 005b1f63
    PUSH EBP                            ; 005b1f67
    XOR EDX,EDX                         ; 005b1f68
    MOV word ptr [ESP + 0x12],AX        ; 005b1f6a
    PUSH EBP                            ; 005b1f6f
    LEA EAX,[EBX + 0x6a58]              ; 005b1f70
    MOV dword ptr [ESP + 0x18],EBP      ; 005b1f76
    PUSH EAX                            ; 005b1f7a
    MOV dword ptr [ESP + 0x24],EBP      ; 005b1f7b
    MOV dword ptr [ESP + 0x28],EDX      ; 005b1f7f
    PUSH EBP                            ; 005b1f83
    LEA EAX,[ESP + 0x10]                ; 005b1f84
    MOV dword ptr [ESP + 0x34],EBP      ; 005b1f88
    PUSH EAX                            ; 005b1f8c
    MOV EBP,dword ptr [EBX + 0x6a48]    ; 005b1f8d
    PUSH EBP                            ; 005b1f93
    CALL dword ptr CS:[0x5d0408]        ; 005b1f94 | PTR_CreateDIBSection_005d0408
    MOV dword ptr [EBX + 0x6a4c],EAX    ; 005b1f9b
    TEST EAX,EAX                        ; 005b1fa1
    JZ 0x005b1ef3                       ; 005b1fa3
        ;   XREF to: 005b1ef3 (CONDITIONAL_JUMP)  ; LAB_005b1ef3
    PUSH EAX                            ; 005b1fa9
    MOV ECX,dword ptr [EBX + 0x6a48]    ; 005b1faa
    PUSH ECX                            ; 005b1fb0
    CALL dword ptr CS:[0x5d0424]        ; 005b1fb1 | PTR_SelectObject_005d0424
    PUSH 0x2                            ; 005b1fb8
    MOV EBP,dword ptr [EBX + 0x6a48]    ; 005b1fba
    PUSH EBP                            ; 005b1fc0
    CALL dword ptr CS:[0x5d042c]        ; 005b1fc1 | PTR_SetBkMode_005d042c
    PUSH 0xff00ff                       ; 005b1fc8
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005b1fcd
    PUSH EAX                            ; 005b1fd3
    CALL dword ptr CS:[0x5d0428]        ; 005b1fd4 | PTR_SetBkColor_005d0428
    MOV ECX,0xff00ff                    ; 005b1fdb
    XOR EDX,EDX                         ; 005b1fe0
    LEA EAX,[ESP + 0x2c]                ; 005b1fe2
    MOV dword ptr [ESP + 0x2c],EDX      ; 005b1fe6
    PUSH EAX                            ; 005b1fea
    MOV dword ptr [ESP + 0x34],ECX      ; 005b1feb
    MOV dword ptr [ESP + 0x38],EDX      ; 005b1fef
    CALL dword ptr CS:[0x5d0400]        ; 005b1ff3 | PTR_CreateBrushIndirect_005d0400
    PUSH EAX                            ; 005b1ffa
    MOV EBP,EAX                         ; 005b1ffb
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005b1ffd
    PUSH EAX                            ; 005b2003
    CALL dword ptr CS:[0x5d0424]        ; 005b2004 | PTR_SelectObject_005d0424
    PUSH 0x0                            ; 005b200b
    MOV EDX,dword ptr [EBX + 0x6b64]    ; 005b200d
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 005b2013
    PUSH EDX                            ; 005b2019
    NEG EAX                             ; 005b201a
    PUSH EAX                            ; 005b201c
    PUSH 0x0                            ; 005b201d
    MOV ECX,dword ptr [EBX + 0x6a48]    ; 005b201f
    PUSH ECX                            ; 005b2025
    CALL dword ptr CS:[0x5d0420]        ; 005b2026 | PTR_Rectangle_005d0420
    PUSH EBP                            ; 005b202d
    CALL dword ptr CS:[0x5d0414]        ; 005b202e | PTR_DeleteObject_005d0414
    MOV EBP,dword ptr [EBX + 0x6a50]    ; 005b2035
    PUSH EBP                            ; 005b203b
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005b203c
    PUSH EAX                            ; 005b2042
    CALL dword ptr CS:[0x5d0424]        ; 005b2043 | PTR_SelectObject_005d0424
    MOV dword ptr [EBX + 0x6a54],EAX    ; 005b204a
    MOV dword ptr [EBX + 0x6b64],EDI    ; 005b2050
    MOV dword ptr [EBX + 0x6b68],ESI    ; 005b2056
    MOV EAX,[0x0061b4a0]                ; 005b205c | DAT_0061b4a0
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 005b2061
    MOV dword ptr [EBX + 0x6b6c],EAX    ; 005b2067
    TEST EDX,EDX                        ; 005b206d
    SETNZ AL                            ; 005b206f
    AND EAX,0xff                        ; 005b2072
    ADD ESP,0x38                        ; 005b2077
    POP EBP                             ; 005b207a
    POP EDI                             ; 005b207b
    POP ESI                             ; 005b207c
    POP EBX                             ; 005b207d
    RET                                 ; 005b207e

