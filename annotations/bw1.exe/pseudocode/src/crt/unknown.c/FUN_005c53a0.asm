; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c53a0(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; XREF[2]:
;   crt_unknown.c_FUN_005c9f30 at 005c9f68
;   crt_unknown.c_FUN_005ca480 at 005ca4a1
;
; Referenced Globals:
;   void* PTR_ExitProcess_005d0544 = 001d0d10
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626638 = 005c50d4
;   undefined4 DAT_00626644
;   undefined4 DAT_02c9f060
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005cb5f4
;   crt_unknown.c_FUN_005cb688
;   ExitProcess
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c9f060],0x0      ; 005c53a0 | DAT_02c9f060
        ;   Label: crt_unknown.c_FUN_005c53a0
    JZ 0x005c53c4                       ; 005c53a7
        ;   XREF to: 005c53c4 (CONDITIONAL_JUMP)  ; LAB_005c53c4
    CMP dword ptr [0x00626644],0x0      ; 005c53a9 | DAT_00626644
    JZ 0x005c53db                       ; 005c53b0
        ;   XREF to: 005c53db (CONDITIONAL_JUMP)  ; LAB_005c53db
    PUSH 0xff                           ; 005c53b2
    PUSH 0x0                            ; 005c53b7
    CALL dword ptr [0x00626644]         ; 005c53b9 | DAT_00626644
    ADD ESP,0x8                         ; 005c53bf
    JMP 0x005c53db                      ; 005c53c2
        ;   XREF to: 005c53db (UNCONDITIONAL_JUMP)  ; LAB_005c53db
    CALL crt_unknown.c_FUN_005cb5f4     ; 005c53c4
        ;   XREF to: 005cb5f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb5f4()
        ;   Label: LAB_005c53c4
    MOV EDX,0xf                         ; 005c53c9
    XOR EAX,EAX                         ; 005c53ce
    CALL crt_unknown.c_FUN_005cb688     ; 005c53d0
        ;   XREF to: 005cb688 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb688()
    CALL dword ptr [0x00626638]         ; 005c53d5 | PTR_crt_unknown.c_FUN_005c50d4_00626638
    MOV ECX,dword ptr [ESP]             ; 005c53db
        ;   Label: LAB_005c53db
    PUSH ECX                            ; 005c53de
    CALL dword ptr CS:[0x5d0544]        ; 005c53df | PTR_ExitProcess_005d0544

