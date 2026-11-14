; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * crt_unknown_c_FUN_005cb060(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c50fc at 005c5270
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_unknown.c_FUN_005ccfc0
;   crt_unknown.c_FUN_005ccff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb060
        ;   Label: crt_unknown.c_FUN_005cb060
    PUSH ESI                            ; 005cb061
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cb062
    PUSH EDX                            ; 005cb066
    CALL crt_unknown.c_FUN_005ccfc0     ; 005cb067
        ;   XREF to: 005ccfc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ccfc0()
    INC EAX                             ; 005cb06c
    ADD ESP,0x4                         ; 005cb06d
    LEA ESI,[EAX*0x2 + 0x0]             ; 005cb070
    PUSH ESI                            ; 005cb077
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005cb078
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005cb07d
    MOV EBX,EAX                         ; 005cb080
    TEST EAX,EAX                        ; 005cb082
    JZ 0x005cb095                       ; 005cb084
        ;   XREF to: 005cb095 (CONDITIONAL_JUMP)  ; LAB_005cb095
    PUSH ESI                            ; 005cb086
    MOV ECX,dword ptr [ESP + 0x10]      ; 005cb087
    PUSH ECX                            ; 005cb08b
    PUSH EAX                            ; 005cb08c
    CALL crt_unknown.c_FUN_005ccff0     ; 005cb08d
        ;   XREF to: 005ccff0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ccff0()
    ADD ESP,0xc                         ; 005cb092
    MOV EAX,EBX                         ; 005cb095
        ;   Label: LAB_005cb095
    POP ESI                             ; 005cb097
    POP EBX                             ; 005cb098
    RET                                 ; 005cb099

