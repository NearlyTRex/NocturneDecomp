; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044b5b0(int param_1)
;
;
; XREF[1]:
;   FUN_0053b810 at 0053b8c2
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf477
;   TerminatedCString s_CDemonLight_allocateFilt_005cf48a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH 0x10000                        ; 0044b5b0
        ;   Label: FUN_0044b5b0
    CALL FUN_005b8580                   ; 0044b5b5
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0044b5ba
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044b5bd
    MOV dword ptr [EDX + 0x1c6c],EAX    ; 0044b5c1
    TEST EAX,EAX                        ; 0044b5c7
    JZ 0x0044b5cc                       ; 0044b5c9
        ;   XREF to: 0044b5cc (CONDITIONAL_JUMP)  ; LAB_0044b5cc
    RET                                 ; 0044b5cb
    PUSH EBX                            ; 0044b5cc
        ;   Label: LAB_0044b5cc
    MOV ECX,0x5cf477                    ; 0044b5cd | = "..\\core\\dlight.cpp"
    MOV EBX,0x547                       ; 0044b5d2
    PUSH 0x5cf48a                       ; 0044b5d7 | = "CDemonLight::allocateFilter - Out of ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0044b5dc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0044b5e2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044b5e8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044b5ed
    POP EBX                             ; 0044b5f0
    RET                                 ; 0044b5f1

