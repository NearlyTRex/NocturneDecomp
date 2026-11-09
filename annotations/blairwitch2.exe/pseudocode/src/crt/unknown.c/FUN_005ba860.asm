; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005ba860(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ba890 at 005ba8b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba860
        ;   Label: crt_unknown.c_FUN_005ba860
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ba861
    MOV EDX,dword ptr [EBX + 0x8]       ; 005ba865
    XOR EAX,EAX                         ; 005ba868
    MOV AL,byte ptr [EDX]               ; 005ba86a
    TEST EAX,EAX                        ; 005ba86c
    JZ 0x005ba876                       ; 005ba86e
        ;   XREF to: 005ba876 (CONDITIONAL_JUMP)  ; LAB_005ba876
    INC EDX                             ; 005ba870
    MOV dword ptr [EBX + 0x8],EDX       ; 005ba871
    POP EBX                             ; 005ba874
    RET                                 ; 005ba875
    MOV DL,byte ptr [EBX + 0x10]        ; 005ba876
        ;   Label: LAB_005ba876
    OR DL,0x2                           ; 005ba879
    MOV EAX,0xffffffff                  ; 005ba87c
    MOV byte ptr [EBX + 0x10],DL        ; 005ba881
    POP EBX                             ; 005ba884
    RET                                 ; 005ba885

