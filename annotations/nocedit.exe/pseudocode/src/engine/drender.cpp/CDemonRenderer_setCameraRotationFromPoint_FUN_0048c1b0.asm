; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0(CDemonRenderer *this_ptr,CVector3i *rotation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   rotation
;
; Called Functions:
;   engine_matrix.c_setCameraRotation_FUN_0050e290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c1b0
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048c1b1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048c1b5
    PUSH EDX                            ; 0048c1b8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048c1b9
    PUSH ECX                            ; 0048c1bc
    MOV EBX,dword ptr [EAX]             ; 0048c1bd
    PUSH EBX                            ; 0048c1bf
    CALL engine_matrix.c_setCameraRotation_FUN_0050e290 ; 0048c1c0
        ;   XREF to: 0050e290 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraRotation_FUN_0050e290(int pitch, int yaw, int roll)
    ADD ESP,0xc                         ; 0048c1c5
    POP EBX                             ; 0048c1c8
    RET                                 ; 0048c1c9

