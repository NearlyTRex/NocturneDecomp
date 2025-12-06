; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   value
;
; XREF[1]:
;   crt_time.c_strftime_FUN_006002d4 at 006005e2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006002a0
        ;   Label: crt_stdio.c_formatTwoDigits_FUN_006002a0
    PUSH ESI                            ; 006002a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 006002a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 006002a6
    MOV ECX,0xa                         ; 006002aa
    MOV EDX,EBX                         ; 006002af
    MOV EAX,EBX                         ; 006002b1
    SAR EDX,0x1f                        ; 006002b3
    IDIV ECX                            ; 006002b6
    MOV EDX,EBX                         ; 006002b8
    ADD EAX,0x30                        ; 006002ba
    SAR EDX,0x1f                        ; 006002bd
    MOV byte ptr [ESI],AL               ; 006002c0
    MOV EAX,EBX                         ; 006002c2
    IDIV ECX                            ; 006002c4
    MOV byte ptr [ESI + 0x2],0x0        ; 006002c6
    ADD EDX,0x30                        ; 006002ca
    MOV byte ptr [ESI + 0x1],DL         ; 006002cd
    POP ESI                             ; 006002d0
    POP EBX                             ; 006002d1
    RET                                 ; 006002d2

