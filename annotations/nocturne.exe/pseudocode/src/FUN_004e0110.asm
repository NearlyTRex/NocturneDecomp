; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0110(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
;   core_morph.cpp_CMorphModel_free_FUN_004df290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0110
        ;   Label: FUN_004e0110
    PUSH ESI                            ; 004e0111
    PUSH EDI                            ; 004e0112
    PUSH EBP                            ; 004e0113
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e0114
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e0118
    SUB EAX,EDX                         ; 004e011f
    SHL EAX,0x6                         ; 004e0121
    ADD EAX,EDX                         ; 004e0124
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e0126
    SHL EAX,0x3                         ; 004e012a
    ADD EBX,EAX                         ; 004e012d
    PUSH EBX                            ; 004e012f
    CALL core_morph.cpp_CMorphModel_free_FUN_004df290 ; 004e0130
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_free_FUN_004df290()
    ADD ESP,0x4                         ; 004e0135
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e0138
    PUSH EDX                            ; 004e013c
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e013d
    PUSH ECX                            ; 004e0141
    PUSH 0x48                           ; 004e0142
    MOV ESI,dword ptr [ESP + 0x34]      ; 004e0144
    PUSH ESI                            ; 004e0148
    MOV EDI,dword ptr [ESP + 0x34]      ; 004e0149
    PUSH EDI                            ; 004e014d
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e014e
    PUSH EBP                            ; 004e0152
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e0153
    PUSH EAX                            ; 004e0157
    PUSH EBX                            ; 004e0158
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 ; 004e0159
        ;   XREF to: 004df2f0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0()
    ADD ESP,0x20                        ; 004e015e
    POP EBP                             ; 004e0161
    POP EDI                             ; 004e0162
    POP ESI                             ; 004e0163
    POP EBX                             ; 004e0164
    RET                                 ; 004e0165

