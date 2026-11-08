; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059dc80(int param_1)
;
;
; XREF[17]:
;   FUN_0059e3b0 at 0059e5a0
;   FUN_005a0840 at 005a0952
;   FUN_005a1b40 at 005a1c4e
;   FUN_005a26d0 at 005a27ba
;   FUN_005a2fb0 at 005a30c1
;   FUN_005a3d30 at 005a3e40
;   FUN_005a47b0 at 005a485d
;   FUN_005a4a80 at 005a4b9c
;   FUN_005a5b40 at 005a5bf5
;   FUN_005a5e70 at 005a5f38
;   ... and 7 more
;
; Called Functions:
;   FUN_0059d960
;   FUN_0059da70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dc80
        ;   Label: FUN_0059dc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059dc81
    MOV EDX,dword ptr [EBX + 0x83c]     ; 0059dc85
    TEST EDX,EDX                        ; 0059dc8b
    JNZ 0x0059dc9a                      ; 0059dc8d
        ;   XREF to: 0059dc9a (CONDITIONAL_JUMP)  ; LAB_0059dc9a
    PUSH EBX                            ; 0059dc8f
    CALL FUN_0059da70                   ; 0059dc90
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059da70()
    ADD ESP,0x4                         ; 0059dc95
    POP EBX                             ; 0059dc98
    RET                                 ; 0059dc99
    PUSH EDX                            ; 0059dc9a
        ;   Label: LAB_0059dc9a
    PUSH EBX                            ; 0059dc9b
    CALL FUN_0059d960                   ; 0059dc9c
        ;   XREF to: 0059d960 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d960()
    ADD ESP,0x8                         ; 0059dca1
    PUSH EBX                            ; 0059dca4
    CALL FUN_0059da70                   ; 0059dca5
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059da70()
    ADD ESP,0x4                         ; 0059dcaa
    POP EBX                             ; 0059dcad
    RET                                 ; 0059dcae

