; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0055d3f0(C3DSLight *this_ptr,int frame_index,CDemonLight *light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CDemonLight *    Stack[0xc]:4   light
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a5712
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005f139d
;   TerminatedCString s_C3DSLight_advanceFilter_005f13b1
;   TerminatedCString s_core_setutil_cpp_005f13e6
;   TerminatedCString s_C3DSLight_setFilterFrame_005f13fa
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d3f0
        ;   Label: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_0055d3f0
    PUSH ESI                            ; 0055d3f1
    PUSH EDI                            ; 0055d3f2
    PUSH EBP                            ; 0055d3f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055d3f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0055d3f8
    CMP dword ptr [ESP + 0x1c],0x0      ; 0055d3fc
    JZ 0x0055d43b                       ; 0055d401
        ;   XREF to: 0055d43b (CONDITIONAL_JUMP)  ; LAB_0055d43b
    TEST ESI,ESI                        ; 0055d403
        ;   Label: LAB_0055d403
    JL 0x0055d460                       ; 0055d405
        ;   XREF to: 0055d460 (CONDITIONAL_JUMP)  ; LAB_0055d460
    CMP ESI,dword ptr [EBX + 0x11ec]    ; 0055d407
    JGE 0x0055d460                      ; 0055d40d
        ;   XREF to: 0055d460 (CONDITIONAL_JUMP)  ; LAB_0055d460
    PUSH 0x0                            ; 0055d40f
        ;   Label: LAB_0055d40f
    MOV dword ptr [EBX + 0x1890],ESI    ; 0055d411
    PUSH 0x0                            ; 0055d417
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0x1774] ; 0055d419
    PUSH ECX                            ; 0055d420
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1810] ; 0055d421
    PUSH EDI                            ; 0055d428
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0055d429
    PUSH EBP                            ; 0055d42d
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 0055d42e
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0055d433
    POP EBP                             ; 0055d436
    POP EDI                             ; 0055d437
    POP ESI                             ; 0055d438
    POP EBX                             ; 0055d439
    RET                                 ; 0055d43a
    MOV ECX,0x5f139d                    ; 0055d43b | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0055d43b
    MOV EDI,0x39f                       ; 0055d440
    PUSH 0x5f13b1                       ; 0055d445 | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01d1d400],ECX      ; 0055d44a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0055d450 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055d456
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055d45b
    JMP 0x0055d403                      ; 0055d45e
        ;   XREF to: 0055d403 (UNCONDITIONAL_JUMP)  ; LAB_0055d403
    MOV EAX,0x5f13e6                    ; 0055d460 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0055d460
    MOV EDX,0x3a3                       ; 0055d465
    PUSH 0x5f13fa                       ; 0055d46a | = "C3DSLight::setFilterFrame - invalid f..."
    MOV [0x01d1d400],EAX                ; 0055d46f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0055d474 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055d47a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055d47f
    JMP 0x0055d40f                      ; 0055d482
        ;   XREF to: 0055d40f (UNCONDITIONAL_JUMP)  ; LAB_0055d40f

