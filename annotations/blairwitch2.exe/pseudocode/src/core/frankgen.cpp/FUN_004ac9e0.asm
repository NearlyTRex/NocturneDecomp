; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_FUN_004ac9e0(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac9e0
        ;   Label: core_frankgen.cpp_FUN_004ac9e0
    SUB ESP,0x10                        ; 004ac9e1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ac9e4
    FLD float ptr [ESP + 0x1c]          ; 004ac9e8
    FMUL float ptr [ESP + 0x20]         ; 004ac9ec
    FADD float ptr [EBX + 0x5e8]        ; 004ac9f0
    SUB ESP,0x8                         ; 004ac9f6
    FST float ptr [EBX + 0x5e8]         ; 004ac9f9
    FSTP double ptr [ESP]               ; 004ac9ff
    CALL crt_math.c_floor_FUN_005b84d0  ; 004aca02
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004aca07
    MOV dword ptr [ESP + 0xc],EDX       ; 004aca0b
    FLD double ptr [ESP + 0x8]          ; 004aca0f
    ADD ESP,0x8                         ; 004aca13
    CALL crt_math.c_round_FUN_005b7ff0  ; 004aca16
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 004aca1b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aca1f
    MOV dword ptr [ESP + 0xc],EAX       ; 004aca23
    FILD dword ptr [ESP + 0xc]          ; 004aca27
    FSUBR float ptr [EBX + 0x5e8]       ; 004aca2b
    FSTP float ptr [EBX + 0x5e8]        ; 004aca31
    ADD ESP,0x10                        ; 004aca37
    POP EBX                             ; 004aca3a
    RET                                 ; 004aca3b

