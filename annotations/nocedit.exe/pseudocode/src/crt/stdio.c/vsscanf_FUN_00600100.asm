; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_vsscanf_FUN_00600100(char *str,char *format,va_list_t args)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_sscanf_FUN_0060013c at 00600154
;
; Called Functions:
;   crt_stdio.c_doscan_FUN_00604950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600100
        ;   Label: crt_stdio.c_vsscanf_FUN_00600100
    PUSH ESI                            ; 00600101
    SUB ESP,0x14                        ; 00600102
    MOV EAX,dword ptr [ESP + 0x20]      ; 00600105
    MOV ECX,dword ptr [ESP + 0x28]      ; 00600109
    MOV EDX,0x6000d0                    ; 0060010d
    PUSH ECX                            ; 00600112
    MOV ESI,dword ptr [ESP + 0x28]      ; 00600113
    MOV dword ptr [ESP + 0xc],EAX       ; 00600117
    PUSH ESI                            ; 0060011b
    LEA EAX,[ESP + 0x8]                 ; 0060011c
    MOV EBX,0x6000f8                    ; 00600120
    PUSH EAX                            ; 00600125
    MOV dword ptr [ESP + 0xc],EDX       ; 00600126
    MOV dword ptr [ESP + 0x10],EBX      ; 0060012a
    CALL crt_stdio.c_doscan_FUN_00604950 ; 0060012e
        ;   XREF to: 00604950 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_doscan_FUN_00604950(scanf_state_t * state, char * * format_ptr, va_list_t * args)
    ADD ESP,0xc                         ; 00600133
    ADD ESP,0x14                        ; 00600136
    POP ESI                             ; 00600139
    POP EBX                             ; 0060013a
    RET                                 ; 0060013b

