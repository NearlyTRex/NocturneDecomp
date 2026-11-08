; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bcb10(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004bca60 at 004bcabd
;
; Referenced Globals:
;   void* PTR_FUN_00600974 = 004bf670
;
; Called Functions:
;   FUN_004ba730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bcb10
        ;   Label: FUN_004bcb10
    PUSH EDX                            ; 004bcb14
    CALL FUN_004ba730                   ; 004bcb15
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba730()
    ADD ESP,0x4                         ; 004bcb1a
    MOV dword ptr [EAX + 0x14],0x600974 ; 004bcb1d | PTR_FUN_00600974
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bcb24
    MOV dword ptr [EAX + 0x18],EDX      ; 004bcb28
    MOV EDX,dword ptr [EDX + 0x68]      ; 004bcb2b
    MOV dword ptr [EAX + 0x8],EDX       ; 004bcb2e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004bcb31
    MOV EDX,dword ptr [EDX + 0x6c]      ; 004bcb34
    MOV dword ptr [EAX + 0xc],EDX       ; 004bcb37
    RET                                 ; 004bcb3a

