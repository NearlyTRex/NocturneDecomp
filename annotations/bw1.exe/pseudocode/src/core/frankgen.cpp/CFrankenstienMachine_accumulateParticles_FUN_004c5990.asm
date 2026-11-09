; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)
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
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5990
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990
    SUB ESP,0x10                        ; 004c5991
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c5994
    FLD float ptr [ESP + 0x1c]          ; 004c5998
    FMUL float ptr [ESP + 0x20]         ; 004c599c
    FADD float ptr [EBX + 0x48c]        ; 004c59a0
    SUB ESP,0x8                         ; 004c59a6
    FST float ptr [EBX + 0x48c]         ; 004c59a9
    FSTP double ptr [ESP]               ; 004c59af
    CALL crt_math.c_floor_FUN_005c0880  ; 004c59b2
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004c59b7
    MOV dword ptr [ESP + 0xc],EDX       ; 004c59bb
    FLD double ptr [ESP + 0x8]          ; 004c59bf
    ADD ESP,0x8                         ; 004c59c3
    CALL crt_math.c_round_FUN_005c03a0  ; 004c59c6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 004c59cb
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c59cf
    MOV dword ptr [ESP + 0xc],EAX       ; 004c59d3
    FILD dword ptr [ESP + 0xc]          ; 004c59d7
    FSUBR float ptr [EBX + 0x48c]       ; 004c59db
    FSTP float ptr [EBX + 0x48c]        ; 004c59e1
    ADD ESP,0x10                        ; 004c59e7
    POP EBX                             ; 004c59ea
    RET                                 ; 004c59eb

