; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499b20(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0049c470 at 0049c483
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc52f
;   TerminatedCString s_CStrList_swap_invalid_in_005dc545
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499b20
        ;   Label: FUN_00499b20
    PUSH ESI                            ; 00499b21
    PUSH EDI                            ; 00499b22
    PUSH EBP                            ; 00499b23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499b24
    MOV EDI,dword ptr [ESP + 0x18]      ; 00499b28
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00499b2c
    TEST EDI,EDI                        ; 00499b30
    JL 0x00499b3a                       ; 00499b32
        ;   XREF to: 00499b3a (CONDITIONAL_JUMP)  ; LAB_00499b3a
    MOV EDX,dword ptr [EBX]             ; 00499b34
    CMP EDI,EDX                         ; 00499b36
    JL 0x00499b65                       ; 00499b38
        ;   XREF to: 00499b65 (CONDITIONAL_JUMP)  ; LAB_00499b65
    MOV EBP,0x5dc52f                    ; 00499b3a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00499b3a
    MOV EAX,0xd27                       ; 00499b3f
    PUSH 0x5dc545                       ; 00499b44 | = "CStrList::swap - invalid indices"
    MOV dword ptr [0x01d1d400],EBP      ; 00499b49 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00499b4f | DAT_01d1d404
    CALL FUN_005030e0                   ; 00499b54
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00499b59
    CMP EDI,ESI                         ; 00499b5c
    JNZ 0x00499b76                      ; 00499b5e
        ;   XREF to: 00499b76 (CONDITIONAL_JUMP)  ; LAB_00499b76
    POP EBP                             ; 00499b60
    POP EDI                             ; 00499b61
    POP ESI                             ; 00499b62
    POP EBX                             ; 00499b63
    RET                                 ; 00499b64
    TEST ESI,ESI                        ; 00499b65
        ;   Label: LAB_00499b65
    JL 0x00499b3a                       ; 00499b67
        ;   XREF to: 00499b3a (CONDITIONAL_JUMP)  ; LAB_00499b3a
    CMP ESI,EDX                         ; 00499b69
    JGE 0x00499b3a                      ; 00499b6b
        ;   XREF to: 00499b3a (CONDITIONAL_JUMP)  ; LAB_00499b3a
    CMP EDI,ESI                         ; 00499b6d
    JNZ 0x00499b76                      ; 00499b6f
        ;   XREF to: 00499b76 (CONDITIONAL_JUMP)  ; LAB_00499b76
    POP EBP                             ; 00499b71
    POP EDI                             ; 00499b72
    POP ESI                             ; 00499b73
    POP EBX                             ; 00499b74
    RET                                 ; 00499b75
    LEA EAX,[EDI*0x4 + 0x0]             ; 00499b76
        ;   Label: LAB_00499b76
    MOV ECX,dword ptr [EBX + 0x8]       ; 00499b7d
    ADD EAX,ECX                         ; 00499b80
    MOV ECX,dword ptr [ECX + ESI*0x4]   ; 00499b82
    MOV EDI,dword ptr [EAX]             ; 00499b85
    MOV dword ptr [EAX],ECX             ; 00499b87
    MOV EAX,dword ptr [EBX + 0x8]       ; 00499b89
    MOV dword ptr [EAX + ESI*0x4],EDI   ; 00499b8c
    POP EBP                             ; 00499b8f
    POP EDI                             ; 00499b90
    POP ESI                             ; 00499b91
    POP EBX                             ; 00499b92
    RET                                 ; 00499b93

