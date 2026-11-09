; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0044b5b0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setutil.cpp_C3DSLight_apply_FUN_0053b810 at 0053b8c2
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf477
;   TerminatedCString s_CDemonLight_allocateFilt_005cf48a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH 0x10000                        ; 0044b5b0
        ;   Label: core_dlight.cpp_CDemonLight_allocateFilter_FUN_0044b5b0
    CALL crt_unknown.c_FUN_005b8580     ; 0044b5b5
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
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
    CALL core_main.c_FUN_004e4500       ; 0044b5e8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044b5ed
    POP EBX                             ; 0044b5f0
    RET                                 ; 0044b5f1

