; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4fe0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c03c0 at 005c03d8
;   crt_unknown.c_printf_FUN_005c1280 at 005c1297
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_unknown.c_FUN_005c3320
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c64a0
;   crt_unknown.c_FUN_005c6d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4fe0
        ;   Label: crt_unknown.c_FUN_005c4fe0
    PUSH ESI                            ; 005c4fe1
    PUSH EDI                            ; 005c4fe2
    PUSH EBP                            ; 005c4fe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c4fe4
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c4fe8
    PUSH EDX                            ; 005c4feb
    CALL dword ptr [0x00626600]         ; 005c4fec | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c4ff2
    MOV ECX,dword ptr [EAX + 0xc]       ; 005c4ff5
    ADD ESP,0x4                         ; 005c4ff8
    CMP ECX,0x1                         ; 005c4ffb
    JZ 0x005c501f                       ; 005c4ffe
        ;   XREF to: 005c501f (CONDITIONAL_JUMP)  ; LAB_005c501f
    TEST ECX,ECX                        ; 005c5000
    JZ 0x005c5018                       ; 005c5002
        ;   XREF to: 005c5018 (CONDITIONAL_JUMP)  ; LAB_005c5018
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c5004
    PUSH EDI                            ; 005c5007
    CALL dword ptr [0x00626604]         ; 005c5008 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c500e
    XOR EAX,EAX                         ; 005c5011
    POP EBP                             ; 005c5013
    POP EDI                             ; 005c5014
    POP ESI                             ; 005c5015
    POP EBX                             ; 005c5016
    RET                                 ; 005c5017
    MOV dword ptr [EAX + 0xc],0x1       ; 005c5018
        ;   Label: LAB_005c5018
    MOV AH,byte ptr [EBX + 0xc]         ; 005c501f
        ;   Label: LAB_005c501f
    AND AH,0xcf                         ; 005c5022
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c5025
    MOV byte ptr [EBX + 0xc],AH         ; 005c5028
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c502b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c502e
    AND EBP,0x30                        ; 005c5031
    TEST EDX,EDX                        ; 005c5034
    JNZ 0x005c5041                      ; 005c5036
        ;   XREF to: 005c5041 (CONDITIONAL_JUMP)  ; LAB_005c5041
    PUSH EBX                            ; 005c5038
    CALL crt_unknown.c_FUN_005c64a0     ; 005c5039
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c64a0()
    ADD ESP,0x4                         ; 005c503e
    MOV DL,byte ptr [EBX + 0xd]         ; 005c5041
        ;   Label: LAB_005c5041
    XOR EDI,EDI                         ; 005c5044
    TEST DL,0x4                         ; 005c5046
    JZ 0x005c5060                       ; 005c5049
        ;   XREF to: 005c5060 (CONDITIONAL_JUMP)  ; LAB_005c5060
    MOV DH,DL                           ; 005c504b
    AND DH,0xfa                         ; 005c504d
    MOV CL,DH                           ; 005c5050
    MOV byte ptr [EBX + 0xd],DH         ; 005c5052
    OR CL,0x1                           ; 005c5055
    MOV EDI,0x1                         ; 005c5058
    MOV byte ptr [EBX + 0xd],CL         ; 005c505d
    PUSH 0x5c4fc0                       ; 005c5060
        ;   Label: LAB_005c5060
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c5065
    PUSH ECX                            ; 005c5069
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c506a
    PUSH ESI                            ; 005c506e
    PUSH EBX                            ; 005c506f
    CALL crt_unknown.c_FUN_005c3320     ; 005c5070
        ;   XREF to: 005c3320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3320()
    ADD ESP,0x10                        ; 005c5075
    MOV ESI,EAX                         ; 005c5078
    TEST EDI,EDI                        ; 005c507a
    JZ 0x005c5097                       ; 005c507c
        ;   XREF to: 005c5097 (CONDITIONAL_JUMP)  ; LAB_005c5097
    MOV CH,byte ptr [EBX + 0xd]         ; 005c507e
    AND CH,0xfa                         ; 005c5081
    MOV AL,CH                           ; 005c5084
    MOV byte ptr [EBX + 0xd],CH         ; 005c5086
    OR AL,0x4                           ; 005c5089
    PUSH EBX                            ; 005c508b
    MOV byte ptr [EBX + 0xd],AL         ; 005c508c
    CALL crt_unknown.c_FUN_005c6d50     ; 005c508f
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c5094
    TEST byte ptr [EBX + 0xc],0x20      ; 005c5097
        ;   Label: LAB_005c5097
    JZ 0x005c50a2                       ; 005c509b
        ;   XREF to: 005c50a2 (CONDITIONAL_JUMP)  ; LAB_005c50a2
    MOV ESI,0xffffffff                  ; 005c509d
    MOV EDI,dword ptr [EBX + 0xc]       ; 005c50a2
        ;   Label: LAB_005c50a2
    OR EDI,EBP                          ; 005c50a5
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c50a7
    PUSH EBP                            ; 005c50aa
    MOV dword ptr [EBX + 0xc],EDI       ; 005c50ab
    CALL dword ptr [0x00626604]         ; 005c50ae | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c50b4
    MOV EAX,ESI                         ; 005c50b7
    POP EBP                             ; 005c50b9
    POP EDI                             ; 005c50ba
    POP ESI                             ; 005c50bb
    POP EBX                             ; 005c50bc
    RET                                 ; 005c50bd

