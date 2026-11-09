; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_integerSquareRoot_FUN_004e9980(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; XREF[1]:
;   engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60 at 004e9a82
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9980
        ;   Label: engine_matrix.c_integerSquareRoot_FUN_004e9980
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e9981
    CMP EBX,0x1                         ; 004e9985
    JL 0x004e9a29                       ; 004e9988
        ;   XREF to: 004e9a29 (CONDITIONAL_JUMP)  ; LAB_004e9a29
    MOV ECX,0xc8                        ; 004e998e
        ;   Label: LAB_004e998e
    MOV EDX,EBX                         ; 004e9993
    MOV EAX,EBX                         ; 004e9995
    SAR EDX,0x1f                        ; 004e9997
    IDIV ECX                            ; 004e999a
    LEA ECX,[EAX + 0x2]                 ; 004e999c
    MOV EDX,EBX                         ; 004e999f
    MOV EAX,EBX                         ; 004e99a1
    SAR EDX,0x1f                        ; 004e99a3
    IDIV ECX                            ; 004e99a6
    LEA EDX,[EAX + ECX*0x1]             ; 004e99a8
    MOV EAX,EDX                         ; 004e99ab
    SAR EDX,0x1f                        ; 004e99ad
    SUB EAX,EDX                         ; 004e99b0
    SAR EAX,0x1                         ; 004e99b2
    MOV ECX,EAX                         ; 004e99b4
    MOV EDX,EBX                         ; 004e99b6
    MOV EAX,EBX                         ; 004e99b8
    SAR EDX,0x1f                        ; 004e99ba
    IDIV ECX                            ; 004e99bd
    LEA EDX,[EAX + ECX*0x1]             ; 004e99bf
    MOV EAX,EDX                         ; 004e99c2
    SAR EDX,0x1f                        ; 004e99c4
    SUB EAX,EDX                         ; 004e99c7
    SAR EAX,0x1                         ; 004e99c9
    MOV ECX,EAX                         ; 004e99cb
    MOV EDX,EBX                         ; 004e99cd
    MOV EAX,EBX                         ; 004e99cf
    SAR EDX,0x1f                        ; 004e99d1
    IDIV ECX                            ; 004e99d4
    LEA EDX,[EAX + ECX*0x1]             ; 004e99d6
    MOV EAX,EDX                         ; 004e99d9
    SAR EDX,0x1f                        ; 004e99db
    SUB EAX,EDX                         ; 004e99de
    SAR EAX,0x1                         ; 004e99e0
    MOV ECX,EAX                         ; 004e99e2
    MOV EDX,EBX                         ; 004e99e4
    MOV EAX,EBX                         ; 004e99e6
    SAR EDX,0x1f                        ; 004e99e8
    IDIV ECX                            ; 004e99eb
    LEA EDX,[EAX + ECX*0x1]             ; 004e99ed
    MOV EAX,EDX                         ; 004e99f0
    SAR EDX,0x1f                        ; 004e99f2
    SUB EAX,EDX                         ; 004e99f5
    SAR EAX,0x1                         ; 004e99f7
    MOV ECX,EAX                         ; 004e99f9
    MOV EDX,EBX                         ; 004e99fb
    MOV EAX,EBX                         ; 004e99fd
    SAR EDX,0x1f                        ; 004e99ff
    IDIV ECX                            ; 004e9a02
    LEA EDX,[EAX + ECX*0x1]             ; 004e9a04
    MOV EAX,EDX                         ; 004e9a07
    SAR EDX,0x1f                        ; 004e9a09
    SUB EAX,EDX                         ; 004e9a0c
    SAR EAX,0x1                         ; 004e9a0e
    MOV ECX,EAX                         ; 004e9a10
    MOV EDX,EBX                         ; 004e9a12
    MOV EAX,EBX                         ; 004e9a14
    SAR EDX,0x1f                        ; 004e9a16
    IDIV ECX                            ; 004e9a19
    LEA EDX,[EAX + ECX*0x1]             ; 004e9a1b
    MOV EAX,EDX                         ; 004e9a1e
    SAR EDX,0x1f                        ; 004e9a20
    SUB EAX,EDX                         ; 004e9a23
    SAR EAX,0x1                         ; 004e9a25
    POP EBX                             ; 004e9a27
    RET                                 ; 004e9a28
    MOV EDX,0x5dc80b                    ; 004e9a29
        ;   Label: LAB_004e9a29
    MOV ECX,0x391                       ; 004e9a2e
    PUSH 0x5dc81e                       ; 004e9a33
    MOV dword ptr [0x01d046a0],EDX      ; 004e9a38 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004e9a3e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e9a44
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e9a49
    JMP 0x004e998e                      ; 004e9a4c
        ;   XREF to: 004e998e (UNCONDITIONAL_JUMP)  ; LAB_004e998e

