; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_boss_c_FUN_0041d980(void)
;
;
; XREF[1]:
;   engine_model.c_FUN_0051f920 at 0051fd8a
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d980
        ;   Label: engine_boss.c_FUN_0041d980
    PUSH EDI                            ; 0041d981
    SUB ESP,0x34                        ; 0041d982
    MOV EBX,ESI                         ; 0041d985
    MOV EDX,0x5d49f2                    ; 0041d987
    MOV ECX,0x44                        ; 0041d98c
    PUSH 0x5d4a03                       ; 0041d991
    MOV dword ptr [0x01d1d400],EDX      ; 0041d996 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0041d99c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0041d9a2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041d9a7
    PUSH 0x34                           ; 0041d9aa
    PUSH 0x0                            ; 0041d9ac
    LEA EAX,[ESP + 0x8]                 ; 0041d9ae
    PUSH EAX                            ; 0041d9b2
    MOV EDI,ESI                         ; 0041d9b3
    LEA ESI,[ESP + 0xc]                 ; 0041d9b5
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0041d9b9
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV ECX,0xd                         ; 0041d9be
    ADD ESP,0xc                         ; 0041d9c3
    MOVSD.REP ES:EDI,ESI                ; 0041d9c6
    MOV EAX,EBX                         ; 0041d9c8
    ADD ESP,0x34                        ; 0041d9ca
    POP EDI                             ; 0041d9cd
    POP EBX                             ; 0041d9ce
    RET                                 ; 0041d9cf

