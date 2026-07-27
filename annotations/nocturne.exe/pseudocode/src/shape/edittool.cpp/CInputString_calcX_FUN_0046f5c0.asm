; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(int param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_draw_FUN_0046f680 at 0046f753
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e538
;   TerminatedCString s_CInputString_calcX_strin_0057e54e
;   undefined4 DAT_01bcd070
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f5c0
        ;   Label: shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0
    PUSH EBP                            ; 0046f5c1
    SUB ESP,0x4                         ; 0046f5c2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046f5c5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046f5c9
    TEST EBX,EBX                        ; 0046f5cd
    JL 0x0046f648                       ; 0046f5cf
        ;   XREF to: 0046f648 (CONDITIONAL_JUMP)  ; LAB_0046f648
    MOV EDX,dword ptr [EAX + 0x130]     ; 0046f5d5
    CMP EBX,EDX                         ; 0046f5db
    JLE 0x0046f5e1                      ; 0046f5dd
        ;   XREF to: 0046f5e1 (CONDITIONAL_JUMP)  ; LAB_0046f5e1
    MOV EBX,EDX                         ; 0046f5df
    PUSH EDI                            ; 0046f5e1
        ;   Label: LAB_0046f5e1
    CMP dword ptr [EAX + 0x13c],0x0     ; 0046f5e2
    JZ 0x0046f64c                       ; 0046f5e9
        ;   XREF to: 0046f64c (CONDITIONAL_JUMP)  ; LAB_0046f64c
    CMP EBX,0x400                       ; 0046f5eb
    JC 0x0046f616                       ; 0046f5f1
        ;   XREF to: 0046f616 (CONDITIONAL_JUMP)  ; LAB_0046f616
    MOV EDI,0x57e538                    ; 0046f5f3 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x187                       ; 0046f5f8
    PUSH 0x57e54e                       ; 0046f5fd | = "CInputString::calcX - string too big ..."
    MOV dword ptr [0x01cc4800],EDI      ; 0046f602 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0046f608 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046f60e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046f613
    PUSH EBX                            ; 0046f616
        ;   Label: LAB_0046f616
    PUSH 0x2a                           ; 0046f617
    PUSH 0x1bcd9c8                      ; 0046f619
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0046f61e
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 0046f623
    XOR AH,AH                           ; 0046f626
    PUSH 0x1bcd9c8                      ; 0046f628
    MOV byte ptr [EBX + 0x1bcd9c8],AH   ; 0046f62d
    MOV EAX,[0x01bcd070]                ; 0046f633 | DAT_01bcd070
    PUSH EAX                            ; 0046f638
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046f639
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0046f63e
    POP EDI                             ; 0046f641
    ADD ESP,0x4                         ; 0046f642
        ;   Label: LAB_0046f642
    POP EBP                             ; 0046f645
    POP EBX                             ; 0046f646
    RET                                 ; 0046f647
    XOR EAX,EAX                         ; 0046f648
        ;   Label: LAB_0046f648
    JMP 0x0046f642                      ; 0046f64a
        ;   XREF to: 0046f642 (UNCONDITIONAL_JUMP)  ; LAB_0046f642
    PUSH ESI                            ; 0046f64c
        ;   Label: LAB_0046f64c
    PUSH EAX                            ; 0046f64d
    ADD EBX,EAX                         ; 0046f64e
    XOR EDX,EDX                         ; 0046f650
    MOV ESI,dword ptr [0x01bcd070]      ; 0046f652 | DAT_01bcd070
    MOV DL,byte ptr [EBX]               ; 0046f658
    PUSH ESI                            ; 0046f65a
    MOV dword ptr [ESP + 0x10],EDX      ; 0046f65b
    MOV byte ptr [EBX],0x0              ; 0046f65f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046f662
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0046f667
    MOV DL,byte ptr [ESP + 0x8]         ; 0046f66a
    MOV byte ptr [EBX],DL               ; 0046f66e
    POP ESI                             ; 0046f670
    POP EDI                             ; 0046f671
    ADD ESP,0x4                         ; 0046f672
    POP EBP                             ; 0046f675
    POP EBX                             ; 0046f676
    RET                                 ; 0046f677

