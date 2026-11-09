; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004aa780(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004aa6d0 at 004aa72d
;
; Referenced Globals:
;   void* PTR_unkafter_fldnotes.cpp_PageResource_Map_dtor_FUN_004ad3c0_005e02d4 = 004ad3c0
;
; Called Functions:
;   unkaddr_004a76f0.cpp_FUN_004a8370
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa780
        ;   Label: core_fldnotes.cpp_FUN_004aa780
    PUSH EDX                            ; 004aa784
    CALL unkaddr_004a76f0.cpp_FUN_004a8370 ; 004aa785
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a8370()
    ADD ESP,0x4                         ; 004aa78a
    MOV dword ptr [EAX + 0x14],0x5e02d4 ; 004aa78d | PTR_unkafter_fldnotes.cpp_PageResource_Map_dtor_FUN_004ad3c0_005e02d4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aa794
    MOV dword ptr [EAX + 0x18],EDX      ; 004aa798
    MOV EDX,dword ptr [EDX + 0x68]      ; 004aa79b
    MOV dword ptr [EAX + 0x8],EDX       ; 004aa79e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004aa7a1
    MOV EDX,dword ptr [EDX + 0x6c]      ; 004aa7a4
    MOV dword ptr [EAX + 0xc],EDX       ; 004aa7a7
    RET                                 ; 004aa7aa

