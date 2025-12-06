; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_CSlew_copy_FUN_00585240(CSlew * this_ptr, CSlew * other)
;
; Parameters:
; CSlew *          Stack[0x4]:4   this_ptr
; CSlew *          Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585240
        ;   Label: core_setutil.cpp_CSlew_copy_FUN_00585240
    MOV EAX,dword ptr [ESP + 0x8]       ; 00585241
    MOV EDX,dword ptr [ESP + 0xc]       ; 00585245
    ADD EAX,0x4                         ; 00585249
    MOV ECX,dword ptr [EDX]             ; 0058524c
    MOV dword ptr [EAX + -0x4],ECX      ; 0058524e
    LEA ECX,[EDX + 0x4]                 ; 00585251
    ADD EAX,0x4                         ; 00585254
    MOV ECX,dword ptr [ECX]             ; 00585257
    MOV dword ptr [EAX + -0x4],ECX      ; 00585259
    LEA ECX,[EDX + 0x8]                 ; 0058525c
    SUB EAX,0x8                         ; 0058525f
    MOV ECX,dword ptr [ECX]             ; 00585262
    MOV dword ptr [EAX + 0x8],ECX       ; 00585264
    LEA ECX,[EAX + 0xc]                 ; 00585267
    LEA EAX,[EDX + 0xc]                 ; 0058526a
    MOV EBX,dword ptr [EAX]             ; 0058526d
    MOV dword ptr [ECX],EBX             ; 0058526f
    LEA EBX,[EAX + 0x4]                 ; 00585271
    ADD ECX,0x4                         ; 00585274
    MOV EBX,dword ptr [EBX]             ; 00585277
    MOV dword ptr [ECX],EBX             ; 00585279
    ADD ECX,0x4                         ; 0058527b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0058527e
    MOV dword ptr [ECX],EAX             ; 00585281
    LEA EAX,[ECX + -0x14]               ; 00585283
    MOV ECX,dword ptr [EDX + 0x18]      ; 00585286
    MOV dword ptr [EAX + 0x18],ECX      ; 00585289
    POP EBX                             ; 0058528c
    RET                                 ; 0058528d

