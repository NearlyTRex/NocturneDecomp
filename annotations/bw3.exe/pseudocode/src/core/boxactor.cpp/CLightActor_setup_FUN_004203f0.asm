; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_004203f0(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041f130
;   core_boxactor.cpp_FUN_004208d0
;   core_dlight.cpp_CDemonLight_init_FUN_0045c2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004203f0
        ;   Label: core_boxactor.cpp_CLightActor_setup_FUN_004203f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004203f1
    PUSH EBX                            ; 004203f5
    CALL core_boxactor.cpp_FUN_004208d0 ; 004203f6
        ;   XREF to: 004208d0 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_004208d0()
    ADD ESP,0x4                         ; 004203fb
    PUSH EBX                            ; 004203fe
    CALL core_boxactor.cpp_CBoxActor_setup_FUN_0041f130 ; 004203ff
        ;   XREF to: 0041f130 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setup_FUN_0041f130(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00420404
    LEA EAX,[EBX + 0x6ec]               ; 00420407
    PUSH EAX                            ; 0042040d
    CALL core_dlight.cpp_CDemonLight_init_FUN_0045c2a0 ; 0042040e
        ;   XREF to: 0045c2a0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_0045c2a0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00420413
    POP EBX                             ; 00420416
    RET                                 ; 00420417

