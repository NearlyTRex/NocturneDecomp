; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[34]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 004130c5
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415656
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416a84
;   core_beast.cpp_FUN_004182a0 at 00418303
;   core_biggs.cpp_CBiggs_FUN_00418700 at 004188d0
;   core_boneguy.cpp_FUN_0041bf90 at 0041c513
;   core_colonel.cpp_FUN_0043fa00 at 0043fc15
;   core_cow.cpp_FUN_00444310 at 00444527
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f36e
;   core_dracbrid.cpp_FUN_00484410 at 0048486c
;   ... and 24 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042ded0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00429820
        ;   Label: core_charactr.cpp_CCharacter_FUN_00429820
    MOV ECX,dword ptr [ESP + 0x10]      ; 00429823
    LEA EDX,[ECX + 0x30]                ; 00429827
    MOV EAX,dword ptr [EDX]             ; 0042982a
    MOV dword ptr [ESP],EAX             ; 0042982c
    LEA EAX,[EDX + 0x4]                 ; 0042982f
    MOV EAX,dword ptr [EAX]             ; 00429832
    MOV dword ptr [ESP + 0x4],EAX       ; 00429834
    LEA EAX,[EDX + 0x8]                 ; 00429838
    MOV EAX,dword ptr [EAX]             ; 0042983b
    MOV dword ptr [ESP + 0x8],EAX       ; 0042983d
    MOV EAX,ESP                         ; 00429841
    FLD float ptr [ESP + 0x4]           ; 00429843
    PUSH EAX                            ; 00429847
    FADD float ptr [ECX + 0x2418]       ; 00429848
    PUSH ECX                            ; 0042984e
    FSTP float ptr [ESP + 0xc]          ; 0042984f
    MOV dword ptr [ECX + 0x2418],0x0    ; 00429853
    CALL core_charactr.cpp_CCharacter_FUN_0042ded0 ; 0042985d
        ;   XREF to: 0042ded0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ded0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00429862
    ADD ESP,0xc                         ; 00429865
    RET                                 ; 00429868

