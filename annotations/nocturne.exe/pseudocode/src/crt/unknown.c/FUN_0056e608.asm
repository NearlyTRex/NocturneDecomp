; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0056e608(undefined4 param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_00571170 at 00571174
;   crt_unknown.c_FUN_00573e30 at 00573e7e
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005755cc = 001760aa
;   undefined4 DAT_005c1ab8
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   crt_unknown.c_FUN_0056e56c
;   crt_unknown.c_FUN_00571280
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e608
        ;   Label: crt_unknown.c_FUN_0056e608
    PUSH ESI                            ; 0056e609
    CMP dword ptr [0x005c1ab8],-0x1     ; 0056e60a | DAT_005c1ab8
    JNZ 0x0056e618                      ; 0056e611
        ;   XREF to: 0056e618 (CONDITIONAL_JUMP)  ; LAB_0056e618
    XOR EAX,EAX                         ; 0056e613
    POP ESI                             ; 0056e615
    POP EBX                             ; 0056e616
    RET                                 ; 0056e617
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056e618
        ;   Label: LAB_0056e618
    PUSH EBX                            ; 0056e61c
    CALL crt_unknown.c_FUN_0056e56c     ; 0056e61d
        ;   XREF to: 0056e56c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e56c()
    MOV EBX,EAX                         ; 0056e622
    ADD ESP,0x4                         ; 0056e624
    TEST EAX,EAX                        ; 0056e627
    JZ 0x0056e661                       ; 0056e629
        ;   XREF to: 0056e661 (CONDITIONAL_JUMP)  ; LAB_0056e661
    PUSH EAX                            ; 0056e62b
    MOV ECX,dword ptr [EAX + 0xda]      ; 0056e62c
    PUSH ECX                            ; 0056e632
    CALL crt_unknown.c_FUN_00571280     ; 0056e633
        ;   XREF to: 00571280 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571280()
    ADD ESP,0x8                         ; 0056e638
    TEST EAX,EAX                        ; 0056e63b
    JNZ 0x0056e64d                      ; 0056e63d
        ;   XREF to: 0056e64d (CONDITIONAL_JUMP)  ; LAB_0056e64d
    PUSH EBX                            ; 0056e63f
    CALL crt_memory.c_free_FUN_005638d0 ; 0056e640
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 0056e645
    XOR EAX,EAX                         ; 0056e648
    POP ESI                             ; 0056e64a
    POP EBX                             ; 0056e64b
    RET                                 ; 0056e64c
    PUSH EBX                            ; 0056e64d
        ;   Label: LAB_0056e64d
    MOV ESI,dword ptr [0x005c1ab8]      ; 0056e64e | DAT_005c1ab8
    PUSH ESI                            ; 0056e654
    CALL dword ptr CS:[0x5755cc]        ; 0056e655 | PTR_TlsSetValue_005755cc
    MOV EAX,0x1                         ; 0056e65c
    POP ESI                             ; 0056e661
        ;   Label: LAB_0056e661
    POP EBX                             ; 0056e662
    RET                                 ; 0056e663

