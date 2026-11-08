; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00427a10(int param_1)
;
;
; XREF[1]:
;   FUN_004ceb80 at 004cebfe
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00427a10
        ;   Label: FUN_00427a10
    MOV ECX,dword ptr [EDX + 0x276c]    ; 00427a14
    TEST ECX,ECX                        ; 00427a1a
    JNZ 0x00427a1f                      ; 00427a1c
        ;   XREF to: 00427a1f (CONDITIONAL_JUMP)  ; LAB_00427a1f
    RET                                 ; 00427a1e
    PUSH EDX                            ; 00427a1f
        ;   Label: LAB_00427a1f
    MOV EAX,ECX                         ; 00427a20
    MOV dword ptr [EDX + 0x276c],0x0    ; 00427a22
    PUSH EAX                            ; 00427a2c
    MOV ECX,dword ptr [ECX + 0x2b0]     ; 00427a2d
    CALL dword ptr [ECX + 0x104]        ; 00427a33
    ADD ESP,0x8                         ; 00427a39
    LEA EAX,[EAX]                       ; 00427a3c
    RET                                 ; 00427a40

