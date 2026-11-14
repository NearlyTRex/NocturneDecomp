; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005afed4(int param_1)
;
;
; XREF[5]:
;   crt_unknown.c_FUN_005aff40 at 005aff52
;   crt_unknown.c_FUN_005affa0 at 005affa3
;   crt_unknown.c_FUN_005b0048 at 005b004b
;   crt_unknown.c_FUN_005b0088 at 005b00e6
;   crt_unknown.c_processSignal_FUN_005b0148 at 005b014f
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;   undefined4 DAT_00607e88
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afed4
        ;   Label: crt_unknown.c_FUN_005afed4
    MOV EBX,dword ptr [ESP + 0x8]       ; 005afed5
    CMP EBX,0x7                         ; 005afed9
    JZ 0x005afee3                       ; 005afedc
        ;   XREF to: 005afee3 (CONDITIONAL_JUMP)  ; LAB_005afee3
    CMP EBX,0x4                         ; 005afede
    JNZ 0x005afeec                      ; 005afee1
        ;   XREF to: 005afeec (CONDITIONAL_JUMP)  ; LAB_005afeec
    MOV EAX,dword ptr [EBX*0x8 + 0x607e88] ; 005afee3 | DAT_00607e88
        ;   Label: LAB_005afee3
    POP EBX                             ; 005afeea
    RET                                 ; 005afeeb
    CALL dword ptr [0x006079a0]         ; 005afeec | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: LAB_005afeec
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x58] ; 005afef2
    POP EBX                             ; 005afef6
    RET                                 ; 005afef7

