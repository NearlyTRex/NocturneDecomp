; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPoint_FUN_004e5570(int cacheIndex)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
;
; XREF[1]:
;   core_mirror.cpp_FUN_004f5130 at 004f5333
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;
; Called Functions:
;   engine_matrix.c_projectTransformedPoint_FUN_004e5590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5570
        ;   Label: engine_matrix.c_projectCachedPoint_FUN_004e5570
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5574
    SUB EAX,EDX                         ; 004e557b
    SHL EAX,0x4                         ; 004e557d
    ADD EAX,0x60b014                    ; 004e5580 | DAT_0060b014
    PUSH EAX                            ; 004e5585
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e5590 ; 004e5586
        ;   XREF to: 004e5590 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_004e5590()
    ADD ESP,0x4                         ; 004e558b
    RET                                 ; 004e558e

