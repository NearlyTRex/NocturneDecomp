; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0047cbd0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x12c8]:4  local_12c8
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0047f4c0 at 0047f704
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   engine_special.cpp_FUN_00565820
;   engine_special.cpp_unlockFrame_FUN_00565870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cbd0
        ;   Label: shape_edittool.cpp_FUN_0047cbd0
    PUSH EBP                            ; 0047cbd1
    SUB ESP,0x12c0                      ; 0047cbd2
    CMP dword ptr [0x01c6cee8],0x0      ; 0047cbd8 | DAT_01c6cee8
    JZ 0x0047cc9d                       ; 0047cbdf
        ;   XREF to: 0047cc9d (CONDITIONAL_JUMP)  ; LAB_0047cc9d
    CMP dword ptr [0x01c5faec],0x0      ; 0047cbe5 | DAT_01c5faec
    JZ 0x0047cc9d                       ; 0047cbec
        ;   XREF to: 0047cc9d (CONDITIONAL_JUMP)  ; LAB_0047cc9d
    MOV EBX,dword ptr [0x005fba1c]      ; 0047cbf2 | DAT_005fba1c
    TEST EBX,EBX                        ; 0047cbf8
    JLE 0x0047cc20                      ; 0047cbfa
        ;   XREF to: 0047cc20 (CONDITIONAL_JUMP)  ; LAB_0047cc20
    SHL EBX,0x2                         ; 0047cbfc
    XOR EAX,EAX                         ; 0047cbff
    ADD EAX,0x4                         ; 0047cc01
        ;   Label: LAB_0047cc01
    MOV EDX,dword ptr [EAX + 0x1c5fae8] ; 0047cc04 | DAT_01c5faec | DAT_01c5faf0
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0047cc0a
    CMP EAX,EBX                         ; 0047cc0e
    JL 0x0047cc01                       ; 0047cc10
        ;   XREF to: 0047cc01 (CONDITIONAL_JUMP)  ; LAB_0047cc01
    LEA EAX,[EAX]                       ; 0047cc12
    LEA EDX,[EDX]                       ; 0047cc18
    MOV EAX,EAX                         ; 0047cc1e
    CALL engine_special.cpp_FUN_00565820 ; 0047cc20
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00565820()
        ;   Label: LAB_0047cc20
    TEST EAX,EAX                        ; 0047cc25
    JZ 0x0047cc9d                       ; 0047cc27
        ;   XREF to: 0047cc9d (CONDITIONAL_JUMP)  ; LAB_0047cc9d
    PUSH EDI                            ; 0047cc2d
    PUSH ESI                            ; 0047cc2e
    MOV ESI,dword ptr [0x005fba20]      ; 0047cc2f | DAT_005fba20
    MOV EDX,dword ptr [0x005fba18]      ; 0047cc35 | DAT_005fba18
    IMUL EDX,ESI                        ; 0047cc3b
    MOV EAX,EDX                         ; 0047cc3e
    SAR EDX,0x1f                        ; 0047cc40
    SHL EDX,0x3                         ; 0047cc43
    SBB EAX,EDX                         ; 0047cc46
    SAR EAX,0x3                         ; 0047cc48
    MOV EDI,dword ptr [0x005fba1c]      ; 0047cc4b | DAT_005fba1c
    XOR EBX,EBX                         ; 0047cc51
    MOV EBP,EAX                         ; 0047cc53
    TEST EDI,EDI                        ; 0047cc55
    JLE 0x0047cc91                      ; 0047cc57
        ;   XREF to: 0047cc91 (CONDITIONAL_JUMP)  ; LAB_0047cc91
    XOR EDX,EDX                         ; 0047cc59
    MOV ECX,dword ptr [EDX + 0x1c5faec] ; 0047cc5b | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_0047cc5b
    TEST ECX,ECX                        ; 0047cc61
    JZ 0x0047cc84                       ; 0047cc63
        ;   XREF to: 0047cc84 (CONDITIONAL_JUMP)  ; LAB_0047cc84
    CMP dword ptr [ESP + EDX*0x1 + 0x8],0x0 ; 0047cc65
    JZ 0x0047cc84                       ; 0047cc6a
        ;   XREF to: 0047cc84 (CONDITIONAL_JUMP)  ; LAB_0047cc84
    MOV ESI,ECX                         ; 0047cc6c
    MOV EDI,dword ptr [ESP + EDX*0x1 + 0x8] ; 0047cc6e
    MOV ECX,EBP                         ; 0047cc72
    PUSH EDI                            ; 0047cc74
    MOV EAX,ECX                         ; 0047cc75
    SHR ECX,0x2                         ; 0047cc77
    MOVSD.REP ES:EDI,ESI                ; 0047cc7a
    MOV CL,AL                           ; 0047cc7c
    AND CL,0x3                          ; 0047cc7e
    MOVSB.REP ES:EDI,ESI                ; 0047cc81
    POP EDI                             ; 0047cc83
    MOV EAX,[0x005fba1c]                ; 0047cc84 | DAT_005fba1c
        ;   Label: LAB_0047cc84
    INC EBX                             ; 0047cc89
    ADD EDX,0x4                         ; 0047cc8a
    CMP EBX,EAX                         ; 0047cc8d
    JL 0x0047cc5b                       ; 0047cc8f
        ;   XREF to: 0047cc5b (CONDITIONAL_JUMP)  ; LAB_0047cc5b
    PUSH 0x1                            ; 0047cc91
        ;   Label: LAB_0047cc91
    CALL engine_special.cpp_unlockFrame_FUN_00565870 ; 0047cc93
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
    ADD ESP,0x4                         ; 0047cc98
    POP ESI                             ; 0047cc9b
    POP EDI                             ; 0047cc9c
    ADD ESP,0x12c0                      ; 0047cc9d
        ;   Label: LAB_0047cc9d
    POP EBP                             ; 0047cca3
    POP EBX                             ; 0047cca4
    RET                                 ; 0047cca5

