; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048aaee(int param_1)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048ac70
;   core_dtrace.cpp_FUN_0048ace0
;   crt_unknown.c_FUN_005c0336
;   shape_edittool.cpp_FUN_004961b0
;   shape_edittool.cpp_FUN_004962b0
;   shape_edittool.cpp_FUN_00496dd0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0048aaee
        ;   Label: core_dtrace.cpp_FUN_0048aaee
    PUSH EBX                            ; 0048aaf0
    PUSH ESI                            ; 0048aaf1
    PUSH EDI                            ; 0048aaf2
    PUSH EBP                            ; 0048aaf3
    SUB ESP,0x10                        ; 0048aaf4
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048aaf7
    PUSH 0x5db7cb                       ; 0048aafb
    MOV EDX,dword ptr [0x0061abc0]      ; 0048ab00 | g_CEditorToolsPtr
    PUSH EDX                            ; 0048ab06
    CALL shape_edittool.cpp_FUN_004961b0 ; 0048ab07
        ;   XREF to: 004961b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004961b0(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0048ab0c
    PUSH EBX                            ; 0048ab0f
    CALL core_dtrace.cpp_FUN_0048ace0   ; 0048ab10
        ;   XREF to: 0048ace0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ace0()
    ADD ESP,0x4                         ; 0048ab15
    MOV dword ptr [EBX + 0x4],0x0       ; 0048ab18
    XOR EAX,EAX                         ; 0048ab1f
    XOR EDX,EDX                         ; 0048ab21
    MOV ECX,dword ptr [EBX + 0x44]      ; 0048ab23
        ;   Label: LAB_0048ab23
    MOV EBP,dword ptr [EBX + 0x40]      ; 0048ab26
    IMUL EBP,ECX                        ; 0048ab29
    MOV ECX,dword ptr [EBX + 0x48]      ; 0048ab2c
    IMUL ECX,EBP                        ; 0048ab2f
    CMP EAX,ECX                         ; 0048ab32
    JGE 0x0048ab4a                      ; 0048ab34
        ;   XREF to: 0048ab4a (CONDITIONAL_JUMP)  ; LAB_0048ab4a
    MOV ECX,dword ptr [EBX + 0x4c]      ; 0048ab36
    MOV ESI,dword ptr [EBX + 0x4]       ; 0048ab39
    MOV ECX,dword ptr [ECX + EDX*0x1]   ; 0048ab3c
    ADD EDX,0x58                        ; 0048ab3f
    ADD ESI,ECX                         ; 0048ab42
    INC EAX                             ; 0048ab44
    MOV dword ptr [EBX + 0x4],ESI       ; 0048ab45
    JMP 0x0048ab23                      ; 0048ab48
        ;   XREF to: 0048ab23 (UNCONDITIONAL_JUMP)  ; LAB_0048ab23
    PUSH EBX                            ; 0048ab4a
        ;   Label: LAB_0048ab4a
    CALL core_dtrace.cpp_FUN_0048ac70   ; 0048ab4b
        ;   XREF to: 0048ac70 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ac70()
    XOR ESI,ESI                         ; 0048ab50
    ADD ESP,0x4                         ; 0048ab52
    MOV dword ptr [ESP + 0x8],ESI       ; 0048ab55
    MOV dword ptr [ESP + 0x4],ESI       ; 0048ab59
    MOV dword ptr [ESP],ESI             ; 0048ab5d
    MOV EDI,dword ptr [EBX + 0x44]      ; 0048ab60
        ;   Label: LAB_0048ab60
    MOV EBP,dword ptr [EBX + 0x40]      ; 0048ab63
    IMUL EBP,EDI                        ; 0048ab66
    IMUL EBP,dword ptr [EBX + 0x48]     ; 0048ab69
    CMP EBP,dword ptr [ESP + 0x4]       ; 0048ab6d
    JLE 0x0048ac51                      ; 0048ab71
        ;   XREF to: 0048ac51 (CONDITIONAL_JUMP)  ; LAB_0048ac51
    MOV ECX,dword ptr [ESP]             ; 0048ab77
    MOV EBP,dword ptr [EBX + 0x4c]      ; 0048ab7a
    ADD EBP,ECX                         ; 0048ab7d
    MOV ESI,dword ptr [EBP]             ; 0048ab7f
    TEST ESI,ESI                        ; 0048ab82
    JLE 0x0048ac02                      ; 0048ab84
        ;   XREF to: 0048ac02 (CONDITIONAL_JUMP)  ; LAB_0048ac02
    IMUL ECX,ESI,0x38                   ; 0048ab86
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048ab89
    IMUL EAX,EDX,0x38                   ; 0048ab8d
    MOV EDI,dword ptr [EBX + 0x8]       ; 0048ab90
    MOV ESI,dword ptr [EBP + 0x4]       ; 0048ab93
    ADD EDI,EAX                         ; 0048ab96
    MOV dword ptr [ESP + 0xc],EAX       ; 0048ab98
    PUSH EDI                            ; 0048ab9c
    MOV EAX,ECX                         ; 0048ab9d
    SHR ECX,0x2                         ; 0048ab9f
    MOVSD.REP ES:EDI,ESI                ; 0048aba2
    MOV CL,AL                           ; 0048aba4
    AND CL,0x3                          ; 0048aba6
    MOVSB.REP ES:EDI,ESI                ; 0048aba9
    POP EDI                             ; 0048abab
    MOV ECX,dword ptr [EBP]             ; 0048abac
    MOV EDI,dword ptr [EBX + 0xc]       ; 0048abaf
    MOV ESI,dword ptr [EBP + 0x54]      ; 0048abb2
    ADD EDI,EDX                         ; 0048abb5
    PUSH EDI                            ; 0048abb7
    MOV EAX,ECX                         ; 0048abb8
    SHR ECX,0x2                         ; 0048abba
    MOVSD.REP ES:EDI,ESI                ; 0048abbd
    MOV CL,AL                           ; 0048abbf
    AND CL,0x3                          ; 0048abc1
    MOVSB.REP ES:EDI,ESI                ; 0048abc4
    POP EDI                             ; 0048abc6
    MOV ECX,dword ptr [EBP + 0x4]       ; 0048abc7
    PUSH ECX                            ; 0048abca
    CALL crt_unknown.c_FUN_005c0336     ; 0048abcb
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0048abd0
    MOV ESI,dword ptr [EBP + 0x54]      ; 0048abd3
    PUSH ESI                            ; 0048abd6
    CALL crt_unknown.c_FUN_005c0336     ; 0048abd7
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0048abdc
    MOV EAX,dword ptr [EBX + 0x8]       ; 0048abdf
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048abe2
    ADD EDX,EAX                         ; 0048abe6
    MOV dword ptr [EBP + 0x4],EDX       ; 0048abe8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048abeb
    MOV EAX,dword ptr [EBX + 0xc]       ; 0048abef
    MOV EDI,dword ptr [ESP + 0x8]       ; 0048abf2
    ADD EDX,EAX                         ; 0048abf6
    ADD EDI,dword ptr [EBP]             ; 0048abf8
    MOV dword ptr [EBP + 0x54],EDX      ; 0048abfb
    MOV dword ptr [ESP + 0x8],EDI       ; 0048abfe
    MOV EBP,dword ptr [EBX + 0x40]      ; 0048ac02
        ;   Label: LAB_0048ac02
    IMUL EBP,dword ptr [EBX + 0x44]     ; 0048ac05
    MOV EDX,dword ptr [EBX + 0x48]      ; 0048ac09
    IMUL EBP,EDX                        ; 0048ac0c
    MOV dword ptr [ESP + 0xc],EBP       ; 0048ac0f
    FILD dword ptr [ESP + 0xc]          ; 0048ac13
    SUB ESP,0x4                         ; 0048ac17
    MOV ESI,dword ptr [ESP + 0x8]       ; 0048ac1a
    INC ESI                             ; 0048ac1e
    MOV dword ptr [ESP + 0x10],ESI      ; 0048ac1f
    FSTP float ptr [ESP]                ; 0048ac23
    FILD dword ptr [ESP + 0x10]         ; 0048ac26
    SUB ESP,0x4                         ; 0048ac2a
    MOV ECX,dword ptr [0x0061abc0]      ; 0048ac2d | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0048ac33
    PUSH ECX                            ; 0048ac36
    CALL shape_edittool.cpp_FUN_004962b0 ; 0048ac37
        ;   XREF to: 004962b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004962b0()
    ADD ESP,0xc                         ; 0048ac3c
    MOV EDI,dword ptr [ESP]             ; 0048ac3f
    ADD EDI,0x58                        ; 0048ac42
    MOV dword ptr [ESP + 0x4],ESI       ; 0048ac45
    MOV dword ptr [ESP],EDI             ; 0048ac49
    JMP 0x0048ab60                      ; 0048ac4c
        ;   XREF to: 0048ab60 (UNCONDITIONAL_JUMP)  ; LAB_0048ab60
    MOV EBP,dword ptr [0x0061abc0]      ; 0048ac51 | g_CEditorToolsPtr
        ;   Label: LAB_0048ac51
    PUSH EBP                            ; 0048ac57
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0048ac58
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0048ac5d
    ADD ESP,0x10                        ; 0048ac60
    POP EBP                             ; 0048ac63
    POP EDI                             ; 0048ac64
    POP ESI                             ; 0048ac65
    POP EBX                             ; 0048ac66
    RET                                 ; 0048ac67

