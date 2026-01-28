; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_006151bf = 5
;   double DOUBLE_006151c7 = 0.200000000000000
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414460
        ;   Label: core_barrier.cpp_CBarrier_FUN_00414460
    PUSH EBP                            ; 00414461
    MOV EBP,ESP                         ; 00414462
    SUB ESP,0x10                        ; 00414464
    AND ESP,0xfffffff8                  ; 00414467
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041446a
    PUSH 0x1d                           ; 0041446d
    MOV EAX,[0x0067cf44]                ; 0041446f | g_CKeysPtr
    PUSH EAX                            ; 00414474 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414475 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00414477
    ADD ESP,0x8                         ; 00414479
    TEST EAX,EAX                        ; 0041447c
    JZ 0x004145fc                       ; 0041447e
        ;   XREF to: 004145fc (CONDITIONAL_JUMP)  ; LAB_004145fc
    MOV EAX,[0x0067b654]                ; 00414484 | g_CGamePtr
    PUSH 0x2a                           ; 00414489
    FLD float ptr [EAX + 0x264]         ; 0041448b | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 00414491 | g_CKeysPtr
    FMUL double ptr [0x006151bf]        ; 00414496 | DOUBLE_006151bf
    PUSH EAX                            ; 0041449c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0041449d | g_CKeysInstance
    FSTP float ptr [ESP + 0x8]          ; 0041449f
    CALL dword ptr [EDX]                ; 004144a3
    ADD ESP,0x8                         ; 004144a5
    TEST EAX,EAX                        ; 004144a8
    JZ 0x004144bc                       ; 004144aa
        ;   XREF to: 004144bc (CONDITIONAL_JUMP)  ; LAB_004144bc
    FLD float ptr [ESP]                 ; 004144ac
    FLD ST0                             ; 004144af
    FMUL double ptr [0x006151bf]        ; 004144b1 | DOUBLE_006151bf
    FSTP ST1                            ; 004144b7
    FSTP float ptr [ESP]                ; 004144b9
    PUSH 0x38                           ; 004144bc
        ;   Label: LAB_004144bc
    MOV EAX,[0x0067cf44]                ; 004144be | g_CKeysPtr
    PUSH EAX                            ; 004144c3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004144c4 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004144c6
    ADD ESP,0x8                         ; 004144c8
    TEST EAX,EAX                        ; 004144cb
    JZ 0x004144db                       ; 004144cd
        ;   XREF to: 004144db (CONDITIONAL_JUMP)  ; LAB_004144db
    FLD float ptr [ESP]                 ; 004144cf
    FMUL double ptr [0x006151c7]        ; 004144d2 | DOUBLE_006151c7
    FSTP float ptr [ESP]                ; 004144d8
    PUSH 0x4b                           ; 004144db
        ;   Label: LAB_004144db
    MOV EAX,[0x0067cf44]                ; 004144dd | g_CKeysPtr
    PUSH EAX                            ; 004144e2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004144e3 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004144e5
    ADD ESP,0x8                         ; 004144e7
    TEST EAX,EAX                        ; 004144ea
    JZ 0x004144fd                       ; 004144ec
        ;   XREF to: 004144fd (CONDITIONAL_JUMP)  ; LAB_004144fd
    FLD float ptr [EBX + 0x158]         ; 004144ee
    FSUB float ptr [ESP]                ; 004144f4
    FSTP float ptr [EBX + 0x158]        ; 004144f7
    PUSH 0x4d                           ; 004144fd
        ;   Label: LAB_004144fd
    MOV EAX,[0x0067cf44]                ; 004144ff | g_CKeysPtr
    PUSH EAX                            ; 00414504 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414505 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00414507
    ADD ESP,0x8                         ; 00414509
    TEST EAX,EAX                        ; 0041450c
    JZ 0x0041451f                       ; 0041450e
        ;   XREF to: 0041451f (CONDITIONAL_JUMP)  ; LAB_0041451f
    FLD float ptr [EBX + 0x158]         ; 00414510
    FADD float ptr [ESP]                ; 00414516
    FSTP float ptr [EBX + 0x158]        ; 00414519
    PUSH 0x1e                           ; 0041451f
        ;   Label: LAB_0041451f
    MOV EAX,[0x0067cf44]                ; 00414521 | g_CKeysPtr
    PUSH EAX                            ; 00414526 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414527 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00414529
    ADD ESP,0x8                         ; 0041452b
    TEST EAX,EAX                        ; 0041452e
    JZ 0x00414541                       ; 00414530
        ;   XREF to: 00414541 (CONDITIONAL_JUMP)  ; LAB_00414541
    FLD float ptr [EBX + 0x15c]         ; 00414532
    FSUB float ptr [ESP]                ; 00414538
    FSTP float ptr [EBX + 0x15c]        ; 0041453b
    PUSH 0x10                           ; 00414541
        ;   Label: LAB_00414541
    MOV EAX,[0x0067cf44]                ; 00414543 | g_CKeysPtr
    PUSH EAX                            ; 00414548 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414549 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0041454b
    ADD ESP,0x8                         ; 0041454d
    TEST EAX,EAX                        ; 00414550
    JZ 0x00414563                       ; 00414552
        ;   XREF to: 00414563 (CONDITIONAL_JUMP)  ; LAB_00414563
    FLD float ptr [EBX + 0x15c]         ; 00414554
    FADD float ptr [ESP]                ; 0041455a
    FSTP float ptr [EBX + 0x15c]        ; 0041455d
    PUSH 0x50                           ; 00414563
        ;   Label: LAB_00414563
    MOV EAX,[0x0067cf44]                ; 00414565 | g_CKeysPtr
    PUSH EAX                            ; 0041456a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0041456b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0041456d
    ADD ESP,0x8                         ; 0041456f
    TEST EAX,EAX                        ; 00414572
    JZ 0x00414585                       ; 00414574
        ;   XREF to: 00414585 (CONDITIONAL_JUMP)  ; LAB_00414585
    FLD float ptr [EBX + 0x160]         ; 00414576
    FSUB float ptr [ESP]                ; 0041457c
    FSTP float ptr [EBX + 0x160]        ; 0041457f
    PUSH 0x48                           ; 00414585
        ;   Label: LAB_00414585
    MOV EAX,[0x0067cf44]                ; 00414587 | g_CKeysPtr
    PUSH EAX                            ; 0041458c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0041458d | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0041458f
    ADD ESP,0x8                         ; 00414591
    TEST EAX,EAX                        ; 00414594
    JZ 0x004145a7                       ; 00414596
        ;   XREF to: 004145a7 (CONDITIONAL_JUMP)  ; LAB_004145a7
    FLD float ptr [EBX + 0x160]         ; 00414598
    FADD float ptr [ESP]                ; 0041459e
    FSTP float ptr [EBX + 0x160]        ; 004145a1
    MOV EDX,0x3f000000                  ; 004145a7
        ;   Label: LAB_004145a7
    MOV ECX,dword ptr [EBX + 0x158]     ; 004145ac
    MOV dword ptr [ESP + 0xc],EDX       ; 004145b2
    CMP ECX,EDX                         ; 004145b6
    JGE 0x004145c0                      ; 004145b8
        ;   XREF to: 004145c0 (CONDITIONAL_JUMP)  ; LAB_004145c0
    MOV dword ptr [EBX + 0x158],EDX     ; 004145ba
    FLD float ptr [EBX + 0x15c]         ; 004145c0
        ;   Label: LAB_004145c0
    FCOMP float ptr [ESP + 0xc]         ; 004145c6
    FNSTSW AX                           ; 004145ca
    SAHF                                ; 004145cc
    JNC 0x004145d9                      ; 004145cd
        ;   XREF to: 004145d9 (CONDITIONAL_JUMP)  ; LAB_004145d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004145cf
    MOV dword ptr [EBX + 0x15c],EAX     ; 004145d3
    FLD float ptr [EBX + 0x160]         ; 004145d9
        ;   Label: LAB_004145d9
    FCOMP float ptr [ESP + 0xc]         ; 004145df
    FNSTSW AX                           ; 004145e3
    SAHF                                ; 004145e5
    JC 0x004145ed                       ; 004145e6
        ;   XREF to: 004145ed (CONDITIONAL_JUMP)  ; LAB_004145ed
    MOV ESP,EBP                         ; 004145e8
    POP EBP                             ; 004145ea
    POP EBX                             ; 004145eb
    RET                                 ; 004145ec
    MOV EAX,dword ptr [ESP + 0xc]       ; 004145ed
        ;   Label: LAB_004145ed
    MOV dword ptr [EBX + 0x160],EAX     ; 004145f1
    MOV ESP,EBP                         ; 004145f7
    POP EBP                             ; 004145f9
    POP EBX                             ; 004145fa
    RET                                 ; 004145fb
    PUSH EBX                            ; 004145fc
        ;   Label: LAB_004145fc
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004145fd
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414602
    MOV ESP,EBP                         ; 00414605
    POP EBP                             ; 00414607
    POP EBX                             ; 00414608
    RET                                 ; 00414609

