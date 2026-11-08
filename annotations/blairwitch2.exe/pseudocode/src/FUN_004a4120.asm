; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4120(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004a4070 at 004a40cd
;
; Referenced Globals:
;   void* PTR_FUN_005f6f14 = 004a66a0
;
; Called Functions:
;   FUN_004a1e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4120
        ;   Label: FUN_004a4120
    PUSH EDX                            ; 004a4124
    CALL FUN_004a1e60                   ; 004a4125
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1e60()
    ADD ESP,0x4                         ; 004a412a
    MOV dword ptr [EAX + 0x14],0x5f6f14 ; 004a412d | PTR_FUN_005f6f14
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4134
    MOV dword ptr [EAX + 0x18],EDX      ; 004a4138
    MOV EDX,dword ptr [EDX + 0x68]      ; 004a413b
    MOV dword ptr [EAX + 0x8],EDX       ; 004a413e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004a4141
    MOV EDX,dword ptr [EDX + 0x6c]      ; 004a4144
    MOV dword ptr [EAX + 0xc],EDX       ; 004a4147
    RET                                 ; 004a414a

