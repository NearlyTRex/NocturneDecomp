; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSLight_process_FUN_00586cb0(C3DSLight * this_ptr, CDemonLight * light, int apply_filter_flag)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
; int              Stack[0xc]:4   apply_filter_flag
;
; XREF[1]:
;   core_set.cpp_CDemonSet_process_FUN_0056f940 at 0056f9df
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00649673
;   TerminatedCString s_C3DSLight_process_NULL_C_00649687
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_GlobalDeltaTimeInt
;   undefined4 g_CGameInstance.delta_time_float
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_0326f118
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586cb0
        ;   Label: core_setutil.cpp_C3DSLight_process_FUN_00586cb0
    PUSH ESI                            ; 00586cb1
    PUSH EDI                            ; 00586cb2
    PUSH EBP                            ; 00586cb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00586cb4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00586cb8
    TEST ESI,ESI                        ; 00586cbc
    JZ 0x00586e30                       ; 00586cbe | LAB_00586e30
        ;   XREF to: 00586e30 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x11ec],0x0    ; 00586cc4
        ;   Label: LAB_00586cc4
    JZ 0x00586db9                       ; 00586ccb | LAB_00586db9
        ;   XREF to: 00586db9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00586cd1
    FLD float ptr [EBX + EAX*0x4 + 0x16f4] ; 00586cd7
    FLDZ                                ; 00586cde
    FCOMPP                              ; 00586ce0
    FNSTSW AX                           ; 00586ce2
    SAHF                                ; 00586ce4
    JNC 0x00586d4c                      ; 00586ce5 | LAB_00586d4c
        ;   XREF to: 00586d4c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 00586ce7 | CGame * g_CGamePtr
    LEA EAX,[EBX + 0x1894]              ; 00586ced
    FLD float ptr [EDX + 0x264]         ; 00586cf3 | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 00586cf9
    FSTP float ptr [EAX]                ; 00586cfb
    MOV EDX,dword ptr [EBX + 0x1890]    ; 00586cfd
    SHL EDX,0x2                         ; 00586d03
    ADD EDX,EBX                         ; 00586d06
    FLD float ptr [EBX + 0x1894]        ; 00586d08
    FCOMP float ptr [EDX + 0x16f4]      ; 00586d0e
    FNSTSW AX                           ; 00586d14
    SAHF                                ; 00586d16
    JBE 0x00586d4c                      ; 00586d17 | LAB_00586d4c
        ;   XREF to: 00586d4c (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x16f4]        ; 00586d19
    MOV EBP,dword ptr [EBX + 0x1890]    ; 00586d1f
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00586d25
    FSUBR float ptr [EBX + 0x1894]      ; 00586d2b
    INC EBP                             ; 00586d31
    FSTP float ptr [EBX + 0x1894]       ; 00586d32
    MOV dword ptr [EBX + 0x1890],EBP    ; 00586d38
    CMP EBP,EDX                         ; 00586d3e
    JL 0x00586d4c                       ; 00586d40 | LAB_00586d4c
        ;   XREF to: 00586d4c (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1890],0x0    ; 00586d42
    MOV EAX,[0x02cf6a80]                ; 00586d4c | int g_GlobalDeltaTimeInt
        ;   Label: LAB_00586d4c
    MOV EDX,dword ptr [EBX + 0x17f8]    ; 00586d51
    IMUL EDX                            ; 00586d57
    SHRD EAX,EDX,0x10                   ; 00586d59
    MOV ECX,dword ptr [EBX + 0x1800]    ; 00586d5d
    MOV EDX,dword ptr [EBX + 0x17fc]    ; 00586d63
    ADD ECX,EAX                         ; 00586d69
    MOV EAX,[0x02cf6a80]                ; 00586d6b | int g_GlobalDeltaTimeInt
    MOV dword ptr [EBX + 0x1800],ECX    ; 00586d70
    IMUL EDX                            ; 00586d76
    SHRD EAX,EDX,0x10                   ; 00586d78
    MOV EDI,dword ptr [EBX + 0x1804]    ; 00586d7c
    ADD EDI,EAX                         ; 00586d82
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00586d84
    MOV dword ptr [EBX + 0x1804],EDI    ; 00586d88
    TEST EBP,EBP                        ; 00586d8e
    JZ 0x00586db9                       ; 00586d90 | LAB_00586db9
        ;   XREF to: 00586db9 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00586d92
    MOV EDX,dword ptr [EBX + 0x1800]    ; 00586d93
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00586d99
    PUSH EDX                            ; 00586d9f
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 00586da0
    PUSH ECX                            ; 00586da7
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 00586da8
    PUSH EDI                            ; 00586daf
    PUSH ESI                            ; 00586db0
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 00586db1 | void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00586db6
    FLD float ptr [EBX + 0x11e0]        ; 00586db9
        ;   Label: LAB_00586db9
    FLD1                                ; 00586dbf
    FCOMPP                              ; 00586dc1
    FNSTSW AX                           ; 00586dc3
    SAHF                                ; 00586dc5
    JBE 0x00586e1c                      ; 00586dc6 | LAB_00586e1c
        ;   XREF to: 00586e1c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 00586dc8 | CGame * g_CGamePtr
    LEA EAX,[EBX + 0x11e8]              ; 00586dce
    FLD float ptr [EDX + 0x264]         ; 00586dd4 | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 00586dda
    FSTP float ptr [EAX]                ; 00586ddc
    FLD float ptr [EBX + 0x11e8]        ; 00586dde
    FCOMP float ptr [EBX + 0x11e4]      ; 00586de4
    FNSTSW AX                           ; 00586dea
    SAHF                                ; 00586dec
    JBE 0x00586e01                      ; 00586ded | LAB_00586e01
        ;   XREF to: 00586e01 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x11e4]        ; 00586def
    FSUBR float ptr [EBX + 0x11e8]      ; 00586df5
    FSTP float ptr [EBX + 0x11e8]       ; 00586dfb
    FLD float ptr [EBX + 0x11e8]        ; 00586e01
        ;   Label: LAB_00586e01
    FCOMP float ptr [EBX + 0x11e0]      ; 00586e07
    FNSTSW AX                           ; 00586e0d
    SAHF                                ; 00586e0f
    JBE 0x00586e58                      ; 00586e10 | LAB_00586e58
        ;   XREF to: 00586e58 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1cb4],0x0    ; 00586e12
    MOV EAX,[0x006810c8]                ; 00586e1c | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_00586e1c
    MOV EAX,dword ptr [EAX + 0x15aea0]  ; 00586e21 | DAT_0326f118
    TEST EAX,EAX                        ; 00586e27
    JZ 0x00586e64                       ; 00586e29 | LAB_00586e64
        ;   XREF to: 00586e64 (CONDITIONAL_JUMP)
    POP EBP                             ; 00586e2b
    POP EDI                             ; 00586e2c
    POP ESI                             ; 00586e2d
    POP EBX                             ; 00586e2e
    RET                                 ; 00586e2f
    MOV EDX,0x649673                    ; 00586e30 | = "..\\core\\setutil.cpp" | s_core_setutil_cpp_00649673 = ..\core\setutil.cpp
        ;   Label: LAB_00586e30
    MOV ECX,0x351                       ; 00586e35
    PUSH 0x649687                       ; 00586e3a | = "C3DSLight::process - NULL CDemonLight..." | s_C3DSLight_process_NULL_C_00649687 = C3DSLight::process - NULL CDemonLight pointer!
    MOV dword ptr [0x02f0ca48],EDX      ; 00586e3f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00586e45 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586e4b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00586e50
    JMP 0x00586cc4                      ; 00586e53 | LAB_00586cc4
        ;   XREF to: 00586cc4 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1cb4],0x1    ; 00586e58
        ;   Label: LAB_00586e58
    JMP 0x00586e1c                      ; 00586e62 | LAB_00586e1c
        ;   XREF to: 00586e1c (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1cb4],EAX    ; 00586e64
        ;   Label: LAB_00586e64
    POP EBP                             ; 00586e6a
    POP EDI                             ; 00586e6b
    POP ESI                             ; 00586e6c
    POP EBX                             ; 00586e6d
    RET                                 ; 00586e6e

