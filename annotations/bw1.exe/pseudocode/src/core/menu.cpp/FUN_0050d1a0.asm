; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_0050d1a0(undefined4 param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d21458
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050d1a0
        ;   Label: core_menu.cpp_FUN_0050d1a0
    PUSH EDI                            ; 0050d1a1
    CMP dword ptr [0x01d21458],0x20     ; 0050d1a2 | DAT_01d21458
    JGE 0x0050d1f3                      ; 0050d1a9
        ;   XREF to: 0050d1f3 (CONDITIONAL_JUMP)  ; LAB_0050d1f3
    MOV EAX,[0x01d21458]                ; 0050d1ab | DAT_01d21458
        ;   Label: LAB_0050d1ab
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050d1b0
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EDX ; 0050d1b4
    MOV EDX,EAX                         ; 0050d1bb
    SHL EAX,0x2                         ; 0050d1bd
    ADD EAX,EDX                         ; 0050d1c0
    MOV EDI,0x1d214e0                   ; 0050d1c2
    SHL EAX,0x3                         ; 0050d1c7
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050d1ca
    ADD EDI,EAX                         ; 0050d1ce
    PUSH EDI                            ; 0050d1d0
    MOV AL,byte ptr [ESI]               ; 0050d1d1
        ;   Label: LAB_0050d1d1
    MOV byte ptr [EDI],AL               ; 0050d1d3
    CMP AL,0x0                          ; 0050d1d5
    JZ 0x0050d1e9                       ; 0050d1d7
        ;   XREF to: 0050d1e9 (CONDITIONAL_JUMP)  ; LAB_0050d1e9
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d1d9
    ADD ESI,0x2                         ; 0050d1dc
    MOV byte ptr [EDI + 0x1],AL         ; 0050d1df
    ADD EDI,0x2                         ; 0050d1e2
    CMP AL,0x0                          ; 0050d1e5
    JNZ 0x0050d1d1                      ; 0050d1e7
        ;   XREF to: 0050d1d1 (CONDITIONAL_JUMP)  ; LAB_0050d1d1
    POP EDI                             ; 0050d1e9
        ;   Label: LAB_0050d1e9
    INC dword ptr [0x01d21458]          ; 0050d1ea | DAT_01d21458
    POP EDI                             ; 0050d1f0
    POP ESI                             ; 0050d1f1
    RET                                 ; 0050d1f2
    PUSH EBX                            ; 0050d1f3
        ;   Label: LAB_0050d1f3
    MOV ECX,0x5e827d                    ; 0050d1f4
    MOV EBX,0x8af                       ; 0050d1f9
    PUSH 0x5e828e                       ; 0050d1fe
    MOV dword ptr [0x01d1d400],ECX      ; 0050d203 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0050d209 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d20f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d214
    POP EBX                             ; 0050d217
    JMP 0x0050d1ab                      ; 0050d218
        ;   XREF to: 0050d1ab (UNCONDITIONAL_JUMP)  ; LAB_0050d1ab

