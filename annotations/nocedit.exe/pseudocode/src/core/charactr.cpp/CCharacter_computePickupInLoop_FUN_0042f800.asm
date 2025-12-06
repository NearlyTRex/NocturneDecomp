; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bugs.cpp_FUN_004278d0 at 004278f8
;   core_tvbat.cpp_CTVBat_FUN_005e5260 at 005e53ea
;
; Referenced Globals:
;   undefined4 DAT_0065b834
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
;   core_charactr.cpp_CCharacter_FUN_0042d090
;   core_charactr.cpp_CCharacter_FUN_0042d530
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0042f800
        ;   Label: core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800
    SUB ESP,0x4                         ; 0042f801
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042f804
    PUSH EDI                            ; 0042f808
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0042f809 | void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)
    FLD float ptr [EDI + 0x2414]        ; 0042f80e
    ADD ESP,0x4                         ; 0042f814
    FCOMP float ptr [0x0065b834]        ; 0042f817 | DAT_0065b834
    FNSTSW AX                           ; 0042f81d
    SAHF                                ; 0042f81f
    JZ 0x0042f847                       ; 0042f820 | LAB_0042f847
        ;   XREF to: 0042f847 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042f822
        ;   Label: LAB_0042f822
    PUSH EDI                            ; 0042f824
    CALL core_charactr.cpp_CCharacter_FUN_0042d090 ; 0042f825 | void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)
        ;   XREF to: 0042d090 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042f82a
    PUSH EDI                            ; 0042f82d
    CALL core_charactr.cpp_CCharacter_FUN_0042d530 ; 0042f82e | void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)
    FLD float ptr [EDI + 0x243c]        ; 0042f833
    ADD ESP,0x4                         ; 0042f839
    FSTP float ptr [EDI + 0x2440]       ; 0042f83c
    ADD ESP,0x4                         ; 0042f842
    POP EDI                             ; 0042f845
    RET                                 ; 0042f846
    PUSH ESI                            ; 0042f847
        ;   Label: LAB_0042f847
    PUSH EBX                            ; 0042f848
    MOV ESI,EDI                         ; 0042f849
    XOR EBX,EBX                         ; 0042f84b
    CMP dword ptr [ESI + 0x24b4],0x0    ; 0042f84d
        ;   Label: LAB_0042f84d
    JNZ 0x0042f886                      ; 0042f854 | LAB_0042f886
        ;   XREF to: 0042f886 (CONDITIONAL_JUMP)
    INC EBX                             ; 0042f856
        ;   Label: LAB_0042f856
    ADD ESI,0x44                        ; 0042f857
    CMP EBX,0x2                         ; 0042f85a
    JL 0x0042f84d                       ; 0042f85d | LAB_0042f84d
        ;   XREF to: 0042f84d (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042f85f
    MOV EAX,dword ptr [EDI + 0x154]     ; 0042f861
    PUSH dword ptr [EDI + 0x2ddc]       ; 0042f867
    PUSH EDI                            ; 0042f86d
    CALL dword ptr [EAX + 0x38]         ; 0042f86e
    MOV dword ptr [ESP + 0x14],EAX      ; 0042f871
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042f875
    MOV dword ptr [EDI + 0x2414],EAX    ; 0042f879
    ADD ESP,0xc                         ; 0042f87f
    POP EBX                             ; 0042f882
    POP ESI                             ; 0042f883
    JMP 0x0042f822                      ; 0042f884 | LAB_0042f822
        ;   XREF to: 0042f822 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042f886
        ;   Label: LAB_0042f886
    PUSH EBX                            ; 0042f888
    PUSH EDI                            ; 0042f889
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 ; 0042f88a | void core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter * this_ptr)
        ;   XREF to: 0042ce80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042f88f
    JMP 0x0042f856                      ; 0042f892 | LAB_0042f856
        ;   XREF to: 0042f856 (UNCONDITIONAL_JUMP)

