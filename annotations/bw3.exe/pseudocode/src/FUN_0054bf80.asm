; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054bf80(int param_1,byte param_2)
;
;
; XREF[66]:
;   FUN_004101f0 at 00410235
;   FUN_00410290 at 004102c5
;   FUN_0041a8c0 at 0041a8f5
;   FUN_0041a950 at 0041a985
;   FUN_0041a9e0 at 0041aa15
;   FUN_0041aa70 at 0041aaa5
;   FUN_0041ab00 at 0041ab35
;   FUN_0041aba0 at 0041abd5
;   FUN_00424330 at 00424365
;   FUN_004291f0 at 00429225
;   ... and 56 more
;
; Referenced Globals:
;   undefined4 DAT_005dfcf0
;   void* PTR_FUN_005e4784 = 0054bf80
;
; Called Functions:
;   FUN_004fbb00
;   FUN_0054c060
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bf80
        ;   Label: FUN_0054bf80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054bf81
    TEST byte ptr [ESP + 0xc],0x4       ; 0054bf85
    JNZ 0x0054bfb6                      ; 0054bf8a
        ;   XREF to: 0054bfb6 (CONDITIONAL_JUMP)  ; LAB_0054bfb6
    PUSH EBX                            ; 0054bf8c
    MOV dword ptr [EBX + 0x50],0x5e4784 ; 0054bf8d | PTR_FUN_005e4784
    CALL FUN_0054c060                   ; 0054bf94
        ;   XREF to: 0054c060 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c060()
    ADD ESP,0x4                         ; 0054bf99
    PUSH 0x1                            ; 0054bf9c
    PUSH EBX                            ; 0054bf9e
    CALL FUN_004fbb00                   ; 0054bf9f
        ;   XREF to: 004fbb00 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb00()
    ADD ESP,0x8                         ; 0054bfa4
    MOV DL,byte ptr [ESP + 0xc]         ; 0054bfa7
    MOV EBX,EAX                         ; 0054bfab
    TEST DL,0x2                         ; 0054bfad
    JNZ 0x0054bfd1                      ; 0054bfb0
        ;   XREF to: 0054bfd1 (CONDITIONAL_JUMP)  ; LAB_0054bfd1
    MOV EAX,EBX                         ; 0054bfb2
    POP EBX                             ; 0054bfb4
    RET                                 ; 0054bfb5
    PUSH 0x5dfcf0                       ; 0054bfb6 | DAT_005dfcf0
        ;   Label: LAB_0054bfb6
    PUSH EBX                            ; 0054bfbb
    CALL FUN_005a308f                   ; 0054bfbc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0054bfc1
    PUSH EAX                            ; 0054bfc4
    CALL FUN_005a30b6                   ; 0054bfc5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0054bfca
    MOV EAX,EBX                         ; 0054bfcd
    POP EBX                             ; 0054bfcf
    RET                                 ; 0054bfd0
    PUSH EAX                            ; 0054bfd1
        ;   Label: LAB_0054bfd1
    CALL FUN_005a30c4                   ; 0054bfd2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0054bfd7
    MOV EAX,EBX                         ; 0054bfda
    POP EBX                             ; 0054bfdc
    RET                                 ; 0054bfdd

