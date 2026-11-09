; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0045daf0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setutil.cpp_C3DSLight_apply_FUN_00542aa0 at 00542b52
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb4ac
;   TerminatedCString s_CDemonLight_allocateFilt_005bb4bf
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH 0x10000                        ; 0045daf0
        ;   Label: core_dlight.cpp_CDemonLight_allocateFilter_FUN_0045daf0
    CALL crt_unknown.c_FUN_005a3650     ; 0045daf5
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0045dafa
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045dafd
    MOV dword ptr [EDX + 0x1c6c],EAX    ; 0045db01
    TEST EAX,EAX                        ; 0045db07
    JZ 0x0045db0c                       ; 0045db09
        ;   XREF to: 0045db0c (CONDITIONAL_JUMP)  ; LAB_0045db0c
    RET                                 ; 0045db0b
    PUSH EBX                            ; 0045db0c
        ;   Label: LAB_0045db0c
    MOV ECX,0x5bb4ac                    ; 0045db0d | = "..\\core\\dlight.cpp"
    MOV EBX,0x547                       ; 0045db12
    PUSH 0x5bb4bf                       ; 0045db17 | = "CDemonLight::allocateFilter - Out of ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0045db1c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0045db22 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045db28
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045db2d
    POP EBX                             ; 0045db30
    RET                                 ; 0045db31

