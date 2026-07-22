; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setRenderAlpha_FUN_00408370(int param_1)
;
;
; XREF[26]:
;   FUN_0046fb40 at 0046fc3c
;   FUN_0046fcd0 at 0046fdcc
;   FUN_0046fe60 at 0046ff5c
;   FUN_00470eb0 at 0047101d
;   FUN_004722b0 at 004723d9
;   FUN_004759d0 at 00475ca9
;   FUN_004c2470 at 004c2cc0
;   FUN_004fe770 at 004fe911
;   core_baron.cpp_FUN_004110f0 at 00411185
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a6950
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_005acab4
;   undefined4 DAT_005b763c
;   undefined4 DAT_006b0284
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408370
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00408370
    SAR EDX,0x8                         ; 00408374
    TEST EDX,EDX                        ; 00408377
    JL 0x004083b1                       ; 00408379
        ;   XREF to: 004083b1 (CONDITIONAL_JUMP)  ; LAB_004083b1
    CMP EDX,0xff                        ; 0040837b
    JLE 0x00408388                      ; 00408381
        ;   XREF to: 00408388 (CONDITIONAL_JUMP)  ; LAB_00408388
    MOV EDX,0xff                        ; 00408383
    MOV EAX,EDX                         ; 00408388
        ;   Label: LAB_00408388
    MOV ECX,EDX                         ; 0040838a
    SHL EAX,0x8                         ; 0040838c
    OR ECX,EAX                          ; 0040838f
    MOV EAX,EDX                         ; 00408391
    SHL EAX,0x10                        ; 00408393
    OR ECX,EAX                          ; 00408396
    MOV EAX,ECX                         ; 00408398
    XOR EAX,0xffffff                    ; 0040839a
    MOV dword ptr [0x005acab4],ECX      ; 0040839f | DAT_005acab4
    MOV [0x006b0284],EAX                ; 004083a5 | DAT_006b0284
    MOV dword ptr [0x005b763c],EDX      ; 004083aa | DAT_005b763c
    RET                                 ; 004083b0
    XOR EDX,EDX                         ; 004083b1
        ;   Label: LAB_004083b1
    JMP 0x00408388                      ; 004083b3
        ;   XREF to: 00408388 (UNCONDITIONAL_JUMP)  ; LAB_00408388

