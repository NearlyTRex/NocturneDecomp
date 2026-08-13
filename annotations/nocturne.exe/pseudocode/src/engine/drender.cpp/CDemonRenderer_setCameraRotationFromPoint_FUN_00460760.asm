; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760(CDemonRenderer *this_ptr,CVector3i *rotation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   rotation
;
; Called Functions:
;   engine_matrix.c_setCameraRotation_FUN_004ce730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460760
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760
    MOV EAX,dword ptr [ESP + 0xc]       ; 00460761
    MOV EDX,dword ptr [EAX + 0x8]       ; 00460765
    PUSH EDX                            ; 00460768
    MOV ECX,dword ptr [EAX + 0x4]       ; 00460769
    PUSH ECX                            ; 0046076c
    MOV EBX,dword ptr [EAX]             ; 0046076d
    PUSH EBX                            ; 0046076f
    CALL engine_matrix.c_setCameraRotation_FUN_004ce730 ; 00460770
        ;   XREF to: 004ce730 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraRotation_FUN_004ce730(int pitch, int yaw, int roll)
    ADD ESP,0xc                         ; 00460775
    POP EBX                             ; 00460778
    RET                                 ; 00460779

