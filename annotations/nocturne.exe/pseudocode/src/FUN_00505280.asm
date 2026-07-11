; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00505280(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_005055f0 at 00505757
;
; Referenced Globals:
;   string s_\"%s\"_0058fcba
;   string s_\"%s\"_0058fcc0
;   string s_(none)_005be228
;
; Called Functions:
;   FUN_005644f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00505280
        ;   Label: FUN_00505280
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505284
    MOV EAX,dword ptr [EAX]             ; 00505288
    TEST EAX,EAX                        ; 0050528a
    JNZ 0x005052a2                      ; 0050528c
        ;   XREF to: 005052a2 (CONDITIONAL_JUMP)  ; LAB_005052a2
    PUSH 0x5be228                       ; 0050528e | = "(none)"
    PUSH 0x58fcba                       ; 00505293 | = "\"%s\"\n"
    PUSH EDX                            ; 00505298
    CALL FUN_005644f0                   ; 00505299
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0050529e
    RET                                 ; 005052a1
    PUSH EAX                            ; 005052a2
        ;   Label: LAB_005052a2
    PUSH 0x58fcc0                       ; 005052a3 | = "\"%s\"\n"
    PUSH EDX                            ; 005052a8
    CALL FUN_005644f0                   ; 005052a9
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 005052ae
    RET                                 ; 005052b1

