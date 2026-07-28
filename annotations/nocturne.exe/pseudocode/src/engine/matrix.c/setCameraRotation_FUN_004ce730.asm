; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_setCameraRotation_FUN_004ce730(int pitch,int yaw,int roll)
;
; Parameters:
; int              Stack[0x4]:4   pitch
; int              Stack[0x8]:4   yaw
; int              Stack[0xc]:4   roll
;
; XREF[1]:
;   engine_drender.cpp_FUN_00460760 at 00460770
;
; Referenced Globals:
;   undefined4 DAT_01c039d0
;   undefined4 DAT_01c039d4
;   undefined4 DAT_01c039d8
;
; Called Functions:
;   engine_matrix.c_buildRotationMatrix_FUN_004ccdc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce730
        ;   Label: engine_matrix.c_setCameraRotation_FUN_004ce730
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ce734
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce738
    PUSH EDX                            ; 004ce73c
    PUSH ECX                            ; 004ce73d
    MOV [0x01c039d0],EAX                ; 004ce73e | DAT_01c039d0
    PUSH EAX                            ; 004ce743
    MOV dword ptr [0x01c039d4],ECX      ; 004ce744 | DAT_01c039d4
    MOV dword ptr [0x01c039d8],EDX      ; 004ce74a | DAT_01c039d8
    CALL engine_matrix.c_buildRotationMatrix_FUN_004ccdc0 ; 004ce750
        ;   XREF to: 004ccdc0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_buildRotationMatrix_FUN_004ccdc0(int pitch, int yaw, int roll)
    ADD ESP,0xc                         ; 004ce755
    RET                                 ; 004ce758

