; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465660(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_004657f0 at 0046580b
;   FUN_004659c0 at 004659e7
;   FUN_00512fb0 at 00513005
;   FUN_00569790 at 00569819
;   FUN_00573fc0 at 00573ff3
;
; Referenced Globals:
;   void* PTR_FUN_005f2ad0 = 00465600
;
; Called Functions:
;   FUN_00465600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465660
        ;   Label: FUN_00465660
    MOV EDX,dword ptr [ESP + 0x10]      ; 00465661
    PUSH EDX                            ; 00465665
    MOV ECX,dword ptr [ESP + 0x10]      ; 00465666
    PUSH ECX                            ; 0046566a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046566b
    PUSH EBX                            ; 0046566f
    CALL dword ptr [0x005f2ad0]         ; 00465670 | PTR_FUN_005f2ad0
    ADD ESP,0xc                         ; 00465676
    POP EBX                             ; 00465679
    RET                                 ; 0046567a

