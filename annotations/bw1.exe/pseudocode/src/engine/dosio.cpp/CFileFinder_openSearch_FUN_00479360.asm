; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(CFileFinder *this_ptr,char *search_pattern)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
;
; XREF[6]:
;   core_podmain.cpp_FUN_0053d580 at 0053d5c2
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 0049a021
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a214
;   shape_edittool.cpp_FUN_0049517e at 00495269
;   shape_edittool.cpp_FUN_0049a300 at 0049a36d
;   shape_edittool.cpp_FUN_0049a480 at 0049a554
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005d0558 = 001d0d6a
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460
;   engine_dosio.cpp_CFileFinder_reset_FUN_004794a0
;   engine_dosio.cpp_FUN_004794b0
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479360
        ;   Label: engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360
    SUB ESP,0x140                       ; 00479361
    MOV EBX,dword ptr [ESP + 0x148]     ; 00479367
    PUSH EBX                            ; 0047936e
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460 ; 0047936f
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00479374
    MOV EAX,ESP                         ; 00479377
    PUSH EAX                            ; 00479379
    MOV EDX,dword ptr [ESP + 0x150]     ; 0047937a
    PUSH EDX                            ; 00479381
    CALL dword ptr CS:[0x5d0558]        ; 00479382 | PTR_FindFirstFileA_005d0558
    CMP EAX,-0x1                        ; 00479389
    JNZ 0x004793a5                      ; 0047938c
        ;   XREF to: 004793a5 (CONDITIONAL_JUMP)  ; LAB_004793a5
    CMP dword ptr [EBX + 0x10c],0x0     ; 0047938e
    JZ 0x004793c3                       ; 00479395
        ;   XREF to: 004793c3 (CONDITIONAL_JUMP)  ; LAB_004793c3
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00479397
        ;   Label: LAB_00479397
    ADD ESP,0x140                       ; 0047939d
    POP EBX                             ; 004793a3
    RET                                 ; 004793a4
    MOV dword ptr [EBX + 0x110],EAX     ; 004793a5
        ;   Label: LAB_004793a5
    MOV EAX,ESP                         ; 004793ab
    PUSH EAX                            ; 004793ad
    PUSH EBX                            ; 004793ae
    CALL engine_dosio.cpp_FUN_004794b0  ; 004793af
        ;   XREF to: 004794b0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_004794b0()
    ADD ESP,0x8                         ; 004793b4
    MOV dword ptr [EBX + 0x10c],0x1     ; 004793b7
    JMP 0x00479397                      ; 004793c1
        ;   XREF to: 00479397 (UNCONDITIONAL_JUMP)  ; LAB_00479397
    PUSH EBX                            ; 004793c3
        ;   Label: LAB_004793c3
    CALL engine_dosio.cpp_CFileFinder_reset_FUN_004794a0 ; 004793c4
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_reset_FUN_004794a0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004793c9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004793cc
    ADD ESP,0x140                       ; 004793d2
    POP EBX                             ; 004793d8
    RET                                 ; 004793d9

