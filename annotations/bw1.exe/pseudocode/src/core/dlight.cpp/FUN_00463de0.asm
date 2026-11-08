; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463de0(int param_1)
;
;
; XREF[1]:
;   FUN_0055d0e0 at 0055d192
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d9194
;   TerminatedCString s_CDemonLight_allocateFilt_005d91a7
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH 0x10000                        ; 00463de0
        ;   Label: FUN_00463de0
    CALL FUN_005c08d0                   ; 00463de5
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 00463dea
    MOV EDX,dword ptr [ESP + 0x4]       ; 00463ded
    MOV dword ptr [EDX + 0x1c6c],EAX    ; 00463df1
    TEST EAX,EAX                        ; 00463df7
    JZ 0x00463dfc                       ; 00463df9
        ;   XREF to: 00463dfc (CONDITIONAL_JUMP)  ; LAB_00463dfc
    RET                                 ; 00463dfb
    PUSH EBX                            ; 00463dfc
        ;   Label: LAB_00463dfc
    MOV ECX,0x5d9194                    ; 00463dfd | = "..\\core\\dlight.cpp"
    MOV EBX,0x544                       ; 00463e02
    PUSH 0x5d91a7                       ; 00463e07 | = "CDemonLight::allocateFilter - Out of ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00463e0c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00463e12 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00463e18
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00463e1d
    POP EBX                             ; 00463e20
    RET                                 ; 00463e21

