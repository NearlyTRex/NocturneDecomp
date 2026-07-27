; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c__localtime_FUN_005665e8(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0056cb60 at 0056cbe4
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460 at 00474549
;   shape_edittool.cpp_FUN_00470730 at 00470b60
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   crt_unknown.c_FUN_00566590
;   FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 005665e8 | PTR_FUN_005c1abc
        ;   Label: crt_time.c__localtime_FUN_005665e8
    ADD EAX,0x14                        ; 005665ee
    PUSH EAX                            ; 005665f1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005665f2
    PUSH EDX                            ; 005665f6
    CALL crt_unknown.c_FUN_00566590     ; 005665f7
        ;   XREF to: 00566590 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00566590()
    ADD ESP,0x8                         ; 005665fc
    RET                                 ; 005665ff

