; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_switchRenderer_FUN_0056046e(char *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bba4
;   undefined4 DAT_0264bcf0
;
; Called Functions:
;   engine_special.cpp_FUN_0055e8c0
;   engine_special.cpp_kill_FUN_0055f4d0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0056046e
        ;   Label: engine_special.cpp_switchRenderer_FUN_0056046e
    PUSH ESI                            ; 00560470
    PUSH EDI                            ; 00560471
    CALL engine_special.cpp_kill_FUN_0055f4d0 ; 00560472
        ;   XREF to: 0055f4d0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_0055f4d0()
    MOV EAX,dword ptr [ESP + 0x10]      ; 00560477
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056047b
    MOV EDI,0x61e180                    ; 0056047f
    MOV [0x0264bba4],EAX                ; 00560484 | DAT_0264bba4
    PUSH EDI                            ; 00560489
    MOV AL,byte ptr [ESI]               ; 0056048a
        ;   Label: LAB_0056048a
    MOV byte ptr [EDI],AL               ; 0056048c
    CMP AL,0x0                          ; 0056048e
    JZ 0x005604a2                       ; 00560490
        ;   XREF to: 005604a2 (CONDITIONAL_JUMP)  ; LAB_005604a2
    MOV AL,byte ptr [ESI + 0x1]         ; 00560492
    ADD ESI,0x2                         ; 00560495
    MOV byte ptr [EDI + 0x1],AL         ; 00560498
    ADD EDI,0x2                         ; 0056049b
    CMP AL,0x0                          ; 0056049e
    JNZ 0x0056048a                      ; 005604a0
        ;   XREF to: 0056048a (CONDITIONAL_JUMP)  ; LAB_0056048a
    POP EDI                             ; 005604a2
        ;   Label: LAB_005604a2
    MOV EDX,dword ptr [0x0264bcf0]      ; 005604a3 | DAT_0264bcf0
    PUSH EDX                            ; 005604a9
    CALL engine_special.cpp_FUN_0055e8c0 ; 005604aa
        ;   XREF to: 0055e8c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055e8c0(HWND window_handle)
    ADD ESP,0x4                         ; 005604af
    POP EDI                             ; 005604b2
    POP ESI                             ; 005604b3
    RET                                 ; 005604b4

