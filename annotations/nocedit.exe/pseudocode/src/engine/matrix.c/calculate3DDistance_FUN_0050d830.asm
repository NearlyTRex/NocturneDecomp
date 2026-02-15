; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   z1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; int              Stack[0x18]:4   z2
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d830
        ;   Label: engine_matrix.c_calculate3DDistance_FUN_0050d830
    SUB ESP,0x14                        ; 0050d831
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050d834
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050d838
    SUB EAX,EDX                         ; 0050d83c
    MOV dword ptr [ESP + 0x10],EAX      ; 0050d83e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0050d842
    FILD dword ptr [ESP + 0x10]         ; 0050d846
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050d84a
    FLD ST0                             ; 0050d84e
    SUB EAX,ECX                         ; 0050d850
    FMULP                               ; 0050d852
    MOV dword ptr [ESP + 0x10],EAX      ; 0050d854
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050d858
    FILD dword ptr [ESP + 0x10]         ; 0050d85c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050d860
    FLD ST0                             ; 0050d864
    SUB EAX,EBX                         ; 0050d866
    FMULP                               ; 0050d868
    MOV dword ptr [ESP + 0x10],EAX      ; 0050d86a
    FADDP                               ; 0050d86e
    FILD dword ptr [ESP + 0x10]         ; 0050d870
    FMUL ST0                            ; 0050d874
    FADDP                               ; 0050d876
    FSQRT                               ; 0050d878
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050d87a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 0050d87f
    MOV EAX,dword ptr [ESP]             ; 0050d882
    ADD ESP,0x14                        ; 0050d885
    POP EBX                             ; 0050d888
    RET                                 ; 0050d889

