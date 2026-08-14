; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_script_cpp_makeVector_FUN_00567d00(CVector3f *out,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055ca34
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_00410340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567d00
        ;   Label: core_script.cpp_makeVector_FUN_00567d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00567d01
    PUSH EBX                            ; 00567d05
    CALL core_actor.cpp_CVector3f_ctor_FUN_00410340 ; 00567d06
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00567d0b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00567d0e
    MOV dword ptr [EBX],EAX             ; 00567d12
    MOV EAX,dword ptr [ESP + 0x10]      ; 00567d14
    MOV dword ptr [EBX + 0x8],EAX       ; 00567d18
    MOV EAX,dword ptr [ESP + 0x14]      ; 00567d1b
    MOV dword ptr [EBX + 0x4],EAX       ; 00567d1f
    MOV EAX,EBX                         ; 00567d22
    POP EBX                             ; 00567d24
    RET                                 ; 00567d25

