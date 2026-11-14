; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_basicene_cpp_CBasicEnemy_checkVictim_FUN_0059f6b0(CBasicEnemy *this_ptr)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Death_005ef98c
;   TerminatedCString s_Animation_005ef992
;
; Called Functions:
;   core_muzzle.cpp_FUN_0059d8e0
;   core_muzzle.cpp_FUN_0059daa0
;   core_muzzle.cpp_FUN_0059db90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f6b0
        ;   Label: core_basicene.cpp_CBasicEnemy_checkVictim_FUN_0059f6b0
    PUSH ESI                            ; 0059f6b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059f6b2
    PUSH 0x5ef98c                       ; 0059f6b6 | = "Death"
    LEA ESI,[EBX + 0x10af8]             ; 0059f6bb
    PUSH ESI                            ; 0059f6c1
    CALL core_muzzle.cpp_FUN_0059daa0   ; 0059f6c2
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 0059f6c7
    TEST EAX,EAX                        ; 0059f6ca
    JZ 0x0059f6d6                       ; 0059f6cc
        ;   XREF to: 0059f6d6 (CONDITIONAL_JUMP)  ; LAB_0059f6d6
    MOV EAX,0x1                         ; 0059f6ce
        ;   Label: LAB_0059f6ce
    POP ESI                             ; 0059f6d3
    POP EBX                             ; 0059f6d4
    RET                                 ; 0059f6d5
    PUSH 0x5ef992                       ; 0059f6d6 | = "Animation"
        ;   Label: LAB_0059f6d6
    PUSH ESI                            ; 0059f6db
    CALL core_muzzle.cpp_FUN_0059daa0   ; 0059f6dc
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 0059f6e1
    TEST EAX,EAX                        ; 0059f6e4
    JNZ 0x0059f6ce                      ; 0059f6e6
        ;   XREF to: 0059f6ce (CONDITIONAL_JUMP)  ; LAB_0059f6ce
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0059f6e8
    TEST EDX,EDX                        ; 0059f6ee
    JNZ 0x0059f703                      ; 0059f6f0
        ;   XREF to: 0059f703 (CONDITIONAL_JUMP)  ; LAB_0059f703
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0059f6f2
        ;   Label: LAB_0059f6f2
    JZ 0x0059f722                       ; 0059f6f9
        ;   XREF to: 0059f722 (CONDITIONAL_JUMP)  ; LAB_0059f722
    MOV EAX,0x1                         ; 0059f6fb
    POP ESI                             ; 0059f700
    POP EBX                             ; 0059f701
    RET                                 ; 0059f702
    PUSH EDX                            ; 0059f703
        ;   Label: LAB_0059f703
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 0059f704
    CALL dword ptr [ESI + 0x114]        ; 0059f70a
    ADD ESP,0x4                         ; 0059f710
    CMP EAX,0x1                         ; 0059f713
    JLE 0x0059f6f2                      ; 0059f716
        ;   XREF to: 0059f6f2 (CONDITIONAL_JUMP)  ; LAB_0059f6f2
    MOV dword ptr [EBX + 0x10a78],0x0   ; 0059f718
    ADD EBX,0x10af8                     ; 0059f722
        ;   Label: LAB_0059f722
    PUSH EBX                            ; 0059f728
    CALL core_muzzle.cpp_FUN_0059db90   ; 0059f729
        ;   XREF to: 0059db90 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059db90()
    ADD ESP,0x4                         ; 0059f72e
    PUSH EAX                            ; 0059f731
    PUSH EBX                            ; 0059f732
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 0059f733
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059f738
    XOR EAX,EAX                         ; 0059f73b
    POP ESI                             ; 0059f73d
    POP EBX                             ; 0059f73e
    RET                                 ; 0059f73f

