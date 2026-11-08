; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541640(int param_1,int param_2,int param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
; XREF[1]:
;   FUN_005471f0 at 00547219
;
; Referenced Globals:
;   undefined4 DAT_005fb998
;
; Called Functions:
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541640
        ;   Label: FUN_00541640
    PUSH ESI                            ; 00541641
    PUSH EDI                            ; 00541642
    PUSH EBP                            ; 00541643
    SUB ESP,0x70                        ; 00541644
    MOV EAX,dword ptr [ESP + 0x90]      ; 00541647
    XOR EDX,EDX                         ; 0054164e
    MOV dword ptr [ESP + 0x58],EAX      ; 00541650
    MOV EAX,dword ptr [ESP + 0x88]      ; 00541654
    MOV dword ptr [ESP + 0x5c],EDX      ; 0054165b
    SHL EAX,0x2                         ; 0054165f
    MOV dword ptr [ESP + 0x60],EDX      ; 00541662
    MOV dword ptr [ESP + 0x54],EAX      ; 00541666
    MOV EAX,dword ptr [ESP + 0x84]      ; 0054166a
        ;   Label: LAB_0054166a
    ADD EAX,dword ptr [ESP + 0x54]      ; 00541671
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00541675
    CMP EBX,dword ptr [EAX + 0x2c]      ; 00541679
    JGE 0x00541813                      ; 0054167c
        ;   XREF to: 00541813 (CONDITIONAL_JUMP)  ; LAB_00541813
    MOV EBX,dword ptr [ESP + 0x60]      ; 00541682
    MOV EAX,dword ptr [EAX + 0x40]      ; 00541686
    ADD EBX,EAX                         ; 00541689
    MOV dword ptr [ESP + 0x64],EBX      ; 0054168b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054168f
    MOV DL,byte ptr [EAX]               ; 00541693
    ADD EBX,0x10                        ; 00541695
    CMP DL,0x1                          ; 00541698
    JZ 0x00541779                       ; 0054169b
        ;   XREF to: 00541779 (CONDITIONAL_JUMP)  ; LAB_00541779
    ADD EAX,0x4                         ; 005416a1
    MOV dword ptr [ESP + 0x6c],EBX      ; 005416a4
    XOR EDI,EDI                         ; 005416a8
    XOR EBP,EBP                         ; 005416aa
    MOV EBX,dword ptr [ESP + 0x64]      ; 005416ac
    MOV dword ptr [ESP + 0x40],EDI      ; 005416b0
    MOV dword ptr [ESP + 0x3c],EDI      ; 005416b4
    MOV dword ptr [ESP + 0x44],EDI      ; 005416b8
    MOV dword ptr [ESP + 0x68],EBX      ; 005416bc
    MOV EBX,EAX                         ; 005416c0
    MOV ESI,dword ptr [ESP + 0x64]      ; 005416c2
        ;   Label: LAB_005416c2
    XOR EAX,EAX                         ; 005416c6
    MOV AL,byte ptr [ESI]               ; 005416c8
    CMP EBP,EAX                         ; 005416ca
    JGE 0x005417c9                      ; 005416cc
        ;   XREF to: 005417c9 (CONDITIONAL_JUMP)  ; LAB_005417c9
    MOV ESI,dword ptr [ESP + 0x68]      ; 005416d2
    XOR EAX,EAX                         ; 005416d6
    MOV AL,byte ptr [ESI + 0x1]         ; 005416d8
    IMUL EAX,EAX,0x30                   ; 005416db
    ADD EAX,dword ptr [ESP + 0x8c]      ; 005416de
    PUSH EAX                            ; 005416e5
    MOV ESI,dword ptr [ESP + 0x70]      ; 005416e6
    PUSH ESI                            ; 005416ea
    LEA ESI,[ESP + 0x50]                ; 005416eb
    LEA EDI,[ESP + 0x8]                 ; 005416ef
    CALL FUN_00591530                   ; 005416f3
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0x50]                ; 005416f8
    ADD ESP,0x8                         ; 005416fc
    MOVSD ES:EDI,ESI                    ; 005416ff
    MOVSD ES:EDI,ESI                    ; 00541700
    MOVSD ES:EDI,ESI                    ; 00541701
    FLD float ptr [ESP]                 ; 00541702
    FMUL float ptr [EBX]                ; 00541705
    FLD float ptr [ESP + 0x4]           ; 00541707
    FMUL float ptr [EBX]                ; 0054170b
    FLD float ptr [ESP + 0x8]           ; 0054170d
    FMUL float ptr [EBX]                ; 00541711
    ADD EBX,0x4                         ; 00541713
    INC EBP                             ; 00541716
    FLD float ptr [ESP + 0x3c]          ; 00541717
    FLD float ptr [ESP + 0x40]          ; 0054171b
    FLD float ptr [ESP + 0x44]          ; 0054171f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00541723
    LEA EDI,[ESP + 0xc]                 ; 00541727
    LEA ESI,[ESP + 0x18]                ; 0054172b
    INC EAX                             ; 0054172f
    FXCH ST5                            ; 00541730
    FSTP float ptr [ESP + 0x18]         ; 00541732
    FXCH ST3                            ; 00541736
    FSTP float ptr [ESP + 0x1c]         ; 00541738
    FXCH                                ; 0054173c
    FSTP float ptr [ESP + 0x20]         ; 0054173e
    MOVSD ES:EDI,ESI                    ; 00541742
    MOVSD ES:EDI,ESI                    ; 00541743
    MOVSD ES:EDI,ESI                    ; 00541744
    MOV dword ptr [ESP + 0x68],EAX      ; 00541745
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00541749
    FADD float ptr [ESP + 0xc]          ; 0054174d
    FXCH                                ; 00541751
    FADD float ptr [ESP + 0x10]         ; 00541753
    FXCH ST2                            ; 00541757
    FADD float ptr [ESP + 0x14]         ; 00541759
    FXCH                                ; 0054175d
    FSTP float ptr [ESP + 0x3c]         ; 0054175f
    FXCH                                ; 00541763
    FSTP float ptr [ESP + 0x40]         ; 00541765
    ADD EDI,0xc                         ; 00541769
    FSTP float ptr [ESP + 0x44]         ; 0054176c
    MOV dword ptr [ESP + 0x6c],EDI      ; 00541770
    JMP 0x005416c2                      ; 00541774
        ;   XREF to: 005416c2 (UNCONDITIONAL_JUMP)  ; LAB_005416c2
    MOV ESI,dword ptr [ESP + 0x64]      ; 00541779
        ;   Label: LAB_00541779
    XOR EAX,EAX                         ; 0054177d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054177f
    IMUL EAX,EAX,0x30                   ; 00541782
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00541785
    PUSH EAX                            ; 0054178c
    PUSH EBX                            ; 0054178d
    LEA ESI,[ESP + 0x2c]                ; 0054178e
    LEA EDI,[ESP + 0x38]                ; 00541792
    CALL FUN_00591530                   ; 00541796
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0x2c]                ; 0054179b
    LEA EBX,[ESP + 0x38]                ; 0054179f
    ADD ESP,0x8                         ; 005417a3
    LEA EAX,[ESP + 0x3c]                ; 005417a6
    MOVSD ES:EDI,ESI                    ; 005417aa
    MOVSD ES:EDI,ESI                    ; 005417ab
    MOVSD ES:EDI,ESI                    ; 005417ac
    CMP EAX,EBX                         ; 005417ad
    JZ 0x005417c9                       ; 005417af
        ;   XREF to: 005417c9 (CONDITIONAL_JUMP)  ; LAB_005417c9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005417b1
    MOV dword ptr [ESP + 0x3c],EAX      ; 005417b5
    MOV EAX,dword ptr [ESP + 0x34]      ; 005417b9
    MOV dword ptr [ESP + 0x40],EAX      ; 005417bd
    MOV EAX,dword ptr [ESP + 0x38]      ; 005417c1
    MOV dword ptr [ESP + 0x44],EAX      ; 005417c5
    MOV EBX,dword ptr [ESP + 0x58]      ; 005417c9
        ;   Label: LAB_005417c9
    LEA EAX,[ESP + 0x3c]                ; 005417cd
    MOV ECX,dword ptr [ESP + 0x60]      ; 005417d1
    FLD float ptr [EAX]                 ; 005417d5
    FMUL float ptr [0x005fb998]         ; 005417d7 | DAT_005fb998
    FISTP dword ptr [EBX]               ; 005417dd
    FLD float ptr [EAX + 0x4]           ; 005417df
    FMUL float ptr [0x005fb998]         ; 005417e2 | DAT_005fb998
    FISTP dword ptr [EBX + 0x4]         ; 005417e8
    FLD float ptr [EAX + 0x8]           ; 005417eb
    FMUL float ptr [0x005fb998]         ; 005417ee | DAT_005fb998
    FISTP dword ptr [EBX + 0x8]         ; 005417f4
    LEA EDX,[EBX + 0xc]                 ; 005417f7
    ADD ECX,0x34                        ; 005417fa
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005417fd
    MOV dword ptr [ESP + 0x58],EDX      ; 00541801
    INC EBX                             ; 00541805
    MOV dword ptr [ESP + 0x60],ECX      ; 00541806
    MOV dword ptr [ESP + 0x5c],EBX      ; 0054180a
    JMP 0x0054166a                      ; 0054180e
        ;   XREF to: 0054166a (UNCONDITIONAL_JUMP)  ; LAB_0054166a
    ADD ESP,0x70                        ; 00541813
        ;   Label: LAB_00541813
    POP EBP                             ; 00541816
    POP EDI                             ; 00541817
    POP ESI                             ; 00541818
    POP EBX                             ; 00541819
    RET                                 ; 0054181a

