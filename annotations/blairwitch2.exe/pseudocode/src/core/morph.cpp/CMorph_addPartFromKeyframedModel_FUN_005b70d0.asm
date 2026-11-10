; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[2]:
;   core_succubus.cpp_CSuccubus_setup_FUN_0056f3a0 at 0056f62f
;   core_vampboss.cpp_CVampireBoss_setup_FUN_00581660 at 00581762
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b70d0
        ;   Label: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b70d1
    PUSH EDX                            ; 005b70d5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b70d6
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b70da
    SUB EAX,EDX                         ; 005b70e1
    SHL EAX,0x6                         ; 005b70e3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b70e6
    ADD EAX,EDX                         ; 005b70ea
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b70ec
    SHL EAX,0x3                         ; 005b70f0
    PUSH ECX                            ; 005b70f3
    ADD EAX,EBX                         ; 005b70f4
    PUSH EAX                            ; 005b70f6
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0 ; 005b70f7
        ;   XREF to: 005b63b0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 005b70fc
    POP EBX                             ; 005b70ff
    RET                                 ; 005b7100

