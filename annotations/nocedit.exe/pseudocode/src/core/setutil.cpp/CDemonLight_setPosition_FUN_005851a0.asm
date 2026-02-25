; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_CDemonLight_setPosition_FUN_005851a0(CDemonLight *this_ptr,CVector3i *position)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   position
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005851a0
        ;   Label: core_setutil.cpp_CDemonLight_setPosition_FUN_005851a0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005851a4
    ADD EAX,0x4                         ; 005851a8
    CMP EAX,EDX                         ; 005851ab
    JNZ 0x005851b0                      ; 005851ad
        ;   XREF to: 005851b0 (CONDITIONAL_JUMP)  ; LAB_005851b0
    RET                                 ; 005851af
    MOV ECX,dword ptr [EDX]             ; 005851b0
        ;   Label: LAB_005851b0
    MOV dword ptr [EAX],ECX             ; 005851b2
    MOV ECX,dword ptr [EDX + 0x4]       ; 005851b4
    MOV dword ptr [EAX + 0x4],ECX       ; 005851b7
    MOV ECX,dword ptr [EDX + 0x8]       ; 005851ba
    MOV dword ptr [EAX + 0x8],ECX       ; 005851bd
    RET                                 ; 005851c0

