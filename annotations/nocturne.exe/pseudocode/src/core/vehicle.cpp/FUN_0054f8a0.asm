; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vehicle_cpp_FUN_0054f8a0(undefined4 param_1)
;
;
; XREF[1]:
;   core_vehicle.cpp_FUN_0054f7f0 at 0054f815
;
; Referenced Globals:
;   WatcomTypeInfo g_CTireTypeInfo_005a3d20
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a3d20                       ; 0054f8a0 | g_CTireTypeInfo_005a3d20
        ;   Label: core_vehicle.cpp_FUN_0054f8a0
    PUSH 0x4                            ; 0054f8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054f8a7
    PUSH EDX                            ; 0054f8ab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0054f8ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0054f8b1
    RET                                 ; 0054f8b4

