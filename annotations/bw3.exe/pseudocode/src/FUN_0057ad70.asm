; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057ad70(undefined4 param_1)
;
;
; XREF[20]:
;   FUN_0040f780 at 0040f786
;   FUN_004103f0 at 004103f6
;   FUN_00424430 at 00424436
;   FUN_0045bf80 at 0045bf86
;   FUN_0047b080 at 0047b086
;   FUN_00486ba0 at 00486ba6
;   FUN_0048a310 at 0048a317
;   FUN_004a4ad0 at 004a4adf
;   FUN_004a7550 at 004a7556
;   FUN_004ae7e0 at 004ae7e6
;   ... and 10 more
;
; Called Functions:
;   FUN_00408600
;   FUN_0041ad40
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ad70
        ;   Label: FUN_0057ad70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057ad71
    PUSH EBX                            ; 0057ad75
    CALL FUN_00408600                   ; 0057ad76
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0057ad7b
    ADD EAX,0x158                       ; 0057ad7e
    PUSH EAX                            ; 0057ad83
    CALL FUN_00462500                   ; 0057ad84
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0057ad89
    ADD EAX,0x1b0                       ; 0057ad8c
    PUSH EAX                            ; 0057ad91
    CALL FUN_0041ad40                   ; 0057ad92
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ad40()
    LEA EBX,[EAX + 0xfffffcf8]          ; 0057ad97
    MOV dword ptr [EBX + 0x154],0x5e6244 ; 0057ad9d
    MOV dword ptr [EBX + 0x564],0x40a00000 ; 0057ada7
    MOV dword ptr [EBX + 0x300],0x0     ; 0057adb1
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0057adbb
    MOV dword ptr [EBX + 0x304],0x0     ; 0057adc5
    MOV dword ptr [EBX + 0x568],0x14    ; 0057adcf
    MOV dword ptr [EBX + 0x56c],0x0     ; 0057add9
    MOV dword ptr [EBX + 0x100],0x1     ; 0057ade3
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0057aded
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0057adf7
    MOV dword ptr [EBX + 0x2e0],0x0     ; 0057ae01
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0057ae0b
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 0057ae15
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0057ae1f
    ADD ESP,0x4                         ; 0057ae29
    MOV dword ptr [EBX + 0x2f0],0x1     ; 0057ae2c
    PUSH 0x5d7813                       ; 0057ae36
    MOV dword ptr [EBX + 0x2f4],0xff    ; 0057ae3b
    LEA EAX,[EBX + 0x158]               ; 0057ae45
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0057ae4b
    PUSH EAX                            ; 0057ae55
    MOV dword ptr [EBX + 0x2fc],0x0     ; 0057ae56
    CALL FUN_004625f0                   ; 0057ae60
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x580],0x0     ; 0057ae65
    MOV dword ptr [EBX + 0x584],0x0     ; 0057ae6f
    MOV dword ptr [EBX + 0x570],0x0     ; 0057ae79
    MOV dword ptr [EBX + 0x58c],0x1     ; 0057ae83
    MOV dword ptr [EBX + 0x588],0x10000 ; 0057ae8d
    MOV dword ptr [EBX + 0x574],0x0     ; 0057ae97
    MOV dword ptr [EBX + 0x57c],0x1     ; 0057aea1
    ADD ESP,0x8                         ; 0057aeab
    MOV dword ptr [EBX + 0x590],0x0     ; 0057aeae
    MOV EAX,EBX                         ; 0057aeb8
    MOV dword ptr [EBX + 0x578],0x1     ; 0057aeba
    POP EBX                             ; 0057aec4
    RET                                 ; 0057aec5

