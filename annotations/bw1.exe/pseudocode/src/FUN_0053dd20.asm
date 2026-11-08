; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053dd20(int param_1,int param_2)
;
;
; XREF[9]:
;   FUN_0047ab00 at 0047ae77
;   FUN_00483e70 at 00484122
;   FUN_00484fd0 at 00485019
;   FUN_004c0080 at 004c046b
;   FUN_0053e120 at 0053e384
;   FUN_0053f080 at 0053f3df
;   FUN_0053f720 at 0053f95f
;   FUN_005bf120 at 005bf447
;   FUN_005bf640 at 005bf927
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dd20
        ;   Label: FUN_0053dd20
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053dd21
    XOR EDX,EDX                         ; 0053dd25
    TEST EBX,EBX                        ; 0053dd27
    JLE 0x0053dd45                      ; 0053dd29
        ;   XREF to: 0053dd45 (CONDITIONAL_JUMP)  ; LAB_0053dd45
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053dd2b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053dd2f
        ;   Label: LAB_0053dd2f
    TEST ECX,ECX                        ; 0053dd32
    JNZ 0x0053dd47                      ; 0053dd34
        ;   XREF to: 0053dd47 (CONDITIONAL_JUMP)  ; LAB_0053dd47
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0053dd36
    INC EDX                             ; 0053dd3d
    ADD EAX,0x30                        ; 0053dd3e
    CMP EDX,EBX                         ; 0053dd41
    JL 0x0053dd2f                       ; 0053dd43
        ;   XREF to: 0053dd2f (CONDITIONAL_JUMP)  ; LAB_0053dd2f
    POP EBX                             ; 0053dd45
        ;   Label: LAB_0053dd45
    RET                                 ; 0053dd46
    MOV ECX,dword ptr [EAX + 0xc]       ; 0053dd47
        ;   Label: LAB_0053dd47
    MOV dword ptr [EAX + 0x8],ECX       ; 0053dd4a
    INC EDX                             ; 0053dd4d
    ADD EAX,0x30                        ; 0053dd4e
    CMP EDX,EBX                         ; 0053dd51
    JL 0x0053dd2f                       ; 0053dd53
        ;   XREF to: 0053dd2f (CONDITIONAL_JUMP)  ; LAB_0053dd2f
    POP EBX                             ; 0053dd55
    RET                                 ; 0053dd56

