; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_FUN_00507350(int angle)
;
; Parameters:
; int              Stack[0x4]:4   angle
;
; XREF[4]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 at 004f91b1
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004feacd
;   engine_matrix.c_buildRotationMatrix_FUN_005076b0 at 005076c0
;   engine_matrix.c_matrixPushAndTransform_FUN_00507c70 at 00507dcc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507350
        ;   Label: engine_matrix.c_FUN_00507350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00507351
    MOV EAX,EBX                         ; 00507355
    SAR EAX,0x8                         ; 00507357
    AND EAX,0xff                        ; 0050735a
    MOV ECX,dword ptr [EAX*0x4 + 0x1d1d510] ; 0050735f
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1d514] ; 00507366
    AND EBX,0xff                        ; 0050736d
    SUB EDX,ECX                         ; 00507373
    IMUL EDX,EBX                        ; 00507375
    MOV EAX,EDX                         ; 00507378
    SAR EDX,0x1f                        ; 0050737a
    SHL EDX,0x8                         ; 0050737d
    SBB EAX,EDX                         ; 00507380
    SAR EAX,0x8                         ; 00507382
    ADD EAX,ECX                         ; 00507385
    POP EBX                             ; 00507387
    RET                                 ; 00507388

