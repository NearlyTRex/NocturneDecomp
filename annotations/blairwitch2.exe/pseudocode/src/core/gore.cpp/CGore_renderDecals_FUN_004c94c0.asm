; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_all
; int              Stack[0xc]:4   expire_flag
;
; XREF[4]:
;   core_set.cpp_CDemonSet_expireDecals_FUN_00534be0 at 00534bf0
;   core_set.cpp_CDemonSet_renderDecals_FUN_00534c20 at 00534c4b
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e83d
;   core_set.cpp_FUN_0052f2a0 at 0052f70c
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field20_0x14
;   undefined4 DAT_01cbcaf8
;   undefined4 DAT_01cdde40
;   undefined4 DAT_01cde348
;
; Called Functions:
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
;   core_gore.cpp_CBloodSplat_setupRenderState_FUN_004c7f80
;   core_gore.cpp_FUN_004c8010
;   core_gore.cpp_FUN_004c88a0
;   core_gore.cpp_FUN_004c9000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c94c0
        ;   Label: core_gore.cpp_CGore_renderDecals_FUN_004c94c0
    PUSH ESI                            ; 004c94c1
    PUSH EDI                            ; 004c94c2
    PUSH EBP                            ; 004c94c3
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c94c4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004c94c8
    MOV EAX,[0x00616494]                ; 004c94cc | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x14],0x0      ; 004c94d1 | g_CGameInstance.field20_0x14
    JNZ 0x004c94e5                      ; 004c94d5
        ;   XREF to: 004c94e5 (CONDITIONAL_JUMP)  ; LAB_004c94e5
    LEA EAX,[EAX]                       ; 004c94d7
    LEA EDX,[EDX]                       ; 004c94dd
    POP EBP                             ; 004c94e0
        ;   Label: LAB_004c94e0
    POP EDI                             ; 004c94e1
    POP ESI                             ; 004c94e2
    POP EBX                             ; 004c94e3
    RET                                 ; 004c94e4
    PUSH 0x1cbcafc                      ; 004c94e5
        ;   Label: LAB_004c94e5
    CALL core_gore.cpp_CBloodSplat_setupRenderState_FUN_004c7f80 ; 004c94ea
        ;   XREF to: 004c7f80 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_setupRenderState_FUN_004c7f80(CBloodSplat * this_ptr)
    ADD ESP,0x4                         ; 004c94ef
    TEST EBP,EBP                        ; 004c94f2
    JZ 0x004c95ab                       ; 004c94f4
        ;   XREF to: 004c95ab (CONDITIONAL_JUMP)  ; LAB_004c95ab
    MOV EBX,dword ptr [0x01cbcaf8]      ; 004c94fa | DAT_01cbcaf8
    XOR ESI,ESI                         ; 004c9500
    TEST EBX,EBX                        ; 004c9502
    JLE 0x004c9530                      ; 004c9504
        ;   XREF to: 004c9530 (CONDITIONAL_JUMP)  ; LAB_004c9530
    MOV EBX,0x1cbcafc                   ; 004c9506
    PUSH 0x0                            ; 004c950b
        ;   Label: LAB_004c950b
    PUSH EBX                            ; 004c950d
    INC ESI                             ; 004c950e
    CALL core_gore.cpp_FUN_004c8010     ; 004c950f
        ;   XREF to: 004c8010 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c8010()
    MOV ECX,dword ptr [0x01cbcaf8]      ; 004c9514 | DAT_01cbcaf8
    ADD ESP,0x8                         ; 004c951a
    ADD EBX,0x44                        ; 004c951d
    CMP ESI,ECX                         ; 004c9520
    JL 0x004c950b                       ; 004c9522
        ;   XREF to: 004c950b (CONDITIONAL_JUMP)  ; LAB_004c950b
    LEA EAX,[EAX]                       ; 004c9524
    LEA EDX,[EDX]                       ; 004c952a
    PUSH 0x1cdde44                      ; 004c9530
        ;   Label: LAB_004c9530
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800 ; 004c9535
        ;   XREF to: 004c8800 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool * this_ptr)
    ADD ESP,0x4                         ; 004c953a
    TEST EBP,EBP                        ; 004c953d
    JZ 0x004c95ec                       ; 004c953f
        ;   XREF to: 004c95ec (CONDITIONAL_JUMP)  ; LAB_004c95ec
    MOV ESI,dword ptr [0x01cdde40]      ; 004c9545 | DAT_01cdde40
    XOR EBX,EBX                         ; 004c954b
    TEST ESI,ESI                        ; 004c954d
    JLE 0x004c9570                      ; 004c954f
        ;   XREF to: 004c9570 (CONDITIONAL_JUMP)  ; LAB_004c9570
    MOV ESI,0x1cdde44                   ; 004c9551
    PUSH 0x0                            ; 004c9556
        ;   Label: LAB_004c9556
    PUSH ESI                            ; 004c9558
    INC EBX                             ; 004c9559
    CALL core_gore.cpp_FUN_004c88a0     ; 004c955a
        ;   XREF to: 004c88a0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c88a0()
    MOV ECX,dword ptr [0x01cdde40]      ; 004c955f | DAT_01cdde40
    ADD ESP,0x8                         ; 004c9565
    ADD ESI,0x28                        ; 004c9568
    CMP EBX,ECX                         ; 004c956b
    JL 0x004c9556                       ; 004c956d
        ;   XREF to: 004c9556 (CONDITIONAL_JUMP)  ; LAB_004c9556
    NOP                                 ; 004c956f
    TEST EBP,EBP                        ; 004c9570
        ;   Label: LAB_004c9570
    JZ 0x004c962d                       ; 004c9572
        ;   XREF to: 004c962d (CONDITIONAL_JUMP)  ; LAB_004c962d
    MOV ESI,dword ptr [0x01cde348]      ; 004c9578 | DAT_01cde348
    XOR EBX,EBX                         ; 004c957e
    TEST ESI,ESI                        ; 004c9580
    JLE 0x004c94e0                      ; 004c9582
        ;   XREF to: 004c94e0 (CONDITIONAL_JUMP)  ; LAB_004c94e0
    MOV ESI,0x1cde34c                   ; 004c9588
    PUSH 0x0                            ; 004c958d
        ;   Label: LAB_004c958d
    PUSH ESI                            ; 004c958f
    INC EBX                             ; 004c9590
    CALL core_gore.cpp_FUN_004c9000     ; 004c9591
        ;   XREF to: 004c9000 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c9000()
    MOV EDX,dword ptr [0x01cde348]      ; 004c9596 | DAT_01cde348
    ADD ESP,0x8                         ; 004c959c
    ADD ESI,0x40                        ; 004c959f
    CMP EBX,EDX                         ; 004c95a2
    JL 0x004c958d                       ; 004c95a4
        ;   XREF to: 004c958d (CONDITIONAL_JUMP)  ; LAB_004c958d
    POP EBP                             ; 004c95a6
    POP EDI                             ; 004c95a7
    POP ESI                             ; 004c95a8
    POP EBX                             ; 004c95a9
    RET                                 ; 004c95aa
    MOV ECX,dword ptr [0x01cbcaf8]      ; 004c95ab | DAT_01cbcaf8
        ;   Label: LAB_004c95ab
    XOR ESI,ESI                         ; 004c95b1
    TEST ECX,ECX                        ; 004c95b3
    JLE 0x004c9530                      ; 004c95b5
        ;   XREF to: 004c9530 (CONDITIONAL_JUMP)  ; LAB_004c9530
    XOR EBX,EBX                         ; 004c95bb
    CMP dword ptr [EBX + 0x1cbcafc],0x0 ; 004c95bd
        ;   Label: LAB_004c95bd
    JZ 0x004c95d9                       ; 004c95c4
        ;   XREF to: 004c95d9 (CONDITIONAL_JUMP)  ; LAB_004c95d9
    MOV EAX,[0x01cbcaf8]                ; 004c95c6 | DAT_01cbcaf8
        ;   Label: LAB_004c95c6
    INC ESI                             ; 004c95cb
    ADD EBX,0x44                        ; 004c95cc
    CMP ESI,EAX                         ; 004c95cf
    JGE 0x004c9530                      ; 004c95d1
        ;   XREF to: 004c9530 (CONDITIONAL_JUMP)  ; LAB_004c9530
    JMP 0x004c95bd                      ; 004c95d7
        ;   XREF to: 004c95bd (UNCONDITIONAL_JUMP)  ; LAB_004c95bd
    MOV EAX,0x1cbcafc                   ; 004c95d9
        ;   Label: LAB_004c95d9
    PUSH EDI                            ; 004c95de
    ADD EAX,EBX                         ; 004c95df
    PUSH EAX                            ; 004c95e1
    CALL core_gore.cpp_FUN_004c8010     ; 004c95e2
        ;   XREF to: 004c8010 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c8010()
    ADD ESP,0x8                         ; 004c95e7
    JMP 0x004c95c6                      ; 004c95ea
        ;   XREF to: 004c95c6 (UNCONDITIONAL_JUMP)  ; LAB_004c95c6
    MOV EBX,dword ptr [0x01cdde40]      ; 004c95ec | DAT_01cdde40
        ;   Label: LAB_004c95ec
    XOR ESI,ESI                         ; 004c95f2
    TEST EBX,EBX                        ; 004c95f4
    JLE 0x004c9570                      ; 004c95f6
        ;   XREF to: 004c9570 (CONDITIONAL_JUMP)  ; LAB_004c9570
    XOR EBX,EBX                         ; 004c95fc
    CMP dword ptr [EBX + 0x1cdde44],0x0 ; 004c95fe
        ;   Label: LAB_004c95fe
    JZ 0x004c961a                       ; 004c9605
        ;   XREF to: 004c961a (CONDITIONAL_JUMP)  ; LAB_004c961a
    MOV EAX,[0x01cdde40]                ; 004c9607 | DAT_01cdde40
        ;   Label: LAB_004c9607
    INC ESI                             ; 004c960c
    ADD EBX,0x28                        ; 004c960d
    CMP ESI,EAX                         ; 004c9610
    JGE 0x004c9570                      ; 004c9612
        ;   XREF to: 004c9570 (CONDITIONAL_JUMP)  ; LAB_004c9570
    JMP 0x004c95fe                      ; 004c9618
        ;   XREF to: 004c95fe (UNCONDITIONAL_JUMP)  ; LAB_004c95fe
    MOV EAX,0x1cdde44                   ; 004c961a
        ;   Label: LAB_004c961a
    PUSH EDI                            ; 004c961f
    ADD EAX,EBX                         ; 004c9620
    PUSH EAX                            ; 004c9622
    CALL core_gore.cpp_FUN_004c88a0     ; 004c9623
        ;   XREF to: 004c88a0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c88a0()
    ADD ESP,0x8                         ; 004c9628
    JMP 0x004c9607                      ; 004c962b
        ;   XREF to: 004c9607 (UNCONDITIONAL_JUMP)  ; LAB_004c9607
    MOV EBX,dword ptr [0x01cde348]      ; 004c962d | DAT_01cde348
        ;   Label: LAB_004c962d
    XOR ESI,ESI                         ; 004c9633
    TEST EBX,EBX                        ; 004c9635
    JLE 0x004c94e0                      ; 004c9637
        ;   XREF to: 004c94e0 (CONDITIONAL_JUMP)  ; LAB_004c94e0
    XOR EBX,EBX                         ; 004c963d
    CMP dword ptr [EBX + 0x1cde34c],0x0 ; 004c963f
        ;   Label: LAB_004c963f
    JZ 0x004c965c                       ; 004c9646
        ;   XREF to: 004c965c (CONDITIONAL_JUMP)  ; LAB_004c965c
    MOV EBP,dword ptr [0x01cde348]      ; 004c9648 | DAT_01cde348
        ;   Label: LAB_004c9648
    INC ESI                             ; 004c964e
    ADD EBX,0x40                        ; 004c964f
    CMP ESI,EBP                         ; 004c9652
    JGE 0x004c94e0                      ; 004c9654
        ;   XREF to: 004c94e0 (CONDITIONAL_JUMP)  ; LAB_004c94e0
    JMP 0x004c963f                      ; 004c965a
        ;   XREF to: 004c963f (UNCONDITIONAL_JUMP)  ; LAB_004c963f
    MOV EAX,0x1cde34c                   ; 004c965c
        ;   Label: LAB_004c965c
    PUSH EDI                            ; 004c9661
    ADD EAX,EBX                         ; 004c9662
    PUSH EAX                            ; 004c9664
    CALL core_gore.cpp_FUN_004c9000     ; 004c9665
        ;   XREF to: 004c9000 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c9000()
    ADD ESP,0x8                         ; 004c966a
    JMP 0x004c9648                      ; 004c966d
        ;   XREF to: 004c9648 (UNCONDITIONAL_JUMP)  ; LAB_004c9648

