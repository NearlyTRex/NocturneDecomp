; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl core_script_cpp_makeVector_FUN_00505880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005014e4
;
; Called Functions:
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505880
        ;   Label: core_script.cpp_makeVector_FUN_00505880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00505881
    PUSH EBX                            ; 00505885
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00505886
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    ADD ESP,0x4                         ; 0050588b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050588e
    MOV dword ptr [EBX],EAX             ; 00505892
    MOV EAX,dword ptr [ESP + 0x10]      ; 00505894
    MOV dword ptr [EBX + 0x8],EAX       ; 00505898
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050589b
    MOV dword ptr [EBX + 0x4],EAX       ; 0050589f
    MOV EAX,EBX                         ; 005058a2
    POP EBX                             ; 005058a4
    RET                                 ; 005058a5

