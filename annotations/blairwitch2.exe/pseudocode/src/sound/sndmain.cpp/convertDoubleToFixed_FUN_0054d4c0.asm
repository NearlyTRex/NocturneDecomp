; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_0054d4c0(double input,int *out_integer_part,int *out_fractional_part)
;
; Parameters:
; double           Stack[0x4]:8   input
; int *            Stack[0xc]:4   out_integer_part
; int *            Stack[0x10]:4   out_fractional_part
;
; Referenced Globals:
;   undefined4 DAT_005e8096
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d4c0
        ;   Label: sound_sndmain.cpp_convertDoubleToFixed_FUN_0054d4c0
    SUB ESP,0x8                         ; 0054d4c1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054d4c4
    PUSH EDX                            ; 0054d4c8
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054d4c9
    PUSH ECX                            ; 0054d4cd
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054d4ce
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0054d4d3
    MOV dword ptr [ESP + 0xc],EDX       ; 0054d4d7
    XOR EBX,EBX                         ; 0054d4db
    FLD double ptr [ESP + 0x8]          ; 0054d4dd
    ADD ESP,0x8                         ; 0054d4e1
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054d4e4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [ESP]               ; 0054d4e9
    MOV EAX,dword ptr [ESP]             ; 0054d4ec
    MOV dword ptr [ESP + 0x4],EBX       ; 0054d4ef
    MOV dword ptr [ESP],EAX             ; 0054d4f3
    FILD qword ptr [ESP]                ; 0054d4f6
    FSUBR double ptr [ESP + 0x10]       ; 0054d4f9
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054d4fd
    FMUL double ptr [0x005e8096]        ; 0054d501 | DAT_005e8096
    MOV dword ptr [EDX],EAX             ; 0054d507
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054d509
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054d50d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [ESP]               ; 0054d512
    MOV EAX,dword ptr [ESP]             ; 0054d515
    MOV dword ptr [EDX],EAX             ; 0054d518
    ADD ESP,0x8                         ; 0054d51a
    POP EBX                             ; 0054d51d
    RET                                 ; 0054d51e

