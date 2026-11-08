; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1268(undefined4 param_1)
;
;
; XREF[17]:
;   FUN_004387f0 at 0043882b
;   FUN_0043e640 at 0043e658
;   FUN_00447d50 at 00447d6f
;   FUN_00457c40 at 00457c57
;   FUN_00466be0 at 00467096
;   FUN_00467650 at 004676e9
;   FUN_00468340 at 004683d8
;   FUN_0048aa40 at 0048aa6d
;   FUN_00494690 at 0049471e
;   FUN_00499ba0 at 00499be2
;   ... and 7 more
;
; Called Functions:
;   FUN_005c0f32
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c1268
        ;   Label: FUN_005c1268
    PUSH EDX                            ; 005c126c
    CALL FUN_005c0f32                   ; 005c126d
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 005c1272
    RET                                 ; 005c1275

