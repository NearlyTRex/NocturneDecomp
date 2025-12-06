; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_string_getc_FUN_006000d0(scanf_state_t * state)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
;
; XREF[1]:
;   crt_stdio.c_vsscanf_FUN_00600100 at 00600126
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006000d0
        ;   Label: crt_stdio.c_string_getc_FUN_006000d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 006000d1
    MOV EDX,dword ptr [EBX + 0x8]       ; 006000d5
    XOR EAX,EAX                         ; 006000d8
    MOV AL,byte ptr [EDX]               ; 006000da
    TEST EAX,EAX                        ; 006000dc
    JZ 0x006000e6                       ; 006000de | LAB_006000e6
        ;   XREF to: 006000e6 (CONDITIONAL_JUMP)
    INC EDX                             ; 006000e0
    MOV dword ptr [EBX + 0x8],EDX       ; 006000e1
    POP EBX                             ; 006000e4
    RET                                 ; 006000e5
    MOV DL,byte ptr [EBX + 0x10]        ; 006000e6
        ;   Label: LAB_006000e6
    OR DL,0x2                           ; 006000e9
    MOV EAX,0xffffffff                  ; 006000ec
    MOV byte ptr [EBX + 0x10],DL        ; 006000f1
    POP EBX                             ; 006000f4
    RET                                 ; 006000f5

