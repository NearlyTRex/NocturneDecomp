; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00(C3DSLight *this_ptr,int frame_index,CDemonLight *light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CDemonLight *    Stack[0xc]:4   light
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004acb86
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_006496ff
;   TerminatedCString s_C3DSLight_advanceFilter__00649713
;   TerminatedCString s_core_setutil_cpp_00649748
;   TerminatedCString s_C3DSLight_setFilterFrame_0064975c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586f00
        ;   Label: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00
    PUSH ESI                            ; 00586f01
    PUSH EDI                            ; 00586f02
    PUSH EBP                            ; 00586f03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00586f04
    MOV ESI,dword ptr [ESP + 0x18]      ; 00586f08
    CMP dword ptr [ESP + 0x1c],0x0      ; 00586f0c
    JZ 0x00586f4b                       ; 00586f11
        ;   XREF to: 00586f4b (CONDITIONAL_JUMP)  ; LAB_00586f4b
    TEST ESI,ESI                        ; 00586f13
        ;   Label: LAB_00586f13
    JL 0x00586f70                       ; 00586f15
        ;   XREF to: 00586f70 (CONDITIONAL_JUMP)  ; LAB_00586f70
    CMP ESI,dword ptr [EBX + 0x11ec]    ; 00586f17
    JGE 0x00586f70                      ; 00586f1d
        ;   XREF to: 00586f70 (CONDITIONAL_JUMP)  ; LAB_00586f70
    PUSH 0x0                            ; 00586f1f
        ;   Label: LAB_00586f1f
    MOV dword ptr [EBX + 0x1890],ESI    ; 00586f21
    PUSH 0x0                            ; 00586f27
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0x1774] ; 00586f29
    PUSH ECX                            ; 00586f30
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1810] ; 00586f31
    PUSH EDI                            ; 00586f38
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00586f39
    PUSH EBP                            ; 00586f3d
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 00586f3e
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00586f43
    POP EBP                             ; 00586f46
    POP EDI                             ; 00586f47
    POP ESI                             ; 00586f48
    POP EBX                             ; 00586f49
    RET                                 ; 00586f4a
    MOV ECX,0x6496ff                    ; 00586f4b | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00586f4b
    MOV EDI,0x39f                       ; 00586f50
    PUSH 0x649713                       ; 00586f55 | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00586f5a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00586f60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586f66
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00586f6b
    JMP 0x00586f13                      ; 00586f6e
        ;   XREF to: 00586f13 (UNCONDITIONAL_JUMP)  ; LAB_00586f13
    MOV EAX,0x649748                    ; 00586f70 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00586f70
    MOV EDX,0x3a3                       ; 00586f75
    PUSH 0x64975c                       ; 00586f7a | = "C3DSLight::setFilterFrame - invalid f..."
    MOV [0x02f0ca48],EAX                ; 00586f7f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00586f84 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586f8a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00586f8f
    JMP 0x00586f1f                      ; 00586f92
        ;   XREF to: 00586f1f (UNCONDITIONAL_JUMP)  ; LAB_00586f1f

