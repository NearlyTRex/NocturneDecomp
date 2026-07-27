; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_spline_cpp_FUN_00534070(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534070
        ;   Label: core_spline.cpp_FUN_00534070
    PUSH ESI                            ; 00534071
    PUSH EDI                            ; 00534072
    PUSH EBP                            ; 00534073
    MOV EBP,ESP                         ; 00534074
    SUB ESP,0xc                         ; 00534076
    MOV EAX,dword ptr [EBP + 0x14]      ; 00534079
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053407c
    MOV dword ptr [EBP + -0x4],EDX      ; 0053407f
    FILD dword ptr [EBP + -0x4]         ; 00534082
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00534085
    FMUL float ptr [EAX + 0x10]         ; 00534088
    MOV dword ptr [EBP + -0x4],EDX      ; 0053408b
    FILD dword ptr [EBP + -0x4]         ; 0053408e
    FMUL float ptr [EAX + 0x14]         ; 00534091
    MOV EDX,dword ptr [EBP + 0x20]      ; 00534094
    FADDP                               ; 00534097
    MOV dword ptr [EBP + -0x4],EDX      ; 00534099
    FILD dword ptr [EBP + -0x4]         ; 0053409c
    FMUL float ptr [EAX + 0x18]         ; 0053409f
    MOV EDX,dword ptr [EBP + 0x24]      ; 005340a2
    FADDP                               ; 005340a5
    MOV dword ptr [EBP + -0x4],EDX      ; 005340a7
    FILD dword ptr [EBP + -0x4]         ; 005340aa
    FMUL float ptr [EAX + 0x1c]         ; 005340ad
    FADDP                               ; 005340b0
    FSTP float ptr [EBP + -0xc]         ; 005340b2
    FLD float ptr [EBP + 0xfffffff4]    ; 005340b5
    FISTP dword ptr [EBP + 0xfffffff8]  ; 005340bb
    MOV EAX,dword ptr [EBP + -0x8]      ; 005340c1
    MOV ESP,EBP                         ; 005340c4
    POP EBP                             ; 005340c6
    POP EDI                             ; 005340c7
    POP ESI                             ; 005340c8
    POP EBX                             ; 005340c9
    RET                                 ; 005340ca

