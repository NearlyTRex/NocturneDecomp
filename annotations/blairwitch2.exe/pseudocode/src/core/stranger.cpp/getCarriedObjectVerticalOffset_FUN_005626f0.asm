; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005626f0(CDemonActor *object)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   object
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_0056acd0 at 0056b016
;   core_stranger.cpp_FUN_00565ff0 at 00566f0b
;   core_stranger.cpp_FUN_00568500 at 0056937a
;
; Referenced Globals:
;   undefined4 DAT_005eb1b5
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCryptVesselClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005626f0
        ;   Label: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005626f0
    PUSH ESI                            ; 005626f1
    PUSH EBP                            ; 005626f2
    SUB ESP,0xc                         ; 005626f3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005626f6
    MOV EDX,dword ptr [0x007bc9e8]      ; 005626fa | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 00562700
    PUSH ESI                            ; 00562701
    XOR EBX,EBX                         ; 00562702
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00562704
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 00562709
    TEST EAX,EAX                        ; 0056270c
    JNZ 0x00562773                      ; 0056270e
        ;   XREF to: 00562773 (CONDITIONAL_JUMP)  ; LAB_00562773
    MOV ECX,dword ptr [0x0265378c]      ; 00562710 | g_CCryptVesselClassInfo.name_hash
        ;   Label: LAB_00562710
    PUSH ECX                            ; 00562716
    PUSH ESI                            ; 00562717
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00562718
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0056271d
    TEST EAX,EAX                        ; 00562720
    JZ 0x00562734                       ; 00562722
        ;   XREF to: 00562734 (CONDITIONAL_JUMP)  ; LAB_00562734
    ADD EAX,0x2b4                       ; 00562724
    PUSH EAX                            ; 00562729
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0056272a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056272f
    MOV EBX,EAX                         ; 00562732
    TEST EBX,EBX                        ; 00562734
        ;   Label: LAB_00562734
    JZ 0x00562785                       ; 00562736
        ;   XREF to: 00562785 (CONDITIONAL_JUMP)  ; LAB_00562785
    PUSH EDI                            ; 00562738
    XOR EDI,EDI                         ; 00562739
    XOR ESI,ESI                         ; 0056273b
    XOR ECX,ECX                         ; 0056273d
    XOR EDX,EDX                         ; 0056273f
    MOV dword ptr [ESP + 0x8],EDI       ; 00562741
    MOV EAX,dword ptr [EBX + 0x104]     ; 00562745
        ;   Label: LAB_00562745
    CMP ECX,EAX                         ; 0056274b
    JGE 0x00562796                      ; 0056274d
        ;   XREF to: 00562796 (CONDITIONAL_JUMP)  ; LAB_00562796
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0056274f
    ADD EAX,EDX                         ; 00562755
    MOV EBP,dword ptr [EAX]             ; 00562757
    CMP EDI,EBP                         ; 00562759
    JGE 0x00562766                      ; 0056275b
        ;   XREF to: 00562766 (CONDITIONAL_JUMP)  ; LAB_00562766
    MOV EDI,EBP                         ; 0056275d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0056275f
    MOV dword ptr [ESP + 0x8],EBP       ; 00562762
    MOV EBP,dword ptr [EAX + 0x4]       ; 00562766
        ;   Label: LAB_00562766
    CMP ESI,EBP                         ; 00562769
    JL 0x00562792                       ; 0056276b
        ;   XREF to: 00562792 (CONDITIONAL_JUMP)  ; LAB_00562792
    INC ECX                             ; 0056276d
        ;   Label: LAB_0056276d
    ADD EDX,0xc                         ; 0056276e
    JMP 0x00562745                      ; 00562771
        ;   XREF to: 00562745 (UNCONDITIONAL_JUMP)  ; LAB_00562745
    ADD EAX,0x2b4                       ; 00562773
        ;   Label: LAB_00562773
    PUSH EAX                            ; 00562778
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00562779
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056277e
    MOV EBX,EAX                         ; 00562781
    JMP 0x00562710                      ; 00562783
        ;   XREF to: 00562710 (UNCONDITIONAL_JUMP)  ; LAB_00562710
    MOV dword ptr [ESP],EBX             ; 00562785
        ;   Label: LAB_00562785
    MOV EAX,dword ptr [ESP]             ; 00562788
    ADD ESP,0xc                         ; 0056278b
    POP EBP                             ; 0056278e
    POP ESI                             ; 0056278f
    POP EBX                             ; 00562790
    RET                                 ; 00562791
    MOV ESI,EBP                         ; 00562792
        ;   Label: LAB_00562792
    JMP 0x0056276d                      ; 00562794
        ;   XREF to: 0056276d (UNCONDITIONAL_JUMP)  ; LAB_0056276d
    MOV EBP,dword ptr [ESP + 0x8]       ; 00562796
        ;   Label: LAB_00562796
    SUB ESI,EBP                         ; 0056279a
    MOV dword ptr [ESP + 0xc],ESI       ; 0056279c
    FILD dword ptr [ESP + 0xc]          ; 005627a0
    FMUL double ptr [0x005eb1b5]        ; 005627a4 | DAT_005eb1b5
    FSTP float ptr [ESP + 0x4]          ; 005627aa
    POP EDI                             ; 005627ae
    MOV EAX,dword ptr [ESP]             ; 005627af
    ADD ESP,0xc                         ; 005627b2
    POP EBP                             ; 005627b5
    POP ESI                             ; 005627b6
    POP EBX                             ; 005627b7
    RET                                 ; 005627b8

