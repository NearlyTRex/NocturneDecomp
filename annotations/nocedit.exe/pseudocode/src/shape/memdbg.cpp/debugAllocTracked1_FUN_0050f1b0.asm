; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(int size,char *filename,int line_number)
;
; Parameters:
; int              Stack[0x4]:4   size
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   line_number
;
; XREF[147]:
;   core_ammo.cpp_factoryFunc_FUN_00410d80 at 00410d8c
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_00411700 at 00411752
;   core_ammobox.cpp_factoryFunc_FUN_00411560 at 0041156c
;   core_anvil.cpp_factoryFunc_FUN_00411ca0 at 00411cac
;   core_armour.cpp_factoryFunc_FUN_00412160 at 0041216c
;   core_backgnd.cpp_factoryFunc_FUN_00412770 at 0041277c
;   core_baron.cpp_factoryFuncBaronWeapon_FUN_00413d00 at 00413d0f
;   core_baron.cpp_factoryFuncBaron_FUN_00412b80 at 00412b8c
;   core_barrier.cpp_factoryFunc_FUN_00414180 at 0041418c
;   core_bat.cpp_factoryFunc_FUN_00414790 at 0041479c
;   ... and 137 more
;
; Called Functions:
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f1b0
        ;   Label: shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050f1b1
    PUSH EDX                            ; 0050f1b5
    MOV ECX,dword ptr [ESP + 0x10]      ; 0050f1b6
    PUSH ECX                            ; 0050f1ba
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050f1bb
    PUSH EBX                            ; 0050f1bf
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0050f1c0
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f1c5
    POP EBX                             ; 0050f1c8
    RET                                 ; 0050f1c9

