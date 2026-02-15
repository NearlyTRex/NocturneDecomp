; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_processInEditor_FUN_004ccaf0(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_0062a47e = 4
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

    PUSH EBX                            ; 004ccaf0
        ;   Label: core_flies.cpp_CFlies_processInEditor_FUN_004ccaf0
    SUB ESP,0x8                         ; 004ccaf1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ccaf4
    PUSH 0x1d                           ; 004ccaf8
    MOV EAX,[0x0067cf44]                ; 004ccafa | g_CKeysPtr
    PUSH EAX                            ; 004ccaff | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccb00 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004ccb02
    ADD ESP,0x8                         ; 004ccb04
    TEST EAX,EAX                        ; 004ccb07
    JZ 0x004ccc60                       ; 004ccb09
        ;   XREF to: 004ccc60 (CONDITIONAL_JUMP)  ; LAB_004ccc60
    MOV EAX,[0x0067b654]                ; 004ccb0f | g_CGamePtr
    PUSH 0x4b                           ; 004ccb14
    FLD float ptr [EAX + 0x264]         ; 004ccb16 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 004ccb1c | g_CKeysPtr
    FMUL double ptr [0x0062a47e]        ; 004ccb21 | DOUBLE_0062a47e
    PUSH EAX                            ; 004ccb27 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccb28 | g_CKeysInstance
    FSTP float ptr [ESP + 0xc]          ; 004ccb2a
    CALL dword ptr [EDX]                ; 004ccb2e
    ADD ESP,0x8                         ; 004ccb30
    TEST EAX,EAX                        ; 004ccb33
    JZ 0x004ccb47                       ; 004ccb35
        ;   XREF to: 004ccb47 (CONDITIONAL_JUMP)  ; LAB_004ccb47
    FLD float ptr [EBX + 0x158]         ; 004ccb37
    FSUB float ptr [ESP + 0x4]          ; 004ccb3d
    FSTP float ptr [EBX + 0x158]        ; 004ccb41
    PUSH 0x4d                           ; 004ccb47
        ;   Label: LAB_004ccb47
    MOV EAX,[0x0067cf44]                ; 004ccb49 | g_CKeysPtr
    PUSH EAX                            ; 004ccb4e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccb4f | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004ccb51
    ADD ESP,0x8                         ; 004ccb53
    TEST EAX,EAX                        ; 004ccb56
    JZ 0x004ccb6a                       ; 004ccb58
        ;   XREF to: 004ccb6a (CONDITIONAL_JUMP)  ; LAB_004ccb6a
    FLD float ptr [EBX + 0x158]         ; 004ccb5a
    FADD float ptr [ESP + 0x4]          ; 004ccb60
    FSTP float ptr [EBX + 0x158]        ; 004ccb64
    PUSH 0x1e                           ; 004ccb6a
        ;   Label: LAB_004ccb6a
    MOV EAX,[0x0067cf44]                ; 004ccb6c | g_CKeysPtr
    PUSH EAX                            ; 004ccb71 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccb72 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004ccb74
    ADD ESP,0x8                         ; 004ccb76
    TEST EAX,EAX                        ; 004ccb79
    JZ 0x004ccb8d                       ; 004ccb7b
        ;   XREF to: 004ccb8d (CONDITIONAL_JUMP)  ; LAB_004ccb8d
    FLD float ptr [EBX + 0x15c]         ; 004ccb7d
    FSUB float ptr [ESP + 0x4]          ; 004ccb83
    FSTP float ptr [EBX + 0x15c]        ; 004ccb87
    PUSH 0x10                           ; 004ccb8d
        ;   Label: LAB_004ccb8d
    MOV EAX,[0x0067cf44]                ; 004ccb8f | g_CKeysPtr
    PUSH EAX                            ; 004ccb94 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccb95 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004ccb97
    ADD ESP,0x8                         ; 004ccb99
    TEST EAX,EAX                        ; 004ccb9c
    JZ 0x004ccbb0                       ; 004ccb9e
        ;   XREF to: 004ccbb0 (CONDITIONAL_JUMP)  ; LAB_004ccbb0
    FLD float ptr [EBX + 0x15c]         ; 004ccba0
    FADD float ptr [ESP + 0x4]          ; 004ccba6
    FSTP float ptr [EBX + 0x15c]        ; 004ccbaa
    PUSH 0x50                           ; 004ccbb0
        ;   Label: LAB_004ccbb0
    MOV EAX,[0x0067cf44]                ; 004ccbb2 | g_CKeysPtr
    PUSH EAX                            ; 004ccbb7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccbb8 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004ccbba
    ADD ESP,0x8                         ; 004ccbbc
    TEST EAX,EAX                        ; 004ccbbf
    JZ 0x004ccbd3                       ; 004ccbc1
        ;   XREF to: 004ccbd3 (CONDITIONAL_JUMP)  ; LAB_004ccbd3
    FLD float ptr [EBX + 0x160]         ; 004ccbc3
    FSUB float ptr [ESP + 0x4]          ; 004ccbc9
    FSTP float ptr [EBX + 0x160]        ; 004ccbcd
    PUSH 0x48                           ; 004ccbd3
        ;   Label: LAB_004ccbd3
    MOV EAX,[0x0067cf44]                ; 004ccbd5 | g_CKeysPtr
    PUSH EAX                            ; 004ccbda | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004ccbdb | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004ccbdd
    ADD ESP,0x8                         ; 004ccbdf
    TEST EAX,EAX                        ; 004ccbe2
    JZ 0x004ccbf6                       ; 004ccbe4
        ;   XREF to: 004ccbf6 (CONDITIONAL_JUMP)  ; LAB_004ccbf6
    FLD float ptr [EBX + 0x160]         ; 004ccbe6
    FADD float ptr [ESP + 0x4]          ; 004ccbec
    FSTP float ptr [EBX + 0x160]        ; 004ccbf0
    MOV EDX,0x3f000000                  ; 004ccbf6
        ;   Label: LAB_004ccbf6
    MOV ECX,dword ptr [EBX + 0x158]     ; 004ccbfb
    MOV dword ptr [ESP],EDX             ; 004ccc01
    CMP ECX,EDX                         ; 004ccc04
    JGE 0x004ccc0e                      ; 004ccc06
        ;   XREF to: 004ccc0e (CONDITIONAL_JUMP)  ; LAB_004ccc0e
    MOV dword ptr [EBX + 0x158],EDX     ; 004ccc08
    FLD float ptr [EBX + 0x15c]         ; 004ccc0e
        ;   Label: LAB_004ccc0e
    FCOMP float ptr [ESP]               ; 004ccc14
    FNSTSW AX                           ; 004ccc17
    SAHF                                ; 004ccc19
    JNC 0x004ccc25                      ; 004ccc1a
        ;   XREF to: 004ccc25 (CONDITIONAL_JUMP)  ; LAB_004ccc25
    MOV EAX,dword ptr [ESP]             ; 004ccc1c
    MOV dword ptr [EBX + 0x15c],EAX     ; 004ccc1f
    FLD float ptr [EBX + 0x160]         ; 004ccc25
        ;   Label: LAB_004ccc25
    FCOMP float ptr [ESP]               ; 004ccc2b
    FNSTSW AX                           ; 004ccc2e
    SAHF                                ; 004ccc30
    JNC 0x004ccc3c                      ; 004ccc31
        ;   XREF to: 004ccc3c (CONDITIONAL_JUMP)  ; LAB_004ccc3c
    MOV EAX,dword ptr [ESP]             ; 004ccc33
    MOV dword ptr [EBX + 0x160],EAX     ; 004ccc36
    MOV EDX,dword ptr [0x0067b654]      ; 004ccc3c | g_CGamePtr
        ;   Label: LAB_004ccc3c
    SUB ESP,0x4                         ; 004ccc42
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ccc45
    MOV ECX,dword ptr [EDX + 0x264]     ; 004ccc4b | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],ECX             ; 004ccc51
    PUSH EBX                            ; 004ccc54
    CALL dword ptr [EAX + 0x4]          ; 004ccc55
    ADD ESP,0x8                         ; 004ccc58
    ADD ESP,0x8                         ; 004ccc5b
    POP EBX                             ; 004ccc5e
    RET                                 ; 004ccc5f
    PUSH EBX                            ; 004ccc60
        ;   Label: LAB_004ccc60
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004ccc61
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ccc66
    JMP 0x004ccc3c                      ; 004ccc69
        ;   XREF to: 004ccc3c (UNCONDITIONAL_JUMP)  ; LAB_004ccc3c

