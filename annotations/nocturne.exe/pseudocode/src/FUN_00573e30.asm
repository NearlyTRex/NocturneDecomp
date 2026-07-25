; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573e30(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   FUN_00573ed0 at 00573f6a
;
; Referenced Globals:
;   void* PTR_SetEvent_00575598 = 00175fd2
;   void* PTR_FUN_005c1abc = 005671dc
;   void* PTR_FUN_005c1afc = 00567208
;   undefined4 DAT_005c20cc
;   undefined4 DAT_02de4e30
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   FUN_005671dc
;   FUN_00567208
;   FUN_0056e608
;   FUN_0056eed8
;   FUN_00572e88
;   SetEvent
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573e30
        ;   Label: FUN_00573e30
    PUSH ESI                            ; 00573e31
    PUSH EDI                            ; 00573e32
    PUSH ES                             ; 00573e33
    PUSH FS                             ; 00573e34
    PUSH GS                             ; 00573e36
    PUSH EBP                            ; 00573e38
    MOV EBP,ESP                         ; 00573e39
    SUB ESP,0xc                         ; 00573e3b
    MOV ESI,dword ptr [EBP + 0x20]      ; 00573e3e
    MOV EDX,dword ptr [0x02de4e30]      ; 00573e41 | DAT_02de4e30
    MOV EAX,dword ptr [ESI]             ; 00573e47
    MOV EDI,dword ptr [ESI + 0x4]       ; 00573e49
    MOV dword ptr [EBP + -0x4],EAX      ; 00573e4c
    TEST EDX,EDX                        ; 00573e4f
    JNZ 0x00573e8a                      ; 00573e51
        ;   XREF to: 00573e8a (CONDITIONAL_JUMP)  ; LAB_00573e8a
    MOV EAX,[0x005c20cc]                ; 00573e53 | DAT_005c20cc
    ADD EAX,0x3                         ; 00573e58
    AND AL,0xfc                         ; 00573e5b
    SUB ESP,EAX                         ; 00573e5d
    MOV EBX,ESP                         ; 00573e5f
    MOV ECX,dword ptr [0x005c20cc]      ; 00573e61 | DAT_005c20cc
    PUSH ECX                            ; 00573e67
    PUSH EDX                            ; 00573e68
    PUSH EBX                            ; 00573e69
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00573e6a
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00573e6f
    MOV EAX,[0x005c20cc]                ; 00573e72 | DAT_005c20cc
    PUSH EBX                            ; 00573e77
    MOV dword ptr [EBX + 0xf0],EAX      ; 00573e78
    CALL FUN_0056e608                   ; 00573e7e
        ;   XREF to: 0056e608 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e608()
    ADD ESP,0x4                         ; 00573e83
    TEST EAX,EAX                        ; 00573e86
    JZ 0x00573ec1                       ; 00573e88
        ;   XREF to: 00573ec1 (CONDITIONAL_JUMP)  ; LAB_00573ec1
    CALL dword ptr [0x005c1abc]         ; 00573e8a | PTR_FUN_005c1abc
        ;   Label: LAB_00573e8a
    ADD EAX,0xde                        ; 00573e90
    MOV dword ptr [ESI + 0x10],EAX      ; 00573e95
    MOV EAX,dword ptr [ESI + 0xc]       ; 00573e98
    PUSH EAX                            ; 00573e9b
    CALL dword ptr CS:[0x575598]        ; 00573e9c | PTR_SetEvent_00575598
    LEA EAX,[EBP + -0xc]                ; 00573ea3
    PUSH EAX                            ; 00573ea6
    CALL FUN_0056eed8                   ; 00573ea7
        ;   XREF to: 0056eed8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056eed8()
    ADD ESP,0x4                         ; 00573eac
    CALL dword ptr [0x005c1afc]         ; 00573eaf | PTR_FUN_005c1afc
    PUSH EDI                            ; 00573eb5
    CALL dword ptr [EBP + -0x4]         ; 00573eb6
    ADD ESP,0x4                         ; 00573eb9
    CALL FUN_00572e88                   ; 00573ebc
        ;   XREF to: 00572e88 (UNCONDITIONAL_CALL)  ; undefined FUN_00572e88()
    MOV ESP,EBP                         ; 00573ec1
        ;   Label: LAB_00573ec1
    POP EBP                             ; 00573ec3
    POP GS                              ; 00573ec4
    POP FS                              ; 00573ec6
    POP ES                              ; 00573ec8
    POP EDI                             ; 00573ec9
    POP ESI                             ; 00573eca
    POP EBX                             ; 00573ecb
    RET                                 ; 00573ecc

