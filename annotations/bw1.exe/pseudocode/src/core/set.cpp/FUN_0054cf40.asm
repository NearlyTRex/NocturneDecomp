; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * core_set_cpp_FUN_0054cf40(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_02026358
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cf40
        ;   Label: core_set.cpp_FUN_0054cf40
    PUSH ESI                            ; 0054cf41
    MOV EAX,[0x0061d95c]                ; 0054cf42 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x244]     ; 0054cf47
    XOR EDX,EDX                         ; 0054cf4d
    TEST ECX,ECX                        ; 0054cf4f
    JNZ 0x0054cf77                      ; 0054cf51
        ;   XREF to: 0054cf77 (CONDITIONAL_JUMP)  ; LAB_0054cf77
    MOV EAX,[0x01d06ab4]                ; 0054cf53 | DAT_01d06ab4
    SHL EAX,0x2                         ; 0054cf58
    MOV EBX,dword ptr [EAX + 0x1d06aa4] ; 0054cf5b
    TEST EBX,EBX                        ; 0054cf61
    JZ 0x0054cf77                       ; 0054cf63
        ;   XREF to: 0054cf77 (CONDITIONAL_JUMP)  ; LAB_0054cf77
    MOV ESI,dword ptr [EBX + 0x1ff60]   ; 0054cf65
    MOV EAX,EBX                         ; 0054cf6b
    TEST ESI,ESI                        ; 0054cf6d
    JZ 0x0054cf77                       ; 0054cf6f
        ;   XREF to: 0054cf77 (CONDITIONAL_JUMP)  ; LAB_0054cf77
    MOV EDX,dword ptr [EBX + 0x1ff68]   ; 0054cf71
    MOV dword ptr [0x02026358],EDX      ; 0054cf77 | DAT_02026358
        ;   Label: LAB_0054cf77
    POP ESI                             ; 0054cf7d
    POP EBX                             ; 0054cf7e
    RET                                 ; 0054cf7f

