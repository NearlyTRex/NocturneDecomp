; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a8210(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; XREF[2]:
;   crt_unknown.c_FUN_005acda0 at 005acdd8
;   crt_unknown.c_FUN_005ad2f0 at 005ad311
;
; Referenced Globals:
;   void* PTR_ExitProcess_005b3540 = 001b3cfe
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079dc = 005a7f44
;   undefined4 DAT_006079e8
;   undefined4 DAT_02d252b0
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005ae464
;   crt_unknown.c_FUN_005ae4f8
;   ExitProcess
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d252b0],0x0      ; 005a8210 | DAT_02d252b0
        ;   Label: crt_unknown.c_FUN_005a8210
    JZ 0x005a8234                       ; 005a8217
        ;   XREF to: 005a8234 (CONDITIONAL_JUMP)  ; LAB_005a8234
    CMP dword ptr [0x006079e8],0x0      ; 005a8219 | DAT_006079e8
    JZ 0x005a824b                       ; 005a8220
        ;   XREF to: 005a824b (CONDITIONAL_JUMP)  ; LAB_005a824b
    PUSH 0xff                           ; 005a8222
    PUSH 0x0                            ; 005a8227
    CALL dword ptr [0x006079e8]         ; 005a8229 | DAT_006079e8
    ADD ESP,0x8                         ; 005a822f
    JMP 0x005a824b                      ; 005a8232
        ;   XREF to: 005a824b (UNCONDITIONAL_JUMP)  ; LAB_005a824b
    CALL crt_unknown.c_FUN_005ae464     ; 005a8234
        ;   XREF to: 005ae464 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae464()
        ;   Label: LAB_005a8234
    MOV EDX,0xf                         ; 005a8239
    XOR EAX,EAX                         ; 005a823e
    CALL crt_unknown.c_FUN_005ae4f8     ; 005a8240
        ;   XREF to: 005ae4f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae4f8()
    CALL dword ptr [0x006079dc]         ; 005a8245 | PTR_crt_unknown.c_FUN_005a7f44_006079dc
    MOV ECX,dword ptr [ESP]             ; 005a824b
        ;   Label: LAB_005a824b
    PUSH ECX                            ; 005a824e
    CALL dword ptr CS:[0x5b3540]        ; 005a824f | PTR_ExitProcess_005b3540

