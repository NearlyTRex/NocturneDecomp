; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(int param_1)
;
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180 at 004d91c6
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0 at 004d8f32
;
; Referenced Globals:
;   undefined4 DAT_00765a98
;   undefined4 DAT_01bcdef4
;   undefined4 DAT_02dd10bc
;   undefined4 DAT_02ddf54c
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e6b0
        ;   Label: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0
    PUSH ESI                            ; 0050e6b1
    PUSH EDI                            ; 0050e6b2
    PUSH EBP                            ; 0050e6b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050e6b4
    MOV dword ptr [EBX + 0x150bf4],0x0  ; 0050e6b8
    MOV dword ptr [EBX + 0x152b38],0x0  ; 0050e6c2
    MOV dword ptr [EBX + 0x154a7c],0x0  ; 0050e6cc
    MOV dword ptr [EBX + 0x158904],0x0  ; 0050e6d6
    MOV EDX,dword ptr [EBX + 0x14cd6c]  ; 0050e6e0
    MOV dword ptr [EBX + 0x14ecb0],0x0  ; 0050e6e6
    XOR EBP,EBP                         ; 0050e6f0
    TEST EDX,EDX                        ; 0050e6f2
    JLE 0x0050e7ba                      ; 0050e6f4
        ;   XREF to: 0050e7ba (CONDITIONAL_JUMP)  ; LAB_0050e7ba
    MOV EDI,EBX                         ; 0050e6fa
    MOV ESI,dword ptr [EDI + 0x14cd70]  ; 0050e6fc
        ;   Label: LAB_0050e6fc
    CMP dword ptr [ESI + 0xfc],0x0      ; 0050e702
    JNZ 0x0050e714                      ; 0050e709
        ;   XREF to: 0050e714 (CONDITIONAL_JUMP)  ; LAB_0050e714
    CMP dword ptr [ESI + 0xf8],0x0      ; 0050e70b
    JZ 0x0050e727                       ; 0050e712
        ;   XREF to: 0050e727 (CONDITIONAL_JUMP)  ; LAB_0050e727
    MOV EAX,dword ptr [EBX + 0x158904]  ; 0050e714
        ;   Label: LAB_0050e714
    MOV dword ptr [EBX + EAX*0x4 + 0x158908],ESI ; 0050e71a
    INC dword ptr [EBX + 0x158904]      ; 0050e721
    MOV EAX,[0x00765a98]                ; 0050e727 | DAT_00765a98
        ;   Label: LAB_0050e727
    PUSH EAX                            ; 0050e72c
    PUSH ESI                            ; 0050e72d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0050e72e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EDX,dword ptr [EBX + 0x14ecb0]  ; 0050e733
    MOV dword ptr [EBX + EDX*0x4 + 0x14ecb4],EAX ; 0050e739
    MOV EAX,dword ptr [EBX + 0x14ecb0]  ; 0050e740
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x14ecb4] ; 0050e746
    ADD ESP,0x8                         ; 0050e74d
    TEST EDX,EDX                        ; 0050e750
    JZ 0x0050e7bf                       ; 0050e752
        ;   XREF to: 0050e7bf (CONDITIONAL_JUMP)  ; LAB_0050e7bf
    MOV EAX,[0x01bcdef4]                ; 0050e754 | DAT_01bcdef4
    MOV EDX,dword ptr [EBX + 0x14ecb0]  ; 0050e759
    PUSH EAX                            ; 0050e75f
    INC EDX                             ; 0050e760
    PUSH ESI                            ; 0050e761
    MOV dword ptr [EBX + 0x14ecb0],EDX  ; 0050e762
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0050e768
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EDX,dword ptr [EBX + 0x150bf4]  ; 0050e76d
    MOV dword ptr [EBX + EDX*0x4 + 0x150bf8],EAX ; 0050e773
    MOV EAX,dword ptr [EBX + 0x150bf4]  ; 0050e77a
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x150bf8] ; 0050e780
    ADD ESP,0x8                         ; 0050e787
    TEST ECX,ECX                        ; 0050e78a
    JZ 0x0050e7a8                       ; 0050e78c
        ;   XREF to: 0050e7a8 (CONDITIONAL_JUMP)  ; LAB_0050e7a8
    INC EAX                             ; 0050e78e
    MOV dword ptr [EBX + 0x150bf4],EAX  ; 0050e78f
    MOV EAX,dword ptr [EBX + 0x152b38]  ; 0050e795
        ;   Label: LAB_0050e795
    MOV dword ptr [EBX + EAX*0x4 + 0x152b3c],ESI ; 0050e79b
    INC dword ptr [EBX + 0x152b38]      ; 0050e7a2
    INC EBP                             ; 0050e7a8
        ;   Label: LAB_0050e7a8
    MOV ECX,dword ptr [EBX + 0x14cd6c]  ; 0050e7a9
    ADD EDI,0x4                         ; 0050e7af
    CMP EBP,ECX                         ; 0050e7b2
    JL 0x0050e6fc                       ; 0050e7b4
        ;   XREF to: 0050e6fc (CONDITIONAL_JUMP)  ; LAB_0050e6fc
    POP EBP                             ; 0050e7ba
        ;   Label: LAB_0050e7ba
    POP EDI                             ; 0050e7bb
    POP ESI                             ; 0050e7bc
    POP EBX                             ; 0050e7bd
    RET                                 ; 0050e7be
    MOV ECX,dword ptr [0x02ddf54c]      ; 0050e7bf | DAT_02ddf54c
        ;   Label: LAB_0050e7bf
    PUSH ECX                            ; 0050e7c5
    PUSH ESI                            ; 0050e7c6
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0050e7c7
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EDX,dword ptr [EBX + 0x154a7c]  ; 0050e7cc
    MOV dword ptr [EBX + EDX*0x4 + 0x154a80],EAX ; 0050e7d2
    MOV EAX,dword ptr [EBX + 0x154a7c]  ; 0050e7d9
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x154a80] ; 0050e7df
    ADD ESP,0x8                         ; 0050e7e6
    TEST EDX,EDX                        ; 0050e7e9
    JZ 0x0050e7f6                       ; 0050e7eb
        ;   XREF to: 0050e7f6 (CONDITIONAL_JUMP)  ; LAB_0050e7f6
    LEA ECX,[EAX + 0x1]                 ; 0050e7ed
    MOV dword ptr [EBX + 0x154a7c],ECX  ; 0050e7f0
    MOV EAX,[0x02dd10bc]                ; 0050e7f6 | DAT_02dd10bc
        ;   Label: LAB_0050e7f6
    PUSH EAX                            ; 0050e7fb
    PUSH ESI                            ; 0050e7fc
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0050e7fd
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0050e802
    TEST EAX,EAX                        ; 0050e805
    JZ 0x0050e7a8                       ; 0050e807
        ;   XREF to: 0050e7a8 (CONDITIONAL_JUMP)  ; LAB_0050e7a8
    CMP dword ptr [EAX + 0x16c],0x4     ; 0050e809
    JNZ 0x0050e7a8                      ; 0050e810
        ;   XREF to: 0050e7a8 (CONDITIONAL_JUMP)  ; LAB_0050e7a8
    CMP dword ptr [EAX + 0x2f8],0x0     ; 0050e812
    JZ 0x0050e7a8                       ; 0050e819
        ;   XREF to: 0050e7a8 (CONDITIONAL_JUMP)  ; LAB_0050e7a8
    JMP 0x0050e795                      ; 0050e81b
        ;   XREF to: 0050e795 (UNCONDITIONAL_JUMP)  ; LAB_0050e795

