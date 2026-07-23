; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005433a0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_drummer_dfm_005964ba
;   undefined1* PTR_core_tbplayer.cpp_CDrummer_setup_FUN_005433d0_005a2d44 = 005433d0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   FUN_004ee950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005433a0
        ;   Label: FUN_005433a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005433a1
    PUSH EDX                            ; 005433a5
    CALL FUN_004ee950                   ; 005433a6
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee950()
    ADD ESP,0x4                         ; 005433ab
    PUSH 0x5964ba                       ; 005433ae | = "drummer.dfm"
    MOV EBX,EAX                         ; 005433b3
    ADD EAX,0x150                       ; 005433b5
    PUSH EAX                            ; 005433ba
    MOV dword ptr [EAX + -0x4],0x5a2d44 ; 005433bb | PTR_core_tbplayer.cpp_CDrummer_setup_FUN_005433d0_005a2d44
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 005433c2
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 005433c7
    MOV EAX,EBX                         ; 005433ca
    POP EBX                             ; 005433cc
    RET                                 ; 005433cd

