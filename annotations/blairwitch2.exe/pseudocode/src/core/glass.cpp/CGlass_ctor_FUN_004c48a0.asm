; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004c48a0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_factoryFuncGlass_FUN_004c4870 at 004c4883
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_mirror.cpp_CMirror_ctor_FUN_004f98a0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c48a0
        ;   Label: core_glass.cpp_CGlass_ctor_FUN_004c48a0
    PUSH EDI                            ; 004c48a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c48a2
    PUSH EDX                            ; 004c48a6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004c48a7
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c48ac
    ADD EAX,0x348                       ; 004c48af
    PUSH EAX                            ; 004c48b4
    CALL core_mirror.cpp_CMirror_ctor_FUN_004f98a0 ; 004c48b5
        ;   XREF to: 004f98a0 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_CMirror_ctor_FUN_004f98a0(CMirror * this_ptr)
    ADD ESP,0x4                         ; 004c48ba
    PUSH 0x5f22b0                       ; 004c48bd
    PUSH 0x19                           ; 004c48c2
    ADD EAX,0x1a0                       ; 004c48c4
    PUSH EAX                            ; 004c48c9
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004c48ca
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA EDX,[EAX + 0xfffffb18]          ; 004c48cf
    MOV dword ptr [EDX + 0x2b0],0x5f7a84 ; 004c48d5
    MOV ESI,0x5d9279                    ; 004c48df
    MOV dword ptr [EDX + 0x2b4],0x40800000 ; 004c48e4
    ADD ESP,0xc                         ; 004c48ee
    MOV dword ptr [EDX + 0x2b8],0x40800000 ; 004c48f1
    LEA EDI,[EDX + 0x2c8]               ; 004c48fb
    MOV dword ptr [EDX + 0x2bc],0x3dcccccd ; 004c4901
    PUSH EDI                            ; 004c490b
    MOV AL,byte ptr [ESI]               ; 004c490c
        ;   Label: LAB_004c490c
    MOV byte ptr [EDI],AL               ; 004c490e
    CMP AL,0x0                          ; 004c4910
    JZ 0x004c4924                       ; 004c4912
        ;   XREF to: 004c4924 (CONDITIONAL_JUMP)  ; LAB_004c4924
    MOV AL,byte ptr [ESI + 0x1]         ; 004c4914
    ADD ESI,0x2                         ; 004c4917
    MOV byte ptr [EDI + 0x1],AL         ; 004c491a
    ADD EDI,0x2                         ; 004c491d
    CMP AL,0x0                          ; 004c4920
    JNZ 0x004c490c                      ; 004c4922
        ;   XREF to: 004c490c (CONDITIONAL_JUMP)  ; LAB_004c490c
    POP EDI                             ; 004c4924
        ;   Label: LAB_004c4924
    MOV dword ptr [EDX + 0x2c4],0x0     ; 004c4925
    MOV dword ptr [EDX + 0x2c0],0xd     ; 004c492f
    MOV dword ptr [EDX + 0x2d8],0x8000  ; 004c4939
    MOV dword ptr [EDX + 0x2dc],0x0     ; 004c4943
    MOV ESI,0x5d9286                    ; 004c494d
    MOV byte ptr [EDX + 0x2e0],0x0      ; 004c4952
    LEA EDI,[EDX + 0x468]               ; 004c4959
    MOV dword ptr [EDX + 0x344],0x0     ; 004c495f
    PUSH EDI                            ; 004c4969
    MOV AL,byte ptr [ESI]               ; 004c496a
        ;   Label: LAB_004c496a
    MOV byte ptr [EDI],AL               ; 004c496c
    CMP AL,0x0                          ; 004c496e
    JZ 0x004c4982                       ; 004c4970
        ;   XREF to: 004c4982 (CONDITIONAL_JUMP)  ; LAB_004c4982
    MOV AL,byte ptr [ESI + 0x1]         ; 004c4972
    ADD ESI,0x2                         ; 004c4975
    MOV byte ptr [EDI + 0x1],AL         ; 004c4978
    ADD EDI,0x2                         ; 004c497b
    CMP AL,0x0                          ; 004c497e
    JNZ 0x004c496a                      ; 004c4980
        ;   XREF to: 004c496a (CONDITIONAL_JUMP)  ; LAB_004c496a
    POP EDI                             ; 004c4982
        ;   Label: LAB_004c4982
    MOV ESI,0x5d928b                    ; 004c4983
    LEA EDI,[EDX + 0x4d8]               ; 004c4988
    MOV dword ptr [EDX + 0x4cc],0x0     ; 004c498e
    PUSH EDI                            ; 004c4998
    MOV AL,byte ptr [ESI]               ; 004c4999
        ;   Label: LAB_004c4999
    MOV byte ptr [EDI],AL               ; 004c499b
    CMP AL,0x0                          ; 004c499d
    JZ 0x004c49b1                       ; 004c499f
        ;   XREF to: 004c49b1 (CONDITIONAL_JUMP)  ; LAB_004c49b1
    MOV AL,byte ptr [ESI + 0x1]         ; 004c49a1
    ADD ESI,0x2                         ; 004c49a4
    MOV byte ptr [EDI + 0x1],AL         ; 004c49a7
    ADD EDI,0x2                         ; 004c49aa
    CMP AL,0x0                          ; 004c49ad
    JNZ 0x004c4999                      ; 004c49af
        ;   XREF to: 004c4999 (CONDITIONAL_JUMP)  ; LAB_004c4999
    POP EDI                             ; 004c49b1
        ;   Label: LAB_004c49b1
    MOV dword ptr [EDX + 0x4d4],0x0     ; 004c49b2
    MOV dword ptr [EDX + 0x4d0],0xd     ; 004c49bc
    MOV EAX,EDX                         ; 004c49c6
    MOV dword ptr [EDX + 0xc98],0x0     ; 004c49c8
    POP EDI                             ; 004c49d2
    POP ESI                             ; 004c49d3
    RET                                 ; 004c49d4

