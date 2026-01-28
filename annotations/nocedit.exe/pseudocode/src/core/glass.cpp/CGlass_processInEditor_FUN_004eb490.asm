; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_0062e191 = 4
;   double DOUBLE_0062e199 = 0.100000000000000
;   double DOUBLE_0062e1a1 = 5
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

    PUSH EBX                            ; 004eb490
        ;   Label: core_glass.cpp_CGlass_processInEditor_FUN_004eb490
    PUSH EBP                            ; 004eb491
    MOV EBP,ESP                         ; 004eb492
    SUB ESP,0x10                        ; 004eb494
    AND ESP,0xfffffff8                  ; 004eb497
    MOV EBX,dword ptr [EBP + 0xc]       ; 004eb49a
    PUSH 0x1d                           ; 004eb49d
    MOV EAX,[0x0067cf44]                ; 004eb49f | g_CKeysPtr
    PUSH EAX                            ; 004eb4a4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb4a5 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eb4a7
    ADD ESP,0x8                         ; 004eb4a9
    TEST EAX,EAX                        ; 004eb4ac
    JZ 0x004eb5e0                       ; 004eb4ae
        ;   XREF to: 004eb5e0 (CONDITIONAL_JUMP)  ; LAB_004eb5e0
    MOV EAX,[0x0067b654]                ; 004eb4b4 | g_CGamePtr
    PUSH 0x38                           ; 004eb4b9
    FLD float ptr [EAX + 0x264]         ; 004eb4bb | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 004eb4c1 | g_CKeysPtr
    FMUL double ptr [0x0062e191]        ; 004eb4c6 | DOUBLE_0062e191
    PUSH EAX                            ; 004eb4cc | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb4cd | g_CKeysInstance
    FSTP float ptr [ESP + 0x8]          ; 004eb4cf
    CALL dword ptr [EDX]                ; 004eb4d3
    ADD ESP,0x8                         ; 004eb4d5
    TEST EAX,EAX                        ; 004eb4d8
    JZ 0x004eb4e8                       ; 004eb4da
        ;   XREF to: 004eb4e8 (CONDITIONAL_JUMP)  ; LAB_004eb4e8
    FLD float ptr [ESP]                 ; 004eb4dc
    FMUL double ptr [0x0062e199]        ; 004eb4df | DOUBLE_0062e199
    FSTP float ptr [ESP]                ; 004eb4e5
    PUSH 0x2a                           ; 004eb4e8
        ;   Label: LAB_004eb4e8
    MOV EAX,[0x0067cf44]                ; 004eb4ea | g_CKeysPtr
    PUSH EAX                            ; 004eb4ef | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb4f0 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eb4f2
    ADD ESP,0x8                         ; 004eb4f4
    TEST EAX,EAX                        ; 004eb4f7
    JZ 0x004eb50b                       ; 004eb4f9
        ;   XREF to: 004eb50b (CONDITIONAL_JUMP)  ; LAB_004eb50b
    FLD float ptr [ESP]                 ; 004eb4fb
    FLD ST0                             ; 004eb4fe
    FMUL double ptr [0x0062e1a1]        ; 004eb500 | DOUBLE_0062e1a1
    FSTP ST1                            ; 004eb506
    FSTP float ptr [ESP]                ; 004eb508
    PUSH 0x4b                           ; 004eb50b
        ;   Label: LAB_004eb50b
    MOV EAX,[0x0067cf44]                ; 004eb50d | g_CKeysPtr
    PUSH EAX                            ; 004eb512 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb513 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eb515
    ADD ESP,0x8                         ; 004eb517
    TEST EAX,EAX                        ; 004eb51a
    JZ 0x004eb52d                       ; 004eb51c
        ;   XREF to: 004eb52d (CONDITIONAL_JUMP)  ; LAB_004eb52d
    FLD float ptr [EBX + 0x158]         ; 004eb51e
    FSUB float ptr [ESP]                ; 004eb524
    FSTP float ptr [EBX + 0x158]        ; 004eb527
    PUSH 0x4d                           ; 004eb52d
        ;   Label: LAB_004eb52d
    MOV EAX,[0x0067cf44]                ; 004eb52f | g_CKeysPtr
    PUSH EAX                            ; 004eb534 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb535 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eb537
    ADD ESP,0x8                         ; 004eb539
    TEST EAX,EAX                        ; 004eb53c
    JZ 0x004eb54f                       ; 004eb53e
        ;   XREF to: 004eb54f (CONDITIONAL_JUMP)  ; LAB_004eb54f
    FLD float ptr [EBX + 0x158]         ; 004eb540
    FADD float ptr [ESP]                ; 004eb546
    FSTP float ptr [EBX + 0x158]        ; 004eb549
    PUSH 0x50                           ; 004eb54f
        ;   Label: LAB_004eb54f
    MOV EAX,[0x0067cf44]                ; 004eb551 | g_CKeysPtr
    PUSH EAX                            ; 004eb556 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb557 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eb559
    ADD ESP,0x8                         ; 004eb55b
    TEST EAX,EAX                        ; 004eb55e
    JZ 0x004eb571                       ; 004eb560
        ;   XREF to: 004eb571 (CONDITIONAL_JUMP)  ; LAB_004eb571
    FLD float ptr [EBX + 0x15c]         ; 004eb562
    FSUB float ptr [ESP]                ; 004eb568
    FSTP float ptr [EBX + 0x15c]        ; 004eb56b
    PUSH 0x48                           ; 004eb571
        ;   Label: LAB_004eb571
    MOV EAX,[0x0067cf44]                ; 004eb573 | g_CKeysPtr
    PUSH EAX                            ; 004eb578 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004eb579 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eb57b
    ADD ESP,0x8                         ; 004eb57d
    TEST EAX,EAX                        ; 004eb580
    JZ 0x004eb593                       ; 004eb582
        ;   XREF to: 004eb593 (CONDITIONAL_JUMP)  ; LAB_004eb593
    FLD float ptr [EBX + 0x15c]         ; 004eb584
    FADD float ptr [ESP]                ; 004eb58a
    FSTP float ptr [EBX + 0x15c]        ; 004eb58d
    MOV EDX,0x3f000000                  ; 004eb593
        ;   Label: LAB_004eb593
    MOV ECX,dword ptr [EBX + 0x158]     ; 004eb598
    MOV dword ptr [ESP + 0xc],EDX       ; 004eb59e
    CMP ECX,EDX                         ; 004eb5a2
    JGE 0x004eb5ac                      ; 004eb5a4
        ;   XREF to: 004eb5ac (CONDITIONAL_JUMP)  ; LAB_004eb5ac
    MOV dword ptr [EBX + 0x158],EDX     ; 004eb5a6
    FLD float ptr [EBX + 0x15c]         ; 004eb5ac
        ;   Label: LAB_004eb5ac
    FCOMP float ptr [ESP + 0xc]         ; 004eb5b2
    FNSTSW AX                           ; 004eb5b6
    SAHF                                ; 004eb5b8
    JNC 0x004eb5c5                      ; 004eb5b9
        ;   XREF to: 004eb5c5 (CONDITIONAL_JUMP)  ; LAB_004eb5c5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004eb5bb
    MOV dword ptr [EBX + 0x15c],EAX     ; 004eb5bf
    MOV dword ptr [EBX + 0x160],0x3dcccccd ; 004eb5c5
        ;   Label: LAB_004eb5c5
    PUSH EBX                            ; 004eb5cf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eb5d0
    CALL dword ptr [EAX]                ; 004eb5d6
    ADD ESP,0x4                         ; 004eb5d8
    MOV ESP,EBP                         ; 004eb5db
    POP EBP                             ; 004eb5dd
    POP EBX                             ; 004eb5de
    RET                                 ; 004eb5df
    PUSH EBX                            ; 004eb5e0
        ;   Label: LAB_004eb5e0
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004eb5e1
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004eb5e6
    PUSH EBX                            ; 004eb5e9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eb5ea
    CALL dword ptr [EAX]                ; 004eb5f0
    ADD ESP,0x4                         ; 004eb5f2
    MOV ESP,EBP                         ; 004eb5f5
    POP EBP                             ; 004eb5f7
    POP EBX                             ; 004eb5f8
    RET                                 ; 004eb5f9

