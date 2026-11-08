; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005663e0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004b7de0 at 004b7eb0
;   FUN_004e85a0 at 004e8e66
;   FUN_00564be0 at 005657d2
;
; Referenced Globals:
;   undefined4 DAT_02cf5fd0
;   undefined4 DAT_02cf6070
;   undefined4 DAT_02cf6108
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005663e0
        ;   Label: FUN_005663e0
    CMP dword ptr [0x02cf6108],0x0      ; 005663e4 | DAT_02cf6108
    JNZ 0x005663f0                      ; 005663eb
        ;   XREF to: 005663f0 (CONDITIONAL_JUMP)  ; LAB_005663f0
    XOR EAX,EAX                         ; 005663ed
    RET                                 ; 005663ef
    PUSH EAX                            ; 005663f0
        ;   Label: LAB_005663f0
    MOV [0x02cf5fd0],EAX                ; 005663f1 | DAT_02cf5fd0
    CALL dword ptr [0x02cf6070]         ; 005663f6 | DAT_02cf6070
    ADD ESP,0x4                         ; 005663fc
    RET                                 ; 005663ff

