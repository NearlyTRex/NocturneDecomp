; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00418c70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   void* PTR_FUN_005fcad4 = 00419350
;   undefined4 DAT_005fcbf0
;
; Called Functions:
;   FUN_00408730
;   FUN_00418d00
;   FUN_0041b190
;   FUN_0041dab0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418c70
        ;   Label: FUN_00418c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00418c71
    TEST byte ptr [ESP + 0xc],0x4       ; 00418c75
    JNZ 0x00418cd4                      ; 00418c7a
        ;   XREF to: 00418cd4 (CONDITIONAL_JUMP)  ; LAB_00418cd4
    PUSH 0x0                            ; 00418c7c
    PUSH 0x0                            ; 00418c7e
    PUSH EBX                            ; 00418c80
    MOV dword ptr [EBX + 0x154],0x5fcad4 ; 00418c81 | PTR_FUN_005fcad4
    CALL FUN_00418d00                   ; 00418c8b
        ;   XREF to: 00418d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00418d00()
    ADD ESP,0xc                         ; 00418c90
    PUSH 0x0                            ; 00418c93
    ADD EBX,0xcd0                       ; 00418c95
    PUSH EBX                            ; 00418c9b
    CALL FUN_0041dab0                   ; 00418c9c
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dab0()
    ADD ESP,0x8                         ; 00418ca1
    PUSH 0x0                            ; 00418ca4
    SUB EAX,0x580                       ; 00418ca6
    PUSH EAX                            ; 00418cab
    CALL FUN_0041b190                   ; 00418cac
        ;   XREF to: 0041b190 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b190()
    ADD ESP,0x8                         ; 00418cb1
    PUSH 0x1                            ; 00418cb4
    LEA EBX,[EAX + 0xfffff8b0]          ; 00418cb6
    PUSH EBX                            ; 00418cbc
    CALL FUN_00408730                   ; 00418cbd
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00418cc2
    MOV DL,byte ptr [ESP + 0xc]         ; 00418cc5
    MOV EBX,EAX                         ; 00418cc9
    TEST DL,0x2                         ; 00418ccb
    JNZ 0x00418cef                      ; 00418cce
        ;   XREF to: 00418cef (CONDITIONAL_JUMP)  ; LAB_00418cef
    MOV EAX,EBX                         ; 00418cd0
    POP EBX                             ; 00418cd2
    RET                                 ; 00418cd3
    PUSH 0x5fcbf0                       ; 00418cd4 | DAT_005fcbf0
        ;   Label: LAB_00418cd4
    PUSH EBX                            ; 00418cd9
    CALL FUN_005c030f                   ; 00418cda
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00418cdf
    PUSH EAX                            ; 00418ce2
    CALL FUN_005c0336                   ; 00418ce3
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00418ce8
    MOV EAX,EBX                         ; 00418ceb
    POP EBX                             ; 00418ced
    RET                                 ; 00418cee
    PUSH EAX                            ; 00418cef
        ;   Label: LAB_00418cef
    CALL FUN_005c0344                   ; 00418cf0
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00418cf5
    MOV EAX,EBX                         ; 00418cf8
    POP EBX                             ; 00418cfa
    RET                                 ; 00418cfb

