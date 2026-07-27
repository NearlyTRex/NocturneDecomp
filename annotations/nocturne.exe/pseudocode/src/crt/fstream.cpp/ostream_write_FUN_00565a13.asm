; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_fstream_cpp_ostream_write_FUN_00565a13(int *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[2]:
;   core_dcamera.cpp_FUN_00446810 at 00446929
;   core_game.cpp_FUN_004a3b90 at 004a3ef3
;
; Called Functions:
;   FUN_0056b327
;   FUN_0056b35c
;   FUN_0056b3c2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565a13
        ;   Label: crt_fstream.cpp_ostream_write_FUN_00565a13
    PUSH ESI                            ; 00565a14
    PUSH EDI                            ; 00565a15
    PUSH EBP                            ; 00565a16
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565a17
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00565a1b
    MOV EAX,dword ptr [EBX]             ; 00565a1f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565a21
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00565a24
    MOV EDX,EBX                         ; 00565a28
    TEST ECX,ECX                        ; 00565a2a
    JNZ 0x00565aa2                      ; 00565a2c
        ;   XREF to: 00565aa2 (CONDITIONAL_JUMP)  ; LAB_00565aa2
    MOV EAX,dword ptr [EBX]             ; 00565a32
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565a34
    ADD EAX,EBX                         ; 00565a37
    MOV EDI,dword ptr [EAX + 0x8]       ; 00565a39
    TEST EDI,EDI                        ; 00565a3c
    JNZ 0x00565aa9                      ; 00565a3e
        ;   XREF to: 00565aa9 (CONDITIONAL_JUMP)  ; LAB_00565aa9
    MOV EAX,dword ptr [EAX + 0xc]       ; 00565a40
    TEST AH,0x40                        ; 00565a43
    JNZ 0x00565aa9                      ; 00565a46
        ;   XREF to: 00565aa9 (CONDITIONAL_JUMP)  ; LAB_00565aa9
    TEST EBP,EBP                        ; 00565a48
        ;   Label: LAB_00565a48
    JZ 0x00565a94                       ; 00565a4a
        ;   XREF to: 00565a94 (CONDITIONAL_JUMP)  ; LAB_00565a94
    MOV EAX,dword ptr [EBX]             ; 00565a4c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00565a4e
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 00565a51
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00565a55
    MOV ESI,dword ptr [EDX + 0x20]      ; 00565a58
    SUB EAX,ESI                         ; 00565a5b
    CMP EBP,EAX                         ; 00565a5d
    JGE 0x00565ab8                      ; 00565a5f
        ;   XREF to: 00565ab8 (CONDITIONAL_JUMP)  ; LAB_00565ab8
    MOV EDI,ESI                         ; 00565a61
    MOV ECX,EBP                         ; 00565a63
    MOV ESI,dword ptr [ESP + 0x18]      ; 00565a65
    PUSH EDI                            ; 00565a69
    MOV EAX,ECX                         ; 00565a6a
    SHR ECX,0x2                         ; 00565a6c
    MOVSD.REP ES:EDI,ESI                ; 00565a6f
    MOV CL,AL                           ; 00565a71
    AND CL,0x3                          ; 00565a73
    MOVSB.REP ES:EDI,ESI                ; 00565a76
    POP EDI                             ; 00565a78
    ADD dword ptr [EDX + 0x20],EBP      ; 00565a79
    MOV EAX,EBP                         ; 00565a7c
    CMP EAX,EBP                         ; 00565a7e
        ;   Label: LAB_00565a7e
    JZ 0x00565a94                       ; 00565a80
        ;   XREF to: 00565a94 (CONDITIONAL_JUMP)  ; LAB_00565a94
    MOV EAX,dword ptr [EBX]             ; 00565a82
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565a84
    PUSH 0x2                            ; 00565a87
    ADD EAX,EBX                         ; 00565a89
    PUSH EAX                            ; 00565a8b
    CALL FUN_0056b327                   ; 00565a8c
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 00565a91
    MOV EAX,dword ptr [EBX]             ; 00565a94
        ;   Label: LAB_00565a94
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565a96
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00565a99
    TEST AH,0x20                        ; 00565a9d
    JNZ 0x00565aca                      ; 00565aa0
        ;   XREF to: 00565aca (CONDITIONAL_JUMP)  ; LAB_00565aca
    MOV EAX,EBX                         ; 00565aa2
        ;   Label: LAB_00565aa2
    POP EBP                             ; 00565aa4
    POP EDI                             ; 00565aa5
    POP ESI                             ; 00565aa6
    POP EBX                             ; 00565aa7
    RET                                 ; 00565aa8
    PUSH EDX                            ; 00565aa9
        ;   Label: LAB_00565aa9
    CALL FUN_0056b35c                   ; 00565aaa
        ;   XREF to: 0056b35c (UNCONDITIONAL_CALL)  ; undefined FUN_0056b35c()
    ADD ESP,0x4                         ; 00565aaf
    TEST EAX,EAX                        ; 00565ab2
    JNZ 0x00565a48                      ; 00565ab4
        ;   XREF to: 00565a48 (CONDITIONAL_JUMP)  ; LAB_00565a48
    JMP 0x00565aa2                      ; 00565ab6
        ;   XREF to: 00565aa2 (UNCONDITIONAL_JUMP)  ; LAB_00565aa2
    PUSH EBP                            ; 00565ab8
        ;   Label: LAB_00565ab8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00565ab9
    PUSH EDI                            ; 00565abd
    MOV EAX,dword ptr [EDX + 0x28]      ; 00565abe
    PUSH EDX                            ; 00565ac1
    CALL dword ptr [EAX + 0x4]          ; 00565ac2
    ADD ESP,0xc                         ; 00565ac5
    JMP 0x00565a7e                      ; 00565ac8
        ;   XREF to: 00565a7e (UNCONDITIONAL_JUMP)  ; LAB_00565a7e
    PUSH EBX                            ; 00565aca
        ;   Label: LAB_00565aca
    CALL FUN_0056b3c2                   ; 00565acb
        ;   XREF to: 0056b3c2 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b3c2()
    ADD ESP,0x4                         ; 00565ad0
    JMP 0x00565aa2                      ; 00565ad3
        ;   XREF to: 00565aa2 (UNCONDITIONAL_JUMP)  ; LAB_00565aa2

