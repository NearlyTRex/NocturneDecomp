; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_dmodel_cpp_assignInt_FUN_0047efb0(int *dst,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dst
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047efb0
        ;   Label: core_dmodel.cpp_assignInt_FUN_0047efb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047efb4
    MOV EAX,dword ptr [EAX]             ; 0047efb8
    MOV dword ptr [EDX],EAX             ; 0047efba
    MOV EAX,EDX                         ; 0047efbc
    RET                                 ; 0047efbe

