; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_boss_c_FUN_0041acc0(void)
;
;
; XREF[1]:
;   engine_model.c_FUN_004f8170 at 004f85da
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041acc0
        ;   Label: engine_boss.c_FUN_0041acc0
    PUSH EDI                            ; 0041acc1
    SUB ESP,0x34                        ; 0041acc2
    MOV EBX,ESI                         ; 0041acc5
    MOV EDX,0x5b72db                    ; 0041acc7
    MOV ECX,0x44                        ; 0041accc
    PUSH 0x5b72ec                       ; 0041acd1
    MOV dword ptr [0x01d71de0],EDX      ; 0041acd6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0041acdc | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0041ace2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0041ace7
    PUSH 0x34                           ; 0041acea
    PUSH 0x0                            ; 0041acec
    LEA EAX,[ESP + 0x8]                 ; 0041acee
    PUSH EAX                            ; 0041acf2
    MOV EDI,ESI                         ; 0041acf3
    LEA ESI,[ESP + 0xc]                 ; 0041acf5
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0041acf9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV ECX,0xd                         ; 0041acfe
    ADD ESP,0xc                         ; 0041ad03
    MOVSD.REP ES:EDI,ESI                ; 0041ad06
    MOV EAX,EBX                         ; 0041ad08
    ADD ESP,0x34                        ; 0041ad0a
    POP EDI                             ; 0041ad0d
    POP EBX                             ; 0041ad0e
    RET                                 ; 0041ad0f

