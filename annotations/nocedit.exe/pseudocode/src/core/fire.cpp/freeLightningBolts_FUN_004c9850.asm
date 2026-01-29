; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt **array)
;
; Parameters:
; CLightningBolt * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightningBoltTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65df70                       ; 004c9850 | g_CLightningBoltTypeInfo
        ;   Label: core_fire.cpp_freeLightningBolts_FUN_004c9850
    PUSH 0xa                            ; 004c9855
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9857
    PUSH EDX                            ; 004c985b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c985c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9861
    RET                                 ; 004c9864

