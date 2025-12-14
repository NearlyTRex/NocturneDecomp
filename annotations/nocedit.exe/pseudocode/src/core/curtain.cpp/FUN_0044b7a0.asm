; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_curtain.cpp_FUN_0044b7a0()
;
;
; Referenced Globals:
;   double DOUBLE_00619de2 = 4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b7a0
        ;   Label: core_curtain.cpp_FUN_0044b7a0
    SUB ESP,0x8                         ; 0044b7a1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044b7a4
    PUSH 0x1d                           ; 0044b7a8
    MOV EAX,[0x0067cf44]                ; 0044b7aa | g_CKeysPtr
    PUSH EAX                            ; 0044b7af | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044b7b0 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 0044b7b2
    ADD ESP,0x8                         ; 0044b7b4
    TEST EAX,EAX                        ; 0044b7b7
    JZ 0x0044b8aa                       ; 0044b7b9
        ;   XREF to: 0044b8aa (CONDITIONAL_JUMP)  ; LAB_0044b8aa
    MOV EAX,[0x0067b654]                ; 0044b7bf | g_CGamePtr
    PUSH 0x4b                           ; 0044b7c4
    FLD float ptr [EAX + 0x264]         ; 0044b7c6 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 0044b7cc | g_CKeysPtr
    FMUL double ptr [0x00619de2]        ; 0044b7d1 | DOUBLE_00619de2
    PUSH EAX                            ; 0044b7d7 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044b7d8 | g_CKeysPtr
    FSTP float ptr [ESP + 0xc]          ; 0044b7da
    CALL dword ptr [EDX]                ; 0044b7de
    ADD ESP,0x8                         ; 0044b7e0
    TEST EAX,EAX                        ; 0044b7e3
    JZ 0x0044b7f7                       ; 0044b7e5
        ;   XREF to: 0044b7f7 (CONDITIONAL_JUMP)  ; LAB_0044b7f7
    FLD float ptr [EBX + 0x158]         ; 0044b7e7
    FSUB float ptr [ESP + 0x4]          ; 0044b7ed
    FSTP float ptr [EBX + 0x158]        ; 0044b7f1
    PUSH 0x4d                           ; 0044b7f7
        ;   Label: LAB_0044b7f7
    MOV EAX,[0x0067cf44]                ; 0044b7f9 | g_CKeysPtr
    PUSH EAX                            ; 0044b7fe | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044b7ff | g_CKeysPtr
    CALL dword ptr [EDX]                ; 0044b801
    ADD ESP,0x8                         ; 0044b803
    TEST EAX,EAX                        ; 0044b806
    JZ 0x0044b81a                       ; 0044b808
        ;   XREF to: 0044b81a (CONDITIONAL_JUMP)  ; LAB_0044b81a
    FLD float ptr [EBX + 0x158]         ; 0044b80a
    FADD float ptr [ESP + 0x4]          ; 0044b810
    FSTP float ptr [EBX + 0x158]        ; 0044b814
    PUSH 0x50                           ; 0044b81a
        ;   Label: LAB_0044b81a
    MOV EAX,[0x0067cf44]                ; 0044b81c | g_CKeysPtr
    PUSH EAX                            ; 0044b821 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044b822 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 0044b824
    ADD ESP,0x8                         ; 0044b826
    TEST EAX,EAX                        ; 0044b829
    JZ 0x0044b83d                       ; 0044b82b
        ;   XREF to: 0044b83d (CONDITIONAL_JUMP)  ; LAB_0044b83d
    FLD float ptr [EBX + 0x15c]         ; 0044b82d
    FSUB float ptr [ESP + 0x4]          ; 0044b833
    FSTP float ptr [EBX + 0x15c]        ; 0044b837
    PUSH 0x48                           ; 0044b83d
        ;   Label: LAB_0044b83d
    MOV EAX,[0x0067cf44]                ; 0044b83f | g_CKeysPtr
    PUSH EAX                            ; 0044b844 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044b845 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 0044b847
    ADD ESP,0x8                         ; 0044b849
    TEST EAX,EAX                        ; 0044b84c
    JZ 0x0044b860                       ; 0044b84e
        ;   XREF to: 0044b860 (CONDITIONAL_JUMP)  ; LAB_0044b860
    FLD float ptr [EBX + 0x15c]         ; 0044b850
    FADD float ptr [ESP + 0x4]          ; 0044b856
    FSTP float ptr [EBX + 0x15c]        ; 0044b85a
    MOV EDX,0x3f000000                  ; 0044b860
        ;   Label: LAB_0044b860
    MOV ECX,dword ptr [EBX + 0x158]     ; 0044b865
    MOV dword ptr [ESP],EDX             ; 0044b86b
    CMP ECX,EDX                         ; 0044b86e
    JGE 0x0044b878                      ; 0044b870
        ;   XREF to: 0044b878 (CONDITIONAL_JUMP)  ; LAB_0044b878
    MOV dword ptr [EBX + 0x158],EDX     ; 0044b872
    FLD float ptr [EBX + 0x15c]         ; 0044b878
        ;   Label: LAB_0044b878
    FCOMP float ptr [ESP]               ; 0044b87e
    FNSTSW AX                           ; 0044b881
    SAHF                                ; 0044b883
    JNC 0x0044b88f                      ; 0044b884
        ;   XREF to: 0044b88f (CONDITIONAL_JUMP)  ; LAB_0044b88f
    MOV EAX,dword ptr [ESP]             ; 0044b886
    MOV dword ptr [EBX + 0x15c],EAX     ; 0044b889
    MOV dword ptr [EBX + 0x160],0x3dcccccd ; 0044b88f
        ;   Label: LAB_0044b88f
    PUSH EBX                            ; 0044b899
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044b89a
    CALL dword ptr [EAX]                ; 0044b8a0
    ADD ESP,0x4                         ; 0044b8a2
    ADD ESP,0x8                         ; 0044b8a5
    POP EBX                             ; 0044b8a8
    RET                                 ; 0044b8a9
    PUSH EBX                            ; 0044b8aa
        ;   Label: LAB_0044b8aa
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0044b8ab
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044b8b0
    PUSH EBX                            ; 0044b8b3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044b8b4
    CALL dword ptr [EAX]                ; 0044b8ba
    ADD ESP,0x4                         ; 0044b8bc
    ADD ESP,0x8                         ; 0044b8bf
    POP EBX                             ; 0044b8c2
    RET                                 ; 0044b8c3

