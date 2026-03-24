; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong __cdecl crt_string_c_wcslen_FUN_0060cd30(LPWSTR str)
;
; Parameters:
; LPWSTR           Stack[0x4]:4   str
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cd30
        ;   Label: crt_string.c_wcslen_FUN_0060cd30
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060cd31
    MOV BX,word ptr [EDX]               ; 0060cd35
    MOV EAX,EDX                         ; 0060cd38
    TEST BX,BX                          ; 0060cd3a
    JZ 0x0060cd4b                       ; 0060cd3d
        ;   XREF to: 0060cd4b (CONDITIONAL_JUMP)  ; LAB_0060cd4b
    MOV CX,word ptr [EAX + 0x2]         ; 0060cd3f
        ;   Label: LAB_0060cd3f
    ADD EAX,0x2                         ; 0060cd43
    TEST CX,CX                          ; 0060cd46
    JNZ 0x0060cd3f                      ; 0060cd49
        ;   XREF to: 0060cd3f (CONDITIONAL_JUMP)  ; LAB_0060cd3f
    SUB EAX,EDX                         ; 0060cd4b
        ;   Label: LAB_0060cd4b
    SAR EAX,0x1                         ; 0060cd4d
    POP EBX                             ; 0060cd4f
    RET                                 ; 0060cd50

