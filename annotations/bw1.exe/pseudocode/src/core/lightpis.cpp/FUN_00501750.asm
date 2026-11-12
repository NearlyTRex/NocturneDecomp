; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightpis_cpp_FUN_00501750(CCharacter *param_1)
;
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501750
        ;   Label: core_lightpis.cpp_FUN_00501750
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501751
    PUSH EBX                            ; 00501755
    MOV EAX,dword ptr [EBX + 0x154]     ; 00501756
    CALL dword ptr [EAX + 0xe0]         ; 0050175c
    ADD ESP,0x4                         ; 00501762
    TEST EAX,EAX                        ; 00501765
    JZ 0x0050176d                       ; 00501767
        ;   XREF to: 0050176d (CONDITIONAL_JUMP)  ; LAB_0050176d
    XOR EAX,EAX                         ; 00501769
    POP EBX                             ; 0050176b
        ;   Label: LAB_0050176b
    RET                                 ; 0050176c
    PUSH 0x5e6f70                       ; 0050176d
        ;   Label: LAB_0050176d
    PUSH EBX                            ; 00501772
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00501773
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00501778
    TEST EAX,EAX                        ; 0050177b
    JZ 0x00501786                       ; 0050177d
        ;   XREF to: 00501786 (CONDITIONAL_JUMP)  ; LAB_00501786
    MOV EAX,0x1                         ; 0050177f
    POP EBX                             ; 00501784
    RET                                 ; 00501785
    PUSH 0x5e6f77                       ; 00501786
        ;   Label: LAB_00501786
    PUSH EBX                            ; 0050178b
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0050178c
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00501791
    TEST EAX,EAX                        ; 00501794
    JZ 0x0050179f                       ; 00501796
        ;   XREF to: 0050179f (CONDITIONAL_JUMP)  ; LAB_0050179f
    MOV EAX,0x1                         ; 00501798
    POP EBX                             ; 0050179d
    RET                                 ; 0050179e
    PUSH 0x5e6f7e                       ; 0050179f
        ;   Label: LAB_0050179f
    PUSH EBX                            ; 005017a4
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005017a5
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005017aa
    TEST EAX,EAX                        ; 005017ad
    JZ 0x005017b8                       ; 005017af
        ;   XREF to: 005017b8 (CONDITIONAL_JUMP)  ; LAB_005017b8
    MOV EAX,0x1                         ; 005017b1
    POP EBX                             ; 005017b6
    RET                                 ; 005017b7
    PUSH 0x5e6f8b                       ; 005017b8
        ;   Label: LAB_005017b8
    PUSH EBX                            ; 005017bd
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005017be
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005017c3
    TEST EAX,EAX                        ; 005017c6
    JZ 0x005017d1                       ; 005017c8
        ;   XREF to: 005017d1 (CONDITIONAL_JUMP)  ; LAB_005017d1
    MOV EAX,0x1                         ; 005017ca
    POP EBX                             ; 005017cf
    RET                                 ; 005017d0
    PUSH 0x5e6f95                       ; 005017d1
        ;   Label: LAB_005017d1
    PUSH EBX                            ; 005017d6
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005017d7
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005017dc
    TEST EAX,EAX                        ; 005017df
    JZ 0x0050176b                       ; 005017e1
        ;   XREF to: 0050176b (CONDITIONAL_JUMP)  ; LAB_0050176b
    MOV EAX,0x1                         ; 005017e3
    POP EBX                             ; 005017e8
    RET                                 ; 005017e9

