; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_transformToCache_FUN_004cd210(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   shape_edittool.cpp_FUN_00472de0 at 00472e45
;   shape_edittool.cpp_FUN_00473080 at 004730bd
;   shape_edittool.cpp_FUN_00473190 at 00473277
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd210
        ;   Label: engine_matrix.c_transformToCache_FUN_004cd210
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cd211
    PUSH EDX                            ; 004cd215
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cd216
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd21a
    SUB EAX,EDX                         ; 004cd221
    SHL EAX,0x4                         ; 004cd223
    ADD EAX,0x5c5014                    ; 004cd226
    PUSH EAX                            ; 004cd22b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004cd22c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004cd231
    POP EBX                             ; 004cd234
    RET                                 ; 004cd235

