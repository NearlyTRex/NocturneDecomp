; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0056e940(char *param_1)
;
;
; XREF[1]:
;   FUN_0056720c at 00567306
;
; Called Functions:
;   FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e940
        ;   Label: FUN_0056e940
    PUSH ESI                            ; 0056e941
    PUSH EDI                            ; 0056e942
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056e943
    MOV EDI,ESI                         ; 0056e947
    PUSH ES                             ; 0056e949
    MOV AX,DS                           ; 0056e94a
    MOV ES,AX                           ; 0056e94c
    SUB ECX,ECX                         ; 0056e94e
    DEC ECX                             ; 0056e950
    XOR EAX,EAX                         ; 0056e951
    SCASB.REPNE ES:EDI                  ; 0056e953
    NOT ECX                             ; 0056e955
    DEC ECX                             ; 0056e957
    POP ES                              ; 0056e958
    LEA EBX,[ECX + 0x1]                 ; 0056e959
    PUSH EBX                            ; 0056e95c
    CALL FUN_005635b0                   ; 0056e95d
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 0056e962
    MOV EDX,EAX                         ; 0056e965
    TEST EAX,EAX                        ; 0056e967
    JZ 0x0056e985                       ; 0056e969
        ;   XREF to: 0056e985 (CONDITIONAL_JUMP)  ; LAB_0056e985
    MOV ECX,EBX                         ; 0056e96b
    MOV EDI,EAX                         ; 0056e96d
    PUSH ES                             ; 0056e96f
    MOV AX,DS                           ; 0056e970
    MOV ES,AX                           ; 0056e972
    PUSH EDI                            ; 0056e974
    MOV EAX,ECX                         ; 0056e975
    SHR ECX,0x2                         ; 0056e977
    MOVSD.REP ES:EDI,ESI                ; 0056e97a
    MOV CL,AL                           ; 0056e97c
    AND CL,0x3                          ; 0056e97e
    MOVSB.REP ES:EDI,ESI                ; 0056e981
    POP EDI                             ; 0056e983
    POP ES                              ; 0056e984
    MOV EAX,EDX                         ; 0056e985
        ;   Label: LAB_0056e985
    POP EDI                             ; 0056e987
    POP ESI                             ; 0056e988
    POP EBX                             ; 0056e989
    RET                                 ; 0056e98a

