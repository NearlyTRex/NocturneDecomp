; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00588de0(void)
;
;
; XREF[1]:
;   thunk_FUN_00588de0 at 00402ac0
;
; Referenced Globals:
;   TerminatedCString s_You_have_hit_a_kludge_in_005ee1eb
;   TerminatedCString s_You_are_setting_accelera_005ee211
;   TerminatedCString s_the_appropriate_bit_dept_005ee243
;   TerminatedCString s_I_am_forcing_the_screen_005ee264
;   TerminatedCString s_Press_any_key_to_continu_005ee295
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bba0
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661aec
;   undefined4 DAT_02661af8
;   ... and 1 more
;
; Called Functions:
;   DirectDrawCreate
;   FUN_00401fe0
;   FUN_0055b1f0
;   FUN_0055f770
;   FUN_00588a50
;   FUN_00589560
;   FUN_0058ead0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588de0
        ;   Label: FUN_00588de0
    PUSH ESI                            ; 00588de1
    PUSH EDI                            ; 00588de2
    PUSH EBP                            ; 00588de3
    MOV EDX,0x1                         ; 00588de4
    MOV ECX,dword ptr [0x0264bba0]      ; 00588de9 | DAT_0264bba0
    MOV dword ptr [0x02661af8],EDX      ; 00588def | DAT_02661af8
    TEST ECX,ECX                        ; 00588df5
    JZ 0x00588f4c                       ; 00588df7
        ;   XREF to: 00588f4c (CONDITIONAL_JUMP)  ; LAB_00588f4c
    CMP dword ptr [0x006141c0],0x10     ; 00588dfd | DAT_006141c0
    JL 0x00588f51                       ; 00588e04
        ;   XREF to: 00588f51 (CONDITIONAL_JUMP)  ; LAB_00588f51
    CALL FUN_0055b1f0                   ; 00588e0a
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
        ;   Label: LAB_00588e0a
    MOV EBP,dword ptr [0x02661aec]      ; 00588e0f | DAT_02661aec
    TEST EBP,EBP                        ; 00588e15
    JZ 0x00588e27                       ; 00588e17
        ;   XREF to: 00588e27 (CONDITIONAL_JUMP)  ; LAB_00588e27
    PUSH EBP                            ; 00588e19
    MOV EDX,dword ptr [EBP]             ; 00588e1a
    CALL dword ptr [EDX + 0x8]          ; 00588e1d
    XOR EAX,EAX                         ; 00588e20
    MOV [0x02661aec],EAX                ; 00588e22 | DAT_02661aec
    MOV EDX,dword ptr [0x02661ae8]      ; 00588e27 | DAT_02661ae8
        ;   Label: LAB_00588e27
    TEST EDX,EDX                        ; 00588e2d
    JZ 0x00588e41                       ; 00588e2f
        ;   XREF to: 00588e41 (CONDITIONAL_JUMP)  ; LAB_00588e41
    MOV EAX,EDX                         ; 00588e31
    PUSH EAX                            ; 00588e33
    MOV EDX,dword ptr [EDX]             ; 00588e34
    CALL dword ptr [EDX + 0x8]          ; 00588e36
    XOR ECX,ECX                         ; 00588e39
    MOV dword ptr [0x02661ae8],ECX      ; 00588e3b | DAT_02661ae8
    MOV EBX,dword ptr [0x02661ae4]      ; 00588e41 | DAT_02661ae4
        ;   Label: LAB_00588e41
    TEST EBX,EBX                        ; 00588e47
    JZ 0x00588e59                       ; 00588e49
        ;   XREF to: 00588e59 (CONDITIONAL_JUMP)  ; LAB_00588e59
    PUSH EBX                            ; 00588e4b
    MOV EDX,dword ptr [EBX]             ; 00588e4c
    XOR ESI,ESI                         ; 00588e4e
    CALL dword ptr [EDX + 0x8]          ; 00588e50
    MOV dword ptr [0x02661ae4],ESI      ; 00588e53 | DAT_02661ae4
    MOV EDI,dword ptr [0x02661ae0]      ; 00588e59 | DAT_02661ae0
        ;   Label: LAB_00588e59
    TEST EDI,EDI                        ; 00588e5f
    JZ 0x00588e7c                       ; 00588e61
        ;   XREF to: 00588e7c (CONDITIONAL_JUMP)  ; LAB_00588e7c
    PUSH EDI                            ; 00588e63
    MOV EDX,dword ptr [EDI]             ; 00588e64
    CALL dword ptr [EDX + 0x4c]         ; 00588e66
    MOV EAX,[0x02661ae0]                ; 00588e69 | DAT_02661ae0
    PUSH EAX                            ; 00588e6e
    MOV EDX,dword ptr [EAX]             ; 00588e6f
    XOR EBP,EBP                         ; 00588e71
    CALL dword ptr [EDX + 0x8]          ; 00588e73
    MOV dword ptr [0x02661ae0],EBP      ; 00588e76 | DAT_02661ae0
    MOV EAX,[0x006141c0]                ; 00588e7c | DAT_006141c0
        ;   Label: LAB_00588e7c
    PUSH EAX                            ; 00588e81
    MOV EDX,dword ptr [0x006141bc]      ; 00588e82 | DAT_006141bc
    PUSH EDX                            ; 00588e88
    MOV ECX,dword ptr [0x006141b8]      ; 00588e89 | DAT_006141b8
    PUSH ECX                            ; 00588e8f
    CALL FUN_0055f770                   ; 00588e90
        ;   XREF to: 0055f770 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f770()
    ADD ESP,0xc                         ; 00588e95
    TEST EAX,EAX                        ; 00588e98
    JNZ 0x00588f4c                      ; 00588e9a
        ;   XREF to: 00588f4c (CONDITIONAL_JUMP)  ; LAB_00588f4c
    MOV EDI,dword ptr [0x02661aec]      ; 00588ea0 | DAT_02661aec
    MOV [0x0264bba0],EAX                ; 00588ea6 | DAT_0264bba0
    MOV [0x01c37788],EAX                ; 00588eab | DAT_01c37788
    TEST EDI,EDI                        ; 00588eb0
    JNZ 0x00588fd2                      ; 00588eb2
        ;   XREF to: 00588fd2 (CONDITIONAL_JUMP)  ; LAB_00588fd2
    MOV EAX,[0x02661ae8]                ; 00588eb8 | DAT_02661ae8
        ;   Label: LAB_00588eb8
    TEST EAX,EAX                        ; 00588ebd
    JZ 0x00588ecf                       ; 00588ebf
        ;   XREF to: 00588ecf (CONDITIONAL_JUMP)  ; LAB_00588ecf
    PUSH EAX                            ; 00588ec1
    MOV EDX,dword ptr [EAX]             ; 00588ec2
    CALL dword ptr [EDX + 0x8]          ; 00588ec4
    XOR EDX,EDX                         ; 00588ec7
    MOV dword ptr [0x02661ae8],EDX      ; 00588ec9 | DAT_02661ae8
    MOV ECX,dword ptr [0x02661ae4]      ; 00588ecf | DAT_02661ae4
        ;   Label: LAB_00588ecf
    TEST ECX,ECX                        ; 00588ed5
    JZ 0x00588ee7                       ; 00588ed7
        ;   XREF to: 00588ee7 (CONDITIONAL_JUMP)  ; LAB_00588ee7
    PUSH ECX                            ; 00588ed9
    MOV EDX,dword ptr [ECX]             ; 00588eda
    XOR EBX,EBX                         ; 00588edc
    CALL dword ptr [EDX + 0x8]          ; 00588ede
    MOV dword ptr [0x02661ae4],EBX      ; 00588ee1 | DAT_02661ae4
    MOV ESI,dword ptr [0x02661ae0]      ; 00588ee7 | DAT_02661ae0
        ;   Label: LAB_00588ee7
    TEST ESI,ESI                        ; 00588eed
    JZ 0x00588f0a                       ; 00588eef
        ;   XREF to: 00588f0a (CONDITIONAL_JUMP)  ; LAB_00588f0a
    PUSH ESI                            ; 00588ef1
    MOV EDX,dword ptr [ESI]             ; 00588ef2
    CALL dword ptr [EDX + 0x4c]         ; 00588ef4
    MOV EAX,[0x02661ae0]                ; 00588ef7 | DAT_02661ae0
    PUSH EAX                            ; 00588efc
    MOV EDX,dword ptr [EAX]             ; 00588efd
    XOR EDI,EDI                         ; 00588eff
    CALL dword ptr [EDX + 0x8]          ; 00588f01
    MOV dword ptr [0x02661ae0],EDI      ; 00588f04 | DAT_02661ae0
    PUSH 0x0                            ; 00588f0a
        ;   Label: LAB_00588f0a
    PUSH 0x2661ae0                      ; 00588f0c | DAT_02661ae0
    PUSH 0x0                            ; 00588f11
    CALL DirectDrawCreate               ; 00588f13
        ;   XREF to: 005c74ae (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 00588f18
    JNZ 0x00588f30                      ; 00588f1a
        ;   XREF to: 00588f30 (CONDITIONAL_JUMP)  ; LAB_00588f30
    PUSH 0x11                           ; 00588f1c
    MOV EBP,dword ptr [0x02664628]      ; 00588f1e | DAT_02664628
    MOV EAX,[0x02661ae0]                ; 00588f24 | DAT_02661ae0
    PUSH EBP                            ; 00588f29
    MOV EDX,dword ptr [EAX]             ; 00588f2a
    PUSH EAX                            ; 00588f2c
    CALL dword ptr [EDX + 0x50]         ; 00588f2d
    MOV EAX,[0x006141c0]                ; 00588f30 | DAT_006141c0
        ;   Label: LAB_00588f30
    PUSH EAX                            ; 00588f35
    MOV EDX,dword ptr [0x006141bc]      ; 00588f36 | DAT_006141bc
    PUSH EDX                            ; 00588f3c
    MOV ECX,dword ptr [0x006141b8]      ; 00588f3d | DAT_006141b8
    PUSH ECX                            ; 00588f43
    CALL FUN_00588a50                   ; 00588f44
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00588a50()
    ADD ESP,0xc                         ; 00588f49
    POP EBP                             ; 00588f4c
        ;   Label: LAB_00588f4c
    POP EDI                             ; 00588f4d
    POP ESI                             ; 00588f4e
    POP EBX                             ; 00588f4f
    RET                                 ; 00588f50
    PUSH 0x10                           ; 00588f51
        ;   Label: LAB_00588f51
    MOV ESI,dword ptr [0x006141bc]      ; 00588f53 | DAT_006141bc
    PUSH ESI                            ; 00588f59
    MOV EDI,dword ptr [0x006141b8]      ; 00588f5a | DAT_006141b8
    PUSH EDI                            ; 00588f60
    CALL FUN_00588a50                   ; 00588f61
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00588a50()
    ADD ESP,0xc                         ; 00588f66
    CALL FUN_0055b1f0                   ; 00588f69
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    PUSH 0x0                            ; 00588f6e
    PUSH 0x0                            ; 00588f70
    PUSH 0x5ee1eb                       ; 00588f72 | = "You have hit a kludge in the program."
    CALL FUN_00401fe0                   ; 00588f77
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00588f7c
    PUSH 0x16                           ; 00588f7f
    PUSH 0x0                            ; 00588f81
    PUSH 0x5ee211                       ; 00588f83 | = "You are setting acceleration mode wit..."
    CALL FUN_00401fe0                   ; 00588f88
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00588f8d
    PUSH 0x21                           ; 00588f90
    PUSH 0x0                            ; 00588f92
    PUSH 0x5ee243                       ; 00588f94 | = "the appropriate bit depth first."
    CALL FUN_00401fe0                   ; 00588f99
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00588f9e
    PUSH 0x2c                           ; 00588fa1
    PUSH 0x0                            ; 00588fa3
    PUSH 0x5ee264                       ; 00588fa5 | = "I am forcing the screen to switch to ..."
    CALL FUN_00401fe0                   ; 00588faa
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00588faf
    PUSH 0x42                           ; 00588fb2
    PUSH 0x0                            ; 00588fb4
    PUSH 0x5ee295                       ; 00588fb6 | = "Press any key to continue."
    CALL FUN_00401fe0                   ; 00588fbb
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00588fc0
    CALL FUN_00589560                   ; 00588fc3
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CALL FUN_0058ead0                   ; 00588fc8
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
    JMP 0x00588e0a                      ; 00588fcd
        ;   XREF to: 00588e0a (UNCONDITIONAL_JUMP)  ; LAB_00588e0a
    PUSH EDI                            ; 00588fd2
        ;   Label: LAB_00588fd2
    MOV EDX,dword ptr [EDI]             ; 00588fd3
    XOR EBP,EBP                         ; 00588fd5
    CALL dword ptr [EDX + 0x8]          ; 00588fd7
    MOV dword ptr [0x02661aec],EBP      ; 00588fda | DAT_02661aec
    JMP 0x00588eb8                      ; 00588fe0
        ;   XREF to: 00588eb8 (UNCONDITIONAL_JUMP)  ; LAB_00588eb8

