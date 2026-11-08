; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051b0b0(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_0051c130 at 0051c13f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fad64 = 0051b0b0
;   undefined4 DAT_005fad80
;
; Called Functions:
;   FUN_0051b370
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b0b0
        ;   Label: FUN_0051b0b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b0b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0051b0b5
    JNZ 0x0051b0e1                      ; 0051b0ba
        ;   XREF to: 0051b0e1 (CONDITIONAL_JUMP)  ; LAB_0051b0e1
    PUSH EBX                            ; 0051b0bc
    MOV dword ptr [EBX + 0x194],0x5fad64 ; 0051b0bd | PTR_FUN_005fad64
    CALL FUN_0051b370                   ; 0051b0c7
        ;   XREF to: 0051b370 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b370()
    ADD ESP,0x4                         ; 0051b0cc
    TEST byte ptr [ESP + 0xc],0x2       ; 0051b0cf
    JNZ 0x0051b0fc                      ; 0051b0d4
        ;   XREF to: 0051b0fc (CONDITIONAL_JUMP)  ; LAB_0051b0fc
    MOV EAX,EBX                         ; 0051b0d6
    POP EBX                             ; 0051b0d8
    LEA EAX,[EAX]                       ; 0051b0d9
    NOP                                 ; 0051b0df
    RET                                 ; 0051b0e0
        ;   Label: LAB_0051b0e0
    PUSH 0x5fad80                       ; 0051b0e1 | DAT_005fad80
        ;   Label: LAB_0051b0e1
    PUSH EBX                            ; 0051b0e6
    CALL FUN_005b7fa7                   ; 0051b0e7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0051b0ec
    PUSH EAX                            ; 0051b0ef
    CALL FUN_005b7fce                   ; 0051b0f0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0051b0f5
    MOV EAX,EBX                         ; 0051b0f8
    POP EBX                             ; 0051b0fa
    RET                                 ; 0051b0fb
    PUSH EBX                            ; 0051b0fc
        ;   Label: LAB_0051b0fc
    CALL FUN_005b7fdc                   ; 0051b0fd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0051b102
    MOV EAX,EBX                         ; 0051b105
    POP EBX                             ; 0051b107
    RET                                 ; 0051b108

