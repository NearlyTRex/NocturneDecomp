; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_parseDeathType_FUN_0047a760(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047be2d
;
; Referenced Globals:
;   TerminatedCString s_generic_0057f4f4
;   TerminatedCString s_drown_0057f4fc
;   TerminatedCString s_fall_0057f502
;   TerminatedCString s_explode_0057f507
;   TerminatedCString s_fallApart_0057f50f
;   TerminatedCString s_shatter_0057f519
;   TerminatedCString s_electrocute_0057f521
;   TerminatedCString s_gas_0057f52d
;   TerminatedCString s_Chopped_0057f531
;   TerminatedCString s_Crushed_0057f539
;   TerminatedCString s_Impale_0057f541
;   TerminatedCString s_Fire_0057f548
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a760
        ;   Label: core_event.cpp_parseDeathType_FUN_0047a760
    PUSH ESI                            ; 0047a761
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047a762
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047a766
    PUSH 0x57f4f4                       ; 0047a76a | = "generic"
    PUSH EBX                            ; 0047a76f
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a770
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a775
    TEST EAX,EAX                        ; 0047a778
    JNZ 0x0047a786                      ; 0047a77a
        ;   XREF to: 0047a786 (CONDITIONAL_JUMP)  ; LAB_0047a786
    MOV dword ptr [ESI],EAX             ; 0047a77c
    MOV EAX,0x1                         ; 0047a77e
    POP ESI                             ; 0047a783
    POP EBX                             ; 0047a784
    RET                                 ; 0047a785
    PUSH 0x57f4fc                       ; 0047a786 | = "drown"
        ;   Label: LAB_0047a786
    PUSH EBX                            ; 0047a78b
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a78c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a791
    TEST EAX,EAX                        ; 0047a794
    JNZ 0x0047a7a6                      ; 0047a796
        ;   XREF to: 0047a7a6 (CONDITIONAL_JUMP)  ; LAB_0047a7a6
    MOV dword ptr [ESI],0x1             ; 0047a798
    MOV EAX,0x1                         ; 0047a79e
    POP ESI                             ; 0047a7a3
    POP EBX                             ; 0047a7a4
    RET                                 ; 0047a7a5
    PUSH 0x57f502                       ; 0047a7a6 | = "fall"
        ;   Label: LAB_0047a7a6
    PUSH EBX                            ; 0047a7ab
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a7ac
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a7b1
    TEST EAX,EAX                        ; 0047a7b4
    JNZ 0x0047a7c6                      ; 0047a7b6
        ;   XREF to: 0047a7c6 (CONDITIONAL_JUMP)  ; LAB_0047a7c6
    MOV dword ptr [ESI],0x2             ; 0047a7b8
    MOV EAX,0x1                         ; 0047a7be
    POP ESI                             ; 0047a7c3
    POP EBX                             ; 0047a7c4
    RET                                 ; 0047a7c5
    PUSH 0x57f507                       ; 0047a7c6 | = "explode"
        ;   Label: LAB_0047a7c6
    PUSH EBX                            ; 0047a7cb
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a7cc
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a7d1
    TEST EAX,EAX                        ; 0047a7d4
    JNZ 0x0047a7e6                      ; 0047a7d6
        ;   XREF to: 0047a7e6 (CONDITIONAL_JUMP)  ; LAB_0047a7e6
    MOV dword ptr [ESI],0x3             ; 0047a7d8
    MOV EAX,0x1                         ; 0047a7de
    POP ESI                             ; 0047a7e3
    POP EBX                             ; 0047a7e4
    RET                                 ; 0047a7e5
    PUSH 0x57f50f                       ; 0047a7e6 | = "fallApart"
        ;   Label: LAB_0047a7e6
    PUSH EBX                            ; 0047a7eb
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a7ec
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a7f1
    TEST EAX,EAX                        ; 0047a7f4
    JNZ 0x0047a806                      ; 0047a7f6
        ;   XREF to: 0047a806 (CONDITIONAL_JUMP)  ; LAB_0047a806
    MOV dword ptr [ESI],0x4             ; 0047a7f8
    MOV EAX,0x1                         ; 0047a7fe
    POP ESI                             ; 0047a803
    POP EBX                             ; 0047a804
    RET                                 ; 0047a805
    PUSH 0x57f519                       ; 0047a806 | = "shatter"
        ;   Label: LAB_0047a806
    PUSH EBX                            ; 0047a80b
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a80c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a811
    TEST EAX,EAX                        ; 0047a814
    JNZ 0x0047a826                      ; 0047a816
        ;   XREF to: 0047a826 (CONDITIONAL_JUMP)  ; LAB_0047a826
    MOV dword ptr [ESI],0x5             ; 0047a818
    MOV EAX,0x1                         ; 0047a81e
    POP ESI                             ; 0047a823
    POP EBX                             ; 0047a824
    RET                                 ; 0047a825
    PUSH 0x57f521                       ; 0047a826 | = "electrocute"
        ;   Label: LAB_0047a826
    PUSH EBX                            ; 0047a82b
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a82c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a831
    TEST EAX,EAX                        ; 0047a834
    JNZ 0x0047a846                      ; 0047a836
        ;   XREF to: 0047a846 (CONDITIONAL_JUMP)  ; LAB_0047a846
    MOV dword ptr [ESI],0x6             ; 0047a838
    MOV EAX,0x1                         ; 0047a83e
    POP ESI                             ; 0047a843
    POP EBX                             ; 0047a844
    RET                                 ; 0047a845
    PUSH 0x57f52d                       ; 0047a846 | = "gas"
        ;   Label: LAB_0047a846
    PUSH EBX                            ; 0047a84b
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a84c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a851
    TEST EAX,EAX                        ; 0047a854
    JNZ 0x0047a866                      ; 0047a856
        ;   XREF to: 0047a866 (CONDITIONAL_JUMP)  ; LAB_0047a866
    MOV dword ptr [ESI],0x69            ; 0047a858
    MOV EAX,0x1                         ; 0047a85e
    POP ESI                             ; 0047a863
    POP EBX                             ; 0047a864
    RET                                 ; 0047a865
    PUSH 0x57f531                       ; 0047a866 | = "Chopped"
        ;   Label: LAB_0047a866
    PUSH EBX                            ; 0047a86b
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a86c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a871
    TEST EAX,EAX                        ; 0047a874
    JNZ 0x0047a886                      ; 0047a876
        ;   XREF to: 0047a886 (CONDITIONAL_JUMP)  ; LAB_0047a886
    MOV dword ptr [ESI],0x7             ; 0047a878
    MOV EAX,0x1                         ; 0047a87e
    POP ESI                             ; 0047a883
    POP EBX                             ; 0047a884
    RET                                 ; 0047a885
    PUSH 0x57f539                       ; 0047a886 | = "Crushed"
        ;   Label: LAB_0047a886
    PUSH EBX                            ; 0047a88b
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a88c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a891
    TEST EAX,EAX                        ; 0047a894
    JNZ 0x0047a8a6                      ; 0047a896
        ;   XREF to: 0047a8a6 (CONDITIONAL_JUMP)  ; LAB_0047a8a6
    MOV dword ptr [ESI],0x8             ; 0047a898
    MOV EAX,0x1                         ; 0047a89e
    POP ESI                             ; 0047a8a3
    POP EBX                             ; 0047a8a4
    RET                                 ; 0047a8a5
    PUSH 0x57f541                       ; 0047a8a6 | = "Impale"
        ;   Label: LAB_0047a8a6
    PUSH EBX                            ; 0047a8ab
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a8ac
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a8b1
    TEST EAX,EAX                        ; 0047a8b4
    JNZ 0x0047a8c6                      ; 0047a8b6
        ;   XREF to: 0047a8c6 (CONDITIONAL_JUMP)  ; LAB_0047a8c6
    MOV dword ptr [ESI],0x9             ; 0047a8b8
    MOV EAX,0x1                         ; 0047a8be
    POP ESI                             ; 0047a8c3
    POP EBX                             ; 0047a8c4
    RET                                 ; 0047a8c5
    PUSH 0x57f548                       ; 0047a8c6 | = "Fire"
        ;   Label: LAB_0047a8c6
    PUSH EBX                            ; 0047a8cb
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a8cc
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047a8d1
    TEST EAX,EAX                        ; 0047a8d4
    JNZ 0x0047a8e6                      ; 0047a8d6
        ;   XREF to: 0047a8e6 (CONDITIONAL_JUMP)  ; LAB_0047a8e6
    MOV dword ptr [ESI],0xa             ; 0047a8d8
    MOV EAX,0x1                         ; 0047a8de
    POP ESI                             ; 0047a8e3
    POP EBX                             ; 0047a8e4
    RET                                 ; 0047a8e5
    XOR EAX,EAX                         ; 0047a8e6
        ;   Label: LAB_0047a8e6
    POP ESI                             ; 0047a8e8
    POP EBX                             ; 0047a8e9
    RET                                 ; 0047a8ea

