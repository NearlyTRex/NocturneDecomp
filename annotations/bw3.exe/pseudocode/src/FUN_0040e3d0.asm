; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040e3d0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 s_ammopouch_kfm_005b6124+1
;   void* PTR_FUN_005db3d4 = 0040def0
;
; Called Functions:
;   FUN_0040de60
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e3d0
        ;   Label: FUN_0040e3d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040e3d1
    PUSH EDX                            ; 0040e3d5
    CALL FUN_0040de60                   ; 0040e3d6
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de60()
    ADD ESP,0x4                         ; 0040e3db
    PUSH 0x5b6125                       ; 0040e3de | s_ammopouch_kfm_005b6124+1
    MOV EBX,EAX                         ; 0040e3e3
    ADD EAX,0x158                       ; 0040e3e5
    PUSH EAX                            ; 0040e3ea
    MOV dword ptr [EAX + -0x4],0x5db3d4 ; 0040e3eb | PTR_FUN_005db3d4
    CALL FUN_004625f0                   ; 0040e3f2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0040e3f7
    MOV dword ptr [EBX + 0x318],0xb     ; 0040e3fa
    MOV EAX,EBX                         ; 0040e404
    MOV dword ptr [EBX + 0x314],0x14    ; 0040e406
    POP EBX                             ; 0040e410
    RET                                 ; 0040e411

