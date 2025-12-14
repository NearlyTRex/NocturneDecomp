; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdio.c_CalculateZeroPadding_FUN_0060317c(FormatSpec * spec_info)
;
; Parameters:
; FormatSpec *     Stack[0x4]:4   spec_info
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 006036eb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060317c
        ;   Label: crt_stdio.c_CalculateZeroPadding_FUN_0060317c
    PUSH ESI                            ; 0060317d
    PUSH EDI                            ; 0060317e
    PUSH EBP                            ; 0060317f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00603180
    TEST byte ptr [EAX + 0x1e],0x8      ; 00603184
    JNZ 0x006031ba                      ; 00603188
        ;   XREF to: 006031ba (CONDITIONAL_JUMP)  ; LAB_006031ba
    CMP byte ptr [EAX + 0x16],0x30      ; 0060318a
    JNZ 0x006031ba                      ; 0060318e
        ;   XREF to: 006031ba (CONDITIONAL_JUMP)  ; LAB_006031ba
    MOV EDX,dword ptr [EAX + 0x4]       ; 00603190
    MOV EBX,dword ptr [EAX + 0x20]      ; 00603193
    MOV ECX,dword ptr [EAX + 0x24]      ; 00603196
    SUB EDX,EBX                         ; 00603199
    MOV ESI,dword ptr [EAX + 0x28]      ; 0060319b
    SUB EDX,ECX                         ; 0060319e
    MOV EDI,dword ptr [EAX + 0x2c]      ; 006031a0
    SUB EDX,ESI                         ; 006031a3
    MOV EBP,dword ptr [EAX + 0x30]      ; 006031a5
    SUB EDX,EDI                         ; 006031a8
    MOV EBX,dword ptr [EAX + 0x34]      ; 006031aa
    SUB EDX,EBP                         ; 006031ad
    SUB EDX,EBX                         ; 006031af
    TEST EDX,EDX                        ; 006031b1
    JLE 0x006031ba                      ; 006031b3
        ;   XREF to: 006031ba (CONDITIONAL_JUMP)  ; LAB_006031ba
    ADD ECX,EDX                         ; 006031b5
    MOV dword ptr [EAX + 0x24],ECX      ; 006031b7
    POP EBP                             ; 006031ba
        ;   Label: LAB_006031ba
    POP EDI                             ; 006031bb
    POP ESI                             ; 006031bc
    POP EBX                             ; 006031bd
    RET                                 ; 006031be

