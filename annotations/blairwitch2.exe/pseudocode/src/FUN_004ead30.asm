; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ead30(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9db0
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ead30
        ;   Label: FUN_004ead30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ead31
    TEST byte ptr [ESP + 0xc],0x4       ; 004ead35
    JNZ 0x004ead56                      ; 004ead3a
        ;   XREF to: 004ead56 (CONDITIONAL_JUMP)  ; LAB_004ead56
    PUSH 0x1                            ; 004ead3c
    PUSH EBX                            ; 004ead3e
    CALL FUN_00589ae0                   ; 004ead3f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 004ead44
    MOV DL,byte ptr [ESP + 0xc]         ; 004ead47
    MOV EBX,EAX                         ; 004ead4b
    TEST DL,0x2                         ; 004ead4d
    JNZ 0x004ead71                      ; 004ead50
        ;   XREF to: 004ead71 (CONDITIONAL_JUMP)  ; LAB_004ead71
    MOV EAX,EBX                         ; 004ead52
    POP EBX                             ; 004ead54
    RET                                 ; 004ead55
    PUSH 0x5f9db0                       ; 004ead56 | DAT_005f9db0
        ;   Label: LAB_004ead56
    PUSH EBX                            ; 004ead5b
    CALL FUN_005b7fa7                   ; 004ead5c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004ead61
    PUSH EAX                            ; 004ead64
    CALL FUN_005b7fce                   ; 004ead65
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004ead6a
    MOV EAX,EBX                         ; 004ead6d
    POP EBX                             ; 004ead6f
    RET                                 ; 004ead70
    PUSH EAX                            ; 004ead71
        ;   Label: LAB_004ead71
    CALL FUN_005b7fdc                   ; 004ead72
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004ead77
    MOV EAX,EBX                         ; 004ead7a
    POP EBX                             ; 004ead7c
    RET                                 ; 004ead7d

