; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bc830(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bcb40 at 004bcb50
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d308
;   undefined4 DAT_0061d30c
;   undefined4 DAT_0152d250
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_fldnotes.cpp_FUN_004bc6f0
;   core_fldnotes.cpp_FUN_004bc9b0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc830
        ;   Label: core_fldnotes.cpp_FUN_004bc830
    PUSH ESI                            ; 004bc831
    PUSH EDI                            ; 004bc832
    PUSH EBP                            ; 004bc833
    SUB ESP,0xc                         ; 004bc834
    MOV EDI,dword ptr [ESP + 0x20]      ; 004bc837
    MOV EBP,dword ptr [ESP + 0x24]      ; 004bc83b
    CMP dword ptr [EDI + 0x96c],0x0     ; 004bc83f
    JNZ 0x004bc907                      ; 004bc846
        ;   XREF to: 004bc907 (CONDITIONAL_JUMP)  ; LAB_004bc907
    PUSH 0xffff                         ; 004bc84c
        ;   Label: LAB_004bc84c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004bc851
    PUSH ECX                            ; 004bc855
    PUSH EBP                            ; 004bc856
    LEA EAX,[EDI + 0x70]                ; 004bc857
    PUSH EAX                            ; 004bc85a
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004bc85b
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,[0x01d06ab4]                ; 004bc860 | DAT_01d06ab4
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004bc865
    ADD ESP,0x10                        ; 004bc86c
    TEST EBX,EBX                        ; 004bc86f
    JZ 0x004bc8c3                       ; 004bc871
        ;   XREF to: 004bc8c3 (CONDITIONAL_JUMP)  ; LAB_004bc8c3
    PUSH 0x5dfc72                       ; 004bc873
    MOV ESI,dword ptr [0x0061b4d0]      ; 004bc878 | DAT_0061b4d0
    PUSH ESI                            ; 004bc87e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004bc87f
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004bc884
    TEST EAX,EAX                        ; 004bc887
    JZ 0x004bc915                       ; 004bc889
        ;   XREF to: 004bc915 (CONDITIONAL_JUMP)  ; LAB_004bc915
    MOV EAX,dword ptr [EDI + 0x6c]      ; 004bc88f
    MOV EDX,EAX                         ; 004bc892
    SAR EDX,0x1f                        ; 004bc894
    SUB EAX,EDX                         ; 004bc897
    SAR EAX,0x1                         ; 004bc899
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bc89b
    PUSH 0xffff                         ; 004bc89f
    ADD EAX,ESI                         ; 004bc8a4
    PUSH EAX                            ; 004bc8a6
    MOV EAX,dword ptr [EDI + 0x68]      ; 004bc8a7
    MOV EDX,EAX                         ; 004bc8aa
    SAR EDX,0x1f                        ; 004bc8ac
    SUB EAX,EDX                         ; 004bc8af
    SAR EAX,0x1                         ; 004bc8b1
    ADD EAX,EBP                         ; 004bc8b3
    PUSH EAX                            ; 004bc8b5
    PUSH 0x1cc7c5c                      ; 004bc8b6
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004bc8bb
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_004bc8bb
    ADD ESP,0x10                        ; 004bc8c0
    MOV EAX,dword ptr [EDI + 0x2c0]     ; 004bc8c3
        ;   Label: LAB_004bc8c3
    XOR ESI,ESI                         ; 004bc8c9
    TEST EAX,EAX                        ; 004bc8cb
    JLE 0x004bc8ff                      ; 004bc8cd
        ;   XREF to: 004bc8ff (CONDITIONAL_JUMP)  ; LAB_004bc8ff
    LEA EAX,[EDI + 0x2c4]               ; 004bc8cf
    MOV EBX,EDI                         ; 004bc8d5
    MOV dword ptr [ESP + 0x8],EAX       ; 004bc8d7
    IMUL EDX,ESI,0xd4                   ; 004bc8db
        ;   Label: LAB_004bc8db
    CMP dword ptr [EBX + 0x394],0x0     ; 004bc8e1
    JNZ 0x004bc96d                      ; 004bc8e8
        ;   XREF to: 004bc96d (CONDITIONAL_JUMP)  ; LAB_004bc96d
    INC ESI                             ; 004bc8ee
        ;   Label: LAB_004bc8ee
    MOV EDX,dword ptr [EDI + 0x2c0]     ; 004bc8ef
    ADD EBX,0xd4                        ; 004bc8f5
    CMP ESI,EDX                         ; 004bc8fb
    JL 0x004bc8db                       ; 004bc8fd
        ;   XREF to: 004bc8db (CONDITIONAL_JUMP)  ; LAB_004bc8db
    ADD ESP,0xc                         ; 004bc8ff
        ;   Label: LAB_004bc8ff
    POP EBP                             ; 004bc902
    POP EDI                             ; 004bc903
    POP ESI                             ; 004bc904
    POP EBX                             ; 004bc905
    RET                                 ; 004bc906
    PUSH EDI                            ; 004bc907
        ;   Label: LAB_004bc907
    CALL core_fldnotes.cpp_FUN_004bc9b0 ; 004bc908
        ;   XREF to: 004bc9b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc9b0()
    ADD ESP,0x4                         ; 004bc90d
    JMP 0x004bc84c                      ; 004bc910
        ;   XREF to: 004bc84c (UNCONDITIONAL_JUMP)  ; LAB_004bc84c
    LEA EAX,[ESP + 0x4]                 ; 004bc915
        ;   Label: LAB_004bc915
    PUSH EAX                            ; 004bc919
    LEA EAX,[ESP + 0x4]                 ; 004bc91a
    PUSH EAX                            ; 004bc91e
    MOV EAX,[0x01d06ab4]                ; 004bc91f | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004bc924
    ADD EAX,0x20                        ; 004bc92b
    PUSH EAX                            ; 004bc92e
    PUSH EDI                            ; 004bc92f
    CALL core_fldnotes.cpp_FUN_004bc6f0 ; 004bc930
        ;   XREF to: 004bc6f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc6f0()
    ADD ESP,0x10                        ; 004bc935
    TEST EAX,EAX                        ; 004bc938
    JL 0x004bc8c3                       ; 004bc93a
        ;   XREF to: 004bc8c3 (CONDITIONAL_JUMP)  ; LAB_004bc8c3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004bc93c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004bc940
    MOV ECX,dword ptr [0x0061d30c]      ; 004bc944 | DAT_0061d30c
    ADD EAX,EDX                         ; 004bc94a
    PUSH 0xffff                         ; 004bc94c
    SUB EAX,ECX                         ; 004bc951
    PUSH EAX                            ; 004bc953
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bc954
    MOV EBX,dword ptr [0x0061d308]      ; 004bc958 | DAT_0061d308
    ADD EAX,EBP                         ; 004bc95e
    SUB EAX,EBX                         ; 004bc960
    PUSH EAX                            ; 004bc962
    PUSH 0x1cc7c48                      ; 004bc963
    JMP 0x004bc8bb                      ; 004bc968
        ;   XREF to: 004bc8bb (UNCONDITIONAL_JUMP)  ; LAB_004bc8bb
    PUSH -0x1                           ; 004bc96d
        ;   Label: LAB_004bc96d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bc96f
    MOV ECX,dword ptr [EBX + 0x390]     ; 004bc973
    PUSH 0x1                            ; 004bc979
    ADD EAX,ECX                         ; 004bc97b
    PUSH EAX                            ; 004bc97d
    MOV EAX,dword ptr [EBX + 0x38c]     ; 004bc97e
    ADD EAX,EBP                         ; 004bc984
    PUSH EAX                            ; 004bc986
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bc987
    ADD EAX,EDX                         ; 004bc98b
    ADD EAX,0x64                        ; 004bc98d
    PUSH EAX                            ; 004bc990
    MOV EAX,[0x0152d250]                ; 004bc991 | DAT_0152d250
    PUSH EAX                            ; 004bc996
    CALL engine_font.cpp_FUN_004c1dd0   ; 004bc997
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004bc99c
    JMP 0x004bc8ee                      ; 004bc99f
        ;   XREF to: 004bc8ee (UNCONDITIONAL_JUMP)  ; LAB_004bc8ee

