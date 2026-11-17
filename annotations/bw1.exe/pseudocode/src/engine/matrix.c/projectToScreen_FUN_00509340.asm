; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_projectToScreen_FUN_00509340(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
;
; Referenced Globals:
;   int g_ProjectionScale = 0x10000
;   int g_INT_01c4effc
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_matrix.c_transformWorldToView_FUN_005079d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509340
        ;   Label: engine_matrix.c_projectToScreen_FUN_00509340
    PUSH ESI                            ; 00509341
    PUSH EDI                            ; 00509342
    PUSH EBP                            ; 00509343
    MOV EBP,ESP                         ; 00509344
    SUB ESP,0x3c                        ; 00509346
    AND ESP,0xfffffff8                  ; 00509349
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050934c
    LEA ESI,[ESP + 0xc]                 ; 0050934f
    MOV EDI,ESP                         ; 00509353
    MOV dword ptr [ESP + 0x4],EAX       ; 00509355
    MOV EAX,ESP                         ; 00509359
    XOR EDX,EDX                         ; 0050935b
    PUSH EAX                            ; 0050935d
    MOV dword ptr [ESP + 0x4],EDX       ; 0050935e
    MOV dword ptr [ESP + 0xc],EDX       ; 00509362
    CALL engine_matrix.c_transformWorldToView_FUN_005079d0 ; 00509366
        ;   XREF to: 005079d0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_transformWorldToView_FUN_005079d0(CVector3i * input_coords, CVector3i * output_coords)
    LEA ESI,[ESP + 0x10]                ; 0050936b
    ADD ESP,0x4                         ; 0050936f
    MOVSD ES:EDI,ESI                    ; 00509372
    MOVSD ES:EDI,ESI                    ; 00509373
    MOVSD ES:EDI,ESI                    ; 00509374
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509375
    TEST EBX,EBX                        ; 00509379
    JLE 0x005093b8                      ; 0050937b
        ;   XREF to: 005093b8 (CONDITIONAL_JUMP)  ; LAB_005093b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050937d
    FILD dword ptr [0x01c4effc]         ; 00509380 | g_INT_01c4effc
    MOV dword ptr [ESP + 0x34],EAX      ; 00509386
    MOV dword ptr [ESP + 0x38],EBX      ; 0050938a
    FILD dword ptr [ESP + 0x34]         ; 0050938e
    FCHS                                ; 00509392
    FMULP                               ; 00509394
    FILD dword ptr [ESP + 0x38]         ; 00509396
    FDIVP                               ; 0050939a
    FILD dword ptr [0x0061b4c4]         ; 0050939c | g_ProjectionScale
    FDIVP                               ; 005093a2
    CALL crt_math.c_round_FUN_005c03a0  ; 005093a4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [ESP + 0x30]        ; 005093a9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005093ad
    MOV ESP,EBP                         ; 005093b1
    POP EBP                             ; 005093b3
    POP EDI                             ; 005093b4
    POP ESI                             ; 005093b5
    POP EBX                             ; 005093b6
    RET                                 ; 005093b7
    MOV dword ptr [ESP + 0x30],0xffffffff ; 005093b8
        ;   Label: LAB_005093b8
    MOV EAX,dword ptr [ESP + 0x30]      ; 005093c0
    MOV ESP,EBP                         ; 005093c4
    POP EBP                             ; 005093c6
    POP EDI                             ; 005093c7
    POP ESI                             ; 005093c8
    POP EBX                             ; 005093c9
    RET                                 ; 005093ca

