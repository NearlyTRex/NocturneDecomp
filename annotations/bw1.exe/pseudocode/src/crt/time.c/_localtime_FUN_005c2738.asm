; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c__localtime_FUN_005c2738(undefined4 param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c8390 at 005c8414
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00499c80 at 00499d69
;   shape_edittool.cpp_FUN_0049517e at 00495591
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c26e0
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005c2738 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: crt_time.c__localtime_FUN_005c2738
    ADD EAX,0x14                        ; 005c273e
    PUSH EAX                            ; 005c2741
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c2742
    PUSH EDX                            ; 005c2746
    CALL crt_unknown.c_FUN_005c26e0     ; 005c2747
        ;   XREF to: 005c26e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26e0()
    ADD ESP,0x8                         ; 005c274c
    RET                                 ; 005c274f

