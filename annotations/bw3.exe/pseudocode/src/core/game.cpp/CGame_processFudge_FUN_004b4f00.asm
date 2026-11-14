; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processFudge_FUN_004b4f00(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8439
;
; Referenced Globals:
;   undefined4 DAT_005c2238
;   undefined4 DAT_00600284
;   undefined4 DAT_01d70a78
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4f00
        ;   Label: core_game.cpp_CGame_processFudge_FUN_004b4f00
    PUSH EBP                            ; 004b4f01
    MOV EBP,ESP                         ; 004b4f02
    SUB ESP,0xc                         ; 004b4f04
    AND ESP,0xfffffff8                  ; 004b4f07
    MOV EBX,dword ptr [EBP + 0xc]       ; 004b4f0a
    PUSH 0x1d                           ; 004b4f0d
    MOV EAX,[0x00600284]                ; 004b4f0f | DAT_00600284
    PUSH EAX                            ; 004b4f14 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4f15 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004b4f17
    ADD ESP,0x8                         ; 004b4f19
    TEST EAX,EAX                        ; 004b4f1c
    JZ 0x004b4f29                       ; 004b4f1e
        ;   XREF to: 004b4f29 (CONDITIONAL_JUMP)  ; LAB_004b4f29
    CMP dword ptr [EBX + 0xa70],0x0     ; 004b4f20
    JNZ 0x004b4f2e                      ; 004b4f27
        ;   XREF to: 004b4f2e (CONDITIONAL_JUMP)  ; LAB_004b4f2e
    MOV ESP,EBP                         ; 004b4f29
        ;   Label: LAB_004b4f29
    POP EBP                             ; 004b4f2b
    POP EBX                             ; 004b4f2c
    RET                                 ; 004b4f2d
    MOV EAX,dword ptr [EBX + 0xa74]     ; 004b4f2e
        ;   Label: LAB_004b4f2e
    PUSH 0x38                           ; 004b4f34
    MOV dword ptr [ESP + 0x4],EAX       ; 004b4f36
    MOV EAX,[0x00600284]                ; 004b4f3a | DAT_00600284
    PUSH EAX                            ; 004b4f3f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4f40 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004b4f42
    ADD ESP,0x8                         ; 004b4f44
    TEST EAX,EAX                        ; 004b4f47
    JZ 0x004b4f5b                       ; 004b4f49
        ;   XREF to: 004b4f5b (CONDITIONAL_JUMP)  ; LAB_004b4f5b
    FLD float ptr [ESP]                 ; 004b4f4b
    FLD ST0                             ; 004b4f4e
    FMUL double ptr [0x005c2238]        ; 004b4f50 | DAT_005c2238
    FSTP ST1                            ; 004b4f56
    FSTP float ptr [ESP]                ; 004b4f58
    PUSH 0x4b                           ; 004b4f5b
        ;   Label: LAB_004b4f5b
    MOV EAX,[0x00600284]                ; 004b4f5d | DAT_00600284
    PUSH EAX                            ; 004b4f62 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4f63 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b4f65
    ADD ESP,0x8                         ; 004b4f68
    TEST EAX,EAX                        ; 004b4f6b
    JZ 0x004b4f7c                       ; 004b4f6d
        ;   XREF to: 004b4f7c (CONDITIONAL_JUMP)  ; LAB_004b4f7c
    MOV EAX,dword ptr [EBX + 0xa70]     ; 004b4f6f
    FLD float ptr [EAX]                 ; 004b4f75
    FSUB float ptr [ESP]                ; 004b4f77
    FSTP float ptr [EAX]                ; 004b4f7a
    PUSH 0x4d                           ; 004b4f7c
        ;   Label: LAB_004b4f7c
    MOV EAX,[0x00600284]                ; 004b4f7e | DAT_00600284
    PUSH EAX                            ; 004b4f83 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4f84 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b4f86
    ADD ESP,0x8                         ; 004b4f89
    TEST EAX,EAX                        ; 004b4f8c
    JZ 0x004b4f9d                       ; 004b4f8e
        ;   XREF to: 004b4f9d (CONDITIONAL_JUMP)  ; LAB_004b4f9d
    MOV EAX,dword ptr [EBX + 0xa70]     ; 004b4f90
    FLD float ptr [EAX]                 ; 004b4f96
    FADD float ptr [ESP]                ; 004b4f98
    FSTP float ptr [EAX]                ; 004b4f9b
    PUSH 0x48                           ; 004b4f9d
        ;   Label: LAB_004b4f9d
    MOV EAX,[0x00600284]                ; 004b4f9f | DAT_00600284
    PUSH EAX                            ; 004b4fa4 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4fa5 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b4fa7
    ADD ESP,0x8                         ; 004b4faa
    TEST EAX,EAX                        ; 004b4fad
    JZ 0x004b4fc0                       ; 004b4faf
        ;   XREF to: 004b4fc0 (CONDITIONAL_JUMP)  ; LAB_004b4fc0
    MOV EAX,dword ptr [EBX + 0xa70]     ; 004b4fb1
    FLD float ptr [EAX + 0x8]           ; 004b4fb7
    FSUB float ptr [ESP]                ; 004b4fba
    FSTP float ptr [EAX + 0x8]          ; 004b4fbd
    PUSH 0x50                           ; 004b4fc0
        ;   Label: LAB_004b4fc0
    MOV EAX,[0x00600284]                ; 004b4fc2 | DAT_00600284
    PUSH EAX                            ; 004b4fc7 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4fc8 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b4fca
    ADD ESP,0x8                         ; 004b4fcd
    TEST EAX,EAX                        ; 004b4fd0
    JZ 0x004b4fe3                       ; 004b4fd2
        ;   XREF to: 004b4fe3 (CONDITIONAL_JUMP)  ; LAB_004b4fe3
    MOV EAX,dword ptr [EBX + 0xa70]     ; 004b4fd4
    FLD float ptr [EAX + 0x8]           ; 004b4fda
    FADD float ptr [ESP]                ; 004b4fdd
    FSTP float ptr [EAX + 0x8]          ; 004b4fe0
    PUSH 0x1e                           ; 004b4fe3
        ;   Label: LAB_004b4fe3
    MOV EAX,[0x00600284]                ; 004b4fe5 | DAT_00600284
    PUSH EAX                            ; 004b4fea | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b4feb | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b4fed
    ADD ESP,0x8                         ; 004b4ff0
    TEST EAX,EAX                        ; 004b4ff3
    JZ 0x004b5006                       ; 004b4ff5
        ;   XREF to: 004b5006 (CONDITIONAL_JUMP)  ; LAB_004b5006
    MOV EAX,dword ptr [EBX + 0xa70]     ; 004b4ff7
    FLD float ptr [EAX + 0x4]           ; 004b4ffd
    FSUB float ptr [ESP]                ; 004b5000
    FSTP float ptr [EAX + 0x4]          ; 004b5003
    PUSH 0x10                           ; 004b5006
        ;   Label: LAB_004b5006
    MOV EAX,[0x00600284]                ; 004b5008 | DAT_00600284
    PUSH EAX                            ; 004b500d | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b500e | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b5010
    ADD ESP,0x8                         ; 004b5013
    TEST EAX,EAX                        ; 004b5016
    JZ 0x004b4f29                       ; 004b5018
        ;   XREF to: 004b4f29 (CONDITIONAL_JUMP)  ; LAB_004b4f29
    MOV EAX,dword ptr [EBX + 0xa70]     ; 004b501e
    FLD float ptr [EAX + 0x4]           ; 004b5024
    FADD float ptr [ESP]                ; 004b5027
    FSTP float ptr [EAX + 0x4]          ; 004b502a
    MOV ESP,EBP                         ; 004b502d
    POP EBP                             ; 004b502f
    POP EBX                             ; 004b5030
    RET                                 ; 004b5031

