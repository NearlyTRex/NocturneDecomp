; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_10010cf0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[2]:
;   FUN_10010c50 at 10010cbe
;   FUN_100115b0 at 100115cb
;
; Referenced Globals:
;   undefined4 DAT_10016edc
;   undefined4 DAT_10016ee0
;
; Called Functions:
;   FUN_10011040
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 10010cf0
        ;   Label: FUN_10010cf0
    TEST ECX,ECX                        ; 10010cf4
    JNZ 0x10010cfb                      ; 10010cf6
        ;   XREF to: 10010cfb (CONDITIONAL_JUMP)  ; LAB_10010cfb
    XOR EAX,EAX                         ; 10010cf8
    RET                                 ; 10010cfa
    MOV EAX,[0x10016edc]                ; 10010cfb | DAT_10016edc
        ;   Label: LAB_10010cfb
    MOV EDX,dword ptr [ESP + 0x8]       ; 10010d00
    PUSH EAX                            ; 10010d04
    PUSH ECX                            ; 10010d05
    PUSH EDX                            ; 10010d06
    MOV EAX,[0x10016ee0]                ; 10010d07 | DAT_10016ee0
    PUSH ECX                            ; 10010d0c
    MOV ECX,dword ptr [ESP + 0x14]      ; 10010d0d
    PUSH ECX                            ; 10010d11
    PUSH 0x1                            ; 10010d12
    PUSH EAX                            ; 10010d14
    CALL FUN_10011040                   ; 10010d15
        ;   XREF to: 10011040 (UNCONDITIONAL_CALL)  ; undefined FUN_10011040()
    ADD ESP,0x1c                        ; 10010d1a
    TEST EAX,EAX                        ; 10010d1d
    JNZ 0x10010d27                      ; 10010d1f
        ;   XREF to: 10010d27 (CONDITIONAL_JUMP)  ; LAB_10010d27
    MOV EAX,0x7fffffff                  ; 10010d21
    RET                                 ; 10010d26
    SUB EAX,0x2                         ; 10010d27
        ;   Label: LAB_10010d27
    RET                                 ; 10010d2a

