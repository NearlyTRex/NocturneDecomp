; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0047366e(int param_1)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;
; Called Functions:
;   core_dtrace.cpp_FUN_004737f0
;   core_dtrace.cpp_FUN_00473860
;   crt_unknown.c_FUN_005a30b6
;   shape_edittool.cpp_FUN_0047ed50
;   shape_edittool.cpp_FUN_0047ee50
;   shape_edittool.cpp_FUN_0047f970
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0047366e
        ;   Label: core_dtrace.cpp_FUN_0047366e
    PUSH EBX                            ; 00473670
    PUSH ESI                            ; 00473671
    PUSH EDI                            ; 00473672
    PUSH EBP                            ; 00473673
    SUB ESP,0x10                        ; 00473674
    MOV EBX,dword ptr [ESP + 0x24]      ; 00473677
    PUSH 0x5bc888                       ; 0047367b
    MOV EDX,dword ptr [0x005fb140]      ; 00473680 | g_CEditorToolsPtr
    PUSH EDX                            ; 00473686
    CALL shape_edittool.cpp_FUN_0047ed50 ; 00473687
        ;   XREF to: 0047ed50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047ed50(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0047368c
    PUSH EBX                            ; 0047368f
    CALL core_dtrace.cpp_FUN_00473860   ; 00473690
        ;   XREF to: 00473860 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473860()
    ADD ESP,0x4                         ; 00473695
    MOV dword ptr [EBX + 0x4],0x0       ; 00473698
    XOR EAX,EAX                         ; 0047369f
    XOR EDX,EDX                         ; 004736a1
    MOV ECX,dword ptr [EBX + 0x44]      ; 004736a3
        ;   Label: LAB_004736a3
    MOV EBP,dword ptr [EBX + 0x40]      ; 004736a6
    IMUL EBP,ECX                        ; 004736a9
    MOV ECX,dword ptr [EBX + 0x48]      ; 004736ac
    IMUL ECX,EBP                        ; 004736af
    CMP EAX,ECX                         ; 004736b2
    JGE 0x004736ca                      ; 004736b4
        ;   XREF to: 004736ca (CONDITIONAL_JUMP)  ; LAB_004736ca
    MOV ECX,dword ptr [EBX + 0x4c]      ; 004736b6
    MOV ESI,dword ptr [EBX + 0x4]       ; 004736b9
    MOV ECX,dword ptr [ECX + EDX*0x1]   ; 004736bc
    ADD EDX,0x58                        ; 004736bf
    ADD ESI,ECX                         ; 004736c2
    INC EAX                             ; 004736c4
    MOV dword ptr [EBX + 0x4],ESI       ; 004736c5
    JMP 0x004736a3                      ; 004736c8
        ;   XREF to: 004736a3 (UNCONDITIONAL_JUMP)  ; LAB_004736a3
    PUSH EBX                            ; 004736ca
        ;   Label: LAB_004736ca
    CALL core_dtrace.cpp_FUN_004737f0   ; 004736cb
        ;   XREF to: 004737f0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004737f0()
    XOR ESI,ESI                         ; 004736d0
    ADD ESP,0x4                         ; 004736d2
    MOV dword ptr [ESP + 0x8],ESI       ; 004736d5
    MOV dword ptr [ESP + 0x4],ESI       ; 004736d9
    MOV dword ptr [ESP],ESI             ; 004736dd
    MOV EDI,dword ptr [EBX + 0x44]      ; 004736e0
        ;   Label: LAB_004736e0
    MOV EBP,dword ptr [EBX + 0x40]      ; 004736e3
    IMUL EBP,EDI                        ; 004736e6
    IMUL EBP,dword ptr [EBX + 0x48]     ; 004736e9
    CMP EBP,dword ptr [ESP + 0x4]       ; 004736ed
    JLE 0x004737d1                      ; 004736f1
        ;   XREF to: 004737d1 (CONDITIONAL_JUMP)  ; LAB_004737d1
    MOV ECX,dword ptr [ESP]             ; 004736f7
    MOV EBP,dword ptr [EBX + 0x4c]      ; 004736fa
    ADD EBP,ECX                         ; 004736fd
    MOV ESI,dword ptr [EBP]             ; 004736ff
    TEST ESI,ESI                        ; 00473702
    JLE 0x00473782                      ; 00473704
        ;   XREF to: 00473782 (CONDITIONAL_JUMP)  ; LAB_00473782
    IMUL ECX,ESI,0x38                   ; 00473706
    MOV EDX,dword ptr [ESP + 0x8]       ; 00473709
    IMUL EAX,EDX,0x38                   ; 0047370d
    MOV EDI,dword ptr [EBX + 0x8]       ; 00473710
    MOV ESI,dword ptr [EBP + 0x4]       ; 00473713
    ADD EDI,EAX                         ; 00473716
    MOV dword ptr [ESP + 0xc],EAX       ; 00473718
    PUSH EDI                            ; 0047371c
    MOV EAX,ECX                         ; 0047371d
    SHR ECX,0x2                         ; 0047371f
    MOVSD.REP ES:EDI,ESI                ; 00473722
    MOV CL,AL                           ; 00473724
    AND CL,0x3                          ; 00473726
    MOVSB.REP ES:EDI,ESI                ; 00473729
    POP EDI                             ; 0047372b
    MOV ECX,dword ptr [EBP]             ; 0047372c
    MOV EDI,dword ptr [EBX + 0xc]       ; 0047372f
    MOV ESI,dword ptr [EBP + 0x54]      ; 00473732
    ADD EDI,EDX                         ; 00473735
    PUSH EDI                            ; 00473737
    MOV EAX,ECX                         ; 00473738
    SHR ECX,0x2                         ; 0047373a
    MOVSD.REP ES:EDI,ESI                ; 0047373d
    MOV CL,AL                           ; 0047373f
    AND CL,0x3                          ; 00473741
    MOVSB.REP ES:EDI,ESI                ; 00473744
    POP EDI                             ; 00473746
    MOV ECX,dword ptr [EBP + 0x4]       ; 00473747
    PUSH ECX                            ; 0047374a
    CALL crt_unknown.c_FUN_005a30b6     ; 0047374b
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00473750
    MOV ESI,dword ptr [EBP + 0x54]      ; 00473753
    PUSH ESI                            ; 00473756
    CALL crt_unknown.c_FUN_005a30b6     ; 00473757
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0047375c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047375f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00473762
    ADD EDX,EAX                         ; 00473766
    MOV dword ptr [EBP + 0x4],EDX       ; 00473768
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047376b
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047376f
    MOV EDI,dword ptr [ESP + 0x8]       ; 00473772
    ADD EDX,EAX                         ; 00473776
    ADD EDI,dword ptr [EBP]             ; 00473778
    MOV dword ptr [EBP + 0x54],EDX      ; 0047377b
    MOV dword ptr [ESP + 0x8],EDI       ; 0047377e
    MOV EBP,dword ptr [EBX + 0x40]      ; 00473782
        ;   Label: LAB_00473782
    IMUL EBP,dword ptr [EBX + 0x44]     ; 00473785
    MOV EDX,dword ptr [EBX + 0x48]      ; 00473789
    IMUL EBP,EDX                        ; 0047378c
    MOV dword ptr [ESP + 0xc],EBP       ; 0047378f
    FILD dword ptr [ESP + 0xc]          ; 00473793
    SUB ESP,0x4                         ; 00473797
    MOV ESI,dword ptr [ESP + 0x8]       ; 0047379a
    INC ESI                             ; 0047379e
    MOV dword ptr [ESP + 0x10],ESI      ; 0047379f
    FSTP float ptr [ESP]                ; 004737a3
    FILD dword ptr [ESP + 0x10]         ; 004737a6
    SUB ESP,0x4                         ; 004737aa
    MOV ECX,dword ptr [0x005fb140]      ; 004737ad | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004737b3
    PUSH ECX                            ; 004737b6
    CALL shape_edittool.cpp_FUN_0047ee50 ; 004737b7
        ;   XREF to: 0047ee50 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047ee50()
    ADD ESP,0xc                         ; 004737bc
    MOV EDI,dword ptr [ESP]             ; 004737bf
    ADD EDI,0x58                        ; 004737c2
    MOV dword ptr [ESP + 0x4],ESI       ; 004737c5
    MOV dword ptr [ESP],EDI             ; 004737c9
    JMP 0x004736e0                      ; 004737cc
        ;   XREF to: 004736e0 (UNCONDITIONAL_JUMP)  ; LAB_004736e0
    MOV EBP,dword ptr [0x005fb140]      ; 004737d1 | g_CEditorToolsPtr
        ;   Label: LAB_004737d1
    PUSH EBP                            ; 004737d7
    CALL shape_edittool.cpp_FUN_0047f970 ; 004737d8
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 004737dd
    ADD ESP,0x10                        ; 004737e0
    POP EBP                             ; 004737e3
    POP EDI                             ; 004737e4
    POP ESI                             ; 004737e5
    POP EBX                             ; 004737e6
    RET                                 ; 004737e7

