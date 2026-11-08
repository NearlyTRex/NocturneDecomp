; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408a80(int param_1)
;
;
; XREF[44]:
;   FUN_0040deb0 at 0040dec7
;   FUN_0040e5c0 at 0040e5d5
;   FUN_0040eac0 at 0040eac5
;   FUN_0040f3a0 at 0040f3b5
;   FUN_00410d00 at 00410d06
;   FUN_004110a0 at 004110ce
;   FUN_00414780 at 00414786
;   FUN_00415ee0 at 00415ee8
;   FUN_0041be70 at 0041be7a
;   FUN_00422930 at 0042293d
;   ... and 34 more
;
; Called Functions:
;   FUN_00408ae0
;   FUN_005121a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a80
        ;   Label: FUN_00408a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408a81
    MOV dword ptr [EBX + 0x114],0x0     ; 00408a85
    PUSH EBX                            ; 00408a8f
    MOV dword ptr [EBX + 0x11c],0x0     ; 00408a90
    CALL FUN_00408ae0                   ; 00408a9a
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 00408a9f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00408aa2
    PUSH EBX                            ; 00408aa8
    CALL dword ptr [EAX + 0xcc]         ; 00408aa9
    ADD ESP,0x4                         ; 00408aaf
    TEST EAX,EAX                        ; 00408ab2
    JNZ 0x00408ac1                      ; 00408ab4
        ;   XREF to: 00408ac1 (CONDITIONAL_JUMP)  ; LAB_00408ac1
    POP EBX                             ; 00408ab6
    LEA EAX,[EAX]                       ; 00408ab7
    LEA EDX,[EDX]                       ; 00408abd
    PUSH 0x1                            ; 00408ac1
        ;   Label: LAB_00408ac1
    ADD EBX,0x20                        ; 00408ac3
    PUSH EBX                            ; 00408ac6
    PUSH EAX                            ; 00408ac7
    CALL FUN_005121a0                   ; 00408ac8
        ;   XREF to: 005121a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005121a0()
    ADD ESP,0xc                         ; 00408acd
    POP EBX                             ; 00408ad0
    RET                                 ; 00408ad1

