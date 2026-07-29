; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_bugs_cpp_copyVectorToPair_FUN_00423cc0(CVector3i *dest,CVector3i *src)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   dest
; CVector3i *      Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00423cc0
        ;   Label: core_bugs.cpp_copyVectorToPair_FUN_00423cc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423cc4
    CMP EDX,EAX                         ; 00423cc8
    JNZ 0x00423cd4                      ; 00423cca
        ;   XREF to: 00423cd4 (CONDITIONAL_JUMP)  ; LAB_00423cd4
    ADD EDX,0xc                         ; 00423ccc
    CMP EDX,EAX                         ; 00423ccf
    JNZ 0x00423cec                      ; 00423cd1
        ;   XREF to: 00423cec (CONDITIONAL_JUMP)  ; LAB_00423cec
    RET                                 ; 00423cd3
    MOV ECX,dword ptr [EAX]             ; 00423cd4
        ;   Label: LAB_00423cd4
    MOV dword ptr [EDX],ECX             ; 00423cd6
    MOV ECX,dword ptr [EAX + 0x4]       ; 00423cd8
    MOV dword ptr [EDX + 0x4],ECX       ; 00423cdb
    MOV ECX,dword ptr [EAX + 0x8]       ; 00423cde
    MOV dword ptr [EDX + 0x8],ECX       ; 00423ce1
    ADD EDX,0xc                         ; 00423ce4
    CMP EDX,EAX                         ; 00423ce7
    JNZ 0x00423cec                      ; 00423ce9
        ;   XREF to: 00423cec (CONDITIONAL_JUMP)  ; LAB_00423cec
    RET                                 ; 00423ceb
    MOV ECX,dword ptr [EAX]             ; 00423cec
        ;   Label: LAB_00423cec
    MOV dword ptr [EDX],ECX             ; 00423cee
    MOV ECX,dword ptr [EAX + 0x4]       ; 00423cf0
    MOV dword ptr [EDX + 0x4],ECX       ; 00423cf3
    MOV ECX,dword ptr [EAX + 0x8]       ; 00423cf6
    MOV dword ptr [EDX + 0x8],ECX       ; 00423cf9
    RET                                 ; 00423cfc

