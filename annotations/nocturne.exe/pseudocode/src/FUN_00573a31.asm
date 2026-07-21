; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573a31(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_02de54a8
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   FUN_005638d0
;   FUN_0056c6d0
;   FUN_00573afc
;   FUN_00574000
;   FUN_00574030
;   FUN_00574264
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00573a31
        ;   Label: FUN_00573a31
    PUSH EDI                            ; 00573a32
    ADD byte ptr [EBX + 0x5108244c],CL  ; 00573a33
    MOV EBX,EAX                         ; 00573a39
    CALL FUN_005638d0                   ; 00573a3b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00573a40
    MOV ESI,dword ptr [ESP + 0xc]       ; 00573a43
    PUSH ESI                            ; 00573a47
    CALL FUN_005638d0                   ; 00573a48
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00573a4d
    TEST EBX,EBX                        ; 00573a50
    JNZ 0x00573a61                      ; 00573a52
        ;   XREF to: 00573a61 (CONDITIONAL_JUMP)  ; LAB_00573a61
    MOV EAX,0xffffffff                  ; 00573a54
    ADD ESP,0x14                        ; 00573a59
    POP EBP                             ; 00573a5c
    POP EDI                             ; 00573a5d
    POP ESI                             ; 00573a5e
    POP EBX                             ; 00573a5f
    RET                                 ; 00573a60
    MOV EDI,dword ptr [ESP + 0x28]      ; 00573a61
        ;   Label: LAB_00573a61
    PUSH EDI                            ; 00573a65
    CALL FUN_00573afc                   ; 00573a66
        ;   XREF to: 00573afc (UNCONDITIONAL_CALL)  ; undefined FUN_00573afc()
    ADD ESP,0x4                         ; 00573a6b
    TEST EAX,EAX                        ; 00573a6e
    JZ 0x00573a7f                       ; 00573a70
        ;   XREF to: 00573a7f (CONDITIONAL_JUMP)  ; LAB_00573a7f
    MOV EAX,0xffffffff                  ; 00573a72
    ADD ESP,0x14                        ; 00573a77
    POP EBP                             ; 00573a7a
    POP EDI                             ; 00573a7b
    POP ESI                             ; 00573a7c
    POP EBX                             ; 00573a7d
    RET                                 ; 00573a7e
    CMP dword ptr [0x02de54a8],0x0      ; 00573a7f | DAT_02de54a8
        ;   Label: LAB_00573a7f
    JZ 0x00573af4                       ; 00573a86
        ;   XREF to: 00573af4 (CONDITIONAL_JUMP)  ; LAB_00573af4
    PUSH EDI                            ; 00573a88
    CALL FUN_00574000                   ; 00573a89
        ;   XREF to: 00574000 (UNCONDITIONAL_CALL)  ; undefined FUN_00574000()
    ADD ESP,0x4                         ; 00573a8e
    LEA ESI,[EAX + 0x1]                 ; 00573a91
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573a94
    IMUL EAX,ESI                        ; 00573a98
    PUSH EAX                            ; 00573a9b
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00573a9c
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    MOV EBX,EAX                         ; 00573aa1
    ADD ESP,0x4                         ; 00573aa3
    TEST EAX,EAX                        ; 00573aa6
    JNZ 0x00573ac1                      ; 00573aa8
        ;   XREF to: 00573ac1 (CONDITIONAL_JUMP)  ; LAB_00573ac1
    PUSH 0x5                            ; 00573aaa
    CALL FUN_0056c6d0                   ; 00573aac
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c6d0()
    MOV EAX,0xffffffff                  ; 00573ab1
    ADD ESP,0x4                         ; 00573ab6
    ADD ESP,0x14                        ; 00573ab9
    POP EBP                             ; 00573abc
    POP EDI                             ; 00573abd
    POP ESI                             ; 00573abe
    POP EBX                             ; 00573abf
    RET                                 ; 00573ac0
    IMUL ESI,dword ptr [ESP]            ; 00573ac1
        ;   Label: LAB_00573ac1
    PUSH ESI                            ; 00573ac5
    PUSH EDI                            ; 00573ac6
    PUSH EAX                            ; 00573ac7
    CALL FUN_00574030                   ; 00573ac8
        ;   XREF to: 00574030 (UNCONDITIONAL_CALL)  ; undefined FUN_00574030()
    ADD ESP,0xc                         ; 00573acd
    CMP EAX,-0x1                        ; 00573ad0
    JNZ 0x00573aeb                      ; 00573ad3
        ;   XREF to: 00573aeb (CONDITIONAL_JUMP)  ; LAB_00573aeb
    PUSH EBX                            ; 00573ad5
    CALL FUN_005638d0                   ; 00573ad6
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    MOV EAX,0xffffffff                  ; 00573adb
    ADD ESP,0x4                         ; 00573ae0
    ADD ESP,0x14                        ; 00573ae3
    POP EBP                             ; 00573ae6
    POP EDI                             ; 00573ae7
    POP ESI                             ; 00573ae8
    POP EBX                             ; 00573ae9
    RET                                 ; 00573aea
    PUSH EBX                            ; 00573aeb
        ;   Label: LAB_00573aeb
    CALL FUN_00574264                   ; 00573aec
        ;   XREF to: 00574264 (UNCONDITIONAL_CALL)  ; undefined FUN_00574264()
    ADD ESP,0x4                         ; 00573af1
    ADD ESP,0x14                        ; 00573af4
        ;   Label: LAB_00573af4
    POP EBP                             ; 00573af7
    POP EDI                             ; 00573af8
    POP ESI                             ; 00573af9
    POP EBX                             ; 00573afa
    RET                                 ; 00573afb

