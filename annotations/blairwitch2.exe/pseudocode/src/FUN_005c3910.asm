; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c3910(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_005befc0 at 005beffa
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3910
        ;   Label: FUN_005c3910
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c3911
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3915
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c3919
    CMP EBX,0x2                         ; 005c391d
    JNZ 0x005c3930                      ; 005c3920
        ;   XREF to: 005c3930 (CONDITIONAL_JUMP)  ; LAB_005c3930
    MOV dword ptr [EDX],0xc0000000      ; 005c3922
    MOV dword ptr [EAX],0x80            ; 005c3928
    POP EBX                             ; 005c392e
    RET                                 ; 005c392f
    CMP EBX,0x1                         ; 005c3930
        ;   Label: LAB_005c3930
    JNZ 0x005c3943                      ; 005c3933
        ;   XREF to: 005c3943 (CONDITIONAL_JUMP)  ; LAB_005c3943
    MOV dword ptr [EDX],0x40000000      ; 005c3935
    MOV dword ptr [EAX],0x80            ; 005c393b
    POP EBX                             ; 005c3941
    RET                                 ; 005c3942
    MOV dword ptr [EDX],0x80000000      ; 005c3943
        ;   Label: LAB_005c3943
    MOV dword ptr [EAX],0x1             ; 005c3949
    POP EBX                             ; 005c394f
    RET                                 ; 005c3950

