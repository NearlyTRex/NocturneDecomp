; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cb5f4(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c53a0 at 005c53c4
;   crt_unknown.c_FUN_005ceba8 at 005cebae
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005cb5f4 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: crt_unknown.c_FUN_005cb5f4
    MOV EAX,dword ptr [EAX + 0x54]      ; 005cb5fa
    TEST EAX,EAX                        ; 005cb5fd
    JZ 0x005cb608                       ; 005cb5ff
        ;   XREF to: 005cb608 (CONDITIONAL_JUMP)  ; LAB_005cb608
    MOV EAX,dword ptr [EAX]             ; 005cb601
    XOR EDX,EDX                         ; 005cb603
    MOV dword ptr FS:[EDX],EAX          ; 005cb605
    CALL dword ptr [0x006265fc]         ; 005cb608 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: LAB_005cb608
    MOV dword ptr [EAX + 0x54],0x0      ; 005cb60e
    RET                                 ; 005cb615

