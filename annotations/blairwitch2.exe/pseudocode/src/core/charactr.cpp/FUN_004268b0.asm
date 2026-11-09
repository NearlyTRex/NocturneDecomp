; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_004268b0(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x28]:1  local_28
;
; XREF[7]:
;   core_gabriela.cpp_FUN_004b1160 at 004b1183
;   core_npc.cpp_FUN_00510990 at 005109c4
;   core_shadow.cpp_FUN_0053e6c0 at 0053e84a
;   core_stranger.cpp_FUN_0056bc80 at 0056bc86
;   core_werewolf.cpp_FUN_0058d670 at 0058d798
;   core_zombie.cpp_FUN_00598fa0 at 00599149
;   unkafter_basicene.cpp_FUN_0059f980 at 0059fa01
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_007bda98
;   undefined1 DAT_007bdad8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_FUN_00424bd0
;   core_charactr.cpp_FUN_00426990
;   core_charactr.cpp_FUN_0042b620
;   core_set.cpp_FUN_005306e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004268b0
        ;   Label: core_charactr.cpp_FUN_004268b0
    PUSH ESI                            ; 004268b1
    PUSH EDI                            ; 004268b2
    PUSH EBP                            ; 004268b3
    SUB ESP,0x30                        ; 004268b4
    MOV EBX,dword ptr [ESP + 0x44]      ; 004268b7
    MOV AH,byte ptr [0x007bdad8]        ; 004268bb | DAT_007bdad8
    TEST AH,0x1                         ; 004268c1
    JNZ 0x004268d1                      ; 004268c4
        ;   XREF to: 004268d1 (CONDITIONAL_JUMP)  ; LAB_004268d1
    MOV DL,AH                           ; 004268c6
    OR DL,0x1                           ; 004268c8
    MOV byte ptr [0x007bdad8],DL        ; 004268cb | DAT_007bdad8
    PUSH EBX                            ; 004268d1
        ;   Label: LAB_004268d1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004268d2
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004268d7
    XOR EBP,EBP                         ; 004268da
    PUSH EBP                            ; 004268dc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004268dd
    PUSH EBX                            ; 004268e3
    LEA ESI,[ESP + 0x8]                 ; 004268e4
    LEA EDI,[ESP + 0x20]                ; 004268e8
    CALL dword ptr [EAX + 0x24]         ; 004268ec
    MOV ECX,0x6                         ; 004268ef
    ADD ESP,0x4                         ; 004268f4
    LEA EAX,[ESP + 0x1c]                ; 004268f7
    LEA ESI,[ESP + 0x4]                 ; 004268fb
    PUSH EAX                            ; 004268ff
    MOVSD.REP ES:EDI,ESI                ; 00426900
    CALL core_box.cpp_FUN_0041a840      ; 00426902
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00426907
    TEST EAX,EAX                        ; 0042690a
    JZ 0x0042692a                       ; 0042690c
        ;   XREF to: 0042692a (CONDITIONAL_JUMP)  ; LAB_0042692a
    PUSH EBX                            ; 0042690e
    MOV dword ptr [EBX + 0x2828],0x1    ; 0042690f
    CALL core_charactr.cpp_FUN_00424bd0 ; 00426919
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042691e
    PUSH EBX                            ; 00426921
    CALL core_charactr.cpp_FUN_0042b620 ; 00426922
        ;   XREF to: 0042b620 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b620()
    ADD ESP,0x4                         ; 00426927
    PUSH EBX                            ; 0042692a
        ;   Label: LAB_0042692a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0042692b
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00426930
    TEST EBP,EBP                        ; 00426933
    JZ 0x0042694b                       ; 00426935
        ;   XREF to: 0042694b (CONDITIONAL_JUMP)  ; LAB_0042694b
    PUSH 0x7bda98                       ; 00426937 | DAT_007bda98
    MOV EDX,dword ptr [0x0061b5a8]      ; 0042693c | g_CDemonSetPtr
    PUSH EDX                            ; 00426942 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005306e0      ; 00426943
        ;   XREF to: 005306e0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005306e0()
    ADD ESP,0x8                         ; 00426948
    CMP dword ptr [EBX + 0x3564],0x0    ; 0042694b
        ;   Label: LAB_0042694b
    JLE 0x0042695d                      ; 00426952
        ;   XREF to: 0042695d (CONDITIONAL_JUMP)  ; LAB_0042695d
    CMP dword ptr [EBX + 0x2828],0x0    ; 00426954
    JNZ 0x0042696b                      ; 0042695b
        ;   XREF to: 0042696b (CONDITIONAL_JUMP)  ; LAB_0042696b
    MOV EAX,dword ptr [EBX + 0x2828]    ; 0042695d
        ;   Label: LAB_0042695d
    ADD ESP,0x30                        ; 00426963
    POP EBP                             ; 00426966
    POP EDI                             ; 00426967
    POP ESI                             ; 00426968
    POP EBX                             ; 00426969
    RET                                 ; 0042696a
    PUSH EBX                            ; 0042696b
        ;   Label: LAB_0042696b
    CALL core_charactr.cpp_FUN_00426990 ; 0042696c
        ;   XREF to: 00426990 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00426990(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00426971
    MOV EAX,dword ptr [EBX + 0x2828]    ; 00426974
    ADD ESP,0x30                        ; 0042697a
    POP EBP                             ; 0042697d
    POP EDI                             ; 0042697e
    POP ESI                             ; 0042697f
    POP EBX                             ; 00426980
    RET                                 ; 00426981

