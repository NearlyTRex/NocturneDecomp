; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad2c4(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005a6144 at 005a6163
;   FUN_005ad1e0 at 005ad283
;
; Referenced Globals:
;   void* PTR_FUN_00607d78 = 005ad2c0
;   undefined4 DAT_02d252b0
;
; Called Functions:
;   FUN_005ad2c0
;   FUN_005ad2f0
;   FUN_005ae4f8
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00607d78]         ; 005ad2c4 | PTR_FUN_00607d78
        ;   Label: FUN_005ad2c4
    CMP byte ptr [0x02d252b0],0x0       ; 005ad2ca | DAT_02d252b0
    JNZ 0x005ad2e2                      ; 005ad2d1
        ;   XREF to: 005ad2e2 (CONDITIONAL_JUMP)  ; LAB_005ad2e2
    MOV EDX,0xff                        ; 005ad2d3
    MOV EAX,0x10                        ; 005ad2d8
    CALL FUN_005ae4f8                   ; 005ad2dd
        ;   XREF to: 005ae4f8 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae4f8()
    MOV EDX,dword ptr [ESP + 0x4]       ; 005ad2e2
        ;   Label: LAB_005ad2e2
    PUSH EDX                            ; 005ad2e6
    CALL FUN_005ad2f0                   ; 005ad2e7
        ;   XREF to: 005ad2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad2f0()
    ADD ESP,0x4                         ; 005ad2ec
    RET                                 ; 005ad2ef

