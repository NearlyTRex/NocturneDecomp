; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b700(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0045fd10 at 0045fdab
;   FUN_00519080 at 0051916f
;   FUN_00584a40 at 00584b0b
;
; Referenced Globals:
;   undefined4 DAT_005f39d8
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c37770
;   undefined4 DAT_01c37774
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0041a600
;   FUN_00469c60
;   FUN_0046b870
;   FUN_0046b880
;   FUN_0046b960
;   FUN_00531e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b700
        ;   Label: FUN_0041b700
    PUSH ESI                            ; 0041b701
    PUSH EDI                            ; 0041b702
    PUSH EBP                            ; 0041b703
    SUB ESP,0xbc                        ; 0041b704
    MOV EAX,ESP                         ; 0041b70a
    XOR EBP,EBP                         ; 0041b70c
    MOV dword ptr [ESP + 0xb8],EAX      ; 0041b70e
    PUSH EBP                            ; 0041b715
        ;   Label: LAB_0041b715
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0041b716
    PUSH EDX                            ; 0041b71d
    LEA ESI,[ESP + 0x9c]                ; 0041b71e
    LEA EDI,[ESP + 0xb4]                ; 0041b725
    CALL FUN_0041a600                   ; 0041b72c
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x9c]                ; 0041b731
    ADD ESP,0x8                         ; 0041b738
    LEA EAX,[ESP + 0xac]                ; 0041b73b
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0041b742
    MOVSD ES:EDI,ESI                    ; 0041b749
    MOVSD ES:EDI,ESI                    ; 0041b74a
    MOVSD ES:EDI,ESI                    ; 0041b74b
    FLD float ptr [EAX]                 ; 0041b74c
    FMUL float ptr [0x005f39d8]         ; 0041b74e | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041b754
    FLD float ptr [EAX + 0x4]           ; 0041b756
    FMUL float ptr [0x005f39d8]         ; 0041b759 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041b75f
    FLD float ptr [EAX + 0x8]           ; 0041b762
    FMUL float ptr [0x005f39d8]         ; 0041b765 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041b76b
    LEA ECX,[EBX + 0xc]                 ; 0041b76e
    INC EBP                             ; 0041b771
    MOV dword ptr [ESP + 0xb8],ECX      ; 0041b772
    CMP EBP,0x8                         ; 0041b779
    JL 0x0041b715                       ; 0041b77c
        ;   XREF to: 0041b715 (CONDITIONAL_JUMP)  ; LAB_0041b715
    MOV EAX,ESP                         ; 0041b77e
    PUSH EAX                            ; 0041b780
    PUSH 0x8                            ; 0041b781
    MOV EBX,dword ptr [0x0061b5a8]      ; 0041b783 | DAT_0061b5a8
    PUSH EBX                            ; 0041b789 | DAT_01e661b8
    CALL FUN_00531e90                   ; 0041b78a
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    ADD ESP,0xc                         ; 0041b78f
    PUSH 0x1                            ; 0041b792
    MOV EDI,dword ptr [0x0060b280]      ; 0041b794 | DAT_0060b280
    MOV ESI,0x4                         ; 0041b79a
    PUSH EDI                            ; 0041b79f | DAT_01ba5c50
    MOV dword ptr [ESP + 0x6c],ESI      ; 0041b7a0
    CALL FUN_0046b870                   ; 0041b7a4
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b870()
    ADD ESP,0x8                         ; 0041b7a9
    PUSH 0x0                            ; 0041b7ac
    MOV EBP,dword ptr [0x0060b280]      ; 0041b7ae | DAT_0060b280
    PUSH EBP                            ; 0041b7b4 | DAT_01ba5c50
    CALL FUN_0046b880                   ; 0041b7b5
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 0041b7ba
    LEA EBX,[ESP + 0x88]                ; 0041b7bd
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0041b7c4
    FLD float ptr [EAX]                 ; 0041b7cb
    FMUL float ptr [0x005f39d8]         ; 0041b7cd | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041b7d3
    FLD float ptr [EAX + 0x4]           ; 0041b7d5
    FMUL float ptr [0x005f39d8]         ; 0041b7d8 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041b7de
    FLD float ptr [EAX + 0x8]           ; 0041b7e1
    FMUL float ptr [0x005f39d8]         ; 0041b7e4 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041b7ea
    LEA EBX,[ESP + 0xa0]                ; 0041b7ed
    ADD EAX,0xc                         ; 0041b7f4
    FLD float ptr [EAX]                 ; 0041b7f7
    FMUL float ptr [0x005f39d8]         ; 0041b7f9 | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041b7ff
    FLD float ptr [EAX + 0x4]           ; 0041b801
    FMUL float ptr [0x005f39d8]         ; 0041b804 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041b80a
    FLD float ptr [EAX + 0x8]           ; 0041b80d
    FMUL float ptr [0x005f39d8]         ; 0041b810 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041b816
    MOV EAX,[0x0060b280]                ; 0041b819 | DAT_0060b280
    PUSH EAX                            ; 0041b81e | DAT_01ba5c50
    CALL FUN_0046b960                   ; 0041b81f
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0041b824
    TEST EAX,EAX                        ; 0041b827
    JNZ 0x0041b91e                      ; 0041b829
        ;   XREF to: 0041b91e (CONDITIONAL_JUMP)  ; LAB_0041b91e
    MOV [0x01c37774],EAX                ; 0041b82f | DAT_01c37774
    MOV [0x01c37770],EAX                ; 0041b834 | DAT_01c37770
    MOV EAX,[0x0060b280]                ; 0041b839 | DAT_0060b280
    MOV EBX,dword ptr [EAX]             ; 0041b83e | DAT_01ba5c50
    MOV dword ptr [EBX + 0x20],0x7fff   ; 0041b840
    MOV EBX,dword ptr [EAX]             ; 0041b847 | DAT_01ba5c50
    XOR EDX,EDX                         ; 0041b849
    MOV dword ptr [EBX + 0x24],EDX      ; 0041b84b
    MOV EBX,dword ptr [EAX]             ; 0041b84e | DAT_01ba5c50
    MOV dword ptr [EBX + 0x28],EDX      ; 0041b850
    MOV EBX,dword ptr [EAX]             ; 0041b853 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x50],EDX      ; 0041b855
    MOV EBX,dword ptr [EAX]             ; 0041b858 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x54],0x7fff   ; 0041b85a
    MOV EBX,dword ptr [EAX]             ; 0041b861 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x58],EDX      ; 0041b863
    MOV EBX,dword ptr [EAX]             ; 0041b866 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x80],EDX      ; 0041b868
    MOV EBX,dword ptr [EAX]             ; 0041b86e | DAT_01ba5c50
    MOV dword ptr [EBX + 0x84],EDX      ; 0041b870
    MOV EBX,dword ptr [EAX]             ; 0041b876 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x88],0x7fff   ; 0041b878
    MOV EBX,dword ptr [EAX]             ; 0041b882 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb0],0x7fff   ; 0041b884
    MOV EBX,dword ptr [EAX]             ; 0041b88e | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb4],0x7fff   ; 0041b890
    MOV EBX,dword ptr [EAX]             ; 0041b89a | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb8],EDX      ; 0041b89c
    MOV EBX,dword ptr [EAX]             ; 0041b8a2 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xe0],EDX      ; 0041b8a4
    MOV EBX,dword ptr [EAX]             ; 0041b8aa | DAT_01ba5c50
    MOV dword ptr [EBX + 0xe4],0x7fff   ; 0041b8ac
    MOV EBX,dword ptr [EAX]             ; 0041b8b6 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xe8],0x7fff   ; 0041b8b8
    MOV EBX,dword ptr [EAX]             ; 0041b8c2 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x110],0x7fff  ; 0041b8c4
    MOV EBX,dword ptr [EAX]             ; 0041b8ce | DAT_01ba5c50
    MOV dword ptr [EBX + 0x114],EDX     ; 0041b8d0
    MOV EBX,dword ptr [EAX]             ; 0041b8d6 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x118],0x7fff  ; 0041b8d8
    MOV EBX,dword ptr [EAX]             ; 0041b8e2 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x140],0x7fff  ; 0041b8e4
    MOV EBX,dword ptr [EAX]             ; 0041b8ee | DAT_01ba5c50
    MOV dword ptr [EBX + 0x144],0x7fff  ; 0041b8f0
    MOV EBX,dword ptr [EAX]             ; 0041b8fa | DAT_01ba5c50
    MOV dword ptr [EBX + 0x148],0x7fff  ; 0041b8fc
    MOV EBX,dword ptr [EAX]             ; 0041b906 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x170],EDX     ; 0041b908
    MOV EBX,dword ptr [EAX]             ; 0041b90e | DAT_01ba5c50
    MOV dword ptr [EBX + 0x174],EDX     ; 0041b910
    MOV EAX,dword ptr [EAX]             ; 0041b916 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x178],EDX     ; 0041b918
    MOV EBX,0xffffffff                  ; 0041b91e
        ;   Label: LAB_0041b91e
    MOV EAX,dword ptr [ESP + 0x88]      ; 0041b923
    MOV EDX,0x4                         ; 0041b92a
    MOV ECX,0x6                         ; 0041b92f
    PUSH 0x2c4                          ; 0041b934
    MOV EDI,0x1                         ; 0041b939
    XOR ESI,ESI                         ; 0041b93e
    MOV dword ptr [ESP + 0x6c],EBX      ; 0041b940
    MOV dword ptr [ESP + 0x70],ESI      ; 0041b944
    MOV dword ptr [ESP + 0x74],ESI      ; 0041b948
    MOV dword ptr [ESP + 0x78],EAX      ; 0041b94c
    MOV EBP,EAX                         ; 0041b950
    MOV dword ptr [ESP + 0x7c],ESI      ; 0041b952
    MOV dword ptr [ESP + 0x80],EDX      ; 0041b956
    MOV dword ptr [ESP + 0x84],ECX      ; 0041b95d
    MOV EBX,0x2                         ; 0041b964
    LEA EAX,[ESP + 0x64]                ; 0041b969
    NEG EBP                             ; 0041b96d
    PUSH EAX                            ; 0041b96f
    MOV ESI,dword ptr [0x0060b280]      ; 0041b970 | DAT_0060b280
    MOV dword ptr [ESP + 0x7c],EBP      ; 0041b976
    PUSH ESI                            ; 0041b97a | DAT_01ba5c50
    MOV dword ptr [ESP + 0x90],EBX      ; 0041b97b
    MOV EBX,0x7                         ; 0041b982
    CALL FUN_00469c60                   ; 0041b987
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    XOR EBP,EBP                         ; 0041b98c
    MOV ECX,0x3                         ; 0041b98e
    ADD ESP,0xc                         ; 0041b993
    MOV ESI,0x5                         ; 0041b996
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041b99b
    PUSH 0x2c4                          ; 0041b9a2
    MOV dword ptr [ESP + 0x6c],EDI      ; 0041b9a7
    MOV dword ptr [ESP + 0x70],EBP      ; 0041b9ab
    MOV dword ptr [ESP + 0x74],EBP      ; 0041b9af
    MOV dword ptr [ESP + 0x7c],EDI      ; 0041b9b3
    MOV dword ptr [ESP + 0x78],EAX      ; 0041b9b7
    LEA EAX,[ESP + 0x64]                ; 0041b9bb
    MOV dword ptr [ESP + 0x80],ECX      ; 0041b9bf
    PUSH EAX                            ; 0041b9c6
    MOV EDI,dword ptr [0x0060b280]      ; 0041b9c7 | DAT_0060b280
    MOV dword ptr [ESP + 0x88],EBX      ; 0041b9cd
    PUSH EDI                            ; 0041b9d4 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x90],ESI      ; 0041b9d5
    MOV ESI,0x1                         ; 0041b9dc
    CALL FUN_00469c60                   ; 0041b9e1
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 0041b9e6
    MOV EAX,0xffffffff                  ; 0041b9e9
    MOV EDI,0x5                         ; 0041b9ee
    PUSH 0x2c4                          ; 0041b9f3
    MOV dword ptr [ESP + 0x6c],EBP      ; 0041b9f8
    MOV dword ptr [ESP + 0x70],EAX      ; 0041b9fc
    MOV dword ptr [ESP + 0x74],EBP      ; 0041ba00
    MOV dword ptr [ESP + 0x7c],EBP      ; 0041ba04
    MOV dword ptr [ESP + 0x80],ESI      ; 0041ba08
    MOV dword ptr [ESP + 0x84],EDI      ; 0041ba0f
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041ba16
    MOV EBP,0x4                         ; 0041ba1d
    MOV EDI,0x6                         ; 0041ba22
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ba27
    MOV ECX,EAX                         ; 0041ba2b
    LEA EAX,[ESP + 0x64]                ; 0041ba2d
    MOV dword ptr [ESP + 0x88],EBP      ; 0041ba31
    PUSH EAX                            ; 0041ba38
    MOV EAX,[0x0060b280]                ; 0041ba39 | DAT_0060b280
    NEG ECX                             ; 0041ba3e
    PUSH EAX                            ; 0041ba40 | DAT_01ba5c50
    MOV EBP,0x1                         ; 0041ba41
    MOV dword ptr [ESP + 0x80],ECX      ; 0041ba46
    CALL FUN_00469c60                   ; 0041ba4d
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 0041ba52
    XOR EDX,EDX                         ; 0041ba55
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0041ba57
    PUSH 0x2c4                          ; 0041ba5e
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041ba63
    MOV dword ptr [ESP + 0x70],ESI      ; 0041ba67
    MOV dword ptr [ESP + 0x74],EDX      ; 0041ba6b
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ba6f
    MOV EAX,0x3                         ; 0041ba73
    MOV dword ptr [ESP + 0x80],EDI      ; 0041ba78
    MOV dword ptr [ESP + 0x88],EAX      ; 0041ba7f
    LEA EAX,[ESP + 0x64]                ; 0041ba86
    MOV dword ptr [ESP + 0x84],EBX      ; 0041ba8a
    PUSH EAX                            ; 0041ba91
    MOV EDX,dword ptr [0x0060b280]      ; 0041ba92 | DAT_0060b280
    MOV ESI,0x2                         ; 0041ba98
    PUSH EDX                            ; 0041ba9d | DAT_01ba5c50
    MOV dword ptr [ESP + 0x84],ESI      ; 0041ba9e
    MOV ESI,0xffffffff                  ; 0041baa5
    CALL FUN_00469c60                   ; 0041baaa
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    MOV EDX,0x3                         ; 0041baaf
    MOV EBX,dword ptr [0x0060b280]      ; 0041bab4 | DAT_0060b280
    ADD ESP,0xc                         ; 0041baba
    XOR ECX,ECX                         ; 0041babd
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041babf
    PUSH 0x2c4                          ; 0041bac6
    MOV dword ptr [ESP + 0x6c],ECX      ; 0041bacb
    MOV dword ptr [ESP + 0x70],ECX      ; 0041bacf
    MOV dword ptr [ESP + 0x74],ESI      ; 0041bad3
    MOV dword ptr [ESP + 0x7c],ECX      ; 0041bad7
    MOV dword ptr [ESP + 0x78],EAX      ; 0041badb
    MOV EDI,EAX                         ; 0041badf
    MOV EAX,0x2                         ; 0041bae1
    MOV dword ptr [ESP + 0x84],EDX      ; 0041bae6
    MOV dword ptr [ESP + 0x80],EAX      ; 0041baed
    LEA EAX,[ESP + 0x64]                ; 0041baf4
    MOV ECX,0x1                         ; 0041baf8
    PUSH EAX                            ; 0041bafd
    XOR ESI,ESI                         ; 0041bafe
    NEG EDI                             ; 0041bb00
    PUSH EBX                            ; 0041bb02 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x90],ECX      ; 0041bb03
    MOV dword ptr [ESP + 0x80],EDI      ; 0041bb0a
    CALL FUN_00469c60                   ; 0041bb11
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 0041bb16
    MOV EDX,0x5                         ; 0041bb19
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0041bb1e
    MOV dword ptr [ESP + 0x68],ESI      ; 0041bb25
    MOV dword ptr [ESP + 0x6c],ESI      ; 0041bb29
    MOV dword ptr [ESP + 0x70],EBP      ; 0041bb2d
    MOV dword ptr [ESP + 0x74],EAX      ; 0041bb31
    MOV EAX,0x4                         ; 0041bb35
    MOV dword ptr [ESP + 0x7c],EDX      ; 0041bb3a
    MOV dword ptr [ESP + 0x78],EAX      ; 0041bb3e
    PUSH 0x2c4                          ; 0041bb42
    LEA EAX,[ESP + 0x64]                ; 0041bb47
    MOV ECX,0x7                         ; 0041bb4b
    PUSH EAX                            ; 0041bb50
    MOV ESI,dword ptr [0x0060b280]      ; 0041bb51 | DAT_0060b280
    MOV EBX,0x6                         ; 0041bb57
    PUSH ESI                            ; 0041bb5c | DAT_01ba5c50
    MOV dword ptr [ESP + 0x8c],ECX      ; 0041bb5d
    MOV dword ptr [ESP + 0x90],EBX      ; 0041bb64
    CALL FUN_00469c60                   ; 0041bb6b
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 0041bb70
    ADD ESP,0xbc                        ; 0041bb73
    POP EBP                             ; 0041bb79
    POP EDI                             ; 0041bb7a
    POP ESI                             ; 0041bb7b
    POP EBX                             ; 0041bb7c
    RET                                 ; 0041bb7d

