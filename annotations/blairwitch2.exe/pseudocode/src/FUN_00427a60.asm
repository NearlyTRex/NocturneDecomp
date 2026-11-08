; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427a60(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0045de30 at 0045de4d
;   FUN_0056f190 at 0056f1ad
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427a60
        ;   Label: FUN_00427a60
    PUSH ESI                            ; 00427a61
    PUSH EDI                            ; 00427a62
    PUSH EBP                            ; 00427a63
    MOV EDI,dword ptr [ESP + 0x18]      ; 00427a64
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00427a68
    MOV ESI,dword ptr [ESP + 0x14]      ; 00427a6c
    ADD ESI,0x2618                      ; 00427a70
    MOV EBX,ESI                         ; 00427a76
    ADD ESI,0xf0                        ; 00427a78
    MOV EDX,dword ptr [EBX + 0x8]       ; 00427a7e
        ;   Label: LAB_00427a7e
    CMP EDI,EDX                         ; 00427a81
    JZ 0x00427a91                       ; 00427a83
        ;   XREF to: 00427a91 (CONDITIONAL_JUMP)  ; LAB_00427a91
    ADD EBX,0x78                        ; 00427a85
    CMP EBX,ESI                         ; 00427a88
    JNZ 0x00427a7e                      ; 00427a8a
        ;   XREF to: 00427a7e (CONDITIONAL_JUMP)  ; LAB_00427a7e
    POP EBP                             ; 00427a8c
    POP EDI                             ; 00427a8d
    POP ESI                             ; 00427a8e
    POP EBX                             ; 00427a8f
    RET                                 ; 00427a90
    PUSH EBP                            ; 00427a91
        ;   Label: LAB_00427a91
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 00427a92
    PUSH EDI                            ; 00427a98
    CALL dword ptr [EDX + 0x94]         ; 00427a99
    ADD ESP,0x8                         ; 00427a9f
    MOV dword ptr [EBX + 0x8],0x0       ; 00427aa2
    ADD EBX,0x78                        ; 00427aa9
    CMP EBX,ESI                         ; 00427aac
    JNZ 0x00427a7e                      ; 00427aae
        ;   XREF to: 00427a7e (CONDITIONAL_JUMP)  ; LAB_00427a7e
    POP EBP                             ; 00427ab0
    POP EDI                             ; 00427ab1
    POP ESI                             ; 00427ab2
    POP EBX                             ; 00427ab3
    RET                                 ; 00427ab4

