; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_00508f40(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10 at 005a0a19
;   core_npc.cpp_factoryFuncNPC_FUN_00508f10 at 00508f23
;   core_passngr.cpp_CPassenger_ctor_FUN_0050a450 at 0050a458
;   core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0 at 005273b8
;   core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0 at 0059aaab
;   core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60 at 00599f6b
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
;   core_path.cpp_CPathMap_ctor_FUN_0050acc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508f40
        ;   Label: core_npc.cpp_CNPC_ctor_FUN_00508f40
    SUB ESP,0x4                         ; 00508f41
    MOV EBX,dword ptr [ESP + 0xc]       ; 00508f44
    PUSH EBX                            ; 00508f48
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 ; 00508f49
        ;   XREF to: 0042ac20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042ac20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00508f4e
    ADD EAX,0xcdcc                      ; 00508f51
    PUSH EAX                            ; 00508f56
    CALL core_path.cpp_CPathMap_ctor_FUN_0050acc0 ; 00508f57
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_0050acc0(CPathMap * this_ptr)
    LEA EBX,[EAX + 0xffff3234]          ; 00508f5c
    MOV dword ptr [EBX + 0x154],0x5e2df4 ; 00508f62
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 00508f6c
    ADD ESP,0x4                         ; 00508f76
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 00508f79
    PUSH 0x3f8ccccd                     ; 00508f83
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 00508f88
    PUSH 0x3f666666                     ; 00508f92
    MOV dword ptr [EBX + 0x3280],0xc479c000 ; 00508f97
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00508fa1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00508fa6
    FLD float ptr [ESP + 0x8]           ; 00508faa
    ADD ESP,0x8                         ; 00508fae
    PUSH 0x5cb525                       ; 00508fb1
    LEA EAX,[EBX + 0x158]               ; 00508fb6
    PUSH EAX                            ; 00508fbc
    FSTP float ptr [EBX + 0x206b0]      ; 00508fbd
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00508fc3
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x27c0],0x0    ; 00508fc8
    MOV dword ptr [EBX + 0x206a8],0x0   ; 00508fd2
    MOV dword ptr [EBX + 0x206ac],0x0   ; 00508fdc
    MOV dword ptr [EBX + 0x206b4],0x10000 ; 00508fe6
    MOV dword ptr [EBX + 0x206bc],0x64  ; 00508ff0
    ADD ESP,0x8                         ; 00508ffa
    MOV dword ptr [EBX + 0x206c4],0x40000000 ; 00508ffd
    MOV EAX,EBX                         ; 00509007
    MOV dword ptr [EBX + 0x206b8],0xffffffff ; 00509009
    ADD ESP,0x4                         ; 00509013
    POP EBX                             ; 00509016
    RET                                 ; 00509017

