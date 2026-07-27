; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPoint_FUN_004cd240(int param_1)
;
;
; XREF[2]:
;   core_mirror.cpp_FUN_004d74a0 at 004d76a3
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0 at 004914d8
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;
; Called Functions:
;   engine_matrix.c_projectTransformedPoint_FUN_004cd260
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd240
        ;   Label: engine_matrix.c_projectCachedPoint_FUN_004cd240
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd244
    SUB EAX,EDX                         ; 004cd24b
    SHL EAX,0x4                         ; 004cd24d
    ADD EAX,0x5c5014                    ; 004cd250 | DAT_005c5014
    PUSH EAX                            ; 004cd255
    CALL engine_matrix.c_projectTransformedPoint_FUN_004cd260 ; 004cd256
        ;   XREF to: 004cd260 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_004cd260()
    ADD ESP,0x4                         ; 004cd25b
    RET                                 ; 004cd25e

