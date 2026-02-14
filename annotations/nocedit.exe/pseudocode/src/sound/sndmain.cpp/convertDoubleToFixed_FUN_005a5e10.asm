; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)
;
; Parameters:
; double           Stack[0x4]:8   input
; int *            Stack[0xc]:4   out_integer_part
; int *            Stack[0x10]:4   out_fractional_part
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; Referenced Globals:
;   double DOUBLE_0064fca7 = 4294967296
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5e10
        ;   Label: sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10
    SUB ESP,0x8                         ; 005a5e11
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a5e14
    PUSH EDX                            ; 005a5e18
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a5e19
    PUSH ECX                            ; 005a5e1d
    CALL crt_math.c_floor_FUN_005feb90  ; 005a5e1e
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005a5e23
    MOV dword ptr [ESP + 0xc],EDX       ; 005a5e27
    XOR EBX,EBX                         ; 005a5e2b
    FLD double ptr [ESP + 0x8]          ; 005a5e2d
    ADD ESP,0x8                         ; 005a5e31
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5e34
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [ESP]               ; 005a5e39
    MOV EAX,dword ptr [ESP]             ; 005a5e3c
    MOV dword ptr [ESP + 0x4],EBX       ; 005a5e3f
    MOV dword ptr [ESP],EAX             ; 005a5e43
    FILD qword ptr [ESP]                ; 005a5e46
    FSUBR double ptr [ESP + 0x10]       ; 005a5e49
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a5e4d
    FMUL double ptr [0x0064fca7]        ; 005a5e51 | DOUBLE_0064fca7
    MOV dword ptr [EDX],EAX             ; 005a5e57
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a5e59
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5e5d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [ESP]               ; 005a5e62
    MOV EAX,dword ptr [ESP]             ; 005a5e65
    MOV dword ptr [EDX],EAX             ; 005a5e68
    ADD ESP,0x8                         ; 005a5e6a
    POP EBX                             ; 005a5e6d
    RET                                 ; 005a5e6e

