; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b7f0(int param_1,int param_2,int param_3,uint param_4)
;
;
; XREF[5]:
;   FUN_004468c0 at 00446a68
;   FUN_00475000 at 004755a1
;   FUN_00476280 at 0047629a
;   FUN_004a70b0 at 004a73c4
;   FUN_00541a60 at 005421b7
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c37788
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b7f0
        ;   Label: FUN_0046b7f0
    PUSH ESI                            ; 0046b7f1
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046b7f2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046b7f6
    MOV CL,byte ptr [0x01c3582c]        ; 0046b7fa | DAT_01c3582c
    MOV ESI,EBX                         ; 0046b800
    SHL EDX,CL                          ; 0046b802
    MOV CL,byte ptr [0x01c35820]        ; 0046b804 | DAT_01c35820
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046b80a
    SHL ESI,CL                          ; 0046b80e
    MOV CL,byte ptr [0x01c35814]        ; 0046b810 | DAT_01c35814
    SHL EBX,0x8                         ; 0046b816
    SHL EAX,CL                          ; 0046b819
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046b81b
    OR EAX,ESI                          ; 0046b81f
    SHL ECX,0x10                        ; 0046b821
    OR EDX,EAX                          ; 0046b824
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046b826
    OR ECX,EBX                          ; 0046b82a
    OR EAX,ECX                          ; 0046b82c
    CMP dword ptr [0x01c37788],0x0      ; 0046b82e | DAT_01c37788
    JNZ 0x0046b856                      ; 0046b835
        ;   XREF to: 0046b856 (CONDITIONAL_JUMP)  ; LAB_0046b856
    CMP dword ptr [0x006141c0],0x20     ; 0046b837 | DAT_006141c0
    JNZ 0x0046b842                      ; 0046b83e
        ;   XREF to: 0046b842 (CONDITIONAL_JUMP)  ; LAB_0046b842
    MOV EAX,EDX                         ; 0046b840
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046b842
        ;   Label: LAB_0046b842
    MOV ECX,EAX                         ; 0046b846
    MOV EDX,dword ptr [EDX + 0x14]      ; 0046b848
    OR ECX,EDX                          ; 0046b84b
    MOV dword ptr [0x01c35e60],ECX      ; 0046b84d | DAT_01c35e60
    POP ESI                             ; 0046b853
    POP EBX                             ; 0046b854
    RET                                 ; 0046b855
    CMP dword ptr [0x006141c0],0x20     ; 0046b856 | DAT_006141c0
        ;   Label: LAB_0046b856
    JNZ 0x0046b861                      ; 0046b85d
        ;   XREF to: 0046b861 (CONDITIONAL_JUMP)  ; LAB_0046b861
    MOV EAX,EDX                         ; 0046b85f
    MOV ECX,EAX                         ; 0046b861
        ;   Label: LAB_0046b861
    MOV dword ptr [0x01c35e60],ECX      ; 0046b863 | DAT_01c35e60
    POP ESI                             ; 0046b869
    POP EBX                             ; 0046b86a
    RET                                 ; 0046b86b

