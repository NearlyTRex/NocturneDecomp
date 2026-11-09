; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b39d0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b65a8
;
; Referenced Globals:
;   undefined4 DAT_005d732b
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01d02f84
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b39d0
        ;   Label: core_game.cpp_FUN_004b39d0
    PUSH EBP                            ; 004b39d1
    MOV EBP,ESP                         ; 004b39d2
    SUB ESP,0xc                         ; 004b39d4
    AND ESP,0xfffffff8                  ; 004b39d7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004b39da
    PUSH 0x1d                           ; 004b39dd
    MOV EAX,[0x00617dd4]                ; 004b39df | DAT_00617dd4
    PUSH EAX                            ; 004b39e4 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b39e5 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b39e7
    ADD ESP,0x8                         ; 004b39e9
    TEST EAX,EAX                        ; 004b39ec
    JZ 0x004b39f9                       ; 004b39ee
        ;   XREF to: 004b39f9 (CONDITIONAL_JUMP)  ; LAB_004b39f9
    CMP dword ptr [EBX + 0x9e0],0x0     ; 004b39f0
    JNZ 0x004b39fe                      ; 004b39f7
        ;   XREF to: 004b39fe (CONDITIONAL_JUMP)  ; LAB_004b39fe
    MOV ESP,EBP                         ; 004b39f9
        ;   Label: LAB_004b39f9
    POP EBP                             ; 004b39fb
    POP EBX                             ; 004b39fc
    RET                                 ; 004b39fd
    MOV EAX,dword ptr [EBX + 0x9e4]     ; 004b39fe
        ;   Label: LAB_004b39fe
    PUSH 0x38                           ; 004b3a04
    MOV dword ptr [ESP + 0x4],EAX       ; 004b3a06
    MOV EAX,[0x00617dd4]                ; 004b3a0a | DAT_00617dd4
    PUSH EAX                            ; 004b3a0f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3a10 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b3a12
    ADD ESP,0x8                         ; 004b3a14
    TEST EAX,EAX                        ; 004b3a17
    JZ 0x004b3a2b                       ; 004b3a19
        ;   XREF to: 004b3a2b (CONDITIONAL_JUMP)  ; LAB_004b3a2b
    FLD float ptr [ESP]                 ; 004b3a1b
    FLD ST0                             ; 004b3a1e
    FMUL double ptr [0x005d732b]        ; 004b3a20 | DAT_005d732b
    FSTP ST1                            ; 004b3a26
    FSTP float ptr [ESP]                ; 004b3a28
    PUSH 0x4b                           ; 004b3a2b
        ;   Label: LAB_004b3a2b
    MOV EAX,[0x00617dd4]                ; 004b3a2d | DAT_00617dd4
    PUSH EAX                            ; 004b3a32 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3a33 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b3a35
    ADD ESP,0x8                         ; 004b3a38
    TEST EAX,EAX                        ; 004b3a3b
    JZ 0x004b3a4c                       ; 004b3a3d
        ;   XREF to: 004b3a4c (CONDITIONAL_JUMP)  ; LAB_004b3a4c
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 004b3a3f
    FLD float ptr [EAX]                 ; 004b3a45
    FSUB float ptr [ESP]                ; 004b3a47
    FSTP float ptr [EAX]                ; 004b3a4a
    PUSH 0x4d                           ; 004b3a4c
        ;   Label: LAB_004b3a4c
    MOV EAX,[0x00617dd4]                ; 004b3a4e | DAT_00617dd4
    PUSH EAX                            ; 004b3a53 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3a54 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b3a56
    ADD ESP,0x8                         ; 004b3a59
    TEST EAX,EAX                        ; 004b3a5c
    JZ 0x004b3a6d                       ; 004b3a5e
        ;   XREF to: 004b3a6d (CONDITIONAL_JUMP)  ; LAB_004b3a6d
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 004b3a60
    FLD float ptr [EAX]                 ; 004b3a66
    FADD float ptr [ESP]                ; 004b3a68
    FSTP float ptr [EAX]                ; 004b3a6b
    PUSH 0x48                           ; 004b3a6d
        ;   Label: LAB_004b3a6d
    MOV EAX,[0x00617dd4]                ; 004b3a6f | DAT_00617dd4
    PUSH EAX                            ; 004b3a74 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3a75 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b3a77
    ADD ESP,0x8                         ; 004b3a7a
    TEST EAX,EAX                        ; 004b3a7d
    JZ 0x004b3a90                       ; 004b3a7f
        ;   XREF to: 004b3a90 (CONDITIONAL_JUMP)  ; LAB_004b3a90
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 004b3a81
    FLD float ptr [EAX + 0x8]           ; 004b3a87
    FSUB float ptr [ESP]                ; 004b3a8a
    FSTP float ptr [EAX + 0x8]          ; 004b3a8d
    PUSH 0x50                           ; 004b3a90
        ;   Label: LAB_004b3a90
    MOV EAX,[0x00617dd4]                ; 004b3a92 | DAT_00617dd4
    PUSH EAX                            ; 004b3a97 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3a98 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b3a9a
    ADD ESP,0x8                         ; 004b3a9d
    TEST EAX,EAX                        ; 004b3aa0
    JZ 0x004b3ab3                       ; 004b3aa2
        ;   XREF to: 004b3ab3 (CONDITIONAL_JUMP)  ; LAB_004b3ab3
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 004b3aa4
    FLD float ptr [EAX + 0x8]           ; 004b3aaa
    FADD float ptr [ESP]                ; 004b3aad
    FSTP float ptr [EAX + 0x8]          ; 004b3ab0
    PUSH 0x1e                           ; 004b3ab3
        ;   Label: LAB_004b3ab3
    MOV EAX,[0x00617dd4]                ; 004b3ab5 | DAT_00617dd4
    PUSH EAX                            ; 004b3aba | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3abb | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b3abd
    ADD ESP,0x8                         ; 004b3ac0
    TEST EAX,EAX                        ; 004b3ac3
    JZ 0x004b3ad6                       ; 004b3ac5
        ;   XREF to: 004b3ad6 (CONDITIONAL_JUMP)  ; LAB_004b3ad6
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 004b3ac7
    FLD float ptr [EAX + 0x4]           ; 004b3acd
    FSUB float ptr [ESP]                ; 004b3ad0
    FSTP float ptr [EAX + 0x4]          ; 004b3ad3
    PUSH 0x10                           ; 004b3ad6
        ;   Label: LAB_004b3ad6
    MOV EAX,[0x00617dd4]                ; 004b3ad8 | DAT_00617dd4
    PUSH EAX                            ; 004b3add | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b3ade | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b3ae0
    ADD ESP,0x8                         ; 004b3ae3
    TEST EAX,EAX                        ; 004b3ae6
    JZ 0x004b39f9                       ; 004b3ae8
        ;   XREF to: 004b39f9 (CONDITIONAL_JUMP)  ; LAB_004b39f9
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 004b3aee
    FLD float ptr [EAX + 0x4]           ; 004b3af4
    FADD float ptr [ESP]                ; 004b3af7
    FSTP float ptr [EAX + 0x4]          ; 004b3afa
    MOV ESP,EBP                         ; 004b3afd
    POP EBP                             ; 004b3aff
    POP EBX                             ; 004b3b00
    RET                                 ; 004b3b01

