; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000ab70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_1024085c
;   undefined4 DAT_10241860
;   void* PTR_DeleteCriticalSection_102421b4 = 002423b4
;
; Called Functions:
;   __lock
;   _fclose
;   DeleteCriticalSection
;   FUN_10005a10
;   FUN_10005b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000ab70
        ;   Label: FUN_1000ab70
    PUSH ESI                            ; 1000ab71
    PUSH EDI                            ; 1000ab72
    XOR EBX,EBX                         ; 1000ab73
    PUSH EBP                            ; 1000ab75
    PUSH 0x2                            ; 1000ab76
    MOV EBP,0x3                         ; 1000ab78
    CALL __lock                         ; 1000ab7d
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1000ab82
    CMP dword ptr [0x10241860],EBP      ; 1000ab85 | DAT_10241860
    JLE 0x1000abf7                      ; 1000ab8b
        ;   XREF to: 1000abf7 (CONDITIONAL_JUMP)  ; LAB_1000abf7
    MOV ESI,0xc                         ; 1000ab8d
    MOV EDI,dword ptr [0x102421b4]      ; 1000ab92 | PTR_DeleteCriticalSection_102421b4
    MOV EAX,[0x1024085c]                ; 1000ab98 | DAT_1024085c
        ;   Label: LAB_1000ab98
    MOV EAX,dword ptr [EAX + ESI*0x1]   ; 1000ab9d
    TEST EAX,EAX                        ; 1000aba0
    JZ 0x1000abeb                       ; 1000aba2
        ;   XREF to: 1000abeb (CONDITIONAL_JUMP)  ; LAB_1000abeb
    TEST byte ptr [EAX + 0xc],0x83      ; 1000aba4
    JZ 0x1000abb9                       ; 1000aba8
        ;   XREF to: 1000abb9 (CONDITIONAL_JUMP)  ; LAB_1000abb9
    PUSH EAX                            ; 1000abaa
    CALL _fclose                        ; 1000abab
        ;   XREF to: 10005430 (UNCONDITIONAL_CALL)  ; int _fclose(FILE * _File)
    ADD ESP,0x4                         ; 1000abb0
    CMP EAX,-0x1                        ; 1000abb3
    JZ 0x1000abb9                       ; 1000abb6
        ;   XREF to: 1000abb9 (CONDITIONAL_JUMP)  ; LAB_1000abb9
    INC EBX                             ; 1000abb8
    CMP ESI,0x50                        ; 1000abb9
        ;   Label: LAB_1000abb9
    JL 0x1000abeb                       ; 1000abbc
        ;   XREF to: 1000abeb (CONDITIONAL_JUMP)  ; LAB_1000abeb
    MOV EAX,[0x1024085c]                ; 1000abbe | DAT_1024085c
    MOV EAX,dword ptr [EAX + ESI*0x1]   ; 1000abc3
    ADD EAX,0x20                        ; 1000abc6
    PUSH EAX                            ; 1000abc9
    CALL EDI                            ; 1000abca | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV ECX,dword ptr [0x1024085c]      ; 1000abcc | DAT_1024085c
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 1000abd2
    PUSH EDX                            ; 1000abd5
    CALL FUN_10005b30                   ; 1000abd6
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000abdb
    MOV ECX,dword ptr [0x1024085c]      ; 1000abde | DAT_1024085c
    MOV dword ptr [ECX + ESI*0x1],0x0   ; 1000abe4
    ADD ESI,0x4                         ; 1000abeb
        ;   Label: LAB_1000abeb
    INC EBP                             ; 1000abee
    CMP dword ptr [0x10241860],EBP      ; 1000abef | DAT_10241860
    JG 0x1000ab98                       ; 1000abf5
        ;   XREF to: 1000ab98 (CONDITIONAL_JUMP)  ; LAB_1000ab98
    PUSH 0x2                            ; 1000abf7
        ;   Label: LAB_1000abf7
    CALL FUN_10005a10                   ; 1000abf9
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000abfe
    MOV EAX,EBX                         ; 1000ac01
    POP EBP                             ; 1000ac03
    POP EDI                             ; 1000ac04
    POP ESI                             ; 1000ac05
    POP EBX                             ; 1000ac06
    RET                                 ; 1000ac07

