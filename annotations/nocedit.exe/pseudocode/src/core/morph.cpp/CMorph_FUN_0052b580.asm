; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorph_FUN_0052b580(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[2]:
;   core_succubus.cpp_CSuccubus_setup_FUN_005c6b60 at 005c6e0d
;   core_vampboss.cpp_CVampireBoss_setup_FUN_005e56c0 at 005e57c2
;
; Called Functions:
;   core_morph.cpp_CMorphModel_FUN_0052a8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b580
        ;   Label: core_morph.cpp_CMorph_FUN_0052b580
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052b581
    PUSH EDX                            ; 0052b585
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052b586
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b58a
    SUB EAX,EDX                         ; 0052b591
    SHL EAX,0x6                         ; 0052b593
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052b596
    ADD EAX,EDX                         ; 0052b59a
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052b59c
    SHL EAX,0x3                         ; 0052b5a0
    PUSH ECX                            ; 0052b5a3
    ADD EAX,EBX                         ; 0052b5a4
    PUSH EAX                            ; 0052b5a6
    CALL core_morph.cpp_CMorphModel_FUN_0052a8d0 ; 0052b5a7
        ;   XREF to: 0052a8d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052a8d0(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 0052b5ac
    POP EBX                             ; 0052b5af
    RET                                 ; 0052b5b0

