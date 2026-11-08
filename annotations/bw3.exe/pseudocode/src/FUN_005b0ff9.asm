; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005b0ff9(int *param_1)
;
;
; XREF[1]:
;   FUN_005b0975 at 005b09aa
;
; Called Functions:
;   FUN_005abc85
;   FUN_005abd9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0ff9
        ;   Label: FUN_005b0ff9
    PUSH ESI                            ; 005b0ffa
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b0ffb
    PUSH 0x1                            ; 005b0fff
    PUSH EBX                            ; 005b1001
    MOV ESI,0xffffffff                  ; 005b1002
    CALL FUN_005abd9f                   ; 005b1007
        ;   XREF to: 005abd9f (UNCONDITIONAL_CALL)  ; undefined FUN_005abd9f()
    ADD ESP,0x8                         ; 005b100c
    TEST EAX,EAX                        ; 005b100f
    JZ 0x005b107a                       ; 005b1011
        ;   XREF to: 005b107a (CONDITIONAL_JUMP)  ; LAB_005b107a
    MOV EAX,dword ptr [EBX]             ; 005b1013
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b1015
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005b1018
    MOV EDX,dword ptr [EAX + 0x14]      ; 005b101c
    MOV ECX,dword ptr [EAX + 0x10]      ; 005b101f
    MOV ESI,EAX                         ; 005b1022
    CMP EDX,ECX                         ; 005b1024
    JNC 0x005b104b                      ; 005b1026
        ;   XREF to: 005b104b (CONDITIONAL_JUMP)  ; LAB_005b104b
    MOV EAX,dword ptr [ESI + 0x14]      ; 005b1028
        ;   Label: LAB_005b1028
    LEA EDX,[EAX + 0x1]                 ; 005b102b
    MOV dword ptr [ESI + 0x14],EDX      ; 005b102e
    MOV AL,byte ptr [EAX]               ; 005b1031
    AND EAX,0xff                        ; 005b1033
    MOV ESI,EAX                         ; 005b1038
        ;   Label: LAB_005b1038
    CMP EAX,-0x1                        ; 005b103a
    JZ 0x005b105c                       ; 005b103d
        ;   XREF to: 005b105c (CONDITIONAL_JUMP)  ; LAB_005b105c
    MOV dword ptr [EBX + 0x4],0x1       ; 005b103f
    MOV EAX,ESI                         ; 005b1046
    POP ESI                             ; 005b1048
    POP EBX                             ; 005b1049
    RET                                 ; 005b104a
    PUSH EAX                            ; 005b104b
        ;   Label: LAB_005b104b
    MOV EDX,dword ptr [EAX + 0x28]      ; 005b104c
    CALL dword ptr [EDX + 0x10]         ; 005b104f
    ADD ESP,0x4                         ; 005b1052
    CMP EAX,-0x1                        ; 005b1055
    JNZ 0x005b1028                      ; 005b1058
        ;   XREF to: 005b1028 (CONDITIONAL_JUMP)  ; LAB_005b1028
    JMP 0x005b1038                      ; 005b105a
        ;   XREF to: 005b1038 (UNCONDITIONAL_JUMP)  ; LAB_005b1038
    MOV EAX,dword ptr [EBX]             ; 005b105c
        ;   Label: LAB_005b105c
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b105e
    PUSH 0x4                            ; 005b1061
    ADD EAX,EBX                         ; 005b1063
    PUSH EAX                            ; 005b1065
    CALL FUN_005abc85                   ; 005b1066
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined FUN_005abc85()
    ADD ESP,0x8                         ; 005b106b
    MOV dword ptr [EBX + 0x4],0x0       ; 005b106e
    MOV EAX,ESI                         ; 005b1075
    POP ESI                             ; 005b1077
    POP EBX                             ; 005b1078
    RET                                 ; 005b1079
    MOV dword ptr [EBX + 0x4],EAX       ; 005b107a
        ;   Label: LAB_005b107a
    MOV EAX,ESI                         ; 005b107d
    POP ESI                             ; 005b107f
    POP EBX                             ; 005b1080
    RET                                 ; 005b1081

