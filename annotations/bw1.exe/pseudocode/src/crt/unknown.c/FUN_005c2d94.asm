; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c2d94(undefined4 param_1)
;
;
; XREF[1]:
;   crt_heap.c__heapwalk_FUN_005c2ce0 at 005c2ce5
;
; Referenced Globals:
;   undefined4 DAT_00626220
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626618 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626620 = 005c50d4
;
; Called Functions:
;   crt_unknown.c_FUN_005c2cf0
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2d94
        ;   Label: crt_unknown.c_FUN_005c2d94
    CALL dword ptr [0x00626618]         ; 005c2d95 | PTR_crt_unknown.c_FUN_005c50d4_00626618
    MOV EDX,dword ptr [0x00626220]      ; 005c2d9b | DAT_00626220
    PUSH EDX                            ; 005c2da1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c2da2
    PUSH EBX                            ; 005c2da6
    CALL crt_unknown.c_FUN_005c2cf0     ; 005c2da7
        ;   XREF to: 005c2cf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2cf0()
    ADD ESP,0x8                         ; 005c2dac
    MOV EBX,EAX                         ; 005c2daf
    CALL dword ptr [0x00626620]         ; 005c2db1 | PTR_crt_unknown.c_FUN_005c50d4_00626620
    MOV EAX,EBX                         ; 005c2db7
    POP EBX                             ; 005c2db9
    RET                                 ; 005c2dba

