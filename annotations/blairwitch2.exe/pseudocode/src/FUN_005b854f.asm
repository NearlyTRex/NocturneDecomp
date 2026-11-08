; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b854f(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[36]:
;   FUN_0040d400 at 0040d40c
;   FUN_0040f2b0 at 0040f2bc
;   FUN_00417d10 at 00417d1c
;   FUN_0041d8a0 at 0041d8ac
;   FUN_00447e80 at 00447e8c
;   FUN_0044fdb0 at 0044fdbf
;   FUN_0049efc0 at 0049efcf
;   FUN_0049efe0 at 0049efef
;   FUN_0049f000 at 0049f00c
;   FUN_0049f020 at 0049f02c
;   ... and 26 more
;
; Called Functions:
;   FUN_005b8515
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005b854f
        ;   Label: FUN_005b854f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b8552
    MOV dword ptr [ESP],EAX             ; 005b8556
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b8559
    MOV dword ptr [ESP + 0x4],EAX       ; 005b855d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b8561
    MOV dword ptr [ESP + 0x8],EAX       ; 005b8565
    MOV EAX,ESP                         ; 005b8569
    PUSH EAX                            ; 005b856b
    CALL FUN_005b8515                   ; 005b856c
        ;   XREF to: 005b8515 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8515()
    ADD ESP,0x4                         ; 005b8571
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b8574
    ADD ESP,0xc                         ; 005b8578
    RET                                 ; 005b857b

