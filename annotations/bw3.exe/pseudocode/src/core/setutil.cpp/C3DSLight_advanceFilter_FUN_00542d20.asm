; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00542d20(C3DSLight *this_ptr,CDemonLight *light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048cc32
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005d0ffd
;   TerminatedCString s_C3DSLight_advanceFilter_005d1011
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542d20
        ;   Label: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00542d20
    PUSH ESI                            ; 00542d21
    PUSH EBP                            ; 00542d22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00542d23
    CMP dword ptr [ESP + 0x14],0x0      ; 00542d27
    JZ 0x00542d85                       ; 00542d2c
        ;   XREF to: 00542d85 (CONDITIONAL_JUMP)  ; LAB_00542d85
    CMP dword ptr [EBX + 0x11ec],0x0    ; 00542d2e
        ;   Label: LAB_00542d2e
    JLE 0x00542d81                      ; 00542d35
        ;   XREF to: 00542d81 (CONDITIONAL_JUMP)  ; LAB_00542d81
    MOV EBP,dword ptr [EBX + 0x1890]    ; 00542d37
    INC EBP                             ; 00542d3d
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00542d3e
    MOV dword ptr [EBX + 0x1890],EBP    ; 00542d44
    CMP EBP,EDX                         ; 00542d4a
    JL 0x00542d58                       ; 00542d4c
        ;   XREF to: 00542d58 (CONDITIONAL_JUMP)  ; LAB_00542d58
    MOV dword ptr [EBX + 0x1890],0x0    ; 00542d4e
    PUSH EDI                            ; 00542d58
        ;   Label: LAB_00542d58
    PUSH 0x0                            ; 00542d59
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00542d5b
    PUSH 0x0                            ; 00542d61
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 00542d63
    PUSH ECX                            ; 00542d6a
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 00542d6b
    PUSH ESI                            ; 00542d72
    MOV EDI,dword ptr [ESP + 0x28]      ; 00542d73
    PUSH EDI                            ; 00542d77
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40 ; 00542d78
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00542d7d
    POP EDI                             ; 00542d80
    POP EBP                             ; 00542d81
        ;   Label: LAB_00542d81
    POP ESI                             ; 00542d82
    POP EBX                             ; 00542d83
    RET                                 ; 00542d84
    MOV ECX,0x5d0ffd                    ; 00542d85 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00542d85
    MOV ESI,0x387                       ; 00542d8a
    PUSH 0x5d1011                       ; 00542d8f | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01d71de0],ECX      ; 00542d94 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00542d9a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00542da0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00542da5
    JMP 0x00542d2e                      ; 00542da8
        ;   XREF to: 00542d2e (UNCONDITIONAL_JUMP)  ; LAB_00542d2e

