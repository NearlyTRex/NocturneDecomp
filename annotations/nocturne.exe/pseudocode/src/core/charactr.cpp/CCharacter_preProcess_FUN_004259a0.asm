; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[34]:
;   FUN_00418a00 at 00418f83
;   FUN_00439f50 at 0043a165
;   FUN_00495a20 at 00495dee
;   FUN_004a9270 at 004a93e6
;   FUN_004b32d0 at 004b34e5
;   FUN_004b6d80 at 004b724c
;   FUN_004b9fe0 at 004ba26e
;   FUN_004c4970 at 004c4bb1
;   FUN_004d4f30 at 004d5609
;   FUN_004da790 at 004dac7c
;   ... and 24 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004259a0
        ;   Label: core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
    MOV ECX,dword ptr [ESP + 0x10]      ; 004259a3
    LEA EDX,[ECX + 0x30]                ; 004259a7
    MOV EAX,dword ptr [EDX]             ; 004259aa
    MOV dword ptr [ESP],EAX             ; 004259ac
    LEA EAX,[EDX + 0x4]                 ; 004259af
    MOV EAX,dword ptr [EAX]             ; 004259b2
    MOV dword ptr [ESP + 0x4],EAX       ; 004259b4
    LEA EAX,[EDX + 0x8]                 ; 004259b8
    MOV EAX,dword ptr [EAX]             ; 004259bb
    MOV dword ptr [ESP + 0x8],EAX       ; 004259bd
    MOV EAX,ESP                         ; 004259c1
    FLD float ptr [ESP + 0x4]           ; 004259c3
    PUSH EAX                            ; 004259c7
    FADD float ptr [ECX + 0x2410]       ; 004259c8
    PUSH ECX                            ; 004259ce
    FSTP float ptr [ESP + 0xc]          ; 004259cf
    MOV dword ptr [ECX + 0x2410],0x0    ; 004259d3
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060 ; 004259dd
        ;   XREF to: 0042a060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060()
    ADD ESP,0x8                         ; 004259e2
    ADD ESP,0xc                         ; 004259e5
    RET                                 ; 004259e8

