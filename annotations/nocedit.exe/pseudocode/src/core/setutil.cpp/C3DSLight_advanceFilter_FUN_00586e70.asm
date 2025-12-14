; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight * this_ptr, CDemonLight * light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004aafb7
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_006496b6
;   TerminatedCString s_C3DSLight_advanceFilter__006496ca
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586e70
        ;   Label: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70
    PUSH ESI                            ; 00586e71
    PUSH EBP                            ; 00586e72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00586e73
    CMP dword ptr [ESP + 0x14],0x0      ; 00586e77
    JZ 0x00586ed5                       ; 00586e7c
        ;   XREF to: 00586ed5 (CONDITIONAL_JUMP)  ; LAB_00586ed5
    CMP dword ptr [EBX + 0x11ec],0x0    ; 00586e7e
        ;   Label: LAB_00586e7e
    JLE 0x00586ed1                      ; 00586e85
        ;   XREF to: 00586ed1 (CONDITIONAL_JUMP)  ; LAB_00586ed1
    MOV EBP,dword ptr [EBX + 0x1890]    ; 00586e87
    INC EBP                             ; 00586e8d
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00586e8e
    MOV dword ptr [EBX + 0x1890],EBP    ; 00586e94
    CMP EBP,EDX                         ; 00586e9a
    JL 0x00586ea8                       ; 00586e9c
        ;   XREF to: 00586ea8 (CONDITIONAL_JUMP)  ; LAB_00586ea8
    MOV dword ptr [EBX + 0x1890],0x0    ; 00586e9e
    PUSH EDI                            ; 00586ea8
        ;   Label: LAB_00586ea8
    PUSH 0x0                            ; 00586ea9
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00586eab
    PUSH 0x0                            ; 00586eb1
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 00586eb3
    PUSH ECX                            ; 00586eba
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 00586ebb
    PUSH ESI                            ; 00586ec2
    MOV EDI,dword ptr [ESP + 0x28]      ; 00586ec3
    PUSH EDI                            ; 00586ec7
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 00586ec8
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00586ecd
    POP EDI                             ; 00586ed0
    POP EBP                             ; 00586ed1
        ;   Label: LAB_00586ed1
    POP ESI                             ; 00586ed2
    POP EBX                             ; 00586ed3
    RET                                 ; 00586ed4
    MOV ECX,0x6496b6                    ; 00586ed5 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00586ed5
    MOV ESI,0x387                       ; 00586eda
    PUSH 0x6496ca                       ; 00586edf | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00586ee4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00586eea | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586ef0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00586ef5
    JMP 0x00586e7e                      ; 00586ef8
        ;   XREF to: 00586e7e (UNCONDITIONAL_JUMP)  ; LAB_00586e7e

