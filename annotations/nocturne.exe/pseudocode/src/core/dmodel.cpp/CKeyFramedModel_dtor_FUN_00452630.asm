; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630(undefined4 param_1)
;
;
; XREF[2]:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160 at 00435198
;   core_moon.cpp_CMoon_dtor_FUN_004de830 at 004de844
;
; Called Functions:
;   FUN_00452f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452630
        ;   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00452631
    PUSH EBX                            ; 00452635
    CALL FUN_00452f10                   ; 00452636
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00452f10()
    ADD ESP,0x4                         ; 0045263b
    MOV EAX,EBX                         ; 0045263e
    POP EBX                             ; 00452640
    RET                                 ; 00452641

