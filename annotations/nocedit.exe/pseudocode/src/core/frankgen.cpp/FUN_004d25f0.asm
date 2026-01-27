; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_frankgen.cpp_FUN_004d25f0()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* switchdataD_004d25c8 = 004d2611
;   double DOUBLE_0062ac05 = 0.25
;   float FLOAT_0065e670 = 2300
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
;   core_frankgen.cpp_LoadModel_FUN_004d2190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d25f0
        ;   Label: core_frankgen.cpp_FUN_004d25f0
    PUSH ESI                            ; 004d25f1
    PUSH EDI                            ; 004d25f2
    PUSH EBP                            ; 004d25f3
    MOV EBP,ESP                         ; 004d25f4
    SUB ESP,0x4                         ; 004d25f6
    AND ESP,0xfffffff8                  ; 004d25f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d25fc
    MOV ESI,dword ptr [EBX + 0x158]     ; 004d25ff
    CMP ESI,0x7                         ; 004d2605
    JA 0x004d2611                       ; 004d2608
        ;   XREF to: 004d2611 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [ESI*0x4 + 0x4d25c8]  ; 004d260a | caseD_6 | caseD_2 | caseD_4
        ;   Label: switchD
    PUSH 0x2a                           ; 004d2611
        ;   Label: caseD_7
    MOV EAX,[0x0067cf44]                ; 004d2613 | g_CKeysPtr
    MOV EDX,0x3f800000                  ; 004d2618
    PUSH EAX                            ; 004d261d | g_CKeysInstance
    MOV dword ptr [ESP + 0x8],EDX       ; 004d261e
    MOV EDX,dword ptr [EAX]             ; 004d2622 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004d2624
    ADD ESP,0x8                         ; 004d2626
    TEST EAX,EAX                        ; 004d2629
    JZ 0x004d2634                       ; 004d262b
        ;   XREF to: 004d2634 (CONDITIONAL_JUMP)  ; LAB_004d2634
    MOV dword ptr [ESP],0x40800000      ; 004d262d
    PUSH 0x38                           ; 004d2634
        ;   Label: LAB_004d2634
    MOV EAX,[0x0067cf44]                ; 004d2636 | g_CKeysPtr
    PUSH EAX                            ; 004d263b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d263c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004d263e
    ADD ESP,0x8                         ; 004d2640
    TEST EAX,EAX                        ; 004d2643
    JZ 0x004d2653                       ; 004d2645
        ;   XREF to: 004d2653 (CONDITIONAL_JUMP)  ; LAB_004d2653
    FLD float ptr [ESP]                 ; 004d2647
    FMUL double ptr [0x0062ac05]        ; 004d264a | DOUBLE_0062ac05
    FSTP float ptr [ESP]                ; 004d2650
    CALL core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330 ; 004d2653
        ;   XREF to: 004d2330 (UNCONDITIONAL_CALL)  ; undefined core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330()
        ;   Label: LAB_004d2653
    PUSH 0x34                           ; 004d2658
    MOV EDI,EAX                         ; 004d265a
    MOV ESI,EAX                         ; 004d265c
    MOV EAX,[0x0067cf44]                ; 004d265e | g_CKeysPtr
    PUSH EAX                            ; 004d2663 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d2664 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d2666
    ADD ESP,0x8                         ; 004d2669
    TEST EAX,EAX                        ; 004d266c
    JZ 0x004d267f                       ; 004d266e
        ;   XREF to: 004d267f (CONDITIONAL_JUMP)  ; LAB_004d267f
    FLD float ptr [EDI + 0x15c]         ; 004d2670
    FADD float ptr [ESP]                ; 004d2676
    FSTP float ptr [EDI + 0x15c]        ; 004d2679
    PUSH 0x33                           ; 004d267f
        ;   Label: LAB_004d267f
    MOV EAX,[0x0067cf44]                ; 004d2681 | g_CKeysPtr
    PUSH EAX                            ; 004d2686 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004d2687 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004d2689
    ADD ESP,0x8                         ; 004d268c
    TEST EAX,EAX                        ; 004d268f
    JZ 0x004d26a2                       ; 004d2691
        ;   XREF to: 004d26a2 (CONDITIONAL_JUMP)  ; LAB_004d26a2
    FLD float ptr [ESI + 0x15c]         ; 004d2693
    FSUB float ptr [ESP]                ; 004d2699
    FSTP float ptr [ESI + 0x15c]        ; 004d269c
    FLD float ptr [ESI + 0x15c]         ; 004d26a2
        ;   Label: LAB_004d26a2
    FLDZ                                ; 004d26a8
    FCOMPP                              ; 004d26aa
    FNSTSW AX                           ; 004d26ac
    SAHF                                ; 004d26ae
    JBE 0x004d26c3                      ; 004d26af
        ;   XREF to: 004d26c3 (CONDITIONAL_JUMP)  ; LAB_004d26c3
    FLD float ptr [0x0065e670]          ; 004d26b1 | FLOAT_0065e670
    FADD float ptr [ESI + 0x15c]        ; 004d26b7
    FSTP float ptr [ESI + 0x15c]        ; 004d26bd
    FLD float ptr [ESI + 0x15c]         ; 004d26c3
        ;   Label: LAB_004d26c3
    FCOMP float ptr [0x0065e670]        ; 004d26c9 | FLOAT_0065e670
    FNSTSW AX                           ; 004d26cf
    SAHF                                ; 004d26d1
    JC 0x004d26e6                       ; 004d26d2
        ;   XREF to: 004d26e6 (CONDITIONAL_JUMP)  ; LAB_004d26e6
    FLD float ptr [0x0065e670]          ; 004d26d4 | FLOAT_0065e670
    FSUBR float ptr [ESI + 0x15c]       ; 004d26da
    FSTP float ptr [ESI + 0x15c]        ; 004d26e0
    FLD float ptr [ESI + 0x15c]         ; 004d26e6
        ;   Label: LAB_004d26e6
    PUSH EBX                            ; 004d26ec
    FSTP float ptr [EBX + 0x15c]        ; 004d26ed
    CALL core_frankgen.cpp_LoadModel_FUN_004d2190 ; 004d26f3
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)  ; undefined core_frankgen.cpp_LoadModel_FUN_004d2190()
    ADD ESP,0x4                         ; 004d26f8
    MOV ESP,EBP                         ; 004d26fb
    POP EBP                             ; 004d26fd
    POP EDI                             ; 004d26fe
    POP ESI                             ; 004d26ff
    POP EBX                             ; 004d2700
    RET                                 ; 004d2701
    PUSH EBX                            ; 004d2702
        ;   Label: caseD_3
    LEA ESI,[EBX + 0x30]                ; 004d2703
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004d2706
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    MOV dword ptr [ESI + 0x8],0x0       ; 004d270b
    ADD ESP,0x4                         ; 004d2712
    MOV EAX,dword ptr [ESI + 0x8]       ; 004d2715
    MOV dword ptr [ESI + 0x4],EAX       ; 004d2718
    MOV EAX,dword ptr [ESI + 0x4]       ; 004d271b
    MOV dword ptr [ESI],EAX             ; 004d271e
    JMP 0x004d2611                      ; 004d2720
        ;   XREF to: 004d2611 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 004d2725
        ;   Label: caseD_5
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004d2726
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d272b
    JMP 0x004d2611                      ; 004d272e
        ;   XREF to: 004d2611 (UNCONDITIONAL_JUMP)  ; caseD_6

