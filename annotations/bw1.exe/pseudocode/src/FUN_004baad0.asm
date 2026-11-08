; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004baad0(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_004babf0 at 004bac06
;
; Referenced Globals:
;   void* PTR_FUN_00600944 = 004baad0
;   undefined4 DAT_00600a00
;
; Called Functions:
;   FUN_0040d0c0
;   FUN_0040d1c0
;   FUN_004ba760
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baad0
        ;   Label: FUN_004baad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004baad1
    TEST byte ptr [ESP + 0xc],0x4       ; 004baad5
    JNZ 0x004bab17                      ; 004baada
        ;   XREF to: 004bab17 (CONDITIONAL_JUMP)  ; LAB_004bab17
    ADD EBX,0x18                        ; 004baadc
    PUSH EBX                            ; 004baadf
    MOV dword ptr [EBX + -0x4],0x600944 ; 004baae0 | PTR_FUN_00600944
    CALL FUN_0040d1c0                   ; 004baae7
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    ADD ESP,0x4                         ; 004baaec
    PUSH 0x0                            ; 004baaef
    PUSH EBX                            ; 004baaf1
    CALL FUN_0040d0c0                   ; 004baaf2
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 004baaf7
    PUSH 0x1                            ; 004baafa
    LEA EBX,[EAX + -0x18]               ; 004baafc
    PUSH EBX                            ; 004baaff
    CALL FUN_004ba760                   ; 004bab00
        ;   XREF to: 004ba760 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba760()
    ADD ESP,0x8                         ; 004bab05
    MOV DL,byte ptr [ESP + 0xc]         ; 004bab08
    MOV EBX,EAX                         ; 004bab0c
    TEST DL,0x2                         ; 004bab0e
    JNZ 0x004bab32                      ; 004bab11
        ;   XREF to: 004bab32 (CONDITIONAL_JUMP)  ; LAB_004bab32
    MOV EAX,EBX                         ; 004bab13
    POP EBX                             ; 004bab15
    RET                                 ; 004bab16
    PUSH 0x600a00                       ; 004bab17 | DAT_00600a00
        ;   Label: LAB_004bab17
    PUSH EBX                            ; 004bab1c
    CALL FUN_005c030f                   ; 004bab1d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004bab22
    PUSH EAX                            ; 004bab25
    CALL FUN_005c0336                   ; 004bab26
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004bab2b
    MOV EAX,EBX                         ; 004bab2e
    POP EBX                             ; 004bab30
    RET                                 ; 004bab31
    PUSH EAX                            ; 004bab32
        ;   Label: LAB_004bab32
    CALL FUN_005c0344                   ; 004bab33
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004bab38
    MOV EAX,EBX                         ; 004bab3b
    POP EBX                             ; 004bab3d
    RET                                 ; 004bab3e

