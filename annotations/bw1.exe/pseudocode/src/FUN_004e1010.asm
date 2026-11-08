; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e1010(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_005187f0
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e1010
        ;   Label: FUN_004e1010
    PUSH EDI                            ; 004e1011
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e1012
    PUSH EDX                            ; 004e1016
    CALL FUN_004085c0                   ; 004e1017
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004e101c
    ADD EAX,0x1ec                       ; 004e101f
    PUSH EAX                            ; 004e1024
    CALL FUN_005187f0                   ; 004e1025
        ;   XREF to: 005187f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005187f0()
    ADD ESP,0x4                         ; 004e102a
    PUSH 0x5fb430                       ; 004e102d
    PUSH 0x19                           ; 004e1032
    ADD EAX,0x1a0                       ; 004e1034
    PUSH EAX                            ; 004e1039
    CALL FUN_005c0357                   ; 004e103a
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    LEA EDX,[EAX + 0xfffffc74]          ; 004e103f
    MOV dword ptr [EDX + 0x154],0x601474 ; 004e1045
    MOV ESI,0x5e3e33                    ; 004e104f
    MOV dword ptr [EDX + 0x158],0x40800000 ; 004e1054
    ADD ESP,0xc                         ; 004e105e
    MOV dword ptr [EDX + 0x15c],0x40800000 ; 004e1061
    LEA EDI,[EDX + 0x16c]               ; 004e106b
    MOV dword ptr [EDX + 0x160],0x3dcccccd ; 004e1071
    PUSH EDI                            ; 004e107b
    MOV AL,byte ptr [ESI]               ; 004e107c
        ;   Label: LAB_004e107c
    MOV byte ptr [EDI],AL               ; 004e107e
    CMP AL,0x0                          ; 004e1080
    JZ 0x004e1094                       ; 004e1082
        ;   XREF to: 004e1094 (CONDITIONAL_JUMP)  ; LAB_004e1094
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1084
    ADD ESI,0x2                         ; 004e1087
    MOV byte ptr [EDI + 0x1],AL         ; 004e108a
    ADD EDI,0x2                         ; 004e108d
    CMP AL,0x0                          ; 004e1090
    JNZ 0x004e107c                      ; 004e1092
        ;   XREF to: 004e107c (CONDITIONAL_JUMP)  ; LAB_004e107c
    POP EDI                             ; 004e1094
        ;   Label: LAB_004e1094
    MOV dword ptr [EDX + 0x168],0x0     ; 004e1095
    MOV dword ptr [EDX + 0x164],0xd     ; 004e109f
    MOV dword ptr [EDX + 0x17c],0x8000  ; 004e10a9
    MOV dword ptr [EDX + 0x180],0x0     ; 004e10b3
    MOV ESI,0x5e3e40                    ; 004e10bd
    MOV byte ptr [EDX + 0x184],0x0      ; 004e10c2
    LEA EDI,[EDX + 0x30c]               ; 004e10c9
    MOV dword ptr [EDX + 0x1e8],0x0     ; 004e10cf
    PUSH EDI                            ; 004e10d9
    MOV AL,byte ptr [ESI]               ; 004e10da
        ;   Label: LAB_004e10da
    MOV byte ptr [EDI],AL               ; 004e10dc
    CMP AL,0x0                          ; 004e10de
    JZ 0x004e10f2                       ; 004e10e0
        ;   XREF to: 004e10f2 (CONDITIONAL_JUMP)  ; LAB_004e10f2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e10e2
    ADD ESI,0x2                         ; 004e10e5
    MOV byte ptr [EDI + 0x1],AL         ; 004e10e8
    ADD EDI,0x2                         ; 004e10eb
    CMP AL,0x0                          ; 004e10ee
    JNZ 0x004e10da                      ; 004e10f0
        ;   XREF to: 004e10da (CONDITIONAL_JUMP)  ; LAB_004e10da
    POP EDI                             ; 004e10f2
        ;   Label: LAB_004e10f2
    MOV ESI,0x5e3e45                    ; 004e10f3
    LEA EDI,[EDX + 0x37c]               ; 004e10f8
    MOV dword ptr [EDX + 0x370],0x0     ; 004e10fe
    PUSH EDI                            ; 004e1108
    MOV AL,byte ptr [ESI]               ; 004e1109
        ;   Label: LAB_004e1109
    MOV byte ptr [EDI],AL               ; 004e110b
    CMP AL,0x0                          ; 004e110d
    JZ 0x004e1121                       ; 004e110f
        ;   XREF to: 004e1121 (CONDITIONAL_JUMP)  ; LAB_004e1121
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1111
    ADD ESI,0x2                         ; 004e1114
    MOV byte ptr [EDI + 0x1],AL         ; 004e1117
    ADD EDI,0x2                         ; 004e111a
    CMP AL,0x0                          ; 004e111d
    JNZ 0x004e1109                      ; 004e111f
        ;   XREF to: 004e1109 (CONDITIONAL_JUMP)  ; LAB_004e1109
    POP EDI                             ; 004e1121
        ;   Label: LAB_004e1121
    MOV dword ptr [EDX + 0x378],0x0     ; 004e1122
    MOV dword ptr [EDX + 0x374],0xd     ; 004e112c
    MOV EAX,EDX                         ; 004e1136
    MOV dword ptr [EDX + 0xb3c],0x0     ; 004e1138
    POP EDI                             ; 004e1142
    POP ESI                             ; 004e1143
    RET                                 ; 004e1144

