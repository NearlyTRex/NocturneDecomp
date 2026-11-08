; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423830(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c5334
;   undefined4 DAT_007c5338
;   undefined4 DAT_007c533c
;   undefined4 DAT_007c5340
;   undefined4 DAT_007c5344
;   undefined4 DAT_007c5348
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00423830
        ;   Label: FUN_00423830
    PUSH 0x1c3f668                      ; 00423831
    PUSH 0x4                            ; 00423836
    MOV EDX,0xbf19999a                  ; 00423838
    PUSH 0x610ba0                       ; 0042383d
    MOV ESI,0x3f19999a                  ; 00423842
    XOR ECX,ECX                         ; 00423847
    PUSH 0x423890                       ; 00423849
    MOV dword ptr [0x007c5334],EDX      ; 0042384e | DAT_007c5334
    MOV dword ptr [0x007c5338],ECX      ; 00423854 | DAT_007c5338
    PUSH 0x5d4df0                       ; 0042385a
    MOV dword ptr [0x007c533c],ECX      ; 0042385f | DAT_007c533c
    MOV dword ptr [0x007c5340],ESI      ; 00423865 | DAT_007c5340
    PUSH 0x7c534c                       ; 0042386b
    MOV dword ptr [0x007c5344],ECX      ; 00423870 | DAT_007c5344
    MOV dword ptr [0x007c5348],ECX      ; 00423876 | DAT_007c5348
    CALL FUN_0040c160                   ; 0042387c
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 00423881
    POP ESI                             ; 00423884
    RET                                 ; 00423885

