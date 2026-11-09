; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_004ee8e0(undefined4 param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d086f0
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ee8e0
        ;   Label: core_menu.cpp_FUN_004ee8e0
    PUSH EDI                            ; 004ee8e1
    CMP dword ptr [0x01d086f0],0x26     ; 004ee8e2 | DAT_01d086f0
    JGE 0x004ee933                      ; 004ee8e9
        ;   XREF to: 004ee933 (CONDITIONAL_JUMP)  ; LAB_004ee933
    MOV EAX,[0x01d086f0]                ; 004ee8eb | DAT_01d086f0
        ;   Label: LAB_004ee8eb
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee8f0
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EDX ; 004ee8f4
    MOV EDX,EAX                         ; 004ee8fb
    SHL EAX,0x2                         ; 004ee8fd
    ADD EAX,EDX                         ; 004ee900
    MOV EDI,0x1d08790                   ; 004ee902
    SHL EAX,0x3                         ; 004ee907
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ee90a
    ADD EDI,EAX                         ; 004ee90e
    PUSH EDI                            ; 004ee910
    MOV AL,byte ptr [ESI]               ; 004ee911
        ;   Label: LAB_004ee911
    MOV byte ptr [EDI],AL               ; 004ee913
    CMP AL,0x0                          ; 004ee915
    JZ 0x004ee929                       ; 004ee917
        ;   XREF to: 004ee929 (CONDITIONAL_JUMP)  ; LAB_004ee929
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee919
    ADD ESI,0x2                         ; 004ee91c
    MOV byte ptr [EDI + 0x1],AL         ; 004ee91f
    ADD EDI,0x2                         ; 004ee922
    CMP AL,0x0                          ; 004ee925
    JNZ 0x004ee911                      ; 004ee927
        ;   XREF to: 004ee911 (CONDITIONAL_JUMP)  ; LAB_004ee911
    POP EDI                             ; 004ee929
        ;   Label: LAB_004ee929
    INC dword ptr [0x01d086f0]          ; 004ee92a | DAT_01d086f0
    POP EDI                             ; 004ee930
    POP ESI                             ; 004ee931
    RET                                 ; 004ee932
    PUSH EBX                            ; 004ee933
        ;   Label: LAB_004ee933
    MOV ECX,0x5dd2ac                    ; 004ee934
    MOV EBX,0x907                       ; 004ee939
    PUSH 0x5dd2bd                       ; 004ee93e
    MOV dword ptr [0x01d046a0],ECX      ; 004ee943 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004ee949 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ee94f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ee954
    POP EBX                             ; 004ee957
    JMP 0x004ee8eb                      ; 004ee958
        ;   XREF to: 004ee8eb (UNCONDITIONAL_JUMP)  ; LAB_004ee8eb

