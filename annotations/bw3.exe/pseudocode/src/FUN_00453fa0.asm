; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00453fa0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00473940 at 00473a88
;
; Called Functions:
;   FUN_00451fb0
;   FUN_00453d90
;   FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453fa0
        ;   Label: FUN_00453fa0
    PUSH ESI                            ; 00453fa1
    PUSH EDI                            ; 00453fa2
    PUSH EBP                            ; 00453fa3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00453fa4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00453fa8
    PUSH EBP                            ; 00453fac
    PUSH 0xc                            ; 00453fad
    PUSH 0x1                            ; 00453faf
    LEA EAX,[ESI + 0x8]                 ; 00453fb1
    PUSH EAX                            ; 00453fb4
    CALL FUN_005a3890                   ; 00453fb5
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00453fba
    PUSH EBP                            ; 00453fbd
    PUSH 0xc                            ; 00453fbe
    PUSH 0x1                            ; 00453fc0
    LEA EAX,[ESI + 0x14]                ; 00453fc2
    PUSH EAX                            ; 00453fc5
    CALL FUN_005a3890                   ; 00453fc6
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00453fcb
    PUSH EBP                            ; 00453fce
    PUSH 0x4                            ; 00453fcf
    PUSH 0x1                            ; 00453fd1
    LEA EAX,[ESI + 0x20]                ; 00453fd3
    PUSH EAX                            ; 00453fd6
    CALL FUN_005a3890                   ; 00453fd7
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00453fdc
    PUSH EBP                            ; 00453fdf
    PUSH 0x4                            ; 00453fe0
    PUSH 0x1                            ; 00453fe2
    LEA EAX,[ESI + 0x28]                ; 00453fe4
    PUSH EAX                            ; 00453fe7
    CALL FUN_005a3890                   ; 00453fe8
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    MOV EDX,dword ptr [ESI + 0x28]      ; 00453fed
    ADD ESP,0x10                        ; 00453ff0
    TEST EDX,EDX                        ; 00453ff3
    JNZ 0x00454062                      ; 00453ff5
        ;   XREF to: 00454062 (CONDITIONAL_JUMP)  ; LAB_00454062
    PUSH EBP                            ; 00453ff7
        ;   Label: LAB_00453ff7
    PUSH 0xc                            ; 00453ff8
    MOV ECX,dword ptr [ESI + 0x20]      ; 00453ffa
    PUSH ECX                            ; 00453ffd
    MOV EBX,dword ptr [ESI + 0x24]      ; 00453ffe
    PUSH EBX                            ; 00454001
    CALL FUN_005a3890                   ; 00454002
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00454007
    MOV EDI,dword ptr [ESI + 0x28]      ; 0045400a
    XOR EBX,EBX                         ; 0045400d
    TEST EDI,EDI                        ; 0045400f
    JLE 0x00454040                      ; 00454011
        ;   XREF to: 00454040 (CONDITIONAL_JUMP)  ; LAB_00454040
    XOR EDI,EDI                         ; 00454013
    MOV EAX,dword ptr [ESI + 0x24]      ; 00454015
        ;   Label: LAB_00454015
    PUSH EAX                            ; 00454018
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00454019
    PUSH EBP                            ; 0045401c
    ADD EAX,EDI                         ; 0045401d
    PUSH EAX                            ; 0045401f
    INC EBX                             ; 00454020
    CALL FUN_00451fb0                   ; 00454021
        ;   XREF to: 00451fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00451fb0()
    ADD EDI,0x20                        ; 00454026
    MOV EDX,dword ptr [ESI + 0x28]      ; 00454029
    ADD ESP,0xc                         ; 0045402c
    CMP EBX,EDX                         ; 0045402f
    JL 0x00454015                       ; 00454031
        ;   XREF to: 00454015 (CONDITIONAL_JUMP)  ; LAB_00454015
    LEA EAX,[EAX]                       ; 00454033
    LEA EDX,[EDX]                       ; 00454039
    NOP                                 ; 0045403f
    MOV ECX,dword ptr [ESI + 0x28]      ; 00454040
        ;   Label: LAB_00454040
    TEST ECX,ECX                        ; 00454043
    JZ 0x00454057                       ; 00454045
        ;   XREF to: 00454057 (CONDITIONAL_JUMP)  ; LAB_00454057
    PUSH EBP                            ; 00454047
    PUSH ECX                            ; 00454048
    PUSH 0x1                            ; 00454049
    MOV EDI,dword ptr [ESI + 0x30]      ; 0045404b
    PUSH EDI                            ; 0045404e
    CALL FUN_005a3890                   ; 0045404f
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00454054
    CMP dword ptr [ESI + 0x28],0x0      ; 00454057
        ;   Label: LAB_00454057
    JNZ 0x0045406d                      ; 0045405b
        ;   XREF to: 0045406d (CONDITIONAL_JUMP)  ; LAB_0045406d
    POP EBP                             ; 0045405d
    POP EDI                             ; 0045405e
    POP ESI                             ; 0045405f
    POP EBX                             ; 00454060
    RET                                 ; 00454061
    PUSH ESI                            ; 00454062
        ;   Label: LAB_00454062
    CALL FUN_00453d90                   ; 00454063
        ;   XREF to: 00453d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00453d90()
    ADD ESP,0x4                         ; 00454068
    JMP 0x00453ff7                      ; 0045406b
        ;   XREF to: 00453ff7 (UNCONDITIONAL_JUMP)  ; LAB_00453ff7
    PUSH EBP                            ; 0045406d
        ;   Label: LAB_0045406d
    PUSH 0x40                           ; 0045406e
    PUSH 0x1                            ; 00454070
    MOV EDX,dword ptr [ESI]             ; 00454072
    PUSH EDX                            ; 00454074
    CALL FUN_005a3890                   ; 00454075
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    MOV ECX,0x40                        ; 0045407a
    ADD ESP,0x10                        ; 0045407f
    MOV EAX,dword ptr [ESI]             ; 00454082
    MOV EDI,dword ptr [ESI + 0x4]       ; 00454084
    MOV ESI,EAX                         ; 00454087
    PUSH EDI                            ; 00454089
    MOV EAX,ECX                         ; 0045408a
    SHR ECX,0x2                         ; 0045408c
    MOVSD.REP ES:EDI,ESI                ; 0045408f
    MOV CL,AL                           ; 00454091
    AND CL,0x3                          ; 00454093
    MOVSB.REP ES:EDI,ESI                ; 00454096
    POP EDI                             ; 00454098
    POP EBP                             ; 00454099
    POP EDI                             ; 0045409a
    POP ESI                             ; 0045409b
    POP EBX                             ; 0045409c
    RET                                 ; 0045409d

