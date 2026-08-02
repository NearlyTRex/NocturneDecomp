; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0056f30c(LPVOID param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056f36c at 0056f379
;
; Referenced Globals:
;   void* PTR_VirtualFree_005755d8 = 001760e4
;   undefined4 DAT_005c1680
;   undefined4 DAT_005c1684
;   undefined4 DAT_005c1688
;   undefined4 DAT_02de4e10
;
; Called Functions:
;   VirtualFree
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f30c
        ;   Label: crt_unknown.c_FUN_0056f30c
    PUSH ESI                            ; 0056f30d
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056f30e
    PUSH 0x8000                         ; 0056f312
    PUSH 0x0                            ; 0056f317
    PUSH ESI                            ; 0056f319
    MOV EBX,dword ptr [ESI + 0x8]       ; 0056f31a
    CALL dword ptr CS:[0x5755d8]        ; 0056f31d | PTR_VirtualFree_005755d8
    TEST EAX,EAX                        ; 0056f324
    JNZ 0x0056f330                      ; 0056f326
        ;   XREF to: 0056f330 (CONDITIONAL_JUMP)  ; LAB_0056f330
    MOV EAX,0xffffffff                  ; 0056f328
    POP ESI                             ; 0056f32d
    POP EBX                             ; 0056f32e
    RET                                 ; 0056f32f
    CMP ESI,dword ptr [0x005c1684]      ; 0056f330 | DAT_005c1684
        ;   Label: LAB_0056f330
    JNZ 0x0056f354                      ; 0056f336
        ;   XREF to: 0056f354 (CONDITIONAL_JUMP)  ; LAB_0056f354
    TEST EBX,EBX                        ; 0056f338
    JZ 0x0056f344                       ; 0056f33a
        ;   XREF to: 0056f344 (CONDITIONAL_JUMP)  ; LAB_0056f344
    MOV dword ptr [0x005c1684],EBX      ; 0056f33c | DAT_005c1684
    JMP 0x0056f354                      ; 0056f342
        ;   XREF to: 0056f354 (UNCONDITIONAL_JUMP)  ; LAB_0056f354
    MOV EAX,[0x005c1680]                ; 0056f344 | DAT_005c1680
        ;   Label: LAB_0056f344
    MOV dword ptr [0x005c1688],EBX      ; 0056f349 | DAT_005c1688
    MOV [0x005c1684],EAX                ; 0056f34f | DAT_005c1684
    MOV ECX,dword ptr [0x02de4e10]      ; 0056f354 | DAT_02de4e10
        ;   Label: LAB_0056f354
    CMP ESI,ECX                         ; 0056f35a
    JNZ 0x0056f366                      ; 0056f35c
        ;   XREF to: 0056f366 (CONDITIONAL_JUMP)  ; LAB_0056f366
    XOR ESI,ECX                         ; 0056f35e
    MOV dword ptr [0x02de4e10],ESI      ; 0056f360 | DAT_02de4e10
    XOR EAX,EAX                         ; 0056f366
        ;   Label: LAB_0056f366
    POP ESI                             ; 0056f368
    POP EBX                             ; 0056f369
    RET                                 ; 0056f36a

