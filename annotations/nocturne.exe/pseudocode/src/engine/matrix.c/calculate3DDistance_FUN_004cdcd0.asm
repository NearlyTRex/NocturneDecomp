; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_calculate3DDistance_FUN_004cdcd0(int x1,int y1,int z1,int x2,int y2,int z2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   z1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; int              Stack[0x18]:4   z2
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdcd0
        ;   Label: engine_matrix.c_calculate3DDistance_FUN_004cdcd0
    SUB ESP,0x14                        ; 004cdcd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004cdcd4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cdcd8
    SUB EAX,EDX                         ; 004cdcdc
    MOV dword ptr [ESP + 0x10],EAX      ; 004cdcde
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004cdce2
    FILD dword ptr [ESP + 0x10]         ; 004cdce6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cdcea
    FLD ST0                             ; 004cdcee
    SUB EAX,ECX                         ; 004cdcf0
    FMULP                               ; 004cdcf2
    MOV dword ptr [ESP + 0x10],EAX      ; 004cdcf4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004cdcf8
    FILD dword ptr [ESP + 0x10]         ; 004cdcfc
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cdd00
    FLD ST0                             ; 004cdd04
    SUB EAX,EBX                         ; 004cdd06
    FMULP                               ; 004cdd08
    MOV dword ptr [ESP + 0x10],EAX      ; 004cdd0a
    FADDP                               ; 004cdd0e
    FILD dword ptr [ESP + 0x10]         ; 004cdd10
    FMUL ST0                            ; 004cdd14
    FADDP                               ; 004cdd16
    FSQRT                               ; 004cdd18
    CALL crt_math.c_round_FUN_00563a30  ; 004cdd1a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 004cdd1f
    MOV EAX,dword ptr [ESP]             ; 004cdd22
    ADD ESP,0x14                        ; 004cdd25
    POP EBX                             ; 004cdd28
    RET                                 ; 004cdd29

