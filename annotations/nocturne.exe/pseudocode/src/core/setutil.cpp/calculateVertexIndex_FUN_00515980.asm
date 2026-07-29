; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setutil_cpp_calculateVertexIndex_FUN_00515980(int row_index,int column_index)
;
; Parameters:
; int              Stack[0x4]:4   row_index
; int              Stack[0x8]:4   column_index
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00515980
        ;   Label: core_setutil.cpp_calculateVertexIndex_FUN_00515980
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515984
    ADD EAX,EDX                         ; 0051598b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051598d
    ADD EAX,EAX                         ; 00515991
    ADD EAX,EDX                         ; 00515993
    RET                                 ; 00515995

