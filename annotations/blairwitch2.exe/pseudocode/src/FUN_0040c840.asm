; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c840(int param_1,undefined4 param_2)
;
;
; XREF[59]:
;   FUN_0040a050 at 0040a419
;   FUN_0040cb60 at 0040cbed
;   FUN_0040e490 at 0040e49a
;   FUN_0040e950 at 0040e96a
;   FUN_00410e20 at 00410e4f
;   FUN_00412f40 at 00413930
;   FUN_004147b0 at 004147ba
;   FUN_00419520 at 004199f4
;   FUN_0041ccc0 at 0041cce2
;   FUN_00426e70 at 00426ea4
;   ... and 49 more
;
; Called Functions:
;   FUN_0040c8a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c840
        ;   Label: FUN_0040c840
    TEST EAX,EAX                        ; 0040c844
    JNZ 0x0040c849                      ; 0040c846
        ;   XREF to: 0040c849 (CONDITIONAL_JUMP)  ; LAB_0040c849
    RET                                 ; 0040c848
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c849
        ;   Label: LAB_0040c849
    PUSH EDX                            ; 0040c84d
    PUSH EAX                            ; 0040c84e
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0040c84f
    CALL dword ptr [EDX + 0xd4]         ; 0040c855
    ADD ESP,0x4                         ; 0040c85b
    PUSH EAX                            ; 0040c85e
    CALL FUN_0040c8a0                   ; 0040c85f
        ;   XREF to: 0040c8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8a0()
    ADD ESP,0x8                         ; 0040c864
    RET                                 ; 0040c867

