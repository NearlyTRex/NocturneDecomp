; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041a840(float *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[74]:
;   FUN_0040e0f0 at 0040e12a
;   FUN_0040e780 at 0040e7b8
;   FUN_0040ec10 at 0040ec79
;   FUN_0040f3f0 at 0040f43a
;   FUN_00410670 at 00410797
;   FUN_004113f0 at 0041142a
;   FUN_00413c70 at 00413d06
;   FUN_00414810 at 00414869
;   FUN_00415120 at 0041516c
;   FUN_00415b60 at 00415bd8
;   ... and 64 more
;
; Referenced Globals:
;   undefined4 DAT_005cc4d1
;   undefined4 DAT_005f39d8
;   undefined4 DAT_005f39e0
;   undefined4 DAT_0060b280
;   undefined4 DAT_0070ca88
;   undefined4 DAT_0070ca8c
;   undefined4 DAT_0070ca90
;   undefined4 DAT_007bda74
;   undefined4 DAT_01c38aec
;
; Called Functions:
;   FUN_0041a670
;   FUN_0041aa20
;   FUN_00442d80
;   FUN_0046b960
;   FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a840
        ;   Label: FUN_0041a840
    PUSH ESI                            ; 0041a841
    PUSH EDI                            ; 0041a842
    SUB ESP,0x84                        ; 0041a843
    MOV EBX,dword ptr [ESP + 0x94]      ; 0041a849
    PUSH EBX                            ; 0041a850
    CALL FUN_0041aa20                   ; 0041a851
        ;   XREF to: 0041aa20 (UNCONDITIONAL_CALL)  ; undefined FUN_0041aa20()
    ADD ESP,0x4                         ; 0041a856
    CMP EAX,-0x1                        ; 0041a859
    JZ 0x0041a86c                       ; 0041a85c
        ;   XREF to: 0041a86c (CONDITIONAL_JUMP)  ; LAB_0041a86c
    TEST EAX,EAX                        ; 0041a85e
    JNZ 0x0041a870                      ; 0041a860
        ;   XREF to: 0041a870 (CONDITIONAL_JUMP)  ; LAB_0041a870
    ADD ESP,0x84                        ; 0041a862
        ;   Label: LAB_0041a862
    POP EDI                             ; 0041a868
    POP ESI                             ; 0041a869
    POP EBX                             ; 0041a86a
    RET                                 ; 0041a86b
    XOR EAX,EAX                         ; 0041a86c
        ;   Label: LAB_0041a86c
    JMP 0x0041a862                      ; 0041a86e
        ;   XREF to: 0041a862 (UNCONDITIONAL_JUMP)  ; LAB_0041a862
    MOV EDX,dword ptr [0x0060b280]      ; 0041a870 | DAT_0060b280
        ;   Label: LAB_0041a870
    PUSH EDX                            ; 0041a876
    CALL FUN_0046b960                   ; 0041a877
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0041a87c
    TEST EAX,EAX                        ; 0041a87f
    JNZ 0x0041a9f6                      ; 0041a881
        ;   XREF to: 0041a9f6 (CONDITIONAL_JUMP)  ; LAB_0041a9f6
    FLD float ptr [EBX]                 ; 0041a887
    FLD float ptr [EBX + 0x4]           ; 0041a889
    FLD float ptr [EBX + 0x8]           ; 0041a88c
    LEA EAX,[EBX + 0xc]                 ; 0041a88f
    LEA EDI,[ESP + 0x78]                ; 0041a892
    LEA ESI,[ESP + 0x3c]                ; 0041a896
    FXCH ST2                            ; 0041a89a
    FADD float ptr [EAX]                ; 0041a89c
    FXCH                                ; 0041a89e
    FADD float ptr [EAX + 0x4]          ; 0041a8a0
    FXCH ST2                            ; 0041a8a3
    FADD float ptr [EAX + 0x8]          ; 0041a8a5
    FXCH                                ; 0041a8a8
    FSTP float ptr [ESP + 0x3c]         ; 0041a8aa
    FXCH                                ; 0041a8ae
    FSTP float ptr [ESP + 0x40]         ; 0041a8b0
    FSTP float ptr [ESP + 0x44]         ; 0041a8b4
    MOVSD ES:EDI,ESI                    ; 0041a8b8
    MOVSD ES:EDI,ESI                    ; 0041a8b9
    MOVSD ES:EDI,ESI                    ; 0041a8ba
    FLD float ptr [0x005cc4d1]          ; 0041a8bb | DAT_005cc4d1
    FLD float ptr [ESP + 0x78]          ; 0041a8c1
    FMUL ST1                            ; 0041a8c5
    FLD float ptr [ESP + 0x7c]          ; 0041a8c7
    FMUL ST2                            ; 0041a8cb
    FLD float ptr [ESP + 0x80]          ; 0041a8cd
    FMULP ST3                           ; 0041a8d4
    LEA EBX,[ESP + 0x30]                ; 0041a8d6
    LEA EAX,[ESP + 0x6c]                ; 0041a8da
    LEA EDI,[ESP + 0x6c]                ; 0041a8de
    LEA ESI,[ESP + 0x54]                ; 0041a8e2
    FXCH                                ; 0041a8e6
    FSTP float ptr [ESP + 0x54]         ; 0041a8e8
    FSTP float ptr [ESP + 0x58]         ; 0041a8ec
    FSTP float ptr [ESP + 0x5c]         ; 0041a8f0
    MOVSD ES:EDI,ESI                    ; 0041a8f4
    MOVSD ES:EDI,ESI                    ; 0041a8f5
    MOVSD ES:EDI,ESI                    ; 0041a8f6
    CMP EBX,EAX                         ; 0041a8f7
    JZ 0x0041a913                       ; 0041a8f9
        ;   XREF to: 0041a913 (CONDITIONAL_JUMP)  ; LAB_0041a913
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041a8fb
    MOV dword ptr [ESP + 0x30],EAX      ; 0041a8ff
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041a903
    MOV dword ptr [ESP + 0x34],EAX      ; 0041a907
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041a90b
    MOV dword ptr [ESP + 0x38],EAX      ; 0041a90f
    MOV EAX,0x70ca88                    ; 0041a913 | DAT_0070ca88
        ;   Label: LAB_0041a913
    LEA EBX,[ESP + 0x60]                ; 0041a918
    FILD dword ptr [EAX]                ; 0041a91c | DAT_0070ca88
    FMUL float ptr [0x005f39e0]         ; 0041a91e | DAT_005f39e0
    FSTP float ptr [EBX]                ; 0041a924
    FILD dword ptr [EAX + 0x4]          ; 0041a926 | DAT_0070ca8c
    FMUL float ptr [0x005f39e0]         ; 0041a929 | DAT_005f39e0
    FSTP float ptr [EBX + 0x4]          ; 0041a92f
    FILD dword ptr [EAX + 0x8]          ; 0041a932 | DAT_0070ca90
    FMUL float ptr [0x005f39e0]         ; 0041a935 | DAT_005f39e0
    FSTP float ptr [EBX + 0x8]          ; 0041a93b
    LEA EBX,[ESP + 0x48]                ; 0041a93e
    LEA EAX,[ESP + 0x30]                ; 0041a942
    FLD float ptr [EAX]                 ; 0041a946
    FMUL float ptr [0x005f39d8]         ; 0041a948 | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041a94e
    FLD float ptr [EAX + 0x4]           ; 0041a950
    FMUL float ptr [0x005f39d8]         ; 0041a953 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041a959
    FLD float ptr [EAX + 0x8]           ; 0041a95c
    FMUL float ptr [0x005f39d8]         ; 0041a95f | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041a965
    LEA EAX,[ESP + 0x48]                ; 0041a968
    PUSH EAX                            ; 0041a96c
    LEA EAX,[ESP + 0x4]                 ; 0041a96d
    PUSH EAX                            ; 0041a971
    CALL FUN_0055d723                   ; 0041a972
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0041a977
    MOV EBX,dword ptr [0x007bda74]      ; 0041a97a | DAT_007bda74
    FLD float ptr [ESP + 0x60]          ; 0041a980
    FLD float ptr [ESP + 0x64]          ; 0041a984
    FLD float ptr [ESP + 0x68]          ; 0041a988
    FXCH ST2                            ; 0041a98c
    FADD float ptr [ESP + 0x30]         ; 0041a98e
    FXCH                                ; 0041a992
    FADD float ptr [ESP + 0x34]         ; 0041a994
    FXCH ST2                            ; 0041a998
    FADD float ptr [ESP + 0x38]         ; 0041a99a
    FXCH                                ; 0041a99e
    FSTP float ptr [ESP + 0x60]         ; 0041a9a0
    FXCH                                ; 0041a9a4
    FSTP float ptr [ESP + 0x64]         ; 0041a9a6
    FSTP float ptr [ESP + 0x68]         ; 0041a9aa
    TEST EBX,EBX                        ; 0041a9ae
    JZ 0x0041a9e1                       ; 0041a9b0
        ;   XREF to: 0041a9e1 (CONDITIONAL_JUMP)  ; LAB_0041a9e1
    MOV EAX,ESP                         ; 0041a9b2
    PUSH EAX                            ; 0041a9b4
    LEA EAX,[ESP + 0x64]                ; 0041a9b5
    PUSH EAX                            ; 0041a9b9
    PUSH 0x1fc7838                      ; 0041a9ba
    CALL FUN_00442d80                   ; 0041a9bf
        ;   XREF to: 00442d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00442d80()
    MOV EDI,dword ptr [0x01c38aec]      ; 0041a9c4 | DAT_01c38aec
    ADD ESP,0xc                         ; 0041a9ca
    CMP EDI,0xfde8                      ; 0041a9cd
    JLE 0x0041a9e7                      ; 0041a9d3
        ;   XREF to: 0041a9e7 (CONDITIONAL_JUMP)  ; LAB_0041a9e7
    XOR EAX,EAX                         ; 0041a9d5
    ADD ESP,0x84                        ; 0041a9d7
    POP EDI                             ; 0041a9dd
    POP ESI                             ; 0041a9de
    POP EBX                             ; 0041a9df
    RET                                 ; 0041a9e0
    MOV dword ptr [0x01c38aec],EBX      ; 0041a9e1 | DAT_01c38aec
        ;   Label: LAB_0041a9e1
    MOV EAX,0x1                         ; 0041a9e7
        ;   Label: LAB_0041a9e7
    ADD ESP,0x84                        ; 0041a9ec
    POP EDI                             ; 0041a9f2
    POP ESI                             ; 0041a9f3
    POP EBX                             ; 0041a9f4
    RET                                 ; 0041a9f5
    CMP dword ptr [ESP + 0x98],0x0      ; 0041a9f6
        ;   Label: LAB_0041a9f6
    JNZ 0x0041a9e7                      ; 0041a9fe
        ;   XREF to: 0041a9e7 (CONDITIONAL_JUMP)  ; LAB_0041a9e7
    PUSH EBX                            ; 0041aa00
    CALL FUN_0041a670                   ; 0041aa01
        ;   XREF to: 0041a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a670()
    ADD ESP,0x4                         ; 0041aa06
    TEST EAX,EAX                        ; 0041aa09
    JNZ 0x0041a9e7                      ; 0041aa0b
        ;   XREF to: 0041a9e7 (CONDITIONAL_JUMP)  ; LAB_0041a9e7
    ADD ESP,0x84                        ; 0041aa0d
    POP EDI                             ; 0041aa13
    POP ESI                             ; 0041aa14
    POP EBX                             ; 0041aa15
    RET                                 ; 0041aa16

