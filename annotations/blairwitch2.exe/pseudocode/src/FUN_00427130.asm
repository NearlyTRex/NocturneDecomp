; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427130(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[3]:
;   FUN_0041dbe0 at 0041e7de
;   FUN_004c1bb0 at 004c392f
;   FUN_00595f30 at 00596cb1
;
; Referenced Globals:
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040d060
;   FUN_004c9730
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427130
        ;   Label: FUN_00427130
    SUB ESP,0x3c                        ; 00427131
    MOV EBX,dword ptr [ESP + 0x44]      ; 00427134
    MOV EAX,dword ptr [ESP + 0x48]      ; 00427138
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0042713c
    JZ 0x0042714b                       ; 00427144
        ;   XREF to: 0042714b (CONDITIONAL_JUMP)  ; LAB_0042714b
    ADD ESP,0x3c                        ; 00427146
        ;   Label: LAB_00427146
    POP EBX                             ; 00427149
    RET                                 ; 0042714a
    PUSH dword ptr [ESP + 0x50]         ; 0042714b
        ;   Label: LAB_0042714b
    CALL FUN_0040d060                   ; 0042714f
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 00427154
    TEST EAX,EAX                        ; 00427157
    JZ 0x00427146                       ; 00427159
        ;   XREF to: 00427146 (CONDITIONAL_JUMP)  ; LAB_00427146
    PUSH EDI                            ; 0042715b
    PUSH ESI                            ; 0042715c
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042715d
    PUSH ECX                            ; 00427161
    LEA EAX,[EBX + 0x2b4]               ; 00427162
    PUSH EAX                            ; 00427168
    LEA ESI,[ESP + 0x1c]                ; 00427169
    LEA EDI,[ESP + 0x40]                ; 0042716d
    CALL FUN_00546a90                   ; 00427171
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 00427176
    LEA EAX,[ESP + 0x38]                ; 00427179
    LEA ESI,[ESP + 0x14]                ; 0042717d
    PUSH EAX                            ; 00427181
    MOVSD ES:EDI,ESI                    ; 00427182
    MOVSD ES:EDI,ESI                    ; 00427183
    MOVSD ES:EDI,ESI                    ; 00427184
    PUSH EBX                            ; 00427185
    LEA ESI,[ESP + 0x28]                ; 00427186
    LEA EDI,[ESP + 0x10]                ; 0042718a
    CALL FUN_00408d70                   ; 0042718e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x28]                ; 00427193
    ADD ESP,0x8                         ; 00427197
    MOVSD ES:EDI,ESI                    ; 0042719a
    MOVSD ES:EDI,ESI                    ; 0042719b
    MOVSD ES:EDI,ESI                    ; 0042719c
    XOR ESI,ESI                         ; 0042719d
    MOV EDI,0x40e00000                  ; 0042719f
    MOV dword ptr [ESP + 0x2c],ESI      ; 004271a4
    MOV dword ptr [ESP + 0x30],EDI      ; 004271a8
    MOV dword ptr [ESP + 0x34],ESI      ; 004271ac
    MOV EAX,dword ptr [EBX + 0x280c]    ; 004271b0
    PUSH EAX                            ; 004271b6
    LEA EAX,[ESP + 0x30]                ; 004271b7
    PUSH EAX                            ; 004271bb
    LEA EAX,[ESP + 0x10]                ; 004271bc
    PUSH EAX                            ; 004271c0
    MOV EDX,dword ptr [0x006167e0]      ; 004271c1 | DAT_006167e0
    PUSH EDX                            ; 004271c7
    CALL FUN_004c9730                   ; 004271c8
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9730()
    ADD ESP,0x10                        ; 004271cd
    POP ESI                             ; 004271d0
    POP EDI                             ; 004271d1
    ADD ESP,0x3c                        ; 004271d2
    POP EBX                             ; 004271d5
    RET                                 ; 004271d6

