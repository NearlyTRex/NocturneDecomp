; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_FUN_00485b10(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485b10
        ;   Label: core_drip.cpp_FUN_00485b10
    PUSH EDI                            ; 00485b11
    PUSH EBP                            ; 00485b12
    SUB ESP,0x30                        ; 00485b13
    MOV EAX,dword ptr [ESP + 0x40]      ; 00485b16
    MOV EBX,ESI                         ; 00485b1a
    CMP dword ptr [EAX + 0x2d4],0x2     ; 00485b1c
    JZ 0x00485b70                       ; 00485b23
        ;   XREF to: 00485b70 (CONDITIONAL_JUMP)  ; LAB_00485b70
    MOV ECX,0xbf000000                  ; 00485b25
    MOV EBP,0x3f000000                  ; 00485b2a
    MOV EAX,0x3f800000                  ; 00485b2f
    LEA EDI,[ESP + 0x18]                ; 00485b34
    XOR ESI,ESI                         ; 00485b38
    MOV dword ptr [ESP + 0x8],ECX       ; 00485b3a
    MOV dword ptr [ESP],ECX             ; 00485b3e
    MOV dword ptr [ESP + 0x4],ESI       ; 00485b41
    MOV dword ptr [ESP + 0xc],EBP       ; 00485b45
    MOV ECX,0x6                         ; 00485b49
    MOV ESI,ESP                         ; 00485b4e
    MOV dword ptr [ESP + 0x10],EAX      ; 00485b50
    MOV dword ptr [ESP + 0x14],EAX      ; 00485b54
    MOVSD.REP ES:EDI,ESI                ; 00485b58
        ;   Label: LAB_00485b58
    MOV ECX,0x6                         ; 00485b5a
    LEA ESI,[ESP + 0x18]                ; 00485b5f
    MOV EDI,EBX                         ; 00485b63
    MOVSD.REP ES:EDI,ESI                ; 00485b65
    MOV EAX,EBX                         ; 00485b67
    ADD ESP,0x30                        ; 00485b69
    POP EBP                             ; 00485b6c
    POP EDI                             ; 00485b6d
    POP EBX                             ; 00485b6e
    RET                                 ; 00485b6f
    ADD EAX,0x158                       ; 00485b70
        ;   Label: LAB_00485b70
    PUSH EAX                            ; 00485b75
    LEA EDI,[ESP + 0x1c]                ; 00485b76
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00485b7a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00485b7f
    MOV ESI,dword ptr [EAX + 0x350]     ; 00485b84
    ADD ESP,0x4                         ; 00485b8a
    JMP 0x00485b58                      ; 00485b8d
        ;   XREF to: 00485b58 (UNCONDITIONAL_JUMP)  ; LAB_00485b58

