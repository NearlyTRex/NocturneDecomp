; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cea10(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   crt_unknown.c_FUN_005ceab0 at 005ceb4a
;
; Referenced Globals:
;   void* PTR_SetEvent_005d0638 = 001d119c
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;   void* PTR_crt_unknown.c_FUN_005c50f8_0062663c = 005c50f8
;   undefined4 DAT_00626ad4
;   undefined4 DAT_02c9f060
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c50cc
;   crt_unknown.c_FUN_005c50f8
;   crt_unknown.c_FUN_005cacd8
;   crt_unknown.c_FUN_005cb5a8
;   crt_unknown.c_FUN_005cdff8
;   SetEvent
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cea10
        ;   Label: crt_unknown.c_FUN_005cea10
    PUSH ESI                            ; 005cea11
    PUSH EDI                            ; 005cea12
    PUSH ES                             ; 005cea13
    PUSH FS                             ; 005cea14
    PUSH GS                             ; 005cea16
    PUSH EBP                            ; 005cea18
    MOV EBP,ESP                         ; 005cea19
    SUB ESP,0xc                         ; 005cea1b
    MOV ESI,dword ptr [EBP + 0x20]      ; 005cea1e
    MOV EDX,dword ptr [0x02c9f060]      ; 005cea21 | DAT_02c9f060
    MOV EAX,dword ptr [ESI]             ; 005cea27
    MOV EDI,dword ptr [ESI + 0x4]       ; 005cea29
    MOV dword ptr [EBP + -0x4],EAX      ; 005cea2c
    TEST EDX,EDX                        ; 005cea2f
    JNZ 0x005cea6a                      ; 005cea31
        ;   XREF to: 005cea6a (CONDITIONAL_JUMP)  ; LAB_005cea6a
    MOV EAX,[0x00626ad4]                ; 005cea33 | DAT_00626ad4
    ADD EAX,0x3                         ; 005cea38
    AND AL,0xfc                         ; 005cea3b
    SUB ESP,EAX                         ; 005cea3d
    MOV EBX,ESP                         ; 005cea3f
    MOV ECX,dword ptr [0x00626ad4]      ; 005cea41 | DAT_00626ad4
    PUSH ECX                            ; 005cea47
    PUSH EDX                            ; 005cea48
    PUSH EBX                            ; 005cea49
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005cea4a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005cea4f
    MOV EAX,[0x00626ad4]                ; 005cea52 | DAT_00626ad4
    PUSH EBX                            ; 005cea57
    MOV dword ptr [EBX + 0xf0],EAX      ; 005cea58
    CALL crt_unknown.c_FUN_005cacd8     ; 005cea5e
        ;   XREF to: 005cacd8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cacd8()
    ADD ESP,0x4                         ; 005cea63
    TEST EAX,EAX                        ; 005cea66
    JZ 0x005ceaa1                       ; 005cea68
        ;   XREF to: 005ceaa1 (CONDITIONAL_JUMP)  ; LAB_005ceaa1
    CALL dword ptr [0x006265fc]         ; 005cea6a | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: LAB_005cea6a
    ADD EAX,0xde                        ; 005cea70
    MOV dword ptr [ESI + 0x10],EAX      ; 005cea75
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cea78
    PUSH EAX                            ; 005cea7b
    CALL dword ptr CS:[0x5d0638]        ; 005cea7c | PTR_SetEvent_005d0638
    LEA EAX,[EBP + -0xc]                ; 005cea83
    PUSH EAX                            ; 005cea86
    CALL crt_unknown.c_FUN_005cb5a8     ; 005cea87
        ;   XREF to: 005cb5a8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb5a8()
    ADD ESP,0x4                         ; 005cea8c
    CALL dword ptr [0x0062663c]         ; 005cea8f | PTR_crt_unknown.c_FUN_005c50f8_0062663c
    PUSH EDI                            ; 005cea95
    CALL dword ptr [EBP + -0x4]         ; 005cea96
    ADD ESP,0x4                         ; 005cea99
    CALL crt_unknown.c_FUN_005cdff8     ; 005cea9c
        ;   XREF to: 005cdff8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cdff8()
    MOV ESP,EBP                         ; 005ceaa1
        ;   Label: LAB_005ceaa1
    POP EBP                             ; 005ceaa3
    POP GS                              ; 005ceaa4
    POP FS                              ; 005ceaa6
    POP ES                              ; 005ceaa8
    POP EDI                             ; 005ceaa9
    POP ESI                             ; 005ceaaa
    POP EBX                             ; 005ceaab
    RET                                 ; 005ceaac

