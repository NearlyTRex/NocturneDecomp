; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00479ab0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; XREF[1]:
;   FUN_004db6f0 at 004db72a
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040a290
;   FUN_0041e160
;   FUN_0050fae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479ab0
        ;   Label: FUN_00479ab0
    PUSH ESI                            ; 00479ab1
    SUB ESP,0x54                        ; 00479ab2
    MOV ESI,dword ptr [ESP + 0x60]      ; 00479ab5
    MOV EBX,dword ptr [ESP + 0x64]      ; 00479ab9
    TEST EBX,EBX                        ; 00479abd
    JNZ 0x00479ac9                      ; 00479abf
        ;   XREF to: 00479ac9 (CONDITIONAL_JUMP)  ; LAB_00479ac9
    XOR EAX,EAX                         ; 00479ac1
    ADD ESP,0x54                        ; 00479ac3
    POP ESI                             ; 00479ac6
    POP EBX                             ; 00479ac7
    RET                                 ; 00479ac8
    LEA EDX,[ESP + 0x30]                ; 00479ac9
        ;   Label: LAB_00479ac9
    PUSH EDX                            ; 00479acd
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00479ace
    PUSH ESI                            ; 00479ad4
    CALL dword ptr [EAX + 0x138]        ; 00479ad5
    ADD ESP,0x8                         ; 00479adb
    PUSH EAX                            ; 00479ade
    LEA EAX,[ESP + 0x28]                ; 00479adf
    PUSH EAX                            ; 00479ae3
    PUSH ESI                            ; 00479ae4
    CALL FUN_0040a240                   ; 00479ae5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 00479aea
    MOV EDX,ESP                         ; 00479aed
    PUSH EDX                            ; 00479aef
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479af0
    PUSH EBX                            ; 00479af6
    CALL dword ptr [EAX + 0x14]         ; 00479af7
    ADD ESP,0x8                         ; 00479afa
    LEA EAX,[ESP + 0x24]                ; 00479afd
    PUSH EAX                            ; 00479b01
    LEA EAX,[ESP + 0x4c]                ; 00479b02
    PUSH EAX                            ; 00479b06
    PUSH EBX                            ; 00479b07
    CALL FUN_0040a290                   ; 00479b08
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 00479b0d
    PUSH EAX                            ; 00479b10
    LEA EAX,[ESP + 0x40]                ; 00479b11
    PUSH EAX                            ; 00479b15
    LEA EAX,[ESP + 0x8]                 ; 00479b16
    PUSH EAX                            ; 00479b1a
    CALL FUN_0041e160                   ; 00479b1b
        ;   XREF to: 0041e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e160()
    ADD ESP,0xc                         ; 00479b20
    PUSH EAX                            ; 00479b23
    LEA EAX,[ESP + 0x1c]                ; 00479b24
    PUSH EAX                            ; 00479b28
    PUSH EBX                            ; 00479b29
    CALL FUN_0040a240                   ; 00479b2a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 00479b2f
    LEA EAX,[ESP + 0x18]                ; 00479b32
    PUSH EAX                            ; 00479b36
    LEA EAX,[ESP + 0x28]                ; 00479b37
    PUSH EAX                            ; 00479b3b
    MOV EDX,dword ptr [0x005be368]      ; 00479b3c | DAT_005be368
    PUSH EDX                            ; 00479b42 | DAT_01e57284
    CALL FUN_0050fae0                   ; 00479b43
        ;   XREF to: 0050fae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fae0()
    ADD ESP,0xc                         ; 00479b48
    TEST EAX,EAX                        ; 00479b4b
    SETZ AL                             ; 00479b4d
    AND EAX,0xff                        ; 00479b50
    ADD ESP,0x54                        ; 00479b55
    POP ESI                             ; 00479b58
    POP EBX                             ; 00479b59
    RET                                 ; 00479b5a

