; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e60c0(int param_1,double param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004e6160 at 004e657f
;
; Called Functions:
;   FUN_00565ad6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e60c0
        ;   Label: FUN_004e60c0
    PUSH ESI                            ; 004e60c1
    SUB ESP,0x4                         ; 004e60c2
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e60c5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e60c9
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e60cd
    SHL EBX,0x2                         ; 004e60d1
    ADD EBX,EDX                         ; 004e60d4
    TEST ECX,ECX                        ; 004e60d6
    JZ 0x004e6117                       ; 004e60d8
        ;   XREF to: 004e6117 (CONDITIONAL_JUMP)  ; LAB_004e6117
    MOV ESI,0x2                         ; 004e60da
    MOV EDX,ECX                         ; 004e60df
    MOV EAX,ECX                         ; 004e60e1
    SAR EDX,0x1f                        ; 004e60e3
    IDIV ESI                            ; 004e60e6
    CMP EDX,0x1                         ; 004e60e8
    JNZ 0x004e6129                      ; 004e60eb
        ;   XREF to: 004e6129 (CONDITIONAL_JUMP)  ; LAB_004e6129
    ADD EDX,ECX                         ; 004e60ed
    MOV EAX,EDX                         ; 004e60ef
    SAR EDX,0x1f                        ; 004e60f1
    IDIV ESI                            ; 004e60f4
    MOV dword ptr [ESP],EAX             ; 004e60f6
    FILD dword ptr [ESP]                ; 004e60f9
    FLD double ptr [ESP + 0x14]         ; 004e60fc
    CALL FUN_00565ad6                   ; 004e6100
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ad6()
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 004e6105
    FSTP float ptr [EBX]                ; 004e610f
    ADD ESP,0x4                         ; 004e6111
        ;   Label: LAB_004e6111
    POP ESI                             ; 004e6114
    POP EBX                             ; 004e6115
    RET                                 ; 004e6116
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 004e6117
        ;   Label: LAB_004e6117
    MOV dword ptr [EBX],0x3f800000      ; 004e6121
    JMP 0x004e6111                      ; 004e6127
        ;   XREF to: 004e6111 (UNCONDITIONAL_JUMP)  ; LAB_004e6111
    MOV EDX,ECX                         ; 004e6129
        ;   Label: LAB_004e6129
    MOV EAX,ECX                         ; 004e612b
    SAR EDX,0x1f                        ; 004e612d
    IDIV ESI                            ; 004e6130
    MOV dword ptr [ESP],EAX             ; 004e6132
    FILD dword ptr [ESP]                ; 004e6135
    FLD double ptr [ESP + 0x14]         ; 004e6138
    CALL FUN_00565ad6                   ; 004e613c
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ad6()
    MOV dword ptr [EBX],0x3f800000      ; 004e6141
    FSTP float ptr [EBX + 0x900]        ; 004e6147
    ADD ESP,0x4                         ; 004e614d
    POP ESI                             ; 004e6150
    POP EBX                             ; 004e6151
    RET                                 ; 004e6152

