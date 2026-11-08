; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a8710(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_004a8830 at 004a8846
;
; Referenced Globals:
;   void* PTR_FUN_005e02a4 = 004a8710
;   undefined4 DAT_005e0360
;
; Called Functions:
;   FUN_0040d300
;   FUN_0040d400
;   FUN_004a83a0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8710
        ;   Label: FUN_004a8710
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8711
    TEST byte ptr [ESP + 0xc],0x4       ; 004a8715
    JNZ 0x004a8757                      ; 004a871a
        ;   XREF to: 004a8757 (CONDITIONAL_JUMP)  ; LAB_004a8757
    ADD EBX,0x18                        ; 004a871c
    PUSH EBX                            ; 004a871f
    MOV dword ptr [EBX + -0x4],0x5e02a4 ; 004a8720 | PTR_FUN_005e02a4
    CALL FUN_0040d400                   ; 004a8727
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a872c
    PUSH 0x0                            ; 004a872f
    PUSH EBX                            ; 004a8731
    CALL FUN_0040d300                   ; 004a8732
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004a8737
    PUSH 0x1                            ; 004a873a
    LEA EBX,[EAX + -0x18]               ; 004a873c
    PUSH EBX                            ; 004a873f
    CALL FUN_004a83a0                   ; 004a8740
        ;   XREF to: 004a83a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a83a0()
    ADD ESP,0x8                         ; 004a8745
    MOV DL,byte ptr [ESP + 0xc]         ; 004a8748
    MOV EBX,EAX                         ; 004a874c
    TEST DL,0x2                         ; 004a874e
    JNZ 0x004a8772                      ; 004a8751
        ;   XREF to: 004a8772 (CONDITIONAL_JUMP)  ; LAB_004a8772
    MOV EAX,EBX                         ; 004a8753
    POP EBX                             ; 004a8755
    RET                                 ; 004a8756
    PUSH 0x5e0360                       ; 004a8757 | DAT_005e0360
        ;   Label: LAB_004a8757
    PUSH EBX                            ; 004a875c
    CALL FUN_005a308f                   ; 004a875d
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004a8762
    PUSH EAX                            ; 004a8765
    CALL FUN_005a30b6                   ; 004a8766
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004a876b
    MOV EAX,EBX                         ; 004a876e
    POP EBX                             ; 004a8770
    RET                                 ; 004a8771
    PUSH EAX                            ; 004a8772
        ;   Label: LAB_004a8772
    CALL FUN_005a30c4                   ; 004a8773
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004a8778
    MOV EAX,EBX                         ; 004a877b
    POP EBX                             ; 004a877d
    RET                                 ; 004a877e

