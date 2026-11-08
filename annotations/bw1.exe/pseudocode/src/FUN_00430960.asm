; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430960(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[5]:
;   FUN_00423b70 at 00424826
;   FUN_00428ae0 at 0042995d
;   FUN_00459100 at 00459e9e
;   FUN_004de330 at 004e00b8
;   FUN_005bafb0 at 005bbd47
;
; Referenced Globals:
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_0040cd00
;   FUN_004e5f40
;   FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430960
        ;   Label: FUN_00430960
    PUSH ESI                            ; 00430961
    PUSH EDI                            ; 00430962
    PUSH EBP                            ; 00430963
    MOV EBP,ESP                         ; 00430964
    SUB ESP,0x84                        ; 00430966
    SUB EBP,0x7e                        ; 0043096c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0043096f
    XOR EDX,EDX                         ; 00430975
    MOV ECX,dword ptr [EBX + 0x3004]    ; 00430977
    MOV dword ptr [EBP + 0x76],EDX      ; 0043097d
    TEST ECX,ECX                        ; 00430980
    JLE 0x004309bf                      ; 00430982
        ;   XREF to: 004309bf (CONDITIONAL_JUMP)  ; LAB_004309bf
    LEA EAX,[EBX + 0xfd8]               ; 00430984
    MOV dword ptr [EBP + 0x72],EAX      ; 0043098a
    LEA EAX,[EBX + 0x3008]              ; 0043098d
    MOV dword ptr [EBP + 0x7a],EAX      ; 00430993
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00430996
        ;   Label: LAB_00430996
    MOV EAX,dword ptr [EAX]             ; 00430999
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0043099b
    JNZ 0x004309c7                      ; 004309a3
        ;   XREF to: 004309c7 (CONDITIONAL_JUMP)  ; LAB_004309c7
    MOV ESI,dword ptr [EBP + 0x7a]      ; 004309a5
        ;   Label: LAB_004309a5
    MOV EDI,dword ptr [EBP + 0x76]      ; 004309a8
    MOV EDX,dword ptr [EBX + 0x3004]    ; 004309ab
    ADD ESI,0x38                        ; 004309b1
    INC EDI                             ; 004309b4
    MOV dword ptr [EBP + 0x7a],ESI      ; 004309b5
    MOV dword ptr [EBP + 0x76],EDI      ; 004309b8
    CMP EDI,EDX                         ; 004309bb
    JL 0x00430996                       ; 004309bd
        ;   XREF to: 00430996 (CONDITIONAL_JUMP)  ; LAB_00430996
    LEA ESP,[EBP + 0x7e]                ; 004309bf
        ;   Label: LAB_004309bf
    POP EBP                             ; 004309c2
    POP EDI                             ; 004309c3
    POP ESI                             ; 004309c4
    POP EBX                             ; 004309c5
    RET                                 ; 004309c6
    PUSH 0x3dcccccd                     ; 004309c7
        ;   Label: LAB_004309c7
    CALL FUN_0040cd00                   ; 004309cc
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 004309d1
    TEST EAX,EAX                        ; 004309d4
    JZ 0x004309a5                       ; 004309d6
        ;   XREF to: 004309a5 (CONDITIONAL_JUMP)  ; LAB_004309a5
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004309d8
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 004309db
    ADD EAX,dword ptr [EBP + 0x72]      ; 004309df
    PUSH EAX                            ; 004309e2
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004309e3
    ADD EAX,0x8                         ; 004309e6
    PUSH EAX                            ; 004309e9
    XOR EAX,EAX                         ; 004309ea
    MOV ECX,0xbe4ccccd                  ; 004309ec
    MOV dword ptr [EBP + 0x5a],EAX      ; 004309f1
    MOV dword ptr [EBP + 0x5e],EAX      ; 004309f4
    LEA EAX,[EBP + 0x5a]                ; 004309f7
    MOV dword ptr [EBP + 0x62],ECX      ; 004309fa
    PUSH EAX                            ; 004309fd
    LEA ESI,[EBP + 0x36]                ; 004309fe
    LEA EDI,[EBP + 0x42]                ; 00430a01
    CALL FUN_005b5080                   ; 00430a04
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[EBP + 0x36]                ; 00430a09
    LEA EAX,[EBP + 0x42]                ; 00430a0c
    ADD ESP,0x8                         ; 00430a0f
    MOVSD ES:EDI,ESI                    ; 00430a12
    MOVSD ES:EDI,ESI                    ; 00430a13
    MOVSD ES:EDI,ESI                    ; 00430a14
    PUSH EAX                            ; 00430a15
    LEA ESI,[EBP + -0x6]                ; 00430a16
    LEA EDI,[EBP + 0x4e]                ; 00430a19
    CALL FUN_005b5080                   ; 00430a1c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 00430a21
    LEA EAX,[EBP + 0x4e]                ; 00430a24
    LEA ESI,[EBP + -0x6]                ; 00430a27
    PUSH EAX                            ; 00430a2a
    MOVSD ES:EDI,ESI                    ; 00430a2b
    MOVSD ES:EDI,ESI                    ; 00430a2c
    MOVSD ES:EDI,ESI                    ; 00430a2d
    PUSH EBX                            ; 00430a2e
    LEA ESI,[EBP + 0x12]                ; 00430a2f
    LEA EDI,[EBP + 0x66]                ; 00430a32
    CALL FUN_00408b40                   ; 00430a35
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + 0x12]                ; 00430a3a
    LEA EAX,[EBP + 0x2a]                ; 00430a3d
    ADD ESP,0x8                         ; 00430a40
    MOVSD ES:EDI,ESI                    ; 00430a43
    MOVSD ES:EDI,ESI                    ; 00430a44
    MOVSD ES:EDI,ESI                    ; 00430a45
    PUSH EAX                            ; 00430a46
    MOV ESI,0x40400000                  ; 00430a47
    PUSH EBX                            ; 00430a4c
    XOR EDI,EDI                         ; 00430a4d
    MOV dword ptr [EBP + 0x2a],ESI      ; 00430a4f
    MOV dword ptr [EBP + 0x2e],EDI      ; 00430a52
    MOV dword ptr [EBP + 0x32],EDI      ; 00430a55
    LEA ESI,[EBP + 0x1e]                ; 00430a58
    LEA EDI,[EBP + 0x6]                 ; 00430a5b
    CALL FUN_00408ac0                   ; 00430a5e
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[EBP + 0x1e]                ; 00430a63
    MOVSD ES:EDI,ESI                    ; 00430a66
    MOVSD ES:EDI,ESI                    ; 00430a67
    MOVSD ES:EDI,ESI                    ; 00430a68
    ADD ESP,0x8                         ; 00430a69
    MOV EDX,dword ptr [EBX + 0x27a0]    ; 00430a6c
    PUSH EDX                            ; 00430a72
    LEA EAX,[EBP + 0x6]                 ; 00430a73
    PUSH EAX                            ; 00430a76
    LEA EAX,[EBP + 0x66]                ; 00430a77
    PUSH EAX                            ; 00430a7a
    MOV ECX,dword ptr [0x0061dca4]      ; 00430a7b | DAT_0061dca4
    PUSH ECX                            ; 00430a81
    CALL FUN_004e5f40                   ; 00430a82
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 00430a87
    JMP 0x004309a5                      ; 00430a8a
        ;   XREF to: 004309a5 (UNCONDITIONAL_JUMP)  ; LAB_004309a5

