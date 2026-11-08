; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00489ff0(int param_1,undefined4 param_2)
;
;
; XREF[24]:
;   FUN_004179b0 at 004183f7
;   FUN_00419b40 at 0041a537
;   FUN_00425da0 at 00426eef
;   FUN_00442a20 at 004437f1
;   FUN_00445130 at 00445501
;   FUN_00455080 at 004564db
;   FUN_004628b0 at 00462e71
;   FUN_004c5350 at 004c5a1c
;   FUN_004c6eb0 at 004c7fca
;   FUN_004d56b0 at 004d5c00
;   ... and 14 more
;
; Referenced Globals:
;   undefined4 s_Capture_005bdcf6+1
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21504
;
; Called Functions:
;   FUN_004333e0
;   FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489ff0
        ;   Label: FUN_00489ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00489ff1
    MOV EAX,[0x005fe9dc]                ; 00489ff5 | DAT_005fe9dc
    CMP dword ptr [EAX + 0x1f8],0x0     ; 00489ffa | DAT_01d21504
    JNZ 0x0048a01b                      ; 0048a001
        ;   XREF to: 0048a01b (CONDITIONAL_JUMP)  ; LAB_0048a01b
    PUSH 0x5bdcf7                       ; 0048a003 | s_Capture_005bdcf6+1
    MOV ECX,dword ptr [0x005fba60]      ; 0048a008 | DAT_005fba60
    PUSH ECX                            ; 0048a00e
    CALL FUN_00491aa0                   ; 0048a00f
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 0048a014
    TEST EAX,EAX                        ; 0048a017
    JZ 0x0048a02c                       ; 0048a019
        ;   XREF to: 0048a02c (CONDITIONAL_JUMP)  ; LAB_0048a02c
    PUSH 0x0                            ; 0048a01b
        ;   Label: LAB_0048a01b
    PUSH dword ptr [ESP + 0x10]         ; 0048a01d
    PUSH EBX                            ; 0048a021
    CALL FUN_004333e0                   ; 0048a022
        ;   XREF to: 004333e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004333e0()
    ADD ESP,0xc                         ; 0048a027
    POP EBX                             ; 0048a02a
    RET                                 ; 0048a02b
    LEA EAX,[EBX + 0xcdf0]              ; 0048a02c
        ;   Label: LAB_0048a02c
    PUSH EAX                            ; 0048a032
    PUSH dword ptr [ESP + 0x10]         ; 0048a033
    PUSH EBX                            ; 0048a037
    CALL FUN_004333e0                   ; 0048a038
        ;   XREF to: 004333e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004333e0()
    ADD ESP,0xc                         ; 0048a03d
    POP EBX                             ; 0048a040
    RET                                 ; 0048a041

