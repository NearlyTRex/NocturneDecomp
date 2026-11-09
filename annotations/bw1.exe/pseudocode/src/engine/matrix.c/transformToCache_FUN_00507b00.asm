; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_transformToCache_FUN_00507b00(int cacheIndex,CVector3i *inputPoint)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
; CVector3i *      Stack[0x8]:4   inputPoint
;
; XREF[3]:
;   shape_edittool.cpp_FUN_00498360 at 0049840f
;   shape_edittool.cpp_FUN_00498660 at 0049869e
;   shape_edittool.cpp_FUN_004987ae at 004988ed
;
; Called Functions:
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507b00
        ;   Label: engine_matrix.c_transformToCache_FUN_00507b00
    MOV EDX,dword ptr [ESP + 0xc]       ; 00507b01
    PUSH EDX                            ; 00507b05
    MOV EDX,dword ptr [ESP + 0xc]       ; 00507b06
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507b0a
    SUB EAX,EDX                         ; 00507b11
    SHL EAX,0x4                         ; 00507b13
    ADD EAX,0x629014                    ; 00507b16
    PUSH EAX                            ; 00507b1b
    CALL engine_special.cpp_FUN_00580173 ; 00507b1c
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00507b21
    POP EBX                             ; 00507b24
    RET                                 ; 00507b25

