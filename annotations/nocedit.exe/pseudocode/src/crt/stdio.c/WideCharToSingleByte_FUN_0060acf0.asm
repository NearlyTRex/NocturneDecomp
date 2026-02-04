; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char,char *output_buffer)
;
; Parameters:
; wchar_t          Stack[0x4]:2   wide_char
; char *           Stack[0x8]:4   output_buffer
;
; XREF[4]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 00603843
;   crt_stdio.c_FormatWideString_FUN_006031c0 at 006031eb
;   crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c at 00602fa9
;   crt_string.c_wcstombs_FUN_0060c0c0 at 0060c163
;
; Referenced Globals:
;   WIDE_CHAR_TO_MULTI_BYTE_FUNC* g_WideCharToMultiByteFunc = 002122da
;   uint g_CodePage = 0x1
;
; Called Functions:
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060acf0
        ;   Label: crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
    TEST EAX,EAX                        ; 0060acf4
    JNZ 0x0060acf9                      ; 0060acf6
        ;   XREF to: 0060acf9 (CONDITIONAL_JUMP)  ; LAB_0060acf9
    RET                                 ; 0060acf8
    PUSH 0x0                            ; 0060acf9
        ;   Label: LAB_0060acf9
    PUSH 0x0                            ; 0060acfb
    PUSH 0x2                            ; 0060acfd
    PUSH EAX                            ; 0060acff
    PUSH 0x1                            ; 0060ad00
    LEA EAX,[ESP + 0x1c]                ; 0060ad02
    PUSH EAX                            ; 0060ad06
    PUSH 0x200                          ; 0060ad07
    MOV EDX,dword ptr [0x00685570]      ; 0060ad0c | g_CodePage
    PUSH EDX                            ; 0060ad12
    CALL dword ptr CS:[0x611670]        ; 0060ad13 | g_WideCharToMultiByteFunc
    TEST EAX,EAX                        ; 0060ad1a
    JZ 0x0060ad1f                       ; 0060ad1c
        ;   XREF to: 0060ad1f (CONDITIONAL_JUMP)  ; LAB_0060ad1f
    RET                                 ; 0060ad1e
    MOV EAX,0xffffffff                  ; 0060ad1f
        ;   Label: LAB_0060ad1f
    RET                                 ; 0060ad24

