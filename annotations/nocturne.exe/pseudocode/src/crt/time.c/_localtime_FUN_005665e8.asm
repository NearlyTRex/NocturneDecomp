; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _tm * __cdecl crt_time_c__localtime_FUN_005665e8(time_t *timer)
;
; Parameters:
; time_t *         Stack[0x4]:4   timer
;
; XREF[3]:
;   crt_io.c__utime_FUN_0056cb60 at 0056cbe4
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_00470730 at 00470b60
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460 at 00474549
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;   crt_unknown.c_localtime_r_FUN_00566590
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 005665e8 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: crt_time.c__localtime_FUN_005665e8
    ADD EAX,0x14                        ; 005665ee
    PUSH EAX                            ; 005665f1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005665f2
    PUSH EDX                            ; 005665f6
    CALL crt_unknown.c_localtime_r_FUN_00566590 ; 005665f7
        ;   XREF to: 00566590 (UNCONDITIONAL_CALL)  ; _tm * crt_unknown.c_localtime_r_FUN_00566590(time_t * timer, _tm * result)
    ADD ESP,0x8                         ; 005665fc
    RET                                 ; 005665ff

