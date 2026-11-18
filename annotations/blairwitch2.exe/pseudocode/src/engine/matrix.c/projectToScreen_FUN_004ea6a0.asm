; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_projectToScreen_FUN_004ea6a0(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
;
; Referenced Globals:
;   int g_ProjectionScale = 0x10000
;   int g_INT_01c35e3c
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_matrix.c_transformWorldToView_FUN_004e8d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea6a0
        ;   Label: engine_matrix.c_projectToScreen_FUN_004ea6a0
    PUSH ESI                            ; 004ea6a1
    PUSH EDI                            ; 004ea6a2
    PUSH EBP                            ; 004ea6a3
    MOV EBP,ESP                         ; 004ea6a4
    SUB ESP,0x3c                        ; 004ea6a6
    AND ESP,0xfffffff8                  ; 004ea6a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ea6ac
    LEA ESI,[ESP + 0xc]                 ; 004ea6af
    MOV EDI,ESP                         ; 004ea6b3
    MOV dword ptr [ESP + 0x4],EAX       ; 004ea6b5
    MOV EAX,ESP                         ; 004ea6b9
    XOR EDX,EDX                         ; 004ea6bb
    PUSH EAX                            ; 004ea6bd
    MOV dword ptr [ESP + 0x4],EDX       ; 004ea6be
    MOV dword ptr [ESP + 0xc],EDX       ; 004ea6c2
    CALL engine_matrix.c_transformWorldToView_FUN_004e8d30 ; 004ea6c6
        ;   XREF to: 004e8d30 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_transformWorldToView_FUN_004e8d30(CVector3i * input_coords, CVector3i * output_coords)
    LEA ESI,[ESP + 0x10]                ; 004ea6cb
    ADD ESP,0x4                         ; 004ea6cf
    MOVSD ES:EDI,ESI                    ; 004ea6d2
    MOVSD ES:EDI,ESI                    ; 004ea6d3
    MOVSD ES:EDI,ESI                    ; 004ea6d4
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea6d5
    TEST EBX,EBX                        ; 004ea6d9
    JLE 0x004ea718                      ; 004ea6db
        ;   XREF to: 004ea718 (CONDITIONAL_JUMP)  ; LAB_004ea718
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ea6dd
    FILD dword ptr [0x01c35e3c]         ; 004ea6e0 | g_INT_01c35e3c
    MOV dword ptr [ESP + 0x34],EAX      ; 004ea6e6
    MOV dword ptr [ESP + 0x38],EBX      ; 004ea6ea
    FILD dword ptr [ESP + 0x34]         ; 004ea6ee
    FCHS                                ; 004ea6f2
    FMULP                               ; 004ea6f4
    FILD dword ptr [ESP + 0x38]         ; 004ea6f6
    FDIVP                               ; 004ea6fa
    FILD dword ptr [0x006141e4]         ; 004ea6fc | g_ProjectionScale
    FDIVP                               ; 004ea702
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ea704
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [ESP + 0x30]        ; 004ea709
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ea70d
    MOV ESP,EBP                         ; 004ea711
    POP EBP                             ; 004ea713
    POP EDI                             ; 004ea714
    POP ESI                             ; 004ea715
    POP EBX                             ; 004ea716
    RET                                 ; 004ea717
    MOV dword ptr [ESP + 0x30],0xffffffff ; 004ea718
        ;   Label: LAB_004ea718
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ea720
    MOV ESP,EBP                         ; 004ea724
    POP EBP                             ; 004ea726
    POP EDI                             ; 004ea727
    POP ESI                             ; 004ea728
    POP EBX                             ; 004ea729
    RET                                 ; 004ea72a

