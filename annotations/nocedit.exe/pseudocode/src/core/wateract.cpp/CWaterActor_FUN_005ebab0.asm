; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_wateract.cpp_CWaterActor_FUN_005ebab0(CWaterActor * this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_006574b7 = 4
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

    PUSH EBX                            ; 005ebab0
        ;   Label: core_wateract.cpp_CWaterActor_FUN_005ebab0
    SUB ESP,0xc                         ; 005ebab1
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ebab4
    PUSH 0x1d                           ; 005ebab8
    MOV EAX,[0x0067cf44]                ; 005ebaba | g_CKeysPtr
    PUSH EAX                            ; 005ebabf | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005ebac0 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005ebac2
    ADD ESP,0x8                         ; 005ebac4
    TEST EAX,EAX                        ; 005ebac7
    JZ 0x005ebbf0                       ; 005ebac9
        ;   XREF to: 005ebbf0 (CONDITIONAL_JUMP)  ; LAB_005ebbf0
    MOV EAX,[0x0067b654]                ; 005ebacf | g_CGamePtr
    PUSH 0x4b                           ; 005ebad4
    FLD float ptr [EAX + 0x264]         ; 005ebad6 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 005ebadc | g_CKeysPtr
    FMUL double ptr [0x006574b7]        ; 005ebae1 | DOUBLE_006574b7
    PUSH EAX                            ; 005ebae7 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005ebae8 | g_CKeysPtr
    FSTP float ptr [ESP + 0x10]         ; 005ebaea
    CALL dword ptr [EDX]                ; 005ebaee
    ADD ESP,0x8                         ; 005ebaf0
    TEST EAX,EAX                        ; 005ebaf3
    JZ 0x005ebb07                       ; 005ebaf5
        ;   XREF to: 005ebb07 (CONDITIONAL_JUMP)  ; LAB_005ebb07
    FLD float ptr [EBX + 0x158]         ; 005ebaf7
    FSUB float ptr [ESP + 0x8]          ; 005ebafd
    FSTP float ptr [EBX + 0x158]        ; 005ebb01
    PUSH 0x4d                           ; 005ebb07
        ;   Label: LAB_005ebb07
    MOV EAX,[0x0067cf44]                ; 005ebb09 | g_CKeysPtr
    PUSH EAX                            ; 005ebb0e | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005ebb0f | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005ebb11
    ADD ESP,0x8                         ; 005ebb13
    TEST EAX,EAX                        ; 005ebb16
    JZ 0x005ebb2a                       ; 005ebb18
        ;   XREF to: 005ebb2a (CONDITIONAL_JUMP)  ; LAB_005ebb2a
    FLD float ptr [EBX + 0x158]         ; 005ebb1a
    FADD float ptr [ESP + 0x8]          ; 005ebb20
    FSTP float ptr [EBX + 0x158]        ; 005ebb24
    PUSH 0x50                           ; 005ebb2a
        ;   Label: LAB_005ebb2a
    MOV EAX,[0x0067cf44]                ; 005ebb2c | g_CKeysPtr
    PUSH EAX                            ; 005ebb31 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005ebb32 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005ebb34
    ADD ESP,0x8                         ; 005ebb36
    TEST EAX,EAX                        ; 005ebb39
    JZ 0x005ebb4d                       ; 005ebb3b
        ;   XREF to: 005ebb4d (CONDITIONAL_JUMP)  ; LAB_005ebb4d
    FLD float ptr [EBX + 0x160]         ; 005ebb3d
    FSUB float ptr [ESP + 0x8]          ; 005ebb43
    FSTP float ptr [EBX + 0x160]        ; 005ebb47
    PUSH 0x48                           ; 005ebb4d
        ;   Label: LAB_005ebb4d
    MOV EAX,[0x0067cf44]                ; 005ebb4f | g_CKeysPtr
    PUSH EAX                            ; 005ebb54 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005ebb55 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005ebb57
    ADD ESP,0x8                         ; 005ebb59
    TEST EAX,EAX                        ; 005ebb5c
    JZ 0x005ebb70                       ; 005ebb5e
        ;   XREF to: 005ebb70 (CONDITIONAL_JUMP)  ; LAB_005ebb70
    FLD float ptr [EBX + 0x160]         ; 005ebb60
    FADD float ptr [ESP + 0x8]          ; 005ebb66
    FSTP float ptr [EBX + 0x160]        ; 005ebb6a
    MOV EDX,0x3f000000                  ; 005ebb70
        ;   Label: LAB_005ebb70
    MOV ECX,dword ptr [EBX + 0x158]     ; 005ebb75
    MOV dword ptr [ESP],EDX             ; 005ebb7b
    CMP ECX,EDX                         ; 005ebb7e
    JGE 0x005ebb88                      ; 005ebb80
        ;   XREF to: 005ebb88 (CONDITIONAL_JUMP)  ; LAB_005ebb88
    MOV dword ptr [EBX + 0x158],EDX     ; 005ebb82
    FLD float ptr [EBX + 0x160]         ; 005ebb88
        ;   Label: LAB_005ebb88
    FCOMP float ptr [ESP]               ; 005ebb8e
    FNSTSW AX                           ; 005ebb91
    SAHF                                ; 005ebb93
    JNC 0x005ebb9f                      ; 005ebb94
        ;   XREF to: 005ebb9f (CONDITIONAL_JUMP)  ; LAB_005ebb9f
    MOV EAX,dword ptr [ESP]             ; 005ebb96
    MOV dword ptr [EBX + 0x160],EAX     ; 005ebb99
    PUSH EDI                            ; 005ebb9f
        ;   Label: LAB_005ebb9f
    PUSH ESI                            ; 005ebba0
    MOV ESI,0x42c80000                  ; 005ebba1
    MOV EDI,dword ptr [EBX + 0x158]     ; 005ebba6
    MOV dword ptr [ESP + 0xc],ESI       ; 005ebbac
    CMP EDI,ESI                         ; 005ebbb0
    JLE 0x005ebbba                      ; 005ebbb2
        ;   XREF to: 005ebbba (CONDITIONAL_JUMP)  ; LAB_005ebbba
    MOV dword ptr [EBX + 0x158],ESI     ; 005ebbb4
    FLD float ptr [EBX + 0x160]         ; 005ebbba
        ;   Label: LAB_005ebbba
    FCOMP float ptr [ESP + 0xc]         ; 005ebbc0
    FNSTSW AX                           ; 005ebbc4
    SAHF                                ; 005ebbc6
    JBE 0x005ebbd3                      ; 005ebbc7
        ;   XREF to: 005ebbd3 (CONDITIONAL_JUMP)  ; LAB_005ebbd3
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ebbc9
    MOV dword ptr [EBX + 0x160],EAX     ; 005ebbcd
    MOV dword ptr [EBX + 0x15c],0x3dcccccd ; 005ebbd3
        ;   Label: LAB_005ebbd3
    POP ESI                             ; 005ebbdd
    POP EDI                             ; 005ebbde
    PUSH EBX                            ; 005ebbdf
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ebbe0
    CALL dword ptr [EAX]                ; 005ebbe6
    ADD ESP,0x4                         ; 005ebbe8
    ADD ESP,0xc                         ; 005ebbeb
    POP EBX                             ; 005ebbee
    RET                                 ; 005ebbef
    PUSH EBX                            ; 005ebbf0
        ;   Label: LAB_005ebbf0
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005ebbf1
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ebbf6
    PUSH EBX                            ; 005ebbf9
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ebbfa
    CALL dword ptr [EAX]                ; 005ebc00
    ADD ESP,0x4                         ; 005ebc02
    ADD ESP,0xc                         ; 005ebc05
    POP EBX                             ; 005ebc08
    RET                                 ; 005ebc09

