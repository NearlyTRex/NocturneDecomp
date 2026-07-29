; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   emission_rate
; float            Stack[0xc]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950 at 00494a1c
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494dd0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
    SUB ESP,0x10                        ; 00494dd1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00494dd4
    FLD float ptr [ESP + 0x1c]          ; 00494dd8
    FMUL float ptr [ESP + 0x20]         ; 00494ddc
    FADD float ptr [EBX + 0x484]        ; 00494de0
    SUB ESP,0x8                         ; 00494de6
    FST float ptr [EBX + 0x484]         ; 00494de9
    FSTP double ptr [ESP]               ; 00494def
    CALL crt_math.c_floor_FUN_005648c0  ; 00494df2
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00494df7
    MOV dword ptr [ESP + 0xc],EDX       ; 00494dfb
    FLD double ptr [ESP + 0x8]          ; 00494dff
    ADD ESP,0x8                         ; 00494e03
    CALL crt_math.c_round_FUN_00563a30  ; 00494e06
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00494e0b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00494e0f
    MOV dword ptr [ESP + 0xc],EAX       ; 00494e13
    FILD dword ptr [ESP + 0xc]          ; 00494e17
    FSUBR float ptr [EBX + 0x484]       ; 00494e1b
    FSTP float ptr [EBX + 0x484]        ; 00494e21
    ADD ESP,0x10                        ; 00494e27
    POP EBX                             ; 00494e2a
    RET                                 ; 00494e2b

