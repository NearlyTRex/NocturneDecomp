; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * core_set_cpp_FUN_0052bc60(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01cedef4
;   undefined4 DAT_0200a3a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bc60
        ;   Label: core_set.cpp_FUN_0052bc60
    PUSH ESI                            ; 0052bc61
    MOV EAX,[0x00616494]                ; 0052bc62 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x244]     ; 0052bc67
    XOR EDX,EDX                         ; 0052bc6d
    TEST ECX,ECX                        ; 0052bc6f
    JNZ 0x0052bc97                      ; 0052bc71
        ;   XREF to: 0052bc97 (CONDITIONAL_JUMP)  ; LAB_0052bc97
    MOV EAX,[0x01cedef4]                ; 0052bc73 | DAT_01cedef4
    SHL EAX,0x2                         ; 0052bc78
    MOV EBX,dword ptr [EAX + 0x1cedee4] ; 0052bc7b
    TEST EBX,EBX                        ; 0052bc81
    JZ 0x0052bc97                       ; 0052bc83
        ;   XREF to: 0052bc97 (CONDITIONAL_JUMP)  ; LAB_0052bc97
    MOV ESI,dword ptr [EBX + 0x255f0]   ; 0052bc85
    MOV EAX,EBX                         ; 0052bc8b
    TEST ESI,ESI                        ; 0052bc8d
    JZ 0x0052bc97                       ; 0052bc8f
        ;   XREF to: 0052bc97 (CONDITIONAL_JUMP)  ; LAB_0052bc97
    MOV EDX,dword ptr [EBX + 0x255f8]   ; 0052bc91
    MOV dword ptr [0x0200a3a4],EDX      ; 0052bc97 | DAT_0200a3a4
        ;   Label: LAB_0052bc97
    POP ESI                             ; 0052bc9d
    POP EBX                             ; 0052bc9e
    RET                                 ; 0052bc9f

