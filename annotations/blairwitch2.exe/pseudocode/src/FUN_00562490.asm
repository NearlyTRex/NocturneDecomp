; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00562490(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01510e14
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562490
        ;   Label: FUN_00562490
    PUSH EBP                            ; 00562491
    MOV EBX,dword ptr [ESP + 0xc]       ; 00562492
    MOV EDX,dword ptr [0x01510e14]      ; 00562496 | DAT_01510e14
    PUSH EDX                            ; 0056249c
    MOV ECX,dword ptr [EBX + 0x7d4]     ; 0056249d
    PUSH ECX                            ; 005624a3
    CALL FUN_0040c8f0                   ; 005624a4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 005624a9
    TEST EAX,EAX                        ; 005624ac
    JZ 0x005624b9                       ; 005624ae
        ;   XREF to: 005624b9 (CONDITIONAL_JUMP)  ; LAB_005624b9
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005624b0
    JNZ 0x005624cb                      ; 005624b7
        ;   XREF to: 005624cb (CONDITIONAL_JUMP)  ; LAB_005624cb
    CMP dword ptr [EBX + 0x470],0x3     ; 005624b9
        ;   Label: LAB_005624b9
    JNZ 0x005624d0                      ; 005624c0
        ;   XREF to: 005624d0 (CONDITIONAL_JUMP)  ; LAB_005624d0
    MOV EAX,dword ptr [EBX + 0x470]     ; 005624c2
        ;   Label: LAB_005624c2
    POP EBP                             ; 005624c8
    POP EBX                             ; 005624c9
    RET                                 ; 005624ca
    XOR EAX,EAX                         ; 005624cb
        ;   Label: LAB_005624cb
    POP EBP                             ; 005624cd
    POP EBX                             ; 005624ce
    RET                                 ; 005624cf
    PUSH 0x5eb18f                       ; 005624d0
        ;   Label: LAB_005624d0
    MOV EBP,dword ptr [ESP + 0x14]      ; 005624d5
    PUSH EBP                            ; 005624d9
    CALL FUN_0040c840                   ; 005624da
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 005624df
    TEST EAX,EAX                        ; 005624e2
    JNZ 0x005624c2                      ; 005624e4
        ;   XREF to: 005624c2 (CONDITIONAL_JUMP)  ; LAB_005624c2
    POP EBP                             ; 005624e6
    POP EBX                             ; 005624e7
    RET                                 ; 005624e8

