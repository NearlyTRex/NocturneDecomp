; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c8d24(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c50e8 at 005c50ed
;   crt_unknown.c_FUN_005cab54 at 005cab71
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626630 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626634 = 005c50d4
;   undefined4 DAT_00626838
;   undefined4 DAT_0062683c
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8d24
        ;   Label: crt_unknown.c_FUN_005c8d24
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c8d25
    CALL dword ptr [0x00626630]         ; 005c8d29 | PTR_crt_unknown.c_FUN_005c50d4_00626630
    TEST EBX,EBX                        ; 005c8d2f
    JLE 0x005c8d48                      ; 005c8d31
        ;   XREF to: 005c8d48 (CONDITIONAL_JUMP)  ; LAB_005c8d48
    CMP EBX,dword ptr [0x0062683c]      ; 005c8d33 | DAT_0062683c
    JGE 0x005c8d48                      ; 005c8d39
        ;   XREF to: 005c8d48 (CONDITIONAL_JUMP)  ; LAB_005c8d48
    MOV EDX,dword ptr [0x00626838]      ; 005c8d3b | DAT_00626838
    MOV dword ptr [EDX + EBX*0x4],0x0   ; 005c8d41
    CALL dword ptr [0x00626634]         ; 005c8d48 | PTR_crt_unknown.c_FUN_005c50d4_00626634
        ;   Label: LAB_005c8d48
    POP EBX                             ; 005c8d4e
    RET                                 ; 005c8d4f

