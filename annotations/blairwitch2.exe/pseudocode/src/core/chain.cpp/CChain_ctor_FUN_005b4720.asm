; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_005b4720(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_chain.cpp_factoryFuncChain_FUN_005b46f0 at 005b4703
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b4720
        ;   Label: core_chain.cpp_CChain_ctor_FUN_005b4720
    PUSH EDI                            ; 005b4721
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b4722
    PUSH EDX                            ; 005b4726
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 005b4727
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b472c
    PUSH 0x601360                       ; 005b472f
    PUSH 0x14                           ; 005b4734
    ADD EAX,0x28c                       ; 005b4736
    PUSH EAX                            ; 005b473b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005b473c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA EDX,[EAX + 0xfffffd74]          ; 005b4741
    MOV dword ptr [EDX + 0x154],0x601284 ; 005b4747
    MOV dword ptr [EDX + 0x158],0xa     ; 005b4751
    MOV dword ptr [EDX + 0x15c],0x40a00000 ; 005b475b
    MOV dword ptr [EDX + 0x55c],0x3f800000 ; 005b4765
    MOV dword ptr [EDX + 0x560],0x3f000000 ; 005b476f
    MOV dword ptr [EDX + 0x564],0x42000000 ; 005b4779
    MOV ESI,0x5f1407                    ; 005b4783
    MOV dword ptr [EDX + 0x568],0x3f666666 ; 005b4788
    ADD ESP,0xc                         ; 005b4792
    MOV dword ptr [EDX + 0x164],0x0     ; 005b4795
    LEA EDI,[EDX + 0x174]               ; 005b479f
    MOV dword ptr [EDX + 0x168],0x0     ; 005b47a5
    PUSH EDI                            ; 005b47af
    MOV AL,byte ptr [ESI]               ; 005b47b0
        ;   Label: LAB_005b47b0
    MOV byte ptr [EDI],AL               ; 005b47b2
    CMP AL,0x0                          ; 005b47b4
    JZ 0x005b47c8                       ; 005b47b6
        ;   XREF to: 005b47c8 (CONDITIONAL_JUMP)  ; LAB_005b47c8
    MOV AL,byte ptr [ESI + 0x1]         ; 005b47b8
    ADD ESI,0x2                         ; 005b47bb
    MOV byte ptr [EDI + 0x1],AL         ; 005b47be
    ADD EDI,0x2                         ; 005b47c1
    CMP AL,0x0                          ; 005b47c4
    JNZ 0x005b47b0                      ; 005b47c6
        ;   XREF to: 005b47b0 (CONDITIONAL_JUMP)  ; LAB_005b47b0
    POP EDI                             ; 005b47c8
        ;   Label: LAB_005b47c8
    MOV dword ptr [EDX + 0x16c],0xd     ; 005b47c9
    MOV dword ptr [EDX + 0x170],0x0     ; 005b47d3
    MOV ESI,0x5f1415                    ; 005b47dd
    MOV dword ptr [EDX + 0xfc],0x1      ; 005b47e2
    LEA EDI,[EDX + 0x1b4]               ; 005b47ec
    MOV dword ptr [EDX + 0xf8],0x0      ; 005b47f2
    PUSH EDI                            ; 005b47fc
    MOV AL,byte ptr [ESI]               ; 005b47fd
        ;   Label: LAB_005b47fd
    MOV byte ptr [EDI],AL               ; 005b47ff
    CMP AL,0x0                          ; 005b4801
    JZ 0x005b4815                       ; 005b4803
        ;   XREF to: 005b4815 (CONDITIONAL_JUMP)  ; LAB_005b4815
    MOV AL,byte ptr [ESI + 0x1]         ; 005b4805
    ADD ESI,0x2                         ; 005b4808
    MOV byte ptr [EDI + 0x1],AL         ; 005b480b
    ADD EDI,0x2                         ; 005b480e
    CMP AL,0x0                          ; 005b4811
    JNZ 0x005b47fd                      ; 005b4813
        ;   XREF to: 005b47fd (CONDITIONAL_JUMP)  ; LAB_005b47fd
    POP EDI                             ; 005b4815
        ;   Label: LAB_005b4815
    MOV ESI,0x5f1424                    ; 005b4816
    LEA EDI,[EDX + 0x21c]               ; 005b481b
    PUSH EDI                            ; 005b4821
    MOV AL,byte ptr [ESI]               ; 005b4822
        ;   Label: LAB_005b4822
    MOV byte ptr [EDI],AL               ; 005b4824
    CMP AL,0x0                          ; 005b4826
    JZ 0x005b483a                       ; 005b4828
        ;   XREF to: 005b483a (CONDITIONAL_JUMP)  ; LAB_005b483a
    MOV AL,byte ptr [ESI + 0x1]         ; 005b482a
    ADD ESI,0x2                         ; 005b482d
    MOV byte ptr [EDI + 0x1],AL         ; 005b4830
    ADD EDI,0x2                         ; 005b4833
    CMP AL,0x0                          ; 005b4836
    JNZ 0x005b4822                      ; 005b4838
        ;   XREF to: 005b4822 (CONDITIONAL_JUMP)  ; LAB_005b4822
    POP EDI                             ; 005b483a
        ;   Label: LAB_005b483a
    MOV dword ptr [EDX + 0x574],0x0     ; 005b483b
    MOV EAX,EDX                         ; 005b4845
    MOV dword ptr [EDX + 0x288],0x1     ; 005b4847
    POP EDI                             ; 005b4851
    POP ESI                             ; 005b4852
    RET                                 ; 005b4853

