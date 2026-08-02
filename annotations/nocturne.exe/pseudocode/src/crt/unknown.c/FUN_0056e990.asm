; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * crt_unknown_c_FUN_0056e990(undefined4 param_1)
;
;
; XREF[1]:
;   crt_startup.c_initialize_runtime_FUN_0056720c at 00567380
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_unknown.c_FUN_005713e0
;   crt_unknown.c_FUN_00571410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e990
        ;   Label: crt_unknown.c_FUN_0056e990
    PUSH ESI                            ; 0056e991
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056e992
    PUSH EDX                            ; 0056e996
    CALL crt_unknown.c_FUN_005713e0     ; 0056e997
        ;   XREF to: 005713e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005713e0()
    INC EAX                             ; 0056e99c
    ADD ESP,0x4                         ; 0056e99d
    LEA ESI,[EAX*0x2 + 0x0]             ; 0056e9a0
    PUSH ESI                            ; 0056e9a7
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0056e9a8
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0056e9ad
    MOV EBX,EAX                         ; 0056e9b0
    TEST EAX,EAX                        ; 0056e9b2
    JZ 0x0056e9c5                       ; 0056e9b4
        ;   XREF to: 0056e9c5 (CONDITIONAL_JUMP)  ; LAB_0056e9c5
    PUSH ESI                            ; 0056e9b6
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056e9b7
    PUSH ECX                            ; 0056e9bb
    PUSH EAX                            ; 0056e9bc
    CALL crt_unknown.c_FUN_00571410     ; 0056e9bd
        ;   XREF to: 00571410 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571410()
    ADD ESP,0xc                         ; 0056e9c2
    MOV EAX,EBX                         ; 0056e9c5
        ;   Label: LAB_0056e9c5
    POP ESI                             ; 0056e9c7
    POP EBX                             ; 0056e9c8
    RET                                 ; 0056e9c9

