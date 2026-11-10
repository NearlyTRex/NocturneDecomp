; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_process_FUN_0050f630(CMimic *this_ptr,float delta_time)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005e8962
;   TerminatedCString s_CMimic_setup_can_t_use_m_005e8974
;   undefined4 DAT_0061b4d0
;   CNetGame* g_CNetGamePtr = 01d51c20
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CNetGame g_CNetGameInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_main.c_FUN_005030e0
;   core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0
;   core_mimic.cpp_CMimic_processMorph_FUN_00510c20
;   core_mimic.cpp_CMimic_setupCloth_FUN_00510530
;   core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f630
        ;   Label: core_mimic.cpp_CMimic_process_FUN_0050f630
    PUSH EDI                            ; 0050f631
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050f632
    MOV EAX,[0x00622580]                ; 0050f636 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 0050f63b | g_CNetGameInstance
    JNZ 0x0050f6c6                      ; 0050f63e
        ;   XREF to: 0050f6c6 (CONDITIONAL_JUMP)  ; LAB_0050f6c6
    MOV EAX,[0x01d06ab4]                ; 0050f644 | DAT_01d06ab4
        ;   Label: LAB_0050f644
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050f649
    MOV EDX,dword ptr [EDX + 0x108]     ; 0050f650
    MOV dword ptr [EBX + 0x108],EDX     ; 0050f656
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050f65c
    MOV EDX,dword ptr [EDX + 0x10c]     ; 0050f663
    MOV dword ptr [EBX + 0x10c],EDX     ; 0050f669
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050f66f
    FLD float ptr [EBX + 0x47abc]       ; 0050f676
    MOV EAX,dword ptr [EAX + 0x110]     ; 0050f67c
    FLDZ                                ; 0050f682
    MOV dword ptr [EBX + 0x110],EAX     ; 0050f684
    FCOMPP                              ; 0050f68a
    FNSTSW AX                           ; 0050f68c
    SAHF                                ; 0050f68e
    JBE 0x0050f6f0                      ; 0050f68f
        ;   XREF to: 0050f6f0 (CONDITIONAL_JUMP)  ; LAB_0050f6f0
    PUSH dword ptr [ESP + 0x10]         ; 0050f691
    PUSH EBX                            ; 0050f695
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0050f696
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0050f69b
    TEST EAX,EAX                        ; 0050f69e
    JZ 0x0050f6c3                       ; 0050f6a0
        ;   XREF to: 0050f6c3 (CONDITIONAL_JUMP)  ; LAB_0050f6c3
    MOV EDI,dword ptr [EBX + 0x46e60]   ; 0050f6a2
    CMP EDI,0x1                         ; 0050f6a8
    JLE 0x0050f700                      ; 0050f6ab
        ;   XREF to: 0050f700 (CONDITIONAL_JUMP)  ; LAB_0050f700
    PUSH dword ptr [ESP + 0x10]         ; 0050f6ad
    PUSH EBX                            ; 0050f6b1
    CALL core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0 ; 0050f6b2
        ;   XREF to: 0050fba0 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0(CMimic * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0050f6b7
    PUSH EBX                            ; 0050f6ba
        ;   Label: LAB_0050f6ba
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80 ; 0050f6bb
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0050f6c0
    POP EDI                             ; 0050f6c3
        ;   Label: LAB_0050f6c3
    POP EBX                             ; 0050f6c4
    RET                                 ; 0050f6c5
    PUSH ESI                            ; 0050f6c6
        ;   Label: LAB_0050f6c6
    MOV ECX,0x5e8962                    ; 0050f6c7 | = "..\\core\\mimic.cpp"
    MOV ESI,0x130                       ; 0050f6cc
    PUSH 0x5e8974                       ; 0050f6d1 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x01d1d400],ECX      ; 0050f6d6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0050f6dc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050f6e2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050f6e7
    POP ESI                             ; 0050f6ea
    JMP 0x0050f644                      ; 0050f6eb
        ;   XREF to: 0050f644 (UNCONDITIONAL_JUMP)  ; LAB_0050f644
    PUSH dword ptr [ESP + 0x10]         ; 0050f6f0
        ;   Label: LAB_0050f6f0
    PUSH EBX                            ; 0050f6f4
    CALL core_mimic.cpp_CMimic_processMorph_FUN_00510c20 ; 0050f6f5
        ;   XREF to: 00510c20 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_processMorph_FUN_00510c20(CMimic * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0050f6fa
    POP EDI                             ; 0050f6fd
    POP EBX                             ; 0050f6fe
    RET                                 ; 0050f6ff
    JGE 0x0050f725                      ; 0050f700
        ;   XREF to: 0050f725 (CONDITIONAL_JUMP)  ; LAB_0050f725
        ;   Label: LAB_0050f700
    LEA EAX,[EBX + 0xc2cc]              ; 0050f702
    PUSH EAX                            ; 0050f708
    MOV EAX,[0x0061b4d0]                ; 0050f709 | DAT_0061b4d0
    PUSH EAX                            ; 0050f70e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0050f70f
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050f714
    TEST EAX,EAX                        ; 0050f717
    JZ 0x0050f725                       ; 0050f719
        ;   XREF to: 0050f725 (CONDITIONAL_JUMP)  ; LAB_0050f725
    MOV dword ptr [EBX + 0x46e60],0x1   ; 0050f71b
    LEA EAX,[EBX + 0xc268]              ; 0050f725
        ;   Label: LAB_0050f725
    PUSH EAX                            ; 0050f72b
    MOV EDX,dword ptr [0x0061b4d0]      ; 0050f72c | DAT_0061b4d0
    PUSH EDX                            ; 0050f732
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0050f733
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050f738
    TEST EAX,EAX                        ; 0050f73b
    JZ 0x0050f6ba                       ; 0050f73d
        ;   XREF to: 0050f6ba (CONDITIONAL_JUMP)  ; LAB_0050f6ba
    PUSH EBX                            ; 0050f743
    CALL core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0 ; 0050f744
        ;   XREF to: 0050f7e0 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0(CMimic * this_ptr)
    MOV ECX,dword ptr [EBX + 0x46e60]   ; 0050f749
    ADD ESP,0x4                         ; 0050f74f
    CMP ECX,0x1                         ; 0050f752
    JNZ 0x0050f6ba                      ; 0050f755
        ;   XREF to: 0050f6ba (CONDITIONAL_JUMP)  ; LAB_0050f6ba
    MOV EAX,[0x01d06ab4]                ; 0050f75b | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050f760
    ADD EAX,0x158                       ; 0050f767
    PUSH EAX                            ; 0050f76c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0050f76d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0050f772
    ADD ESP,0x4                         ; 0050f775
    CMP EAX,0x3                         ; 0050f778
    JNC 0x0050f79f                      ; 0050f77b
        ;   XREF to: 0050f79f (CONDITIONAL_JUMP)  ; LAB_0050f79f
    CMP EAX,0x1                         ; 0050f77d
    JNC 0x0050f78a                      ; 0050f780
        ;   XREF to: 0050f78a (CONDITIONAL_JUMP)  ; LAB_0050f78a
    TEST EAX,EAX                        ; 0050f782
    JNZ 0x0050f6ba                      ; 0050f784
        ;   XREF to: 0050f6ba (CONDITIONAL_JUMP)  ; LAB_0050f6ba
    PUSH EBX                            ; 0050f78a
        ;   Label: LAB_0050f78a
    CALL core_mimic.cpp_CMimic_setupCloth_FUN_00510530 ; 0050f78b
        ;   XREF to: 00510530 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_setupCloth_FUN_00510530(CMimic * this_ptr)
    ADD ESP,0x4                         ; 0050f790
    PUSH EBX                            ; 0050f793
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80 ; 0050f794
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0050f799
    POP EDI                             ; 0050f79c
    POP EBX                             ; 0050f79d
    RET                                 ; 0050f79e
    JBE 0x0050f78a                      ; 0050f79f
        ;   XREF to: 0050f78a (CONDITIONAL_JUMP)  ; LAB_0050f78a
        ;   Label: LAB_0050f79f
    CMP EAX,0x11                        ; 0050f7a1
    JNC 0x0050f7b7                      ; 0050f7a4
        ;   XREF to: 0050f7b7 (CONDITIONAL_JUMP)  ; LAB_0050f7b7
    CMP EAX,0x10                        ; 0050f7a6
    JZ 0x0050f78a                       ; 0050f7a9
        ;   XREF to: 0050f78a (CONDITIONAL_JUMP)  ; LAB_0050f78a
    PUSH EBX                            ; 0050f7ab
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80 ; 0050f7ac
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0050f7b1
    POP EDI                             ; 0050f7b4
    POP EBX                             ; 0050f7b5
    RET                                 ; 0050f7b6
    JBE 0x0050f78a                      ; 0050f7b7
        ;   XREF to: 0050f78a (CONDITIONAL_JUMP)  ; LAB_0050f78a
        ;   Label: LAB_0050f7b7
    CMP EAX,0x14                        ; 0050f7b9
    JC 0x0050f6ba                       ; 0050f7bc
        ;   XREF to: 0050f6ba (CONDITIONAL_JUMP)  ; LAB_0050f6ba
    JBE 0x0050f78a                      ; 0050f7c2
        ;   XREF to: 0050f78a (CONDITIONAL_JUMP)  ; LAB_0050f78a
    CMP EAX,0x15                        ; 0050f7c4
    JZ 0x0050f78a                       ; 0050f7c7
        ;   XREF to: 0050f78a (CONDITIONAL_JUMP)  ; LAB_0050f78a
    PUSH EBX                            ; 0050f7c9
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80 ; 0050f7ca
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0050f7cf
    POP EDI                             ; 0050f7d2
    POP EBX                             ; 0050f7d3
    RET                                 ; 0050f7d4

