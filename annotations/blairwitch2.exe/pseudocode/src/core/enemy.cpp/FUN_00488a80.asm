; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00488a80(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488a80
        ;   Label: core_enemy.cpp_FUN_00488a80
    MOV EAX,dword ptr [ESP + 0x8]       ; 00488a84
    CMP EAX,dword ptr [EDX + 0x10a78]   ; 00488a88
    JZ 0x00488a91                       ; 00488a8e
        ;   XREF to: 00488a91 (CONDITIONAL_JUMP)  ; LAB_00488a91
    RET                                 ; 00488a90
    PUSH EDX                            ; 00488a91
        ;   Label: LAB_00488a91
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 00488a92
    CALL dword ptr [EAX + 0x100]        ; 00488a98
    ADD ESP,0x4                         ; 00488a9e
    RET                                 ; 00488aa1

