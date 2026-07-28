; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_formatTwoDigits_FUN_00566600(char *buffer,int value)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   value
;
; XREF[1]:
;   crt_time.c__strftime_FUN_00566634 at 0056682b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566600
        ;   Label: crt_unknown.c_formatTwoDigits_FUN_00566600
    PUSH ESI                            ; 00566601
    MOV ESI,dword ptr [ESP + 0xc]       ; 00566602
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566606
    MOV ECX,0xa                         ; 0056660a
    MOV EDX,EBX                         ; 0056660f
    MOV EAX,EBX                         ; 00566611
    SAR EDX,0x1f                        ; 00566613
    IDIV ECX                            ; 00566616
    MOV EDX,EBX                         ; 00566618
    ADD EAX,0x30                        ; 0056661a
    SAR EDX,0x1f                        ; 0056661d
    MOV byte ptr [ESI],AL               ; 00566620
    MOV EAX,EBX                         ; 00566622
    IDIV ECX                            ; 00566624
    MOV byte ptr [ESI + 0x2],0x0        ; 00566626
    ADD EDX,0x30                        ; 0056662a
    MOV byte ptr [ESI + 0x1],DL         ; 0056662d
    POP ESI                             ; 00566630
    POP EBX                             ; 00566631
    RET                                 ; 00566632

