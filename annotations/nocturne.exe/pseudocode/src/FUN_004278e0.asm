; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004278e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_005b96c4
;
; Called Functions:
;   FUN_0040a200
;   FUN_0040a240
;   FUN_0040dea0
;   FUN_004b00f0
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004278e0
        ;   Label: FUN_004278e0
    SUB ESP,0x30                        ; 004278e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004278e4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004278e8
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004278ec
    JZ 0x004278fb                       ; 004278f4
        ;   XREF to: 004278fb (CONDITIONAL_JUMP)  ; LAB_004278fb
    ADD ESP,0x30                        ; 004278f6
        ;   Label: LAB_004278f6
    POP EBX                             ; 004278f9
    RET                                 ; 004278fa
    PUSH dword ptr [ESP + 0x44]         ; 004278fb
        ;   Label: LAB_004278fb
    CALL FUN_0040dea0                   ; 004278ff
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 00427904
    TEST EAX,EAX                        ; 00427907
    JZ 0x004278f6                       ; 00427909
        ;   XREF to: 004278f6 (CONDITIONAL_JUMP)  ; LAB_004278f6
    PUSH EDI                            ; 0042790b
    PUSH ESI                            ; 0042790c
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042790d
    PUSH ECX                            ; 00427911
    LEA EAX,[ESP + 0x18]                ; 00427912
    PUSH EAX                            ; 00427916
    LEA EAX,[EBX + 0x150]               ; 00427917
    PUSH EAX                            ; 0042791d
    CALL FUN_0051d380                   ; 0042791e
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 00427923
    PUSH EAX                            ; 00427926
    LEA EAX,[ESP + 0x30]                ; 00427927
    PUSH EAX                            ; 0042792b
    PUSH EBX                            ; 0042792c
    CALL FUN_0040a240                   ; 0042792d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 00427932
    LEA EAX,[ESP + 0x8]                 ; 00427935
    PUSH EAX                            ; 00427939
    LEA EAX,[ESP + 0x24]                ; 0042793a
    MOV ESI,0xc0400000                  ; 0042793e
    PUSH EAX                            ; 00427943
    XOR EDI,EDI                         ; 00427944
    MOV dword ptr [ESP + 0x10],ESI      ; 00427946
    PUSH EBX                            ; 0042794a
    MOV dword ptr [ESP + 0x18],EDI      ; 0042794b
    MOV dword ptr [ESP + 0x1c],EDI      ; 0042794f
    CALL FUN_0040a200                   ; 00427953
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    ADD ESP,0xc                         ; 00427958
    MOV EAX,dword ptr [EBX + 0x2608]    ; 0042795b
    PUSH EAX                            ; 00427961
    LEA EAX,[ESP + 0x24]                ; 00427962
    PUSH EAX                            ; 00427966
    LEA EAX,[ESP + 0x34]                ; 00427967
    PUSH EAX                            ; 0042796b
    MOV EDX,dword ptr [0x005b96c4]      ; 0042796c | DAT_005b96c4
    PUSH EDX                            ; 00427972
    CALL FUN_004b00f0                   ; 00427973
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b00f0()
    ADD ESP,0x10                        ; 00427978
    POP ESI                             ; 0042797b
    POP EDI                             ; 0042797c
    ADD ESP,0x30                        ; 0042797d
    POP EBX                             ; 00427980
    RET                                 ; 00427981

