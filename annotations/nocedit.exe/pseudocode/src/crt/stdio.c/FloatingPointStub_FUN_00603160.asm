; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_stdio_c_FloatingPointStub_FUN_00603160(char *buffer,va_list_t *args,FormatSpec *spec_info)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; va_list_t *      Stack[0x8]:4   args
; FormatSpec *     Stack[0xc]:4   spec_info
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 006034cc
;
; Referenced Globals:
;   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c = 0060ad30
;
; Called Functions:
;   crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00603160
        ;   Label: crt_stdio.c_FloatingPointStub_FUN_00603160
    MOV EDX,dword ptr [ESP + 0x10]      ; 00603161
    PUSH EDX                            ; 00603165
    MOV EBX,dword ptr [ESP + 0x10]      ; 00603166
    PUSH EBX                            ; 0060316a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0060316b
    PUSH ECX                            ; 0060316f
    CALL dword ptr [0x0068540c]         ; 00603170 | PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c
    ADD ESP,0xc                         ; 00603176
    POP EBX                             ; 00603179
    RET                                 ; 0060317a

