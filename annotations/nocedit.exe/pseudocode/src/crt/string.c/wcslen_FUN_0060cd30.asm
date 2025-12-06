; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
;
; Parameters:
; typedef LPWSTR WCHAR * Stack[0x4]:4   str
;
; XREF[4]:
;   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 at 0060a5f7
;   crt_string.c_wcsdup_FUN_0060a660 at 0060a667
;   crt_unknown.c_FUN_0060fb40 at 0060fbc8
;   crt_unknown.c_FUN_006107f0 at 0061081a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cd30
        ;   Label: crt_string.c_wcslen_FUN_0060cd30
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060cd31
    MOV BX,word ptr [EDX]               ; 0060cd35
    MOV EAX,EDX                         ; 0060cd38
    TEST BX,BX                          ; 0060cd3a
    JZ 0x0060cd4b                       ; 0060cd3d | LAB_0060cd4b
        ;   XREF to: 0060cd4b (CONDITIONAL_JUMP)
    MOV CX,word ptr [EAX + 0x2]         ; 0060cd3f
        ;   Label: LAB_0060cd3f
    ADD EAX,0x2                         ; 0060cd43
    TEST CX,CX                          ; 0060cd46
    JNZ 0x0060cd3f                      ; 0060cd49 | LAB_0060cd3f
        ;   XREF to: 0060cd3f (CONDITIONAL_JUMP)
    SUB EAX,EDX                         ; 0060cd4b
        ;   Label: LAB_0060cd4b
    SAR EAX,0x1                         ; 0060cd4d
    POP EBX                             ; 0060cd4f
    RET                                 ; 0060cd50

