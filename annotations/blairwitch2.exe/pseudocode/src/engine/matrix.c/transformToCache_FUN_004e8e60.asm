; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_transformToCache_FUN_004e8e60(int cacheIndex,CVector3i *inputPoint)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
; CVector3i *      Stack[0x8]:4   inputPoint
;
; XREF[3]:
;   shape_edittool.cpp_FUN_0047fd00 at 0047fdaf
;   shape_edittool.cpp_FUN_00480000 at 0048003e
;   shape_edittool.cpp_FUN_00480150 at 0048028d
;
; Called Functions:
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8e60
        ;   Label: engine_matrix.c_transformToCache_FUN_004e8e60
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e8e61
    PUSH EDX                            ; 004e8e65
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e8e66
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e8e6a
    SUB EAX,EDX                         ; 004e8e71
    SHL EAX,0x4                         ; 004e8e73
    ADD EAX,0x622014                    ; 004e8e76
    PUSH EAX                            ; 004e8e7b
    CALL engine_special.cpp_FUN_0055d723 ; 004e8e7c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e8e81
    POP EBX                             ; 004e8e84
    RET                                 ; 004e8e85

