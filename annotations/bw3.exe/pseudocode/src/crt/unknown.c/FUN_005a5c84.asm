; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a5c84(undefined4 param_1)
;
;
; XREF[1]:
;   crt_heap.c__heapwalk_FUN_005a5bd0 at 005a5bd5
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079bc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079c4 = 005a7f44
;
; Called Functions:
;   crt_unknown.c_FUN_005a5be0
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5c84
        ;   Label: crt_unknown.c_FUN_005a5c84
    CALL dword ptr [0x006079bc]         ; 005a5c85 | PTR_crt_unknown.c_FUN_005a7f44_006079bc
    MOV EDX,dword ptr [0x006075c4]      ; 005a5c8b | DAT_006075c4
    PUSH EDX                            ; 005a5c91
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a5c92
    PUSH EBX                            ; 005a5c96
    CALL crt_unknown.c_FUN_005a5be0     ; 005a5c97
        ;   XREF to: 005a5be0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5be0()
    ADD ESP,0x8                         ; 005a5c9c
    MOV EBX,EAX                         ; 005a5c9f
    CALL dword ptr [0x006079c4]         ; 005a5ca1 | PTR_crt_unknown.c_FUN_005a7f44_006079c4
    MOV EAX,EBX                         ; 005a5ca7
    POP EBX                             ; 005a5ca9
    RET                                 ; 005a5caa

