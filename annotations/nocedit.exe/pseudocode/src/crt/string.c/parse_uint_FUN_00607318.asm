; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_parse_uint_FUN_00607318(char *str,int *result)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int *            Stack[0x8]:4   result
;
; XREF[2]:
;   crt_time.c_parse_dst_rule_FUN_00607464 at 006074e1
;   crt_time.c_parse_timezone_spec_FUN_00607348 at 00607406
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607318
        ;   Label: crt_string.c_parse_uint_FUN_00607318
    MOV EAX,dword ptr [ESP + 0x8]       ; 00607319
    MOV BL,byte ptr [EAX]               ; 0060731d
    XOR EDX,EDX                         ; 0060731f
    CMP BL,0x30                         ; 00607321
    JC 0x0060733f                       ; 00607324
        ;   XREF to: 0060733f (CONDITIONAL_JUMP)  ; LAB_0060733f
    CMP byte ptr [EAX],0x39             ; 00607326
        ;   Label: LAB_00607326
    JA 0x0060733f                       ; 00607329
        ;   XREF to: 0060733f (CONDITIONAL_JUMP)  ; LAB_0060733f
    IMUL EDX,EDX,0xa                    ; 0060732b
    XOR EBX,EBX                         ; 0060732e
    MOV BL,byte ptr [EAX]               ; 00607330
    INC EAX                             ; 00607332
    ADD EDX,EBX                         ; 00607333
    MOV BH,byte ptr [EAX]               ; 00607335
    SUB EDX,0x30                        ; 00607337
    CMP BH,0x30                         ; 0060733a
    JNC 0x00607326                      ; 0060733d
        ;   XREF to: 00607326 (CONDITIONAL_JUMP)  ; LAB_00607326
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060733f
        ;   Label: LAB_0060733f
    MOV dword ptr [EBX],EDX             ; 00607343
    POP EBX                             ; 00607345
    RET                                 ; 00607346

