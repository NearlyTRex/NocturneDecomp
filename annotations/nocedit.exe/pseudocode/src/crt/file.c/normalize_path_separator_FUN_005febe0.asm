; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; wchar_t __cdecl crt_file_c_normalize_path_separator_FUN_005febe0(wchar_t ch,wchar_t *preferred_separator)
;
; Parameters:
; wchar_t          Stack[0x4]:2   ch
; wchar_t *        Stack[0x8]:4   preferred_separator
;
; XREF[1]:
;   crt_file.c_makepath_FUN_005febfc at 005fed2a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005febe0
        ;   Label: crt_file.c_normalize_path_separator_FUN_005febe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005febe4
    CMP EAX,0x5c                        ; 005febe8
    JZ 0x005febf2                       ; 005febeb
        ;   XREF to: 005febf2 (CONDITIONAL_JUMP)  ; LAB_005febf2
    CMP EAX,0x2f                        ; 005febed
    JNZ 0x005febfb                      ; 005febf0
        ;   XREF to: 005febfb (CONDITIONAL_JUMP)  ; LAB_005febfb
    CMP dword ptr [EDX],0x0             ; 005febf2
        ;   Label: LAB_005febf2
    JNZ 0x005febf9                      ; 005febf5
        ;   XREF to: 005febf9 (CONDITIONAL_JUMP)  ; LAB_005febf9
    MOV dword ptr [EDX],EAX             ; 005febf7
    MOV EAX,dword ptr [EDX]             ; 005febf9
        ;   Label: LAB_005febf9
    RET                                 ; 005febfb
        ;   Label: LAB_005febfb

