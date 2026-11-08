; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005600c0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004b5fd0 at 004b6089
;   FUN_004ebf10 at 004ec8ea
;   FUN_0055e8c0 at 0055f4b2
;
; Referenced Globals:
;   undefined4 DAT_0264bba4
;   undefined4 DAT_0264bc44
;   undefined4 DAT_0264bcdc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005600c0
        ;   Label: FUN_005600c0
    CMP dword ptr [0x0264bcdc],0x0      ; 005600c4 | DAT_0264bcdc
    JNZ 0x005600d0                      ; 005600cb
        ;   XREF to: 005600d0 (CONDITIONAL_JUMP)  ; LAB_005600d0
    XOR EAX,EAX                         ; 005600cd
    RET                                 ; 005600cf
    PUSH EAX                            ; 005600d0
        ;   Label: LAB_005600d0
    MOV [0x0264bba4],EAX                ; 005600d1 | DAT_0264bba4
    CALL dword ptr [0x0264bc44]         ; 005600d6 | DAT_0264bc44
    ADD ESP,0x4                         ; 005600dc
    RET                                 ; 005600df

