; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setutil_cpp_calculateVertexIndex_FUN_00587b30(int row_index,int column_index)
;
; Parameters:
; int              Stack[0x4]:4   row_index
; int              Stack[0x8]:4   column_index
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00587b30
        ;   Label: core_setutil.cpp_calculateVertexIndex_FUN_00587b30
    LEA EAX,[EDX*0x4 + 0x0]             ; 00587b34
    ADD EAX,EDX                         ; 00587b3b
    MOV EDX,dword ptr [ESP + 0x8]       ; 00587b3d
    ADD EAX,EAX                         ; 00587b41
    ADD EAX,EDX                         ; 00587b43
    RET                                 ; 00587b45

