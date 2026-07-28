; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[34]:
;   core_baron.cpp_FUN_00410490 at 004106d5
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412666
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413a14
;   core_beast.cpp_CBeast_process_FUN_004150d0 at 00415133
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 00415680
;   core_boneguy.cpp_FUN_00418a00 at 00418f83
;   core_colonel.cpp_FUN_00439f50 at 0043a165
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043bfc7
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 0045497e
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 00458eec
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
        ;   XREF to: 0042a060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 004259e2
    ADD ESP,0xc                         ; 004259e5
    RET                                 ; 004259e8

