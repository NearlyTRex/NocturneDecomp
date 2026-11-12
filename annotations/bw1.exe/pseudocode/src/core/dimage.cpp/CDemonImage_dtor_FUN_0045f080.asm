; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_0045f080(CDemonImage *this_ptr,uint flags)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f080
        ;   Label: core_dimage.cpp_CDemonImage_dtor_FUN_0045f080
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045f081
    PUSH EBX                            ; 0045f085
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100 ; 0045f086
        ;   XREF to: 0045f100 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 0045f08b
    MOV EAX,EBX                         ; 0045f08e
    POP EBX                             ; 0045f090
    RET                                 ; 0045f091

