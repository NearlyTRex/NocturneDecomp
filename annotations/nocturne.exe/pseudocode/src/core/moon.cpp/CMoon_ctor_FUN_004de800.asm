; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_CMoon_ctor_FUN_004de800(int param_1)
;
;
; XREF[1]:
;   core_menu.cpp_staticInit_FUN_004cf1f0 at 004cf216
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004de800
        ;   Label: core_moon.cpp_CMoon_ctor_FUN_004de800
    ADD EAX,0x8                         ; 004de804
    PUSH EAX                            ; 004de807
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590 ; 004de808
        ;   XREF to: 00452590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590()
    SUB EAX,0x8                         ; 004de80d
    MOV dword ptr [EAX + 0x4],0x0       ; 004de810
    ADD ESP,0x4                         ; 004de817
    MOV dword ptr [EAX],0x0             ; 004de81a
    RET                                 ; 004de820

