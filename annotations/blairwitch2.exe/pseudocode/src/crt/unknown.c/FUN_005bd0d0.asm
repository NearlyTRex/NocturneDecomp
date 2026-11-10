; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bd0d0(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; XREF[2]:
;   crt_unknown.c_FUN_005c1be0 at 005c1c18
;   crt_unknown.c_FUN_005c2180 at 005c21a1
;
; Referenced Globals:
;   void* PTR_ExitProcess_005c8534 = 001c8ce8
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2e0 = 005bce04
;   undefined4 DAT_0061f2ec
;   undefined4 DAT_02680170
;
; Called Functions:
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c32f4
;   crt_unknown.c_FUN_005c3388
;   ExitProcess
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02680170],0x0      ; 005bd0d0 | DAT_02680170
        ;   Label: crt_unknown.c_FUN_005bd0d0
    JZ 0x005bd0f4                       ; 005bd0d7
        ;   XREF to: 005bd0f4 (CONDITIONAL_JUMP)  ; LAB_005bd0f4
    CMP dword ptr [0x0061f2ec],0x0      ; 005bd0d9 | DAT_0061f2ec
    JZ 0x005bd10b                       ; 005bd0e0
        ;   XREF to: 005bd10b (CONDITIONAL_JUMP)  ; LAB_005bd10b
    PUSH 0xff                           ; 005bd0e2
    PUSH 0x0                            ; 005bd0e7
    CALL dword ptr [0x0061f2ec]         ; 005bd0e9 | DAT_0061f2ec
    ADD ESP,0x8                         ; 005bd0ef
    JMP 0x005bd10b                      ; 005bd0f2
        ;   XREF to: 005bd10b (UNCONDITIONAL_JUMP)  ; LAB_005bd10b
    CALL crt_unknown.c_FUN_005c32f4     ; 005bd0f4
        ;   XREF to: 005c32f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c32f4()
        ;   Label: LAB_005bd0f4
    MOV EDX,0xf                         ; 005bd0f9
    XOR EAX,EAX                         ; 005bd0fe
    CALL crt_unknown.c_FUN_005c3388     ; 005bd100
        ;   XREF to: 005c3388 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3388()
    CALL dword ptr [0x0061f2e0]         ; 005bd105 | PTR_crt_unknown.c_FUN_005bce04_0061f2e0
    MOV ECX,dword ptr [ESP]             ; 005bd10b
        ;   Label: LAB_005bd10b
    PUSH ECX                            ; 005bd10e
    CALL dword ptr CS:[0x5c8534]        ; 005bd10f | PTR_ExitProcess_005c8534

