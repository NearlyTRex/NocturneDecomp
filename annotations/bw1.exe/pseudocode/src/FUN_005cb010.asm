; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005cb010(char *param_1)
;
;
; XREF[1]:
;   FUN_005c50fc at 005c51f6
;
; Called Functions:
;   FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb010
        ;   Label: FUN_005cb010
    PUSH ESI                            ; 005cb011
    PUSH EDI                            ; 005cb012
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cb013
    MOV EDI,ESI                         ; 005cb017
    PUSH ES                             ; 005cb019
    MOV AX,DS                           ; 005cb01a
    MOV ES,AX                           ; 005cb01c
    SUB ECX,ECX                         ; 005cb01e
    DEC ECX                             ; 005cb020
    XOR EAX,EAX                         ; 005cb021
    SCASB.REPNE ES:EDI                  ; 005cb023
    NOT ECX                             ; 005cb025
    DEC ECX                             ; 005cb027
    POP ES                              ; 005cb028
    LEA EBX,[ECX + 0x1]                 ; 005cb029
    PUSH EBX                            ; 005cb02c
    CALL FUN_005c08d0                   ; 005cb02d
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 005cb032
    MOV EDX,EAX                         ; 005cb035
    TEST EAX,EAX                        ; 005cb037
    JZ 0x005cb055                       ; 005cb039
        ;   XREF to: 005cb055 (CONDITIONAL_JUMP)  ; LAB_005cb055
    MOV ECX,EBX                         ; 005cb03b
    MOV EDI,EAX                         ; 005cb03d
    PUSH ES                             ; 005cb03f
    MOV AX,DS                           ; 005cb040
    MOV ES,AX                           ; 005cb042
    PUSH EDI                            ; 005cb044
    MOV EAX,ECX                         ; 005cb045
    SHR ECX,0x2                         ; 005cb047
    MOVSD.REP ES:EDI,ESI                ; 005cb04a
    MOV CL,AL                           ; 005cb04c
    AND CL,0x3                          ; 005cb04e
    MOVSB.REP ES:EDI,ESI                ; 005cb051
    POP EDI                             ; 005cb053
    POP ES                              ; 005cb054
    MOV EAX,EDX                         ; 005cb055
        ;   Label: LAB_005cb055
    POP EDI                             ; 005cb057
    POP ESI                             ; 005cb058
    POP EBX                             ; 005cb059
    RET                                 ; 005cb05a

