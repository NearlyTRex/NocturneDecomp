; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484d40(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   FUN_0041ceb0
;   FUN_00453040
;   FUN_00460a00
;   FUN_00460a50
;   FUN_0050adc0
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484d40
        ;   Label: FUN_00484d40
    PUSH EBP                            ; 00484d41
    SUB ESP,0x18                        ; 00484d42
    MOV EBX,dword ptr [ESP + 0x24]      ; 00484d45
    PUSH EBX                            ; 00484d49
    MOV EDX,dword ptr [0x005ae704]      ; 00484d4a | DAT_005ae704
    PUSH EDX                            ; 00484d50 | DAT_01b4d738
    CALL FUN_00460a00                   ; 00484d51
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 00484d56
    PUSH 0x0                            ; 00484d59
    LEA EAX,[EBX + 0x38]                ; 00484d5b
    PUSH EAX                            ; 00484d5e
    MOV ECX,dword ptr [0x005ae704]      ; 00484d5f | DAT_005ae704
    PUSH ECX                            ; 00484d65 | DAT_01b4d738
    CALL FUN_00460a50                   ; 00484d66
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a50()
    MOV EDX,dword ptr [EBX + 0x44]      ; 00484d6b
    MOV EDX,dword ptr [EDX + 0x350]     ; 00484d6e
    ADD ESP,0xc                         ; 00484d74
    MOV EAX,dword ptr [EDX]             ; 00484d77
    MOV dword ptr [ESP],EAX             ; 00484d79
    LEA EAX,[EDX + 0x4]                 ; 00484d7c
    MOV EAX,dword ptr [EAX]             ; 00484d7f
    MOV dword ptr [ESP + 0x4],EAX       ; 00484d81
    LEA EAX,[EDX + 0x8]                 ; 00484d85
    MOV EAX,dword ptr [EAX]             ; 00484d88
    MOV dword ptr [ESP + 0x8],EAX       ; 00484d8a
    MOV EAX,dword ptr [EDX + 0xc]       ; 00484d8e
    ADD EDX,0xc                         ; 00484d91
    MOV dword ptr [ESP + 0xc],EAX       ; 00484d94
    LEA EAX,[EDX + 0x4]                 ; 00484d98
    MOV EAX,dword ptr [EAX]             ; 00484d9b
    MOV dword ptr [ESP + 0x10],EAX      ; 00484d9d
    LEA EAX,[EDX + 0x8]                 ; 00484da1
    MOV EAX,dword ptr [EAX]             ; 00484da4
    PUSH 0x0                            ; 00484da6
    MOV dword ptr [ESP + 0x18],EAX      ; 00484da8
    LEA EAX,[ESP + 0x4]                 ; 00484dac
    PUSH EAX                            ; 00484db0
    CALL FUN_0041ceb0                   ; 00484db1
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ceb0()
    ADD ESP,0x8                         ; 00484db6
    TEST EAX,EAX                        ; 00484db9
    JNZ 0x00484dd2                      ; 00484dbb
        ;   XREF to: 00484dd2 (CONDITIONAL_JUMP)  ; LAB_00484dd2
    MOV EBP,dword ptr [0x005ae704]      ; 00484dbd | DAT_005ae704
        ;   Label: LAB_00484dbd
    PUSH EBP                            ; 00484dc3 | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 00484dc4
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 00484dc9
    ADD ESP,0x18                        ; 00484dcc
    POP EBP                             ; 00484dcf
    POP EBX                             ; 00484dd0
    RET                                 ; 00484dd1
    PUSH EDI                            ; 00484dd2
        ;   Label: LAB_00484dd2
    PUSH ESI                            ; 00484dd3
    PUSH 0x0                            ; 00484dd4
    LEA EAX,[ESP + 0x18]                ; 00484dd6
    PUSH EAX                            ; 00484dda
    LEA EAX,[ESP + 0x10]                ; 00484ddb
    PUSH EAX                            ; 00484ddf
    PUSH 0x2dd1184                      ; 00484de0 | DAT_02dd1184
    PUSH EBX                            ; 00484de5
    MOV ESI,dword ptr [0x005be368]      ; 00484de6 | DAT_005be368
    PUSH ESI                            ; 00484dec | DAT_01e57284
    CALL FUN_0050adc0                   ; 00484ded
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050adc0()
    ADD ESP,0x18                        ; 00484df2
    PUSH -0x1                           ; 00484df5
    PUSH 0x0                            ; 00484df7
    PUSH 0x0                            ; 00484df9
    MOV EDI,dword ptr [EBX + 0x44]      ; 00484dfb
    PUSH EDI                            ; 00484dfe
    CALL FUN_00453040                   ; 00484dff
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined FUN_00453040()
    ADD ESP,0x10                        ; 00484e04
    POP ESI                             ; 00484e07
    POP EDI                             ; 00484e08
    JMP 0x00484dbd                      ; 00484e09
        ;   XREF to: 00484dbd (UNCONDITIONAL_JUMP)  ; LAB_00484dbd

