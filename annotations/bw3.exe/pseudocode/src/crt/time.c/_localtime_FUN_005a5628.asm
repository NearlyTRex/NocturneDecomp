; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _tm * __cdecl crt_time_c__localtime_FUN_005a5628(time_t *timer)
;
; Parameters:
; time_t *         Stack[0x4]:4   timer
;
; XREF[3]:
;   crt_unknown.c_FUN_005ab1d0 at 005ab254
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820 at 00482909
;   shape_edittool.cpp_FUN_0047dd1e at 0047e131
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; Called Functions:
;   crt_unknown.c_FUN_005a55d0
;   crt_unknown.c_FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005a5628 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: crt_time.c__localtime_FUN_005a5628
    ADD EAX,0x14                        ; 005a562e
    PUSH EAX                            ; 005a5631
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a5632
    PUSH EDX                            ; 005a5636
    CALL crt_unknown.c_FUN_005a55d0     ; 005a5637
        ;   XREF to: 005a55d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55d0()
    ADD ESP,0x8                         ; 005a563c
    RET                                 ; 005a563f

