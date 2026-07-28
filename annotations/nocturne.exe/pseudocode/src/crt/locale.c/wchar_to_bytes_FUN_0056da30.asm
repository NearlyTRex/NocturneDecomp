; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_locale_c_wchar_to_bytes_FUN_0056da30(wchar_t character,char *output_buffer)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
; char *           Stack[0x8]:4   output_buffer
;
; XREF[4]:
;   FUN_00572d90 at 00572dbe
;   FUN_00573db0 at 00573dbd
;   crt_file.c_makepath_FUN_0056626c at 0056630d
;   crt_string.c_char_in_set_FUN_00572a90 at 00572aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056da30
        ;   Label: crt_locale.c_wchar_to_bytes_FUN_0056da30
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056da31
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056da35
    TEST DH,0xff                        ; 0056da39
    JZ 0x0056da4a                       ; 0056da3c
        ;   XREF to: 0056da4a (CONDITIONAL_JUMP)  ; LAB_0056da4a
    MOV EBX,EDX                         ; 0056da3e
    MOV byte ptr [EAX + 0x1],DL         ; 0056da40
    SHR EBX,0x8                         ; 0056da43
    MOV byte ptr [EAX],BL               ; 0056da46
    POP EBX                             ; 0056da48
    RET                                 ; 0056da49
    MOV byte ptr [EAX],DL               ; 0056da4a
        ;   Label: LAB_0056da4a
    POP EBX                             ; 0056da4c
    RET                                 ; 0056da4d

