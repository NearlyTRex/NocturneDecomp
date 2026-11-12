; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0047baf0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x12c8]:4  local_12c8
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0 at 0047e4f4
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c37788
;
; Called Functions:
;   engine_special.cpp_FUN_0055f500
;   engine_special.cpp_unlockFrame_FUN_0055f550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047baf0
        ;   Label: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047baf0
    PUSH EBP                            ; 0047baf1
    SUB ESP,0x12c0                      ; 0047baf2
    CMP dword ptr [0x01c37788],0x0      ; 0047baf8 | DAT_01c37788
    JZ 0x0047bbbd                       ; 0047baff
        ;   XREF to: 0047bbbd (CONDITIONAL_JUMP)  ; LAB_0047bbbd
    CMP dword ptr [0x01c2a38c],0x0      ; 0047bb05 | DAT_01c2a38c
    JZ 0x0047bbbd                       ; 0047bb0c
        ;   XREF to: 0047bbbd (CONDITIONAL_JUMP)  ; LAB_0047bbbd
    MOV EBX,dword ptr [0x006141bc]      ; 0047bb12 | DAT_006141bc
    TEST EBX,EBX                        ; 0047bb18
    JLE 0x0047bb40                      ; 0047bb1a
        ;   XREF to: 0047bb40 (CONDITIONAL_JUMP)  ; LAB_0047bb40
    SHL EBX,0x2                         ; 0047bb1c
    XOR EAX,EAX                         ; 0047bb1f
    ADD EAX,0x4                         ; 0047bb21
        ;   Label: LAB_0047bb21
    MOV EDX,dword ptr [EAX + 0x1c2a388] ; 0047bb24 | DAT_01c2a38c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0047bb2a
    CMP EAX,EBX                         ; 0047bb2e
    JL 0x0047bb21                       ; 0047bb30
        ;   XREF to: 0047bb21 (CONDITIONAL_JUMP)  ; LAB_0047bb21
    LEA EAX,[EAX]                       ; 0047bb32
    LEA EDX,[EDX]                       ; 0047bb38
    MOV EAX,EAX                         ; 0047bb3e
    CALL engine_special.cpp_FUN_0055f500 ; 0047bb40
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055f500()
        ;   Label: LAB_0047bb40
    TEST EAX,EAX                        ; 0047bb45
    JZ 0x0047bbbd                       ; 0047bb47
        ;   XREF to: 0047bbbd (CONDITIONAL_JUMP)  ; LAB_0047bbbd
    PUSH EDI                            ; 0047bb4d
    PUSH ESI                            ; 0047bb4e
    MOV ESI,dword ptr [0x006141c0]      ; 0047bb4f | DAT_006141c0
    MOV EDX,dword ptr [0x006141b8]      ; 0047bb55 | DAT_006141b8
    IMUL EDX,ESI                        ; 0047bb5b
    MOV EAX,EDX                         ; 0047bb5e
    SAR EDX,0x1f                        ; 0047bb60
    SHL EDX,0x3                         ; 0047bb63
    SBB EAX,EDX                         ; 0047bb66
    SAR EAX,0x3                         ; 0047bb68
    MOV EDI,dword ptr [0x006141bc]      ; 0047bb6b | DAT_006141bc
    XOR EBX,EBX                         ; 0047bb71
    MOV EBP,EAX                         ; 0047bb73
    TEST EDI,EDI                        ; 0047bb75
    JLE 0x0047bbb1                      ; 0047bb77
        ;   XREF to: 0047bbb1 (CONDITIONAL_JUMP)  ; LAB_0047bbb1
    XOR EDX,EDX                         ; 0047bb79
    MOV ECX,dword ptr [EDX + 0x1c2a38c] ; 0047bb7b | DAT_01c2a38c
        ;   Label: LAB_0047bb7b
    TEST ECX,ECX                        ; 0047bb81
    JZ 0x0047bba4                       ; 0047bb83
        ;   XREF to: 0047bba4 (CONDITIONAL_JUMP)  ; LAB_0047bba4
    CMP dword ptr [ESP + EDX*0x1 + 0x8],0x0 ; 0047bb85
    JZ 0x0047bba4                       ; 0047bb8a
        ;   XREF to: 0047bba4 (CONDITIONAL_JUMP)  ; LAB_0047bba4
    MOV ESI,ECX                         ; 0047bb8c
    MOV EDI,dword ptr [ESP + EDX*0x1 + 0x8] ; 0047bb8e
    MOV ECX,EBP                         ; 0047bb92
    PUSH EDI                            ; 0047bb94
    MOV EAX,ECX                         ; 0047bb95
    SHR ECX,0x2                         ; 0047bb97
    MOVSD.REP ES:EDI,ESI                ; 0047bb9a
    MOV CL,AL                           ; 0047bb9c
    AND CL,0x3                          ; 0047bb9e
    MOVSB.REP ES:EDI,ESI                ; 0047bba1
    POP EDI                             ; 0047bba3
    MOV EAX,[0x006141bc]                ; 0047bba4 | DAT_006141bc
        ;   Label: LAB_0047bba4
    INC EBX                             ; 0047bba9
    ADD EDX,0x4                         ; 0047bbaa
    CMP EBX,EAX                         ; 0047bbad
    JL 0x0047bb7b                       ; 0047bbaf
        ;   XREF to: 0047bb7b (CONDITIONAL_JUMP)  ; LAB_0047bb7b
    PUSH 0x1                            ; 0047bbb1
        ;   Label: LAB_0047bbb1
    CALL engine_special.cpp_unlockFrame_FUN_0055f550 ; 0047bbb3
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_0055f550(int clear_lock_flag)
    ADD ESP,0x4                         ; 0047bbb8
    POP ESI                             ; 0047bbbb
    POP EDI                             ; 0047bbbc
    ADD ESP,0x12c0                      ; 0047bbbd
        ;   Label: LAB_0047bbbd
    POP EBP                             ; 0047bbc3
    POP EBX                             ; 0047bbc4
    RET                                 ; 0047bbc5

