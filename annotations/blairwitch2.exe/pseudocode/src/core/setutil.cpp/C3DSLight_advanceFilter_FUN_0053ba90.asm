; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0053ba90(C3DSLight *this_ptr,CDemonLight *light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 00489f60
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005e6384
;   TerminatedCString s_C3DSLight_advanceFilter_005e6398
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ba90
        ;   Label: core_setutil.cpp_C3DSLight_advanceFilter_FUN_0053ba90
    PUSH ESI                            ; 0053ba91
    PUSH EBP                            ; 0053ba92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053ba93
    CMP dword ptr [ESP + 0x14],0x0      ; 0053ba97
    JZ 0x0053baf5                       ; 0053ba9c
        ;   XREF to: 0053baf5 (CONDITIONAL_JUMP)  ; LAB_0053baf5
    CMP dword ptr [EBX + 0x11ec],0x0    ; 0053ba9e
        ;   Label: LAB_0053ba9e
    JLE 0x0053baf1                      ; 0053baa5
        ;   XREF to: 0053baf1 (CONDITIONAL_JUMP)  ; LAB_0053baf1
    MOV EBP,dword ptr [EBX + 0x1890]    ; 0053baa7
    INC EBP                             ; 0053baad
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0053baae
    MOV dword ptr [EBX + 0x1890],EBP    ; 0053bab4
    CMP EBP,EDX                         ; 0053baba
    JL 0x0053bac8                       ; 0053babc
        ;   XREF to: 0053bac8 (CONDITIONAL_JUMP)  ; LAB_0053bac8
    MOV dword ptr [EBX + 0x1890],0x0    ; 0053babe
    PUSH EDI                            ; 0053bac8
        ;   Label: LAB_0053bac8
    PUSH 0x0                            ; 0053bac9
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0053bacb
    PUSH 0x0                            ; 0053bad1
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 0053bad3
    PUSH ECX                            ; 0053bada
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 0053badb
    PUSH ESI                            ; 0053bae2
    MOV EDI,dword ptr [ESP + 0x28]      ; 0053bae3
    PUSH EDI                            ; 0053bae7
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600 ; 0053bae8
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0053baed
    POP EDI                             ; 0053baf0
    POP EBP                             ; 0053baf1
        ;   Label: LAB_0053baf1
    POP ESI                             ; 0053baf2
    POP EBX                             ; 0053baf3
    RET                                 ; 0053baf4
    MOV ECX,0x5e6384                    ; 0053baf5 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0053baf5
    MOV ESI,0x387                       ; 0053bafa
    PUSH 0x5e6398                       ; 0053baff | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01d046a0],ECX      ; 0053bb04 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0053bb0a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053bb10
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0053bb15
    JMP 0x0053ba9e                      ; 0053bb18
        ;   XREF to: 0053ba9e (UNCONDITIONAL_JUMP)  ; LAB_0053ba9e

