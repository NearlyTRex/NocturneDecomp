; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(uint *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[87]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 004101dc
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411f19
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 0041344e
;   core_bugs.cpp_FUN_00420840 at 00420a83
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10 at 00426c40
;   core_charactr.cpp_CCharacter_dismember_FUN_00427360 at 00427533
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420 at 004297e9
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 at 0042891a
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 at 00423884
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 at 0042304f
;   ... and 77 more
;
; Called Functions:
;   crt_math.c_atan2_FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005838f0
        ;   Label: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
    PUSH EDI                            ; 005838f1
    SUB ESP,0x10                        ; 005838f2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005838f5
    MOV ECX,ESI                         ; 005838f9
    XOR EBX,EBX                         ; 005838fb
    MOV ESI,dword ptr [EDX]             ; 005838fd
    MOV dword ptr [ESP + 0x8],EBX       ; 005838ff
    TEST ESI,0x7fffffff                 ; 00583903
    JNZ 0x0058394a                      ; 00583909
        ;   XREF to: 0058394a (CONDITIONAL_JUMP)  ; LAB_0058394a
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 0058390b
    JNZ 0x0058394a                      ; 00583912
        ;   XREF to: 0058394a (CONDITIONAL_JUMP)  ; LAB_0058394a
    FLDZ                                ; 00583914
    MOV dword ptr [ESP + 0x4],EBX       ; 00583916
    FCOMP float ptr [EDX + 0x4]         ; 0058391a
    FNSTSW AX                           ; 0058391d
    SAHF                                ; 0058391f
    JC 0x00583940                       ; 00583920
        ;   XREF to: 00583940 (CONDITIONAL_JUMP)  ; LAB_00583940
    MOV dword ptr [ESP + 0xc],0x3fc90fdb ; 00583922
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058392a
        ;   Label: LAB_0058392a
    MOV dword ptr [ESP],EDX             ; 0058392e
    MOV ESI,ESP                         ; 00583931
    MOV EDI,ECX                         ; 00583933
    MOVSD ES:EDI,ESI                    ; 00583935
    MOVSD ES:EDI,ESI                    ; 00583936
    MOVSD ES:EDI,ESI                    ; 00583937
    MOV EAX,ECX                         ; 00583938
    ADD ESP,0x10                        ; 0058393a
    POP EDI                             ; 0058393d
    POP EBX                             ; 0058393e
    RET                                 ; 0058393f
    MOV dword ptr [ESP + 0xc],0xbfc90fdb ; 00583940
        ;   Label: LAB_00583940
    JMP 0x0058392a                      ; 00583948
        ;   XREF to: 0058392a (UNCONDITIONAL_JUMP)  ; LAB_0058392a
    FLD float ptr [EDX + 0x8]           ; 0058394a
        ;   Label: LAB_0058394a
    FLD float ptr [EDX]                 ; 0058394d
    CALL crt_math.c_atan2_FUN_005b9989  ; 0058394f
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [EDX + 0x8]           ; 00583954
    FMUL ST0                            ; 00583957
    FLD float ptr [EDX]                 ; 00583959
    FMUL ST0                            ; 0058395b
    FADDP                               ; 0058395d
    FSQRT                               ; 0058395f
    FLD float ptr [EDX + 0x4]           ; 00583961
    CALL crt_math.c_atan2_FUN_005b9989  ; 00583964
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FXCH                                ; 00583969
    FSTP float ptr [ESP + 0x4]          ; 0058396b
    FCHS                                ; 0058396f
    FSTP float ptr [ESP]                ; 00583971
    MOV ESI,ESP                         ; 00583974
    MOV EDI,ECX                         ; 00583976
    MOVSD ES:EDI,ESI                    ; 00583978
    MOVSD ES:EDI,ESI                    ; 00583979
    MOVSD ES:EDI,ESI                    ; 0058397a
    MOV EAX,ECX                         ; 0058397b
    ADD ESP,0x10                        ; 0058397d
    POP EDI                             ; 00583980
    POP EBX                             ; 00583981
    RET                                 ; 00583982

