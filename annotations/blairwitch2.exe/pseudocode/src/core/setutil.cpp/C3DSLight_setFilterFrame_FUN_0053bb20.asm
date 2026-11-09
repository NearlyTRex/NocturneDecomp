; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20(int param_1,int param_2,CDemonLight *param_3)
;
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048ce8f
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005e63cd
;   TerminatedCString s_C3DSLight_advanceFilter_005e63e1
;   TerminatedCString s_core_setutil_cpp_005e6416
;   TerminatedCString s_C3DSLight_setFilterFrame_005e642a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bb20
        ;   Label: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_0053bb20
    PUSH ESI                            ; 0053bb21
    PUSH EDI                            ; 0053bb22
    PUSH EBP                            ; 0053bb23
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053bb24
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053bb28
    CMP dword ptr [ESP + 0x1c],0x0      ; 0053bb2c
    JZ 0x0053bb6b                       ; 0053bb31
        ;   XREF to: 0053bb6b (CONDITIONAL_JUMP)  ; LAB_0053bb6b
    TEST ESI,ESI                        ; 0053bb33
        ;   Label: LAB_0053bb33
    JL 0x0053bb90                       ; 0053bb35
        ;   XREF to: 0053bb90 (CONDITIONAL_JUMP)  ; LAB_0053bb90
    CMP ESI,dword ptr [EBX + 0x11ec]    ; 0053bb37
    JGE 0x0053bb90                      ; 0053bb3d
        ;   XREF to: 0053bb90 (CONDITIONAL_JUMP)  ; LAB_0053bb90
    PUSH 0x0                            ; 0053bb3f
        ;   Label: LAB_0053bb3f
    MOV dword ptr [EBX + 0x1890],ESI    ; 0053bb41
    PUSH 0x0                            ; 0053bb47
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0x1774] ; 0053bb49
    PUSH ECX                            ; 0053bb50
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1810] ; 0053bb51
    PUSH EDI                            ; 0053bb58
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0053bb59
    PUSH EBP                            ; 0053bb5d
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600 ; 0053bb5e
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0053bb63
    POP EBP                             ; 0053bb66
    POP EDI                             ; 0053bb67
    POP ESI                             ; 0053bb68
    POP EBX                             ; 0053bb69
    RET                                 ; 0053bb6a
    MOV ECX,0x5e63cd                    ; 0053bb6b | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0053bb6b
    MOV EDI,0x39f                       ; 0053bb70
    PUSH 0x5e63e1                       ; 0053bb75 | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01d046a0],ECX      ; 0053bb7a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0053bb80 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053bb86
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0053bb8b
    JMP 0x0053bb33                      ; 0053bb8e
        ;   XREF to: 0053bb33 (UNCONDITIONAL_JUMP)  ; LAB_0053bb33
    MOV EAX,0x5e6416                    ; 0053bb90 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0053bb90
    MOV EDX,0x3a3                       ; 0053bb95
    PUSH 0x5e642a                       ; 0053bb9a | = "C3DSLight::setFilterFrame - invalid f..."
    MOV [0x01d046a0],EAX                ; 0053bb9f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0053bba4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053bbaa
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0053bbaf
    JMP 0x0053bb3f                      ; 0053bbb2
        ;   XREF to: 0053bb3f (UNCONDITIONAL_JUMP)  ; LAB_0053bb3f

