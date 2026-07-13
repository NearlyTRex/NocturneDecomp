; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
; Local Variables:
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_004168d0 at 00416ad6
;   FUN_0041e5e0 at 0041e9ef
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511880
        ;   Label: FUN_00511880
    PUSH ESI                            ; 00511881
    PUSH EBP                            ; 00511882
    SUB ESP,0x50                        ; 00511883
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00511886
    MOV EAX,dword ptr [ESP + 0x60]      ; 0051188a
    MOV EDX,dword ptr [EAX + 0x14ecb0]  ; 0051188e
    XOR ESI,ESI                         ; 00511894
    TEST EDX,EDX                        ; 00511896
    JLE 0x0051197e                      ; 00511898
        ;   XREF to: 0051197e (CONDITIONAL_JUMP)  ; LAB_0051197e
    PUSH EDI                            ; 0051189e
    LEA EAX,[EBX + 0xc]                 ; 0051189f
    MOV dword ptr [ESP + 0x4c],EAX      ; 005118a2
    LEA EAX,[EBX + 0x10]                ; 005118a6
    LEA EBP,[EBX + 0x14]                ; 005118a9
    MOV dword ptr [ESP + 0x50],EAX      ; 005118ac
    LEA EAX,[EBX + 0x1c]                ; 005118b0
    MOV dword ptr [ESP + 0x44],EAX      ; 005118b3
    LEA EAX,[EBX + 0x20]                ; 005118b7
    MOV dword ptr [ESP + 0x48],EAX      ; 005118ba
    LEA EAX,[EBX + 0x24]                ; 005118be
    MOV EDI,dword ptr [ESP + 0x64]      ; 005118c1
    MOV dword ptr [ESP + 0x40],EAX      ; 005118c5
    MOV EAX,dword ptr [EBX]             ; 005118c9
        ;   Label: LAB_005118c9
    MOV EDX,dword ptr [EDI + 0x14ecb4]  ; 005118cb
    MOV dword ptr [ESP + 0x4],EAX       ; 005118d1
    MOV EAX,dword ptr [EBX + 0x4]       ; 005118d5
    MOV dword ptr [ESP + 0x8],EAX       ; 005118d8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005118dc
    MOV dword ptr [ESP + 0xc],EAX       ; 005118df
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005118e3
    MOV EAX,dword ptr [EAX]             ; 005118e7
    MOV dword ptr [ESP + 0x10],EAX      ; 005118e9
    MOV EAX,dword ptr [ESP + 0x50]      ; 005118ed
    MOV EAX,dword ptr [EAX]             ; 005118f1
    MOV dword ptr [ESP + 0x14],EAX      ; 005118f3
    MOV EAX,dword ptr [EBP]             ; 005118f7
    MOV dword ptr [ESP + 0x18],EAX      ; 005118fa
    MOV EAX,dword ptr [EBX + 0x18]      ; 005118fe
    MOV dword ptr [ESP + 0x1c],EAX      ; 00511901
    MOV EAX,dword ptr [ESP + 0x44]      ; 00511905
    MOV EAX,dword ptr [EAX]             ; 00511909
    MOV dword ptr [ESP + 0x20],EAX      ; 0051190b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051190f
    MOV EAX,dword ptr [EAX]             ; 00511913
    MOV dword ptr [ESP + 0x24],EAX      ; 00511915
    MOV EAX,dword ptr [ESP + 0x40]      ; 00511919
    MOV EAX,dword ptr [EAX]             ; 0051191d
    MOV dword ptr [ESP + 0x28],EAX      ; 0051191f
    MOV EAX,dword ptr [EBX + 0x28]      ; 00511923
    MOV dword ptr [ESP + 0x2c],EAX      ; 00511926
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0051192a
    PUSH 0x0                            ; 0051192d
    MOV dword ptr [ESP + 0x34],EAX      ; 0051192f
    LEA ECX,[ESP + 0x8]                 ; 00511933
    MOV EAX,dword ptr [EBX + 0x30]      ; 00511937
    PUSH ECX                            ; 0051193a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051193b
    MOV ECX,dword ptr [ESP + 0x74]      ; 0051193f
    MOV EAX,dword ptr [EBX + 0x34]      ; 00511943
    PUSH ECX                            ; 00511946
    MOV dword ptr [ESP + 0x44],EAX      ; 00511947
    MOV ECX,dword ptr [ESP + 0x74]      ; 0051194b
    MOV EAX,dword ptr [EBX + 0x38]      ; 0051194f
    PUSH ECX                            ; 00511952
    MOV dword ptr [ESP + 0x4c],EAX      ; 00511953
    PUSH EDX                            ; 00511957
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00511958
    CALL dword ptr [EAX + 0xfc]         ; 0051195e
    ADD ESP,0x14                        ; 00511964
    MOV EAX,dword ptr [ESP + 0x64]      ; 00511967
    INC ESI                             ; 0051196b
    MOV EDX,dword ptr [EAX + 0x14ecb0]  ; 0051196c
    ADD EDI,0x4                         ; 00511972
    CMP ESI,EDX                         ; 00511975
    JL 0x005118c9                       ; 00511977
        ;   XREF to: 005118c9 (CONDITIONAL_JUMP)  ; LAB_005118c9
    POP EDI                             ; 0051197d
    ADD ESP,0x50                        ; 0051197e
        ;   Label: LAB_0051197e
    POP EBP                             ; 00511981
    POP ESI                             ; 00511982
    POP EBX                             ; 00511983
    RET                                 ; 00511984

