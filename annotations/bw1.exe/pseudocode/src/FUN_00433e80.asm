; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433e80(int param_1,undefined4 param_2)
;
;
; XREF[46]:
;   FUN_0040eaa0 at 0040eb65
;   FUN_0040f4d0 at 0040f6ca
;   FUN_004115b0 at 0041182a
;   FUN_00412ba0 at 00412e27
;   FUN_00414770 at 004147e8
;   FUN_00414b30 at 00414d30
;   FUN_00415340 at 004155ce
;   FUN_0041bb40 at 0041c16a
;   FUN_00423b70 at 00424763
;   FUN_00428ae0 at 00429884
;   ... and 36 more
;
; Called Functions:
;   FUN_004328f0
;   FUN_00432cb0
;   FUN_00432e80
;   FUN_00433b30
;   FUN_00441fa0
;   FUN_00569180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433e80
        ;   Label: FUN_00433e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00433e81
    PUSH EBX                            ; 00433e85
    CALL FUN_00432cb0                   ; 00433e86
        ;   XREF to: 00432cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cb0()
    ADD ESP,0x4                         ; 00433e8b
    PUSH EBX                            ; 00433e8e
    CALL FUN_00433b30                   ; 00433e8f
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00433b30()
    ADD ESP,0x4                         ; 00433e94
    LEA EAX,[EBX + 0x158]               ; 00433e97
    PUSH EAX                            ; 00433e9d
    CALL FUN_00569180                   ; 00433e9e
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; undefined FUN_00569180()
    ADD ESP,0x4                         ; 00433ea3
    PUSH EBX                            ; 00433ea6
    CALL FUN_00432e80                   ; 00433ea7
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00432e80()
    ADD ESP,0x4                         ; 00433eac
    PUSH dword ptr [ESP + 0xc]          ; 00433eaf
    PUSH EBX                            ; 00433eb3
    CALL FUN_004328f0                   ; 00433eb4
        ;   XREF to: 004328f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004328f0()
    MOV EDX,dword ptr [EBX + 0x27bc]    ; 00433eb9
    ADD ESP,0x8                         ; 00433ebf
    TEST EDX,EDX                        ; 00433ec2
    JNZ 0x00433edd                      ; 00433ec4
        ;   XREF to: 00433edd (CONDITIONAL_JUMP)  ; LAB_00433edd
    PUSH EBX                            ; 00433ec6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433ec7
    CALL dword ptr [EAX + 0x10c]        ; 00433ecd
    ADD ESP,0x4                         ; 00433ed3
    CMP EAX,0x1                         ; 00433ed6
    JZ 0x00433edd                       ; 00433ed9
        ;   XREF to: 00433edd (CONDITIONAL_JUMP)  ; LAB_00433edd
    POP EBX                             ; 00433edb
    RET                                 ; 00433edc
    LEA EAX,[EBX + 0x158]               ; 00433edd
        ;   Label: LAB_00433edd
    PUSH EAX                            ; 00433ee3
    PUSH dword ptr [EBX + 0x2504]       ; 00433ee4
    LEA EAX,[EBX + 0x30]                ; 00433eea
    PUSH dword ptr [ESP + 0x14]         ; 00433eed
    PUSH EAX                            ; 00433ef1
    LEA EAX,[EBX + 0x20]                ; 00433ef2
    PUSH EAX                            ; 00433ef5
    ADD EBX,0x2ca0                      ; 00433ef6
    PUSH EBX                            ; 00433efc
    CALL FUN_00441fa0                   ; 00433efd
        ;   XREF to: 00441fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441fa0()
    ADD ESP,0x18                        ; 00433f02
    POP EBX                             ; 00433f05
    RET                                 ; 00433f06

