; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052a090(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_0052a400 at 0052a567
;
; Referenced Globals:
;   TerminatedCString s_s_005e5032
;   TerminatedCString s_s_005e5038
;   TerminatedCString s_none_0061b468
;
; Called Functions:
;   FUN_005b8010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052a090
        ;   Label: FUN_0052a090
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052a094
    MOV EAX,dword ptr [EAX]             ; 0052a098
    TEST EAX,EAX                        ; 0052a09a
    JNZ 0x0052a0b2                      ; 0052a09c
        ;   XREF to: 0052a0b2 (CONDITIONAL_JUMP)  ; LAB_0052a0b2
    PUSH 0x61b468                       ; 0052a09e | = "(none)"
    PUSH 0x5e5032                       ; 0052a0a3 | = "\"%s\"\n"
    PUSH EDX                            ; 0052a0a8
    CALL FUN_005b8010                   ; 0052a0a9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 0052a0ae
    RET                                 ; 0052a0b1
    PUSH EAX                            ; 0052a0b2
        ;   Label: LAB_0052a0b2
    PUSH 0x5e5038                       ; 0052a0b3 | = "\"%s\"\n"
    PUSH EDX                            ; 0052a0b8
    CALL FUN_005b8010                   ; 0052a0b9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 0052a0be
    RET                                 ; 0052a0c1

