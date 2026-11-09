; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPoint_FUN_004e8e90(int cacheIndex)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
;
; XREF[1]:
;   core_mirror.cpp_FUN_004faa10 at 004fac13
;
; Referenced Globals:
;   undefined4 DAT_00622014
;
; Called Functions:
;   engine_matrix.c_projectTransformedPoint_FUN_004e8eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e8e90
        ;   Label: engine_matrix.c_projectCachedPoint_FUN_004e8e90
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e8e94
    SUB EAX,EDX                         ; 004e8e9b
    SHL EAX,0x4                         ; 004e8e9d
    ADD EAX,0x622014                    ; 004e8ea0 | DAT_00622014
    PUSH EAX                            ; 004e8ea5
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e8eb0 ; 004e8ea6
        ;   XREF to: 004e8eb0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_004e8eb0()
    ADD ESP,0x4                         ; 004e8eab
    RET                                 ; 004e8eae

