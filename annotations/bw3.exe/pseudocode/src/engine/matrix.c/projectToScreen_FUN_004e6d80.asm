; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_projectToScreen_FUN_004e6d80(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
;
; Referenced Globals:
;   undefined4 DAT_005fba44
;   undefined4 DAT_01c6b59c
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_matrix.c_transformWorldToView_FUN_004e5410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6d80
        ;   Label: engine_matrix.c_projectToScreen_FUN_004e6d80
    PUSH ESI                            ; 004e6d81
    PUSH EDI                            ; 004e6d82
    PUSH EBP                            ; 004e6d83
    MOV EBP,ESP                         ; 004e6d84
    SUB ESP,0x3c                        ; 004e6d86
    AND ESP,0xfffffff8                  ; 004e6d89
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e6d8c
    LEA ESI,[ESP + 0xc]                 ; 004e6d8f
    MOV EDI,ESP                         ; 004e6d93
    MOV dword ptr [ESP + 0x4],EAX       ; 004e6d95
    MOV EAX,ESP                         ; 004e6d99
    XOR EDX,EDX                         ; 004e6d9b
    PUSH EAX                            ; 004e6d9d
    MOV dword ptr [ESP + 0x4],EDX       ; 004e6d9e
    MOV dword ptr [ESP + 0xc],EDX       ; 004e6da2
    CALL engine_matrix.c_transformWorldToView_FUN_004e5410 ; 004e6da6
        ;   XREF to: 004e5410 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_transformWorldToView_FUN_004e5410(CVector3i * input_coords, CVector3i * output_coords)
    LEA ESI,[ESP + 0x10]                ; 004e6dab
    ADD ESP,0x4                         ; 004e6daf
    MOVSD ES:EDI,ESI                    ; 004e6db2
    MOVSD ES:EDI,ESI                    ; 004e6db3
    MOVSD ES:EDI,ESI                    ; 004e6db4
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e6db5
    TEST EBX,EBX                        ; 004e6db9
    JLE 0x004e6df8                      ; 004e6dbb
        ;   XREF to: 004e6df8 (CONDITIONAL_JUMP)  ; LAB_004e6df8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e6dbd
    FILD dword ptr [0x01c6b59c]         ; 004e6dc0 | DAT_01c6b59c
    MOV dword ptr [ESP + 0x34],EAX      ; 004e6dc6
    MOV dword ptr [ESP + 0x38],EBX      ; 004e6dca
    FILD dword ptr [ESP + 0x34]         ; 004e6dce
    FCHS                                ; 004e6dd2
    FMULP                               ; 004e6dd4
    FILD dword ptr [ESP + 0x38]         ; 004e6dd6
    FDIVP                               ; 004e6dda
    FILD dword ptr [0x005fba44]         ; 004e6ddc | DAT_005fba44
    FDIVP                               ; 004e6de2
    CALL crt_math.c_round_FUN_005a3120  ; 004e6de4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [ESP + 0x30]        ; 004e6de9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e6ded
    MOV ESP,EBP                         ; 004e6df1
    POP EBP                             ; 004e6df3
    POP EDI                             ; 004e6df4
    POP ESI                             ; 004e6df5
    POP EBX                             ; 004e6df6
    RET                                 ; 004e6df7
    MOV dword ptr [ESP + 0x30],0xffffffff ; 004e6df8
        ;   Label: LAB_004e6df8
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e6e00
    MOV ESP,EBP                         ; 004e6e04
    POP EBP                             ; 004e6e06
    POP EDI                             ; 004e6e07
    POP ESI                             ; 004e6e08
    POP EBX                             ; 004e6e09
    RET                                 ; 004e6e0a

