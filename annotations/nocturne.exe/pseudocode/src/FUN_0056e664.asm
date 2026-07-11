; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e664(int param_1)
;
;
; XREF[1]:
;   FUN_00573fc8 at 00573fde
;
; Referenced Globals:
;   void* PTR_CloseHandle_0057548c = 00175ad4
;   void* PTR_TlsGetValue_005755c8 = 0017609c
;   void* PTR_TlsSetValue_005755cc = 001760aa
;   undefined4 DAT_005c1ab8
;
; Called Functions:
;   CloseHandle
;   FUN_005712ec
;   TlsGetValue
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e664
        ;   Label: FUN_0056e664
    PUSH ESI                            ; 0056e665
    MOV EDX,dword ptr [0x005c1ab8]      ; 0056e666 | DAT_005c1ab8
    CMP EDX,-0x1                        ; 0056e66c
    JZ 0x0056e6b5                       ; 0056e66f
        ;   XREF to: 0056e6b5 (CONDITIONAL_JUMP)  ; LAB_0056e6b5
    PUSH EDX                            ; 0056e671
    CALL dword ptr CS:[0x5755c8]        ; 0056e672 | PTR_TlsGetValue_005755c8
    TEST EAX,EAX                        ; 0056e679
    JZ 0x0056e6b5                       ; 0056e67b
        ;   XREF to: 0056e6b5 (CONDITIONAL_JUMP)  ; LAB_0056e6b5
    MOV ECX,dword ptr [EAX + 0xda]      ; 0056e67d
    PUSH ECX                            ; 0056e683
    MOV EBX,dword ptr [EAX + 0xde]      ; 0056e684
    CALL FUN_005712ec                   ; 0056e68a
        ;   XREF to: 005712ec (UNCONDITIONAL_CALL)  ; undefined FUN_005712ec()
    ADD ESP,0x4                         ; 0056e68f
    PUSH 0x0                            ; 0056e692
    MOV ESI,dword ptr [0x005c1ab8]      ; 0056e694 | DAT_005c1ab8
    PUSH ESI                            ; 0056e69a
    CALL dword ptr CS:[0x5755cc]        ; 0056e69b | PTR_TlsSetValue_005755cc
    TEST EBX,EBX                        ; 0056e6a2
    JZ 0x0056e6b5                       ; 0056e6a4
        ;   XREF to: 0056e6b5 (CONDITIONAL_JUMP)  ; LAB_0056e6b5
    CMP dword ptr [ESP + 0xc],0x0       ; 0056e6a6
    JZ 0x0056e6b5                       ; 0056e6ab
        ;   XREF to: 0056e6b5 (CONDITIONAL_JUMP)  ; LAB_0056e6b5
    PUSH EBX                            ; 0056e6ad
    CALL dword ptr CS:[0x57548c]        ; 0056e6ae | PTR_CloseHandle_0057548c
    POP ESI                             ; 0056e6b5
        ;   Label: LAB_0056e6b5
    POP EBX                             ; 0056e6b6
    RET                                 ; 0056e6b7

