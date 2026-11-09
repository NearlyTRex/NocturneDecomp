; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(int param_1,CDemonLight *param_2)
;
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a265b
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005f1354
;   TerminatedCString s_C3DSLight_advanceFilter_005f1368
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d360
        ;   Label: core_setutil.cpp_C3DSLight_advanceFilter_FUN_0055d360
    PUSH ESI                            ; 0055d361
    PUSH EBP                            ; 0055d362
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055d363
    CMP dword ptr [ESP + 0x14],0x0      ; 0055d367
    JZ 0x0055d3c5                       ; 0055d36c
        ;   XREF to: 0055d3c5 (CONDITIONAL_JUMP)  ; LAB_0055d3c5
    CMP dword ptr [EBX + 0x11ec],0x0    ; 0055d36e
        ;   Label: LAB_0055d36e
    JLE 0x0055d3c1                      ; 0055d375
        ;   XREF to: 0055d3c1 (CONDITIONAL_JUMP)  ; LAB_0055d3c1
    MOV EBP,dword ptr [EBX + 0x1890]    ; 0055d377
    INC EBP                             ; 0055d37d
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0055d37e
    MOV dword ptr [EBX + 0x1890],EBP    ; 0055d384
    CMP EBP,EDX                         ; 0055d38a
    JL 0x0055d398                       ; 0055d38c
        ;   XREF to: 0055d398 (CONDITIONAL_JUMP)  ; LAB_0055d398
    MOV dword ptr [EBX + 0x1890],0x0    ; 0055d38e
    PUSH EDI                            ; 0055d398
        ;   Label: LAB_0055d398
    PUSH 0x0                            ; 0055d399
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0055d39b
    PUSH 0x0                            ; 0055d3a1
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 0055d3a3
    PUSH ECX                            ; 0055d3aa
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 0055d3ab
    PUSH ESI                            ; 0055d3b2
    MOV EDI,dword ptr [ESP + 0x28]      ; 0055d3b3
    PUSH EDI                            ; 0055d3b7
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 0055d3b8
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0055d3bd
    POP EDI                             ; 0055d3c0
    POP EBP                             ; 0055d3c1
        ;   Label: LAB_0055d3c1
    POP ESI                             ; 0055d3c2
    POP EBX                             ; 0055d3c3
    RET                                 ; 0055d3c4
    MOV ECX,0x5f1354                    ; 0055d3c5 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0055d3c5
    MOV ESI,0x387                       ; 0055d3ca
    PUSH 0x5f1368                       ; 0055d3cf | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01d1d400],ECX      ; 0055d3d4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0055d3da | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055d3e0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055d3e5
    JMP 0x0055d36e                      ; 0055d3e8
        ;   XREF to: 0055d36e (UNCONDITIONAL_JUMP)  ; LAB_0055d36e

