; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569850(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00569928 at 00569bbc
;
; Referenced Globals:
;   void* PTR_FUN_005c1f88 = 0056f0f0
;
; Called Functions:
;   FUN_0056f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569850
        ;   Label: FUN_00569850
    MOV EDX,dword ptr [ESP + 0x10]      ; 00569851
    PUSH EDX                            ; 00569855
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569856
    PUSH EBX                            ; 0056985a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056985b
    PUSH ECX                            ; 0056985f
    CALL dword ptr [0x005c1f88]         ; 00569860 | PTR_FUN_005c1f88
    ADD ESP,0xc                         ; 00569866
    POP EBX                             ; 00569869
    RET                                 ; 0056986a

