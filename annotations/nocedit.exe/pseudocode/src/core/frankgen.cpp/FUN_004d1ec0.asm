; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_frankgen_cpp_FUN_004d1ec0(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_frankgen.cpp_PlaySounds_FUN_004d1a40 at 004d1b0c
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1ec0
        ;   Label: core_frankgen.cpp_FUN_004d1ec0
    SUB ESP,0x10                        ; 004d1ec1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d1ec4
    FLD float ptr [ESP + 0x1c]          ; 004d1ec8
    FMUL float ptr [ESP + 0x20]         ; 004d1ecc
    FADD float ptr [EBX + 0x48c]        ; 004d1ed0
    SUB ESP,0x8                         ; 004d1ed6
    FST float ptr [EBX + 0x48c]         ; 004d1ed9
    FSTP double ptr [ESP]               ; 004d1edf
    CALL crt_math.c_floor_FUN_005feb90  ; 004d1ee2
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004d1ee7
    MOV dword ptr [ESP + 0xc],EDX       ; 004d1eeb
    FLD double ptr [ESP + 0x8]          ; 004d1eef
    ADD ESP,0x8                         ; 004d1ef3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d1ef6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004d1efb
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d1eff
    MOV dword ptr [ESP + 0xc],EAX       ; 004d1f03
    FILD dword ptr [ESP + 0xc]          ; 004d1f07
    FSUBR float ptr [EBX + 0x48c]       ; 004d1f0b
    FSTP float ptr [EBX + 0x48c]        ; 004d1f11
    ADD ESP,0x10                        ; 004d1f17
    POP EBX                             ; 004d1f1a
    RET                                 ; 004d1f1b

