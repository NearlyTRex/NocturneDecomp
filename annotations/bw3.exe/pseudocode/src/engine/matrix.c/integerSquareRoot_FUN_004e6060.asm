; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_integerSquareRoot_FUN_004e6060(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; XREF[1]:
;   engine_matrix.c_normalizeVector3DFixed_FUN_004e6140 at 004e6162
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6060
        ;   Label: engine_matrix.c_integerSquareRoot_FUN_004e6060
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e6061
    CMP EBX,0x1                         ; 004e6065
    JL 0x004e6109                       ; 004e6068
        ;   XREF to: 004e6109 (CONDITIONAL_JUMP)  ; LAB_004e6109
    MOV ECX,0xc8                        ; 004e606e
        ;   Label: LAB_004e606e
    MOV EDX,EBX                         ; 004e6073
    MOV EAX,EBX                         ; 004e6075
    SAR EDX,0x1f                        ; 004e6077
    IDIV ECX                            ; 004e607a
    LEA ECX,[EAX + 0x2]                 ; 004e607c
    MOV EDX,EBX                         ; 004e607f
    MOV EAX,EBX                         ; 004e6081
    SAR EDX,0x1f                        ; 004e6083
    IDIV ECX                            ; 004e6086
    LEA EDX,[EAX + ECX*0x1]             ; 004e6088
    MOV EAX,EDX                         ; 004e608b
    SAR EDX,0x1f                        ; 004e608d
    SUB EAX,EDX                         ; 004e6090
    SAR EAX,0x1                         ; 004e6092
    MOV ECX,EAX                         ; 004e6094
    MOV EDX,EBX                         ; 004e6096
    MOV EAX,EBX                         ; 004e6098
    SAR EDX,0x1f                        ; 004e609a
    IDIV ECX                            ; 004e609d
    LEA EDX,[EAX + ECX*0x1]             ; 004e609f
    MOV EAX,EDX                         ; 004e60a2
    SAR EDX,0x1f                        ; 004e60a4
    SUB EAX,EDX                         ; 004e60a7
    SAR EAX,0x1                         ; 004e60a9
    MOV ECX,EAX                         ; 004e60ab
    MOV EDX,EBX                         ; 004e60ad
    MOV EAX,EBX                         ; 004e60af
    SAR EDX,0x1f                        ; 004e60b1
    IDIV ECX                            ; 004e60b4
    LEA EDX,[EAX + ECX*0x1]             ; 004e60b6
    MOV EAX,EDX                         ; 004e60b9
    SAR EDX,0x1f                        ; 004e60bb
    SUB EAX,EDX                         ; 004e60be
    SAR EAX,0x1                         ; 004e60c0
    MOV ECX,EAX                         ; 004e60c2
    MOV EDX,EBX                         ; 004e60c4
    MOV EAX,EBX                         ; 004e60c6
    SAR EDX,0x1f                        ; 004e60c8
    IDIV ECX                            ; 004e60cb
    LEA EDX,[EAX + ECX*0x1]             ; 004e60cd
    MOV EAX,EDX                         ; 004e60d0
    SAR EDX,0x1f                        ; 004e60d2
    SUB EAX,EDX                         ; 004e60d5
    SAR EAX,0x1                         ; 004e60d7
    MOV ECX,EAX                         ; 004e60d9
    MOV EDX,EBX                         ; 004e60db
    MOV EAX,EBX                         ; 004e60dd
    SAR EDX,0x1f                        ; 004e60df
    IDIV ECX                            ; 004e60e2
    LEA EDX,[EAX + ECX*0x1]             ; 004e60e4
    MOV EAX,EDX                         ; 004e60e7
    SAR EDX,0x1f                        ; 004e60e9
    SUB EAX,EDX                         ; 004e60ec
    SAR EAX,0x1                         ; 004e60ee
    MOV ECX,EAX                         ; 004e60f0
    MOV EDX,EBX                         ; 004e60f2
    MOV EAX,EBX                         ; 004e60f4
    SAR EDX,0x1f                        ; 004e60f6
    IDIV ECX                            ; 004e60f9
    LEA EDX,[EAX + ECX*0x1]             ; 004e60fb
    MOV EAX,EDX                         ; 004e60fe
    SAR EDX,0x1f                        ; 004e6100
    SUB EAX,EDX                         ; 004e6103
    SAR EAX,0x1                         ; 004e6105
    POP EBX                             ; 004e6107
    RET                                 ; 004e6108
    MOV EDX,0x5c6f47                    ; 004e6109
        ;   Label: LAB_004e6109
    MOV ECX,0x391                       ; 004e610e
    PUSH 0x5c6f5a                       ; 004e6113
    MOV dword ptr [0x01d71de0],EDX      ; 004e6118 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004e611e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e6124
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e6129
    JMP 0x004e606e                      ; 004e612c
        ;   XREF to: 004e606e (UNCONDITIONAL_JUMP)  ; LAB_004e606e

