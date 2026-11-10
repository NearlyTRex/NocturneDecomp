; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPoint_FUN_00507b30(int cacheIndex)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
;
; XREF[1]:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00519960 at 00519b63
;
; Referenced Globals:
;   undefined4 DAT_00629014
;
; Called Functions:
;   engine_matrix.c_projectTransformedPoint_FUN_00507b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00507b30
        ;   Label: engine_matrix.c_projectCachedPoint_FUN_00507b30
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507b34
    SUB EAX,EDX                         ; 00507b3b
    SHL EAX,0x4                         ; 00507b3d
    ADD EAX,0x629014                    ; 00507b40 | DAT_00629014
    PUSH EAX                            ; 00507b45
    CALL engine_matrix.c_projectTransformedPoint_FUN_00507b50 ; 00507b46
        ;   XREF to: 00507b50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_00507b50()
    ADD ESP,0x4                         ; 00507b4b
    RET                                 ; 00507b4e

