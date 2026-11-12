; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _tm * __cdecl crt_time_c__localtime_FUN_005ba358(time_t *timer)
;
; Parameters:
; time_t *         Stack[0x4]:4   timer
;
; XREF[3]:
;   crt_unknown.c_FUN_005c00d0 at 005c0154
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00481620 at 00481709
;   shape_edittool.cpp_FUN_0047cb1e at 0047cf31
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005ba300
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005ba358 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: crt_time.c__localtime_FUN_005ba358
    ADD EAX,0x14                        ; 005ba35e
    PUSH EAX                            ; 005ba361
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ba362
    PUSH EDX                            ; 005ba366
    CALL crt_unknown.c_FUN_005ba300     ; 005ba367
        ;   XREF to: 005ba300 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba300()
    ADD ESP,0x8                         ; 005ba36c
    RET                                 ; 005ba36f

