; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d0a40(int param_1)
;
;
; XREF[1]:
;   FUN_004fcf70 at 004fd0aa
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_005da03c
;   TerminatedCString s_CHeroPlaceholder_createH_005da04d
;   undefined4 DAT_00618170
;   undefined4 DAT_01cedf50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00408ae0
;   FUN_0040c5a0
;   FUN_0040c8f0
;   FUN_004e4500
;   FUN_004fcda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0a40
        ;   Label: FUN_004d0a40
    PUSH ESI                            ; 004d0a41
    PUSH EBP                            ; 004d0a42
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d0a43
    MOV EDX,dword ptr [0x01cedf50]      ; 004d0a47 | DAT_01cedf50
    PUSH EDX                            ; 004d0a4d
    LEA EAX,[ESI + 0x2b8]               ; 004d0a4e
    PUSH EAX                            ; 004d0a54
    CALL FUN_0040c5a0                   ; 004d0a55
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 004d0a5a
    PUSH EAX                            ; 004d0a5d
    CALL FUN_0040c8f0                   ; 004d0a5e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d0a63
    MOV EBX,EAX                         ; 004d0a66
    TEST EAX,EAX                        ; 004d0a68
    JNZ 0x004d0a91                      ; 004d0a6a
        ;   XREF to: 004d0a91 (CONDITIONAL_JUMP)  ; LAB_004d0a91
    PUSH EDI                            ; 004d0a6c
    MOV ECX,0x5da03c                    ; 004d0a6d | = "..\\core\\hero.cpp"
    MOV EDI,0x747                       ; 004d0a72
    PUSH 0x5da04d                       ; 004d0a77 | = "CHeroPlaceholder::createHero - failed."
    MOV dword ptr [0x01d046a0],ECX      ; 004d0a7c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004d0a82 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004d0a88
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004d0a8d
    POP EDI                             ; 004d0a90
    PUSH EBX                            ; 004d0a91
        ;   Label: LAB_004d0a91
    MOV EBP,dword ptr [0x00618170]      ; 004d0a92 | DAT_00618170
    PUSH EBP                            ; 004d0a98
    CALL FUN_004fcda0                   ; 004d0a99
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcda0()
    LEA EAX,[ESI + 0x20]                ; 004d0a9e
    LEA EDX,[EBX + 0x20]                ; 004d0aa1
    MOV ECX,dword ptr [EAX]             ; 004d0aa4
    MOV dword ptr [EDX],ECX             ; 004d0aa6
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d0aa8
    MOV dword ptr [EDX + 0x4],ECX       ; 004d0aab
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d0aae
    MOV dword ptr [EDX + 0x8],ECX       ; 004d0ab1
    MOV EAX,dword ptr [EAX + 0xc]       ; 004d0ab4
    MOV dword ptr [EDX + 0xc],EAX       ; 004d0ab7
    LEA EDX,[EBX + 0x30]                ; 004d0aba
    LEA EAX,[ESI + 0x30]                ; 004d0abd
    ADD ESP,0x8                         ; 004d0ac0
    CMP EDX,EAX                         ; 004d0ac3
    JZ 0x004d0ad7                       ; 004d0ac5
        ;   XREF to: 004d0ad7 (CONDITIONAL_JUMP)  ; LAB_004d0ad7
    MOV ECX,dword ptr [EAX]             ; 004d0ac7
    MOV dword ptr [EDX],ECX             ; 004d0ac9
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d0acb
    MOV dword ptr [EDX + 0x4],ECX       ; 004d0ace
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d0ad1
    MOV dword ptr [EDX + 0x8],ECX       ; 004d0ad4
    PUSH EBX                            ; 004d0ad7
        ;   Label: LAB_004d0ad7
    CALL FUN_00408ae0                   ; 004d0ad8
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 004d0add
    MOV EAX,EBX                         ; 004d0ae0
    POP EBP                             ; 004d0ae2
    POP ESI                             ; 004d0ae3
    POP EBX                             ; 004d0ae4
    RET                                 ; 004d0ae5

