; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_matrix_c_interpolatedCos_FUN_0050c600(int angle)
;
; Parameters:
; int              Stack[0x4]:4   angle
;
; XREF[5]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004fee80
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 00504289
;   engine_matrix.c_buildRotationMatrix_FUN_0050c920 at 0050c971
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 at 0050d061
;   engine_matrix.c_matrixPushAndTransform_FUN_0050db00 at 0050dc54
;
; Referenced Globals:
;   int[257] g_CosTable
;   undefined4 g_CosTable[1]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c600
        ;   Label: engine_matrix.c_interpolatedCos_FUN_0050c600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050c601
    MOV EAX,EBX                         ; 0050c605
    SAR EAX,0x8                         ; 0050c607
    AND EAX,0xff                        ; 0050c60a
    MOV ECX,dword ptr [EAX*0x4 + 0x2f0cf60] ; 0050c60f | g_CosTable
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0cf64] ; 0050c616 | g_CosTable[1]
    AND EBX,0xff                        ; 0050c61d
    SUB EDX,ECX                         ; 0050c623
    IMUL EDX,EBX                        ; 0050c625
    MOV EAX,EDX                         ; 0050c628
    SAR EDX,0x1f                        ; 0050c62a
    SHL EDX,0x8                         ; 0050c62d
    SBB EAX,EDX                         ; 0050c630
    SAR EAX,0x8                         ; 0050c632
    ADD EAX,ECX                         ; 0050c635
    POP EBX                             ; 0050c637
    RET                                 ; 0050c638

