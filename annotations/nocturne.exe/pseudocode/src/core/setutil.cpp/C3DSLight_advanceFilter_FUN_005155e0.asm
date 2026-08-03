; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(C3DSLight *this_ptr,CDemonLight *light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047af47
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00590eac
;   TerminatedCString s_C3DSLight_advanceFilter_00590ec0
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005155e0
        ;   Label: core_setutil.cpp_C3DSLight_advanceFilter_FUN_005155e0
    PUSH ESI                            ; 005155e1
    PUSH EBP                            ; 005155e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005155e3
    CMP dword ptr [ESP + 0x14],0x0      ; 005155e7
    JZ 0x00515645                       ; 005155ec
        ;   XREF to: 00515645 (CONDITIONAL_JUMP)  ; LAB_00515645
    CMP dword ptr [EBX + 0x11ec],0x0    ; 005155ee
        ;   Label: LAB_005155ee
    JLE 0x00515641                      ; 005155f5
        ;   XREF to: 00515641 (CONDITIONAL_JUMP)  ; LAB_00515641
    MOV EBP,dword ptr [EBX + 0x1890]    ; 005155f7
    INC EBP                             ; 005155fd
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 005155fe
    MOV dword ptr [EBX + 0x1890],EBP    ; 00515604
    CMP EBP,EDX                         ; 0051560a
    JL 0x00515618                       ; 0051560c
        ;   XREF to: 00515618 (CONDITIONAL_JUMP)  ; LAB_00515618
    MOV dword ptr [EBX + 0x1890],0x0    ; 0051560e
    PUSH EDI                            ; 00515618
        ;   Label: LAB_00515618
    PUSH 0x0                            ; 00515619
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0051561b
    PUSH 0x0                            ; 00515621
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 00515623
    PUSH ECX                            ; 0051562a
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 0051562b
    PUSH ESI                            ; 00515632
    MOV EDI,dword ptr [ESP + 0x28]      ; 00515633
    PUSH EDI                            ; 00515637
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 00515638
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0051563d
    POP EDI                             ; 00515640
    POP EBP                             ; 00515641
        ;   Label: LAB_00515641
    POP ESI                             ; 00515642
    POP EBX                             ; 00515643
    RET                                 ; 00515644
    MOV ECX,0x590eac                    ; 00515645 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00515645
    MOV ESI,0x354                       ; 0051564a
    PUSH 0x590ec0                       ; 0051564f | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01cc4800],ECX      ; 00515654 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051565a | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00515660
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00515665
    JMP 0x005155ee                      ; 00515668
        ;   XREF to: 005155ee (UNCONDITIONAL_JUMP)  ; LAB_005155ee

