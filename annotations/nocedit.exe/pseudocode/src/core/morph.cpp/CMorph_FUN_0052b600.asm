; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_FUN_0052b600(CMorph *this_ptr,int model_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0 at 00418a24
;   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 at 00520ccd
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750 at 005297ea
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_005460c0 at 00546165
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c76a0
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 at 005e6f0e
;
; Called Functions:
;   core_morph.cpp_CMorphModel_FUN_0052aa30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b600
        ;   Label: core_morph.cpp_CMorph_FUN_0052b600
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052b601
    PUSH EDX                            ; 0052b605
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052b606
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b60a
    SUB EAX,EDX                         ; 0052b611
    SHL EAX,0x6                         ; 0052b613
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052b616
    ADD EAX,EDX                         ; 0052b61a
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052b61c
    SHL EAX,0x3                         ; 0052b620
    PUSH ECX                            ; 0052b623
    ADD EAX,EBX                         ; 0052b624
    PUSH EAX                            ; 0052b626
    CALL core_morph.cpp_CMorphModel_FUN_0052aa30 ; 0052b627
        ;   XREF to: 0052aa30 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052aa30(CMorphModel * this_ptr)
    ADD ESP,0xc                         ; 0052b62c
    POP EBX                             ; 0052b62f
    RET                                 ; 0052b630

