; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_dmodel_cpp_copyFloat_FUN_0047ef90(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047ef90
        ;   Label: core_dmodel.cpp_copyFloat_FUN_0047ef90
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ef94
    MOV EAX,dword ptr [EAX]             ; 0047ef98
    MOV dword ptr [EDX],EAX             ; 0047ef9a
    MOV EAX,EDX                         ; 0047ef9c
    RET                                 ; 0047ef9e

