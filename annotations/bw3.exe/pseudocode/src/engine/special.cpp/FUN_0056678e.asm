; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_0056678e(char *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf5fd0
;   undefined4 DAT_02cf611c
;
; Called Functions:
;   engine_special.cpp_FUN_00564be0
;   engine_special.cpp_kill_FUN_005657f0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0056678e
        ;   Label: engine_special.cpp_FUN_0056678e
    PUSH ESI                            ; 00566790
    PUSH EDI                            ; 00566791
    CALL engine_special.cpp_kill_FUN_005657f0 ; 00566792
        ;   XREF to: 005657f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005657f0()
    MOV EAX,dword ptr [ESP + 0x10]      ; 00566797
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056679b
    MOV EDI,0x606730                    ; 0056679f
    MOV [0x02cf5fd0],EAX                ; 005667a4 | DAT_02cf5fd0
    PUSH EDI                            ; 005667a9
    MOV AL,byte ptr [ESI]               ; 005667aa
        ;   Label: LAB_005667aa
    MOV byte ptr [EDI],AL               ; 005667ac
    CMP AL,0x0                          ; 005667ae
    JZ 0x005667c2                       ; 005667b0
        ;   XREF to: 005667c2 (CONDITIONAL_JUMP)  ; LAB_005667c2
    MOV AL,byte ptr [ESI + 0x1]         ; 005667b2
    ADD ESI,0x2                         ; 005667b5
    MOV byte ptr [EDI + 0x1],AL         ; 005667b8
    ADD EDI,0x2                         ; 005667bb
    CMP AL,0x0                          ; 005667be
    JNZ 0x005667aa                      ; 005667c0
        ;   XREF to: 005667aa (CONDITIONAL_JUMP)  ; LAB_005667aa
    POP EDI                             ; 005667c2
        ;   Label: LAB_005667c2
    MOV EDX,dword ptr [0x02cf611c]      ; 005667c3 | DAT_02cf611c
    PUSH EDX                            ; 005667c9
    CALL engine_special.cpp_FUN_00564be0 ; 005667ca
        ;   XREF to: 00564be0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00564be0(HWND window_handle)
    ADD ESP,0x4                         ; 005667cf
    POP EDI                             ; 005667d2
    POP ESI                             ; 005667d3
    RET                                 ; 005667d4

