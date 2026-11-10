; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_FUN_004e86f0(int angle)
;
; Parameters:
; int              Stack[0x4]:4   angle
;
; XREF[4]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 at 004dbe71
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e178f
;   engine_matrix.c_buildRotationMatrix_FUN_004e8a10 at 004e8a2b
;   engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0 at 004e9139
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e86f0
        ;   Label: engine_matrix.c_FUN_004e86f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e86f1
    MOV EAX,EBX                         ; 004e86f5
    SAR EAX,0x8                         ; 004e86f7
    AND EAX,0xff                        ; 004e86fa
    MOV ECX,dword ptr [EAX*0x4 + 0x1d04bb4] ; 004e86ff
    MOV EDX,dword ptr [EAX*0x4 + 0x1d04bb8] ; 004e8706
    AND EBX,0xff                        ; 004e870d
    SUB EDX,ECX                         ; 004e8713
    IMUL EDX,EBX                        ; 004e8715
    MOV EAX,EDX                         ; 004e8718
    SAR EDX,0x1f                        ; 004e871a
    SHL EDX,0x8                         ; 004e871d
    SBB EAX,EDX                         ; 004e8720
    SAR EAX,0x8                         ; 004e8722
    ADD EAX,ECX                         ; 004e8725
    POP EBX                             ; 004e8727
    RET                                 ; 004e8728

