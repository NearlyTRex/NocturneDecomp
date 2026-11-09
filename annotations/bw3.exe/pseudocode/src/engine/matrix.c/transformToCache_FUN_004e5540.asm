; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_transformToCache_FUN_004e5540(int cacheIndex,CVector3i *inputPoint)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
; CVector3i *      Stack[0x8]:4   inputPoint
;
; XREF[3]:
;   shape_edittool.cpp_FUN_00480f00 at 00480faf
;   shape_edittool.cpp_FUN_00481200 at 0048123e
;   shape_edittool.cpp_FUN_00481350 at 0048148d
;
; Called Functions:
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5540
        ;   Label: engine_matrix.c_transformToCache_FUN_004e5540
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e5541
    PUSH EDX                            ; 004e5545
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e5546
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e554a
    SUB EAX,EDX                         ; 004e5551
    SHL EAX,0x4                         ; 004e5553
    ADD EAX,0x60b014                    ; 004e5556
    PUSH EAX                            ; 004e555b
    CALL engine_special.cpp_FUN_005632a3 ; 004e555c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e5561
    POP EBX                             ; 004e5564
    RET                                 ; 004e5565

