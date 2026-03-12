; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_processInEditor_FUN_005ba900(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   double DOUBLE_006530ca = 0.5
;   double DOUBLE_006530d2 = 0.100000000000000
;   double DOUBLE_006530da = 0.200000000000000
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_stairs.cpp_CStairs_buildCollision_FUN_005ba700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba900
        ;   Label: core_stairs.cpp_CStairs_processInEditor_FUN_005ba900
    PUSH EBP                            ; 005ba901
    MOV EBP,ESP                         ; 005ba902
    SUB ESP,0xc                         ; 005ba904
    AND ESP,0xfffffff8                  ; 005ba907
    MOV EBX,dword ptr [EBP + 0xc]       ; 005ba90a
    MOV EAX,dword ptr [EBX + 0x15c]     ; 005ba90d
    MOV dword ptr [ESP + 0x4],EAX       ; 005ba913
    MOV EAX,dword ptr [EBX + 0x158]     ; 005ba917
    PUSH 0x1d                           ; 005ba91d
    MOV dword ptr [ESP + 0xc],EAX       ; 005ba91f
    MOV EAX,[0x0067cf44]                ; 005ba923 | g_CKeysPtr
    PUSH EAX                            ; 005ba928 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005ba929 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005ba92b
    ADD ESP,0x8                         ; 005ba92d
    TEST EAX,EAX                        ; 005ba930
    JNZ 0x005baa6a                      ; 005ba932
        ;   XREF to: 005baa6a (CONDITIONAL_JUMP)  ; LAB_005baa6a
    PUSH EBX                            ; 005ba938
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005ba939
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ba93e
    FLD float ptr [EBX + 0x160]         ; 005ba941
        ;   Label: LAB_005ba941
    FCOMP double ptr [0x006530da]       ; 005ba947 | DOUBLE_006530da
    FNSTSW AX                           ; 005ba94d
    SAHF                                ; 005ba94f
    JNC 0x005ba95c                      ; 005ba950
        ;   XREF to: 005ba95c (CONDITIONAL_JUMP)  ; LAB_005ba95c
    MOV dword ptr [EBX + 0x160],0x3e4ccccd ; 005ba952
    FLD float ptr [EBX + 0x158]         ; 005ba95c
        ;   Label: LAB_005ba95c
    FCOMP double ptr [0x006530da]       ; 005ba962 | DOUBLE_006530da
    FNSTSW AX                           ; 005ba968
    SAHF                                ; 005ba96a
    JNC 0x005ba977                      ; 005ba96b
        ;   XREF to: 005ba977 (CONDITIONAL_JUMP)  ; LAB_005ba977
    MOV dword ptr [EBX + 0x158],0x3e4ccccd ; 005ba96d
    FLD float ptr [EBX + 0x15c]         ; 005ba977
        ;   Label: LAB_005ba977
    FCOMP double ptr [0x006530da]       ; 005ba97d | DOUBLE_006530da
    FNSTSW AX                           ; 005ba983
    SAHF                                ; 005ba985
    JNC 0x005ba992                      ; 005ba986
        ;   XREF to: 005ba992 (CONDITIONAL_JUMP)  ; LAB_005ba992
    MOV dword ptr [EBX + 0x15c],0x3e4ccccd ; 005ba988
    MOV EDX,dword ptr [EBX + 0x16c]     ; 005ba992
        ;   Label: LAB_005ba992
    CMP EDX,0x1                         ; 005ba998
    JGE 0x005bab73                      ; 005ba99b
        ;   XREF to: 005bab73 (CONDITIONAL_JUMP)  ; LAB_005bab73
    MOV dword ptr [EBX + 0x16c],0x1     ; 005ba9a1
    FLD float ptr [EBX + 0x164]         ; 005ba9ab
        ;   Label: LAB_005ba9ab
    FCOMP double ptr [0x006530d2]       ; 005ba9b1 | DOUBLE_006530d2
    FNSTSW AX                           ; 005ba9b7
    SAHF                                ; 005ba9b9
    JNC 0x005ba9c6                      ; 005ba9ba
        ;   XREF to: 005ba9c6 (CONDITIONAL_JUMP)  ; LAB_005ba9c6
    MOV dword ptr [EBX + 0x164],0x3dcccccd ; 005ba9bc
    FLD float ptr [EBX + 0x164]         ; 005ba9c6
        ;   Label: LAB_005ba9c6
    FCOMP float ptr [EBX + 0x158]       ; 005ba9cc
    FNSTSW AX                           ; 005ba9d2
    SAHF                                ; 005ba9d4
    JBE 0x005ba9e3                      ; 005ba9d5
        ;   XREF to: 005ba9e3 (CONDITIONAL_JUMP)  ; LAB_005ba9e3
    MOV EAX,dword ptr [EBX + 0x158]     ; 005ba9d7
    MOV dword ptr [EBX + 0x164],EAX     ; 005ba9dd
    FLD float ptr [EBX + 0x168]         ; 005ba9e3
        ;   Label: LAB_005ba9e3
    FCOMP double ptr [0x006530d2]       ; 005ba9e9 | DOUBLE_006530d2
    FNSTSW AX                           ; 005ba9ef
    SAHF                                ; 005ba9f1
    JNC 0x005ba9fe                      ; 005ba9f2
        ;   XREF to: 005ba9fe (CONDITIONAL_JUMP)  ; LAB_005ba9fe
    MOV dword ptr [EBX + 0x168],0x3dcccccd ; 005ba9f4
    FLD float ptr [EBX + 0x168]         ; 005ba9fe
        ;   Label: LAB_005ba9fe
    FCOMP float ptr [EBX + 0x15c]       ; 005baa04
    FNSTSW AX                           ; 005baa0a
    SAHF                                ; 005baa0c
    JBE 0x005baa1b                      ; 005baa0d
        ;   XREF to: 005baa1b (CONDITIONAL_JUMP)  ; LAB_005baa1b
    MOV EAX,dword ptr [EBX + 0x15c]     ; 005baa0f
    MOV dword ptr [EBX + 0x168],EAX     ; 005baa15
    FLD float ptr [ESP + 0x4]           ; 005baa1b
        ;   Label: LAB_005baa1b
    MOV dword ptr [EBX + 0x30],0x0      ; 005baa1f
    FLD float ptr [ESP + 0x8]           ; 005baa26
    MOV dword ptr [EBX + 0x38],0x0      ; 005baa2a
    PUSH EBX                            ; 005baa31
    FXCH                                ; 005baa32
    FSUB float ptr [EBX + 0x15c]        ; 005baa34
    FXCH                                ; 005baa3a
    FSUB float ptr [EBX + 0x158]        ; 005baa3c
    FXCH                                ; 005baa42
    FADD float ptr [EBX + 0x28]         ; 005baa44
    FXCH                                ; 005baa47
    FADD float ptr [EBX + 0x24]         ; 005baa49
    FXCH                                ; 005baa4c
    FSTP float ptr [EBX + 0x28]         ; 005baa4e
    FSTP float ptr [EBX + 0x24]         ; 005baa51
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005baa54
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005baa59
    PUSH EBX                            ; 005baa5c
    CALL core_stairs.cpp_CStairs_buildCollision_FUN_005ba700 ; 005baa5d
        ;   XREF to: 005ba700 (UNCONDITIONAL_CALL)  ; void core_stairs.cpp_CStairs_buildCollision_FUN_005ba700(CStairs * this_ptr)
    ADD ESP,0x4                         ; 005baa62
    MOV ESP,EBP                         ; 005baa65
    POP EBP                             ; 005baa67
    POP EBX                             ; 005baa68
    RET                                 ; 005baa69
    MOV EAX,[0x0067b654]                ; 005baa6a | g_CGamePtr
        ;   Label: LAB_005baa6a
    PUSH 0x38                           ; 005baa6f
    FLD float ptr [EAX + 0x264]         ; 005baa71 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 005baa77 | g_CKeysPtr
    FMUL double ptr [0x006530ca]        ; 005baa7c | DOUBLE_006530ca
    PUSH EAX                            ; 005baa82 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005baa83 | g_CKeysInstance
    FSTP float ptr [ESP + 0x8]          ; 005baa85
    CALL dword ptr [EDX]                ; 005baa89
    ADD ESP,0x8                         ; 005baa8b
    TEST EAX,EAX                        ; 005baa8e
    JZ 0x005baa9e                       ; 005baa90
        ;   XREF to: 005baa9e (CONDITIONAL_JUMP)  ; LAB_005baa9e
    FLD float ptr [ESP]                 ; 005baa92
    FMUL double ptr [0x006530d2]        ; 005baa95 | DOUBLE_006530d2
    FSTP float ptr [ESP]                ; 005baa9b
    PUSH 0x4b                           ; 005baa9e
        ;   Label: LAB_005baa9e
    MOV EAX,[0x0067cf44]                ; 005baaa0 | g_CKeysPtr
    PUSH EAX                            ; 005baaa5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005baaa6 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005baaa8
    ADD ESP,0x8                         ; 005baaaa
    TEST EAX,EAX                        ; 005baaad
    JZ 0x005baac0                       ; 005baaaf
        ;   XREF to: 005baac0 (CONDITIONAL_JUMP)  ; LAB_005baac0
    FLD float ptr [EBX + 0x160]         ; 005baab1
    FSUB float ptr [ESP]                ; 005baab7
    FSTP float ptr [EBX + 0x160]        ; 005baaba
    PUSH 0x4d                           ; 005baac0
        ;   Label: LAB_005baac0
    MOV EAX,[0x0067cf44]                ; 005baac2 | g_CKeysPtr
    PUSH EAX                            ; 005baac7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005baac8 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005baaca
    ADD ESP,0x8                         ; 005baacc
    TEST EAX,EAX                        ; 005baacf
    JZ 0x005baae2                       ; 005baad1
        ;   XREF to: 005baae2 (CONDITIONAL_JUMP)  ; LAB_005baae2
    FLD float ptr [EBX + 0x160]         ; 005baad3
    FADD float ptr [ESP]                ; 005baad9
    FSTP float ptr [EBX + 0x160]        ; 005baadc
    PUSH 0x1e                           ; 005baae2
        ;   Label: LAB_005baae2
    MOV EAX,[0x0067cf44]                ; 005baae4 | g_CKeysPtr
    PUSH EAX                            ; 005baae9 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005baaea | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005baaec
    ADD ESP,0x8                         ; 005baaee
    TEST EAX,EAX                        ; 005baaf1
    JZ 0x005bab04                       ; 005baaf3
        ;   XREF to: 005bab04 (CONDITIONAL_JUMP)  ; LAB_005bab04
    FLD float ptr [EBX + 0x158]         ; 005baaf5
    FSUB float ptr [ESP]                ; 005baafb
    FSTP float ptr [EBX + 0x158]        ; 005baafe
    PUSH 0x10                           ; 005bab04
        ;   Label: LAB_005bab04
    MOV EAX,[0x0067cf44]                ; 005bab06 | g_CKeysPtr
    PUSH EAX                            ; 005bab0b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005bab0c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005bab0e
    ADD ESP,0x8                         ; 005bab10
    TEST EAX,EAX                        ; 005bab13
    JZ 0x005bab26                       ; 005bab15
        ;   XREF to: 005bab26 (CONDITIONAL_JUMP)  ; LAB_005bab26
    FLD float ptr [EBX + 0x158]         ; 005bab17
    FADD float ptr [ESP]                ; 005bab1d
    FSTP float ptr [EBX + 0x158]        ; 005bab20
    PUSH 0x50                           ; 005bab26
        ;   Label: LAB_005bab26
    MOV EAX,[0x0067cf44]                ; 005bab28 | g_CKeysPtr
    PUSH EAX                            ; 005bab2d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005bab2e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005bab30
    ADD ESP,0x8                         ; 005bab32
    TEST EAX,EAX                        ; 005bab35
    JZ 0x005bab48                       ; 005bab37
        ;   XREF to: 005bab48 (CONDITIONAL_JUMP)  ; LAB_005bab48
    FLD float ptr [EBX + 0x15c]         ; 005bab39
    FSUB float ptr [ESP]                ; 005bab3f
    FSTP float ptr [EBX + 0x15c]        ; 005bab42
    PUSH 0x48                           ; 005bab48
        ;   Label: LAB_005bab48
    MOV EAX,[0x0067cf44]                ; 005bab4a | g_CKeysPtr
    PUSH EAX                            ; 005bab4f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005bab50 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005bab52
    ADD ESP,0x8                         ; 005bab54
    TEST EAX,EAX                        ; 005bab57
    JZ 0x005ba941                       ; 005bab59
        ;   XREF to: 005ba941 (CONDITIONAL_JUMP)  ; LAB_005ba941
    FLD float ptr [EBX + 0x15c]         ; 005bab5f
    FADD float ptr [ESP]                ; 005bab65
    FSTP float ptr [EBX + 0x15c]        ; 005bab68
    JMP 0x005ba941                      ; 005bab6e
        ;   XREF to: 005ba941 (UNCONDITIONAL_JUMP)  ; LAB_005ba941
    CMP EDX,0x14                        ; 005bab73
        ;   Label: LAB_005bab73
    JLE 0x005ba9ab                      ; 005bab76
        ;   XREF to: 005ba9ab (CONDITIONAL_JUMP)  ; LAB_005ba9ab
    MOV dword ptr [EBX + 0x16c],0x14    ; 005bab7c
    JMP 0x005ba9ab                      ; 005bab86
        ;   XREF to: 005ba9ab (UNCONDITIONAL_JUMP)  ; LAB_005ba9ab

