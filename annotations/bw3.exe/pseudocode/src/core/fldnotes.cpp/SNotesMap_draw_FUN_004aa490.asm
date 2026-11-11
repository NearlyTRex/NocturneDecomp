; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004aa490(SNotesMap *this_ptr,int param_2,int param_3)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceMap_draw_FUN_004aa7b0 at 004aa7c0
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fe3a0
;   undefined4 DAT_005fe3a4
;   undefined4 DAT_01549abc
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_fldnotes.cpp_SNotesMap_applyReveal_FUN_004aa620
;   core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350
;   crt_string.c__strncpy_FUN_005a4ee0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_font.cpp_FUN_004b0a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa490
        ;   Label: core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490
    PUSH ESI                            ; 004aa491
    PUSH EDI                            ; 004aa492
    PUSH EBP                            ; 004aa493
    SUB ESP,0xc                         ; 004aa494
    MOV EDI,dword ptr [ESP + 0x20]      ; 004aa497
    MOV EBP,dword ptr [ESP + 0x28]      ; 004aa49b
    CMP dword ptr [EDI + 0x1268],0x0    ; 004aa49f
    JNZ 0x004aa599                      ; 004aa4a6
        ;   XREF to: 004aa599 (CONDITIONAL_JUMP)  ; LAB_004aa599
    PUSH 0xffff                         ; 004aa4ac
        ;   Label: LAB_004aa4ac
    PUSH EBP                            ; 004aa4b1
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004aa4b2
    PUSH ECX                            ; 004aa4b6
    LEA EAX,[EDI + 0x70]                ; 004aa4b7
    PUSH EAX                            ; 004aa4ba
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004aa4bb
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,[0x01d5ba14]                ; 004aa4c0 | DAT_01d5ba14
    MOV EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004aa4c5
    ADD ESP,0x10                        ; 004aa4cc
    TEST EBX,EBX                        ; 004aa4cf
    JZ 0x004aa521                       ; 004aa4d1
        ;   XREF to: 004aa521 (CONDITIONAL_JUMP)  ; LAB_004aa521
    PUSH 0x5c115f                       ; 004aa4d3
    MOV ESI,dword ptr [0x005fba60]      ; 004aa4d8 | DAT_005fba60
    PUSH ESI                            ; 004aa4de
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004aa4df
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004aa4e4
    TEST EAX,EAX                        ; 004aa4e7
    JZ 0x004aa5a7                       ; 004aa4e9
        ;   XREF to: 004aa5a7 (CONDITIONAL_JUMP)  ; LAB_004aa5a7
    MOV EAX,dword ptr [EDI + 0x6c]      ; 004aa4ef
    MOV EDX,EAX                         ; 004aa4f2
    SAR EDX,0x1f                        ; 004aa4f4
    SUB EAX,EDX                         ; 004aa4f7
    SAR EAX,0x1                         ; 004aa4f9
    PUSH 0xffff                         ; 004aa4fb
    ADD EAX,EBP                         ; 004aa500
    PUSH EAX                            ; 004aa502
    MOV EAX,dword ptr [EDI + 0x68]      ; 004aa503
    MOV EDX,EAX                         ; 004aa506
    SAR EDX,0x1f                        ; 004aa508
    SUB EAX,EDX                         ; 004aa50b
    SAR EAX,0x1                         ; 004aa50d
    ADD EAX,dword ptr [ESP + 0x2c]      ; 004aa50f
    PUSH EAX                            ; 004aa513
    PUSH 0x1d19c74                      ; 004aa514
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004aa519
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_004aa519
    ADD ESP,0x10                        ; 004aa51e
    MOV EAX,dword ptr [EDI + 0x5f0]     ; 004aa521
        ;   Label: LAB_004aa521
    XOR ESI,ESI                         ; 004aa527
    TEST EAX,EAX                        ; 004aa529
    JLE 0x004aa58b                      ; 004aa52b
        ;   XREF to: 004aa58b (CONDITIONAL_JUMP)  ; LAB_004aa58b
    LEA EAX,[EDI + 0x5f4]               ; 004aa52d
    MOV EBX,EDI                         ; 004aa533
    MOV dword ptr [ESP + 0x8],EAX       ; 004aa535
    IMUL EDX,ESI,0xd4                   ; 004aa539
        ;   Label: LAB_004aa539
    CMP dword ptr [EBX + 0x6c4],0x0     ; 004aa53f
    JZ 0x004aa57a                       ; 004aa546
        ;   XREF to: 004aa57a (CONDITIONAL_JUMP)  ; LAB_004aa57a
    PUSH -0x1                           ; 004aa548
    MOV EAX,dword ptr [EBX + 0x6c0]     ; 004aa54a
    PUSH 0x1                            ; 004aa550
    ADD EAX,EBP                         ; 004aa552
    MOV ECX,dword ptr [EBX + 0x6bc]     ; 004aa554
    PUSH EAX                            ; 004aa55a
    MOV EAX,dword ptr [ESP + 0x30]      ; 004aa55b
    ADD EAX,ECX                         ; 004aa55f
    PUSH EAX                            ; 004aa561
    MOV EAX,dword ptr [ESP + 0x18]      ; 004aa562
    ADD EAX,EDX                         ; 004aa566
    ADD EAX,0x64                        ; 004aa568
    PUSH EAX                            ; 004aa56b
    MOV EAX,[0x01549abc]                ; 004aa56c | DAT_01549abc
    PUSH EAX                            ; 004aa571
    CALL engine_font.cpp_FUN_004b0a20   ; 004aa572
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004aa577
    INC ESI                             ; 004aa57a
        ;   Label: LAB_004aa57a
    MOV EDX,dword ptr [EDI + 0x5f0]     ; 004aa57b
    ADD EBX,0xd4                        ; 004aa581
    CMP ESI,EDX                         ; 004aa587
    JL 0x004aa539                       ; 004aa589
        ;   XREF to: 004aa539 (CONDITIONAL_JUMP)  ; LAB_004aa539
    MOV ECX,dword ptr [EDI]             ; 004aa58b
        ;   Label: LAB_004aa58b
    TEST ECX,ECX                        ; 004aa58d
    JNZ 0x004aa603                      ; 004aa58f
        ;   XREF to: 004aa603 (CONDITIONAL_JUMP)  ; LAB_004aa603
    ADD ESP,0xc                         ; 004aa591
    POP EBP                             ; 004aa594
    POP EDI                             ; 004aa595
    POP ESI                             ; 004aa596
    POP EBX                             ; 004aa597
    RET                                 ; 004aa598
    PUSH EDI                            ; 004aa599
        ;   Label: LAB_004aa599
    CALL core_fldnotes.cpp_SNotesMap_applyReveal_FUN_004aa620 ; 004aa59a
        ;   XREF to: 004aa620 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_applyReveal_FUN_004aa620(SNotesMap * this_ptr)
    ADD ESP,0x4                         ; 004aa59f
    JMP 0x004aa4ac                      ; 004aa5a2
        ;   XREF to: 004aa4ac (UNCONDITIONAL_JUMP)  ; LAB_004aa4ac
    LEA EAX,[ESP + 0x4]                 ; 004aa5a7
        ;   Label: LAB_004aa5a7
    PUSH EAX                            ; 004aa5ab
    LEA EAX,[ESP + 0x4]                 ; 004aa5ac
    PUSH EAX                            ; 004aa5b0
    MOV EAX,[0x01d5ba14]                ; 004aa5b1 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004aa5b6
    ADD EAX,0x20                        ; 004aa5bd
    PUSH EAX                            ; 004aa5c0
    PUSH EDI                            ; 004aa5c1
    CALL core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350 ; 004aa5c2
        ;   XREF to: 004aa350 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350(SNotesMap * this_ptr, float * param_2)
    ADD ESP,0x10                        ; 004aa5c7
    TEST EAX,EAX                        ; 004aa5ca
    JL 0x004aa521                       ; 004aa5cc
        ;   XREF to: 004aa521 (CONDITIONAL_JUMP)  ; LAB_004aa521
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa5d2
    MOV EDX,dword ptr [0x005fe3a4]      ; 004aa5d6 | DAT_005fe3a4
    ADD EAX,EBP                         ; 004aa5dc
    PUSH 0xffff                         ; 004aa5de
    SUB EAX,EDX                         ; 004aa5e3
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aa5e5
    PUSH EAX                            ; 004aa5e9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004aa5ea
    MOV EBX,dword ptr [0x005fe3a0]      ; 004aa5ee | DAT_005fe3a0
    ADD EAX,ECX                         ; 004aa5f4
    SUB EAX,EBX                         ; 004aa5f6
    PUSH EAX                            ; 004aa5f8
    PUSH 0x1d19c60                      ; 004aa5f9
    JMP 0x004aa519                      ; 004aa5fe
        ;   XREF to: 004aa519 (UNCONDITIONAL_JUMP)  ; LAB_004aa519
    PUSH 0x40                           ; 004aa603
        ;   Label: LAB_004aa603
    LEA EAX,[ECX + 0x41]                ; 004aa605
    PUSH EAX                            ; 004aa608
    PUSH 0x1d19cf0                      ; 004aa609
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 004aa60e
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 004aa613
    ADD ESP,0xc                         ; 004aa616
    POP EBP                             ; 004aa619
    POP EDI                             ; 004aa61a
    POP ESI                             ; 004aa61b
    POP EBX                             ; 004aa61c
    RET                                 ; 004aa61d

