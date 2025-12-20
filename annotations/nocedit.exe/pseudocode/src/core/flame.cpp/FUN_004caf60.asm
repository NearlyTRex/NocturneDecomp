; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flame.cpp_FUN_004caf60()
;
;
; Referenced Globals:
;   double DOUBLE_0062a26e = 4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_flamecan.cpp_FUN_004cad90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caf60
        ;   Label: core_flame.cpp_FUN_004caf60
    SUB ESP,0x8                         ; 004caf61
    MOV EBX,dword ptr [ESP + 0x10]      ; 004caf64
    PUSH 0x1d                           ; 004caf68
    MOV EAX,[0x0067cf44]                ; 004caf6a | g_CKeysPtr
    PUSH EAX                            ; 004caf6f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004caf70 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004caf72
    ADD ESP,0x8                         ; 004caf74
    TEST EAX,EAX                        ; 004caf77
    JZ 0x004cb080                       ; 004caf79
        ;   XREF to: 004cb080 (CONDITIONAL_JUMP)  ; LAB_004cb080
    MOV EAX,[0x0067b654]                ; 004caf7f | g_CGamePtr
    PUSH 0x4b                           ; 004caf84
    FLD float ptr [EAX + 0x264]         ; 004caf86 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 004caf8c | g_CKeysPtr
    FMUL double ptr [0x0062a26e]        ; 004caf91 | DOUBLE_0062a26e
    PUSH EAX                            ; 004caf97 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004caf98 | g_CKeysInstance
    FSTP float ptr [ESP + 0xc]          ; 004caf9a
    CALL dword ptr [EDX]                ; 004caf9e
    ADD ESP,0x8                         ; 004cafa0
    TEST EAX,EAX                        ; 004cafa3
    JZ 0x004cafb7                       ; 004cafa5
        ;   XREF to: 004cafb7 (CONDITIONAL_JUMP)  ; LAB_004cafb7
    FLD float ptr [EBX + 0x158]         ; 004cafa7
    FSUB float ptr [ESP + 0x4]          ; 004cafad
    FSTP float ptr [EBX + 0x158]        ; 004cafb1
    PUSH 0x4d                           ; 004cafb7
        ;   Label: LAB_004cafb7
    MOV EAX,[0x0067cf44]                ; 004cafb9 | g_CKeysPtr
    PUSH EAX                            ; 004cafbe | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004cafbf | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004cafc1
    ADD ESP,0x8                         ; 004cafc3
    TEST EAX,EAX                        ; 004cafc6
    JZ 0x004cafda                       ; 004cafc8
        ;   XREF to: 004cafda (CONDITIONAL_JUMP)  ; LAB_004cafda
    FLD float ptr [EBX + 0x158]         ; 004cafca
    FADD float ptr [ESP + 0x4]          ; 004cafd0
    FSTP float ptr [EBX + 0x158]        ; 004cafd4
    PUSH 0x1e                           ; 004cafda
        ;   Label: LAB_004cafda
    MOV EAX,[0x0067cf44]                ; 004cafdc | g_CKeysPtr
    PUSH EAX                            ; 004cafe1 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004cafe2 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004cafe4
    ADD ESP,0x8                         ; 004cafe6
    TEST EAX,EAX                        ; 004cafe9
    JZ 0x004caffd                       ; 004cafeb
        ;   XREF to: 004caffd (CONDITIONAL_JUMP)  ; LAB_004caffd
    FLD float ptr [EBX + 0x15c]         ; 004cafed
    FSUB float ptr [ESP + 0x4]          ; 004caff3
    FSTP float ptr [EBX + 0x15c]        ; 004caff7
    PUSH 0x10                           ; 004caffd
        ;   Label: LAB_004caffd
    MOV EAX,[0x0067cf44]                ; 004cafff | g_CKeysPtr
    PUSH EAX                            ; 004cb004 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004cb005 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004cb007
    ADD ESP,0x8                         ; 004cb009
    TEST EAX,EAX                        ; 004cb00c
    JZ 0x004cb020                       ; 004cb00e
        ;   XREF to: 004cb020 (CONDITIONAL_JUMP)  ; LAB_004cb020
    FLD float ptr [EBX + 0x15c]         ; 004cb010
    FADD float ptr [ESP + 0x4]          ; 004cb016
    FSTP float ptr [EBX + 0x15c]        ; 004cb01a
    MOV EDX,0x3dcccccd                  ; 004cb020
        ;   Label: LAB_004cb020
    MOV ECX,dword ptr [EBX + 0x158]     ; 004cb025
    MOV dword ptr [ESP],EDX             ; 004cb02b
    CMP ECX,EDX                         ; 004cb02e
    JGE 0x004cb038                      ; 004cb030
        ;   XREF to: 004cb038 (CONDITIONAL_JUMP)  ; LAB_004cb038
    MOV dword ptr [EBX + 0x158],EDX     ; 004cb032
    FLD float ptr [EBX + 0x15c]         ; 004cb038
        ;   Label: LAB_004cb038
    FCOMP float ptr [ESP]               ; 004cb03e
    FNSTSW AX                           ; 004cb041
    SAHF                                ; 004cb043
    JNC 0x004cb04f                      ; 004cb044
        ;   XREF to: 004cb04f (CONDITIONAL_JUMP)  ; LAB_004cb04f
    MOV EAX,dword ptr [ESP]             ; 004cb046
    MOV dword ptr [EBX + 0x15c],EAX     ; 004cb049
    FLD float ptr [EBX + 0x160]         ; 004cb04f
        ;   Label: LAB_004cb04f
    FCOMP float ptr [ESP]               ; 004cb055
    FNSTSW AX                           ; 004cb058
    SAHF                                ; 004cb05a
    JNC 0x004cb066                      ; 004cb05b
        ;   XREF to: 004cb066 (CONDITIONAL_JUMP)  ; LAB_004cb066
    MOV EAX,dword ptr [ESP]             ; 004cb05d
    MOV dword ptr [EBX + 0x160],EAX     ; 004cb060
    MOV EAX,dword ptr [EBX + 0x158]     ; 004cb066
        ;   Label: LAB_004cb066
    MOV dword ptr [EBX + 0x160],EAX     ; 004cb06c
    PUSH EBX                            ; 004cb072
    CALL core_flamecan.cpp_FUN_004cad90 ; 004cb073
        ;   XREF to: 004cad90 (UNCONDITIONAL_CALL)  ; undefined core_flamecan.cpp_FUN_004cad90()
    ADD ESP,0x4                         ; 004cb078
    ADD ESP,0x8                         ; 004cb07b
    POP EBX                             ; 004cb07e
    RET                                 ; 004cb07f
    PUSH EBX                            ; 004cb080
        ;   Label: LAB_004cb080
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004cb081
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cb086
    PUSH EBX                            ; 004cb089
    CALL core_flamecan.cpp_FUN_004cad90 ; 004cb08a
        ;   XREF to: 004cad90 (UNCONDITIONAL_CALL)  ; undefined core_flamecan.cpp_FUN_004cad90()
    ADD ESP,0x4                         ; 004cb08f
    ADD ESP,0x8                         ; 004cb092
    POP EBX                             ; 004cb095
    RET                                 ; 004cb096

