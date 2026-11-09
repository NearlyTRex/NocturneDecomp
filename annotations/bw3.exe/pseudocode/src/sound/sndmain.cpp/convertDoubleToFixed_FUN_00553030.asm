; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_00553030(double input,int *out_integer_part,int *out_fractional_part)
;
; Parameters:
; double           Stack[0x4]:8   input
; int *            Stack[0xc]:4   out_integer_part
; int *            Stack[0x10]:4   out_fractional_part
;
; Referenced Globals:
;   undefined4 DAT_005d2b7a
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553030
        ;   Label: sound_sndmain.cpp_convertDoubleToFixed_FUN_00553030
    SUB ESP,0x8                         ; 00553031
    MOV EDX,dword ptr [ESP + 0x14]      ; 00553034
    PUSH EDX                            ; 00553038
    MOV ECX,dword ptr [ESP + 0x14]      ; 00553039
    PUSH ECX                            ; 0055303d
    CALL crt_math.c_floor_FUN_005a3600  ; 0055303e
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00553043
    MOV dword ptr [ESP + 0xc],EDX       ; 00553047
    XOR EBX,EBX                         ; 0055304b
    FLD double ptr [ESP + 0x8]          ; 0055304d
    ADD ESP,0x8                         ; 00553051
    CALL crt_math.c_round_FUN_005a3120  ; 00553054
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [ESP]               ; 00553059
    MOV EAX,dword ptr [ESP]             ; 0055305c
    MOV dword ptr [ESP + 0x4],EBX       ; 0055305f
    MOV dword ptr [ESP],EAX             ; 00553063
    FILD qword ptr [ESP]                ; 00553066
    FSUBR double ptr [ESP + 0x10]       ; 00553069
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055306d
    FMUL double ptr [0x005d2b7a]        ; 00553071 | DAT_005d2b7a
    MOV dword ptr [EDX],EAX             ; 00553077
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00553079
    CALL crt_math.c_round_FUN_005a3120  ; 0055307d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [ESP]               ; 00553082
    MOV EAX,dword ptr [ESP]             ; 00553085
    MOV dword ptr [EDX],EAX             ; 00553088
    ADD ESP,0x8                         ; 0055308a
    POP EBX                             ; 0055308d
    RET                                 ; 0055308e

