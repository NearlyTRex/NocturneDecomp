; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_asgaya_cpp_FUN_005a1760(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1760
        ;   Label: core_asgaya.cpp_FUN_005a1760
    SUB ESP,0x30                        ; 005a1761
    MOV EBX,dword ptr [ESP + 0x38]      ; 005a1764
    CMP dword ptr [EBX + 0x24fc],0x0    ; 005a1768
    JZ 0x005a1778                       ; 005a176f
        ;   XREF to: 005a1778 (CONDITIONAL_JUMP)  ; LAB_005a1778
    XOR EAX,EAX                         ; 005a1771
    ADD ESP,0x30                        ; 005a1773
    POP EBX                             ; 005a1776
    RET                                 ; 005a1777
    PUSH EDI                            ; 005a1778
        ;   Label: LAB_005a1778
    PUSH ESI                            ; 005a1779
    PUSH EBX                            ; 005a177a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005a177b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a1780
    PUSH 0x0                            ; 005a1783
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a1785
    PUSH EBX                            ; 005a178b
    LEA ESI,[ESP + 0x10]                ; 005a178c
    LEA EDI,[ESP + 0x28]                ; 005a1790
    CALL dword ptr [EAX + 0x1c]         ; 005a1794
    MOV ECX,0x6                         ; 005a1797
    ADD ESP,0x4                         ; 005a179c
    LEA EAX,[ESP + 0x24]                ; 005a179f
    LEA ESI,[ESP + 0xc]                 ; 005a17a3
    PUSH EAX                            ; 005a17a7
    MOVSD.REP ES:EDI,ESI                ; 005a17a8
    CALL core_box.cpp_FUN_0041daf0      ; 005a17aa
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005a17af
    MOV ESI,EAX                         ; 005a17b2
    TEST EAX,EAX                        ; 005a17b4
    JZ 0x005a17c1                       ; 005a17b6
        ;   XREF to: 005a17c1 (CONDITIONAL_JUMP)  ; LAB_005a17c1
    PUSH EBX                            ; 005a17b8
    CALL core_charactr.cpp_FUN_0042d8e0 ; 005a17b9
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 005a17be
    PUSH EBX                            ; 005a17c1
        ;   Label: LAB_005a17c1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005a17c2
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a17c7
    MOV EAX,ESI                         ; 005a17ca
    POP ESI                             ; 005a17cc
    POP EDI                             ; 005a17cd
    ADD ESP,0x30                        ; 005a17ce
    POP EBX                             ; 005a17d1
    RET                                 ; 005a17d2

