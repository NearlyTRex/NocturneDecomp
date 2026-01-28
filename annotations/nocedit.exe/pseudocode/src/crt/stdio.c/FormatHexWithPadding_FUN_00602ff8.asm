; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(int value,char *buffer,int width)
;
; Parameters:
; int              Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   width
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 00603745
;
; Called Functions:
;   crt_stdio.c_IntegerToString_FUN_00607d18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602ff8
        ;   Label: crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
    PUSH ESI                            ; 00602ff9
    PUSH EDI                            ; 00602ffa
    PUSH EBP                            ; 00602ffb
    MOV EBP,dword ptr [ESP + 0x18]      ; 00602ffc
    PUSH 0x10                           ; 00603000
    PUSH EBP                            ; 00603002
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00603003
    PUSH EDX                            ; 00603007
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 00603008
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 0060300d
    MOV EDI,EBP                         ; 00603010
    PUSH ES                             ; 00603012
    MOV AX,DS                           ; 00603013
    MOV ES,AX                           ; 00603015
    SUB ECX,ECX                         ; 00603017
    DEC ECX                             ; 00603019
    XOR EAX,EAX                         ; 0060301a
    SCASB.REPNE ES:EDI                  ; 0060301c
    NOT ECX                             ; 0060301e
    DEC ECX                             ; 00603020
    POP ES                              ; 00603021
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00603022
    DEC EAX                             ; 00603026
    TEST ECX,ECX                        ; 00603027
    JZ 0x00603040                       ; 00603029
        ;   XREF to: 00603040 (CONDITIONAL_JUMP)  ; LAB_00603040
    MOV ESI,EBP                         ; 0060302b
    LEA EBX,[EAX + EBP*0x1]             ; 0060302d
    LEA EDX,[ECX + EBP*0x1]             ; 00603030
    DEC EBX                             ; 00603033
        ;   Label: LAB_00603033
    MOV CL,byte ptr [EDX + -0x1]        ; 00603034
    DEC EDX                             ; 00603037
    DEC EAX                             ; 00603038
    MOV byte ptr [EBX + 0x1],CL         ; 00603039
    CMP EDX,ESI                         ; 0060303c
    JNZ 0x00603033                      ; 0060303e
        ;   XREF to: 00603033 (CONDITIONAL_JUMP)  ; LAB_00603033
    LEA EDX,[EAX + EBP*0x1]             ; 00603040
        ;   Label: LAB_00603040
    TEST EAX,EAX                        ; 00603043
        ;   Label: LAB_00603043
    JL 0x0060304e                       ; 00603045
        ;   XREF to: 0060304e (CONDITIONAL_JUMP)  ; LAB_0060304e
    DEC EAX                             ; 00603047
    MOV byte ptr [EDX],0x30             ; 00603048
    DEC EDX                             ; 0060304b
    JMP 0x00603043                      ; 0060304c
        ;   XREF to: 00603043 (UNCONDITIONAL_JUMP)  ; LAB_00603043
    ADD EBP,dword ptr [ESP + 0x1c]      ; 0060304e
        ;   Label: LAB_0060304e
    MOV byte ptr [EBP],0x0              ; 00603052
    POP EBP                             ; 00603056
    POP EDI                             ; 00603057
    POP ESI                             ; 00603058
    POP EBX                             ; 00603059
    RET                                 ; 0060305a

