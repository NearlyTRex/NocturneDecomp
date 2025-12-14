; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
; char *           Stack[0x8]:4   output_buffer
;
; XREF[4]:
;   crt_file.c_makepath_FUN_005febfc at 005fed67
;   crt_locale.c_toupper_multibyte_FUN_0060f300 at 0060f30d
;   crt_string.c_char_in_set_FUN_0060e340 at 0060e350
;   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 at 0060e5fe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605a20
        ;   Label: crt_locale.c_wchar_to_bytes_FUN_00605a20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00605a21
    MOV EAX,dword ptr [ESP + 0xc]       ; 00605a25
    TEST DH,0xff                        ; 00605a29
    JZ 0x00605a3a                       ; 00605a2c
        ;   XREF to: 00605a3a (CONDITIONAL_JUMP)  ; LAB_00605a3a
    MOV EBX,EDX                         ; 00605a2e
    MOV byte ptr [EAX + 0x1],DL         ; 00605a30
    SHR EBX,0x8                         ; 00605a33
    MOV byte ptr [EAX],BL               ; 00605a36
    POP EBX                             ; 00605a38
    RET                                 ; 00605a39
    MOV byte ptr [EAX],DL               ; 00605a3a
        ;   Label: LAB_00605a3a
    POP EBX                             ; 00605a3c
    RET                                 ; 00605a3d

