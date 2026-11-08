; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a3de6(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[39]:
;   FUN_00410370 at 0041037c
;   FUN_004144a0 at 004144ac
;   FUN_004144c0 at 004144cc
;   FUN_004144e0 at 004144ec
;   FUN_00414500 at 0041450c
;   FUN_00416dc0 at 00416dcc
;   FUN_00420e20 at 00420e2c
;   FUN_00425490 at 0042549c
;   FUN_00459f30 at 00459f3c
;   FUN_00462630 at 0046263f
;   ... and 29 more
;
; Called Functions:
;   FUN_005a3dac
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005a3de6
        ;   Label: FUN_005a3de6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a3de9
    MOV dword ptr [ESP],EAX             ; 005a3ded
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3df0
    MOV dword ptr [ESP + 0x4],EAX       ; 005a3df4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a3df8
    MOV dword ptr [ESP + 0x8],EAX       ; 005a3dfc
    MOV EAX,ESP                         ; 005a3e00
    PUSH EAX                            ; 005a3e02
    CALL FUN_005a3dac                   ; 005a3e03
        ;   XREF to: 005a3dac (UNCONDITIONAL_CALL)  ; undefined FUN_005a3dac()
    ADD ESP,0x4                         ; 005a3e08
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a3e0b
    ADD ESP,0xc                         ; 005a3e0f
    RET                                 ; 005a3e12

