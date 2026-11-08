; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e3f10(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e25f0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3f10
        ;   Label: FUN_004e3f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3f11
    TEST byte ptr [ESP + 0xc],0x4       ; 004e3f15
    JNZ 0x004e3f36                      ; 004e3f1a
        ;   XREF to: 004e3f36 (CONDITIONAL_JUMP)  ; LAB_004e3f36
    PUSH 0x1                            ; 004e3f1c
    PUSH EBX                            ; 004e3f1e
    CALL FUN_0057aed0                   ; 004e3f1f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 004e3f24
    MOV DL,byte ptr [ESP + 0xc]         ; 004e3f27
    MOV EBX,EAX                         ; 004e3f2b
    TEST DL,0x2                         ; 004e3f2d
    JNZ 0x004e3f51                      ; 004e3f30
        ;   XREF to: 004e3f51 (CONDITIONAL_JUMP)  ; LAB_004e3f51
    MOV EAX,EBX                         ; 004e3f32
    POP EBX                             ; 004e3f34
    RET                                 ; 004e3f35
    PUSH 0x5e25f0                       ; 004e3f36 | DAT_005e25f0
        ;   Label: LAB_004e3f36
    PUSH EBX                            ; 004e3f3b
    CALL FUN_005a308f                   ; 004e3f3c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004e3f41
    PUSH EAX                            ; 004e3f44
    CALL FUN_005a30b6                   ; 004e3f45
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004e3f4a
    MOV EAX,EBX                         ; 004e3f4d
    POP EBX                             ; 004e3f4f
    RET                                 ; 004e3f50
    PUSH EAX                            ; 004e3f51
        ;   Label: LAB_004e3f51
    CALL FUN_005a30c4                   ; 004e3f52
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004e3f57
    MOV EAX,EBX                         ; 004e3f5a
    POP EBX                             ; 004e3f5c
    RET                                 ; 004e3f5d

