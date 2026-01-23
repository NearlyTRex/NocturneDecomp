; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
;
; Parameters:
; int              Stack[0x4]:4   angle
;
; XREF[5]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004fee6f
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 0050425c
;   engine_matrix.c_buildRotationMatrix_FUN_0050c920 at 0050c962
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 at 0050d06c
;   engine_matrix.c_matrixPushAndTransform_FUN_0050db00 at 0050dc43
;
; Referenced Globals:
;   int[257] g_SinTable
;   undefined4 g_SinTable[1]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c5c0
        ;   Label: engine_matrix.c_interpolatedSin_FUN_0050c5c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050c5c1
    MOV EAX,EBX                         ; 0050c5c5
    SAR EAX,0x8                         ; 0050c5c7
    AND EAX,0xff                        ; 0050c5ca
    MOV ECX,dword ptr [EAX*0x4 + 0x2f0cb5c] ; 0050c5cf | g_SinTable
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0cb60] ; 0050c5d6 | g_SinTable[1]
    AND EBX,0xff                        ; 0050c5dd
    SUB EDX,ECX                         ; 0050c5e3
    IMUL EDX,EBX                        ; 0050c5e5
    MOV EAX,EDX                         ; 0050c5e8
    SAR EDX,0x1f                        ; 0050c5ea
    SHL EDX,0x8                         ; 0050c5ed
    SBB EAX,EDX                         ; 0050c5f0
    SAR EAX,0x8                         ; 0050c5f2
    ADD EAX,ECX                         ; 0050c5f5
    POP EBX                             ; 0050c5f7
    RET                                 ; 0050c5f8

