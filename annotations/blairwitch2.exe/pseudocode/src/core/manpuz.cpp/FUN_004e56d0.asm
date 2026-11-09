; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_manpuz_cpp_FUN_004e56d0(CMansionPuzzleCircle *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f98a0
;   undefined4 DAT_0060b280
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_manpuz.cpp_FUN_004e6340
;   core_manpuz.cpp_FUN_004e63c0
;   core_manpuz.cpp_FUN_004e6820
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e56d0
        ;   Label: core_manpuz.cpp_FUN_004e56d0
    PUSH EDI                            ; 004e56d1
    PUSH EBP                            ; 004e56d2
    SUB ESP,0x3c                        ; 004e56d3
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004e56d6
    PUSH EBP                            ; 004e56da
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004e56db
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e56e0
    PUSH 0x0                            ; 004e56e3
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004e56e5
    PUSH EBP                            ; 004e56eb
    LEA ESI,[ESP + 0x8]                 ; 004e56ec
    LEA EDI,[ESP + 0x20]                ; 004e56f0
    CALL dword ptr [EAX + 0x24]         ; 004e56f4
    MOV ECX,0x6                         ; 004e56f7
    ADD ESP,0x4                         ; 004e56fc
    LEA EAX,[ESP + 0x1c]                ; 004e56ff
    LEA ESI,[ESP + 0x4]                 ; 004e5703
    PUSH EAX                            ; 004e5707
    MOVSD.REP ES:EDI,ESI                ; 004e5708
    CALL core_box.cpp_FUN_0041a840      ; 004e570a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004e570f
    MOV ESI,EAX                         ; 004e5712
    TEST EAX,EAX                        ; 004e5714
    JNZ 0x004e572a                      ; 004e5716
        ;   XREF to: 004e572a (CONDITIONAL_JUMP)  ; LAB_004e572a
    PUSH EBP                            ; 004e5718
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e5719
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e571e
    MOV EAX,ESI                         ; 004e5721
    ADD ESP,0x3c                        ; 004e5723
    POP EBP                             ; 004e5726
    POP EDI                             ; 004e5727
    POP ESI                             ; 004e5728
    RET                                 ; 004e5729
    PUSH EBX                            ; 004e572a
        ;   Label: LAB_004e572a
    LEA EBX,[ESP + 0x34]                ; 004e572b
    MOV EAX,0x265370c                   ; 004e572f
    MOV EDX,dword ptr [0x0060b280]      ; 004e5734 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004e573a
    FMUL float ptr [0x005f98a0]         ; 004e573c | DAT_005f98a0
    FISTP dword ptr [EBX]               ; 004e5742
    FLD float ptr [EAX + 0x4]           ; 004e5744
    FMUL float ptr [0x005f98a0]         ; 004e5747 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x4]         ; 004e574d
    FLD float ptr [EAX + 0x8]           ; 004e5750
    FMUL float ptr [0x005f98a0]         ; 004e5753 | DAT_005f98a0
    FISTP dword ptr [EBX + 0x8]         ; 004e5759
    LEA EAX,[ESP + 0x34]                ; 004e575c
    PUSH EAX                            ; 004e5760
    MOV EAX,dword ptr [EDX]             ; 004e5761
    ADD EAX,0xbb80                      ; 004e5763
    PUSH EAX                            ; 004e5768
    CALL engine_special.cpp_FUN_0055d723 ; 004e5769
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e576e
    XOR EBX,EBX                         ; 004e5771
    PUSH EBX                            ; 004e5773
        ;   Label: LAB_004e5773
    PUSH EBP                            ; 004e5774
    CALL core_manpuz.cpp_FUN_004e6340   ; 004e5775
        ;   XREF to: 004e6340 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_004e6340()
    ADD ESP,0x8                         ; 004e577a
    PUSH EBX                            ; 004e577d
    PUSH EBP                            ; 004e577e
    CALL core_manpuz.cpp_FUN_004e63c0   ; 004e577f
        ;   XREF to: 004e63c0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_FUN_004e63c0(CMansionPuzzleCircle * this_ptr, int gem_index)
    INC EBX                             ; 004e5784
    ADD ESP,0x8                         ; 004e5785
    CMP EBX,0xc                         ; 004e5788
    JL 0x004e5773                       ; 004e578b
        ;   XREF to: 004e5773 (CONDITIONAL_JUMP)  ; LAB_004e5773
    MOV EAX,[0x00618170]                ; 004e578d | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 004e5792
    JNZ 0x004e57c5                      ; 004e5799
        ;   XREF to: 004e57c5 (CONDITIONAL_JUMP)  ; LAB_004e57c5
    LEA EAX,[EAX]                       ; 004e579b
    MOV ECX,ECX                         ; 004e579e
    XOR EBX,EBX                         ; 004e57a0
        ;   Label: LAB_004e57a0
    PUSH EBX                            ; 004e57a2
        ;   Label: LAB_004e57a2
    PUSH EBP                            ; 004e57a3
    CALL core_manpuz.cpp_FUN_004e6820   ; 004e57a4
        ;   XREF to: 004e6820 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_FUN_004e6820(CMansionPuzzleCircle * this_ptr, int reflector_index)
    INC EBX                             ; 004e57a9
    ADD ESP,0x8                         ; 004e57aa
    CMP EBX,0x2                         ; 004e57ad
    JL 0x004e57a2                       ; 004e57b0
        ;   XREF to: 004e57a2 (CONDITIONAL_JUMP)  ; LAB_004e57a2
    POP EBX                             ; 004e57b2
    PUSH EBP                            ; 004e57b3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e57b4
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e57b9
    MOV EAX,ESI                         ; 004e57bc
    ADD ESP,0x3c                        ; 004e57be
    POP EBP                             ; 004e57c1
    POP EDI                             ; 004e57c2
    POP ESI                             ; 004e57c3
    RET                                 ; 004e57c4
    MOV ECX,dword ptr [0x0060b280]      ; 004e57c5 | DAT_0060b280
        ;   Label: LAB_004e57c5
    PUSH ECX                            ; 004e57cb
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004e57cc
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e57d1
    TEST EAX,EAX                        ; 004e57d4
    JNZ 0x004e57a0                      ; 004e57d6
        ;   XREF to: 004e57a0 (CONDITIONAL_JUMP)  ; LAB_004e57a0
    XOR EBX,EBX                         ; 004e57d8
    PUSH EBX                            ; 004e57da
        ;   Label: LAB_004e57da
    PUSH EBP                            ; 004e57db
    INC EBX                             ; 004e57dc
    ADD ESP,0x8                         ; 004e57dd
    CMP EBX,0xc                         ; 004e57e0
    JL 0x004e57da                       ; 004e57e3
        ;   XREF to: 004e57da (CONDITIONAL_JUMP)  ; LAB_004e57da
    JMP 0x004e57a0                      ; 004e57e5
        ;   XREF to: 004e57a0 (UNCONDITIONAL_JUMP)  ; LAB_004e57a0

