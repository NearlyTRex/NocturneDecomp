; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_FUN_00579a60(void)
;
;
; XREF[1]:
;   engine_2d.c_cleanupGraphicsSystem_FUN_00401120 at 00401120
;
; Referenced Globals:
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;   undefined4 DAT_02d0bcf0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;   engine_special.cpp_kill_FUN_005657f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579a60
        ;   Label: wincore_wddvmem.cpp_FUN_00579a60
    PUSH ESI                            ; 00579a61
    PUSH EBP                            ; 00579a62
    MOV EDX,dword ptr [0x0060b010]      ; 00579a63 | DAT_0060b010
    TEST EDX,EDX                        ; 00579a69
    JNZ 0x00579ae8                      ; 00579a6b
        ;   XREF to: 00579ae8 (CONDITIONAL_JUMP)  ; LAB_00579ae8
    MOV ESI,dword ptr [0x02d0bcf0]      ; 00579a71 | DAT_02d0bcf0
        ;   Label: LAB_00579a71
    TEST ESI,ESI                        ; 00579a77
    JZ 0x00579a8c                       ; 00579a79
        ;   XREF to: 00579a8c (CONDITIONAL_JUMP)  ; LAB_00579a8c
    PUSH ESI                            ; 00579a7b
    CALL crt_unknown.c_FUN_005a3770     ; 00579a7c
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBP,EBP                         ; 00579a81
    ADD ESP,0x4                         ; 00579a83
    MOV dword ptr [0x0072ffac],EBP      ; 00579a86 | DAT_0072ffac
    CALL engine_special.cpp_kill_FUN_005657f0 ; 00579a8c
        ;   XREF to: 005657f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005657f0()
        ;   Label: LAB_00579a8c
    MOV EAX,[0x02d0bcec]                ; 00579a91 | DAT_02d0bcec
    TEST EAX,EAX                        ; 00579a96
    JZ 0x00579aa8                       ; 00579a98
        ;   XREF to: 00579aa8 (CONDITIONAL_JUMP)  ; LAB_00579aa8
    PUSH EAX                            ; 00579a9a
    MOV EDX,dword ptr [EAX]             ; 00579a9b
    CALL dword ptr [EDX + 0x8]          ; 00579a9d
    XOR EDX,EDX                         ; 00579aa0
    MOV dword ptr [0x02d0bcec],EDX      ; 00579aa2 | DAT_02d0bcec
    MOV ECX,dword ptr [0x02d0bce8]      ; 00579aa8 | DAT_02d0bce8
        ;   Label: LAB_00579aa8
    TEST ECX,ECX                        ; 00579aae
    JZ 0x00579ac0                       ; 00579ab0
        ;   XREF to: 00579ac0 (CONDITIONAL_JUMP)  ; LAB_00579ac0
    PUSH ECX                            ; 00579ab2
    MOV EDX,dword ptr [ECX]             ; 00579ab3
    XOR EBX,EBX                         ; 00579ab5
    CALL dword ptr [EDX + 0x8]          ; 00579ab7
    MOV dword ptr [0x02d0bce8],EBX      ; 00579aba | DAT_02d0bce8
    MOV ESI,dword ptr [0x02d0bce4]      ; 00579ac0 | DAT_02d0bce4
        ;   Label: LAB_00579ac0
    TEST ESI,ESI                        ; 00579ac6
    JZ 0x00579ada                       ; 00579ac8
        ;   XREF to: 00579ada (CONDITIONAL_JUMP)  ; LAB_00579ada
    PUSH EDI                            ; 00579aca
    PUSH ESI                            ; 00579acb
    MOV EDX,dword ptr [ESI]             ; 00579acc
    XOR EDI,EDI                         ; 00579ace
    CALL dword ptr [EDX + 0x8]          ; 00579ad0
    MOV dword ptr [0x02d0bce4],EDI      ; 00579ad3 | DAT_02d0bce4
    POP EDI                             ; 00579ad9
    MOV EBP,dword ptr [0x02d0bce0]      ; 00579ada | DAT_02d0bce0
        ;   Label: LAB_00579ada
    TEST EBP,EBP                        ; 00579ae0
    JNZ 0x00579afe                      ; 00579ae2
        ;   XREF to: 00579afe (CONDITIONAL_JUMP)  ; LAB_00579afe
    POP EBP                             ; 00579ae4
    POP ESI                             ; 00579ae5
    POP EBX                             ; 00579ae6
    RET                                 ; 00579ae7
    PUSH EDX                            ; 00579ae8
        ;   Label: LAB_00579ae8
    CALL crt_unknown.c_FUN_005a3770     ; 00579ae9
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBX,EBX                         ; 00579aee
    ADD ESP,0x4                         ; 00579af0
    MOV dword ptr [0x0060b010],EBX      ; 00579af3 | DAT_0060b010
    JMP 0x00579a71                      ; 00579af9
        ;   XREF to: 00579a71 (UNCONDITIONAL_JUMP)  ; LAB_00579a71
    PUSH EBP                            ; 00579afe
        ;   Label: LAB_00579afe
    MOV EDX,dword ptr [EBP]             ; 00579aff
    CALL dword ptr [EDX + 0x4c]         ; 00579b02
    MOV EAX,[0x02d0bce0]                ; 00579b05 | DAT_02d0bce0
    PUSH EAX                            ; 00579b0a
    MOV EDX,dword ptr [EAX]             ; 00579b0b
    CALL dword ptr [EDX + 0x8]          ; 00579b0d
    XOR EAX,EAX                         ; 00579b10
    MOV [0x02d0bce0],EAX                ; 00579b12 | DAT_02d0bce0
    POP EBP                             ; 00579b17
    POP ESI                             ; 00579b18
    POP EBX                             ; 00579b19
    RET                                 ; 00579b1a

