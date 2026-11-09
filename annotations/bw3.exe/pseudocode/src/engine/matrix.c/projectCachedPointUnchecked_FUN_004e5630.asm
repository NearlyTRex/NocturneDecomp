; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
;
; Parameters:
; int              Stack[0x4]:4   cache_index
;
; XREF[3]:
;   engine_3d.c_FUN_00407b30 at 00407d65
;   engine_3d.c_FUN_00407e30 at 0040806f
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 at 0046d7e2
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b018
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b020
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5630
        ;   Label: engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630
    PUSH ESI                            ; 004e5631
    PUSH EDI                            ; 004e5632
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e5633
    LEA ECX,[EAX*0x4 + 0x0]             ; 004e5637
    SUB ECX,EAX                         ; 004e563e
    MOV EAX,0x7fffffff                  ; 004e5640
    SHL ECX,0x4                         ; 004e5645
    MOV EDX,EAX                         ; 004e5648
    MOV EBX,dword ptr [ECX + 0x60b01c]  ; 004e564a | DAT_0060b01c
    SAR EDX,0x1f                        ; 004e5650
    IDIV EBX                            ; 004e5653
    MOV dword ptr [ECX + 0x60b020],EAX  ; 004e5655 | DAT_0060b020
    MOV EDX,dword ptr [0x01c6b598]      ; 004e565b | DAT_01c6b598
    MOV EBX,dword ptr [ECX + 0x60b01c]  ; 004e5661 | DAT_0060b01c
    MOV EAX,dword ptr [ECX + 0x60b014]  ; 004e5667 | DAT_0060b014
    IMUL EDX                            ; 004e566d
    IDIV EBX                            ; 004e566f
    MOV ESI,dword ptr [0x01c6b5a0]      ; 004e5671 | DAT_01c6b5a0
    ADD EAX,ESI                         ; 004e5677
    MOV dword ptr [ECX + 0x60b024],EAX  ; 004e5679 | DAT_0060b024
    MOV EDX,dword ptr [0x01c6b59c]      ; 004e567f | DAT_01c6b59c
    MOV EBX,dword ptr [ECX + 0x60b01c]  ; 004e5685 | DAT_0060b01c
    MOV EAX,dword ptr [ECX + 0x60b018]  ; 004e568b | DAT_0060b018
    IMUL EDX                            ; 004e5691
    IDIV EBX                            ; 004e5693
    MOV EDI,dword ptr [0x01c6b5a4]      ; 004e5695 | DAT_01c6b5a4
    ADD EAX,EDI                         ; 004e569b
    MOV dword ptr [ECX + 0x60b028],EAX  ; 004e569d | DAT_0060b028
    POP EDI                             ; 004e56a3
    POP ESI                             ; 004e56a4
    POP EBX                             ; 004e56a5
    RET                                 ; 004e56a6

