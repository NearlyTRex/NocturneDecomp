; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_00448f20(CDemonImage *this_ptr,uint flags)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_00448fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448f20
        ;   Label: core_dimage.cpp_CDemonImage_dtor_FUN_00448f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448f21
    PUSH EBX                            ; 00448f25
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_00448fa0 ; 00448f26
        ;   XREF to: 00448fa0 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_00448fa0(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 00448f2b
    MOV EAX,EBX                         ; 00448f2e
    POP EBX                             ; 00448f30
    RET                                 ; 00448f31

