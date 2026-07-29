; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005235b0(double input,int *out_integer_part,int *out_fractional_part)
;
; Parameters:
; undefined8       Stack[0x0]:8   local_res0
; double           Stack[0x4]:8   input
; int *            Stack[0xc]:4   out_integer_part
; int *            Stack[0x10]:4   out_fractional_part
; Local Variables:
; undefined1[16]   Stack[-0x14]:16  local_14
;
; Referenced Globals:
;   undefined4 DAT_0059293e
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005235b0
        ;   Label: sound_sndmain.cpp_convertDoubleToFixed_FUN_005235b0
    SUB ESP,0x8                         ; 005235b1
    MOV EDX,dword ptr [ESP + 0x14]      ; 005235b4
    PUSH EDX                            ; 005235b8
    MOV ECX,dword ptr [ESP + 0x14]      ; 005235b9
    PUSH ECX                            ; 005235bd
    CALL crt_math.c_floor_FUN_005648c0  ; 005235be
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005235c3
    MOV dword ptr [ESP + 0xc],EDX       ; 005235c7
    XOR EBX,EBX                         ; 005235cb
    FLD double ptr [ESP + 0x8]          ; 005235cd
    ADD ESP,0x8                         ; 005235d1
    CALL crt_math.c_round_FUN_00563a30  ; 005235d4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP qword ptr [ESP]               ; 005235d9
    MOV EAX,dword ptr [ESP]             ; 005235dc
    MOV dword ptr [ESP + 0x4],EBX       ; 005235df
    MOV dword ptr [ESP],EAX             ; 005235e3
    FILD qword ptr [ESP]                ; 005235e6
    FSUBR double ptr [ESP + 0x10]       ; 005235e9
    MOV EDX,dword ptr [ESP + 0x18]      ; 005235ed
    FMUL double ptr [0x0059293e]        ; 005235f1 | DAT_0059293e
    MOV dword ptr [EDX],EAX             ; 005235f7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005235f9
    CALL crt_math.c_round_FUN_00563a30  ; 005235fd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP qword ptr [ESP]               ; 00523602
    MOV EAX,dword ptr [ESP]             ; 00523605
    MOV dword ptr [EDX],EAX             ; 00523608
    ADD ESP,0x8                         ; 0052360a
    POP EBX                             ; 0052360d
    RET                                 ; 0052360e

