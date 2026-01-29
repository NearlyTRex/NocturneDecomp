; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_process_c_spawnvp_FUN_0060f39c(int mode,char *cmdname,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   mode
; char *           Stack[0x8]:4   cmdname
; char * *         Stack[0xc]:4   argv
; Local Variables:
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[3]:
;   crt_process.c_execv_FUN_006101f0 at 00610202
;   crt_process.c_execvp_FUN_00610790 at 006107a7
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 at 0060e803
;
; Referenced Globals:
;   TerminatedCString s_bat_00659758
;   TerminatedCString s_com_00659760
;   TerminatedCString s_exe_00659768
;   TerminatedCString s_COMSPEC_00659770
;   TerminatedCString s_CMD_00659778
;   TerminatedCString s_COMMAND_0065977c
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   int g_ProcessSpawnEnabled = 0x1
;   ENTER_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464 = 0060b180
;   EXIT_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468 = 0060b180
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_errno.c_setErrno_FUN_00602790
;   crt_errno.c_SetWindowsError_FUN_006027c8
;   crt_file.c_makepath_FUN_005febfc
;   crt_file.c_splitpath_s_FUN_00610460
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
;   crt_io.c_exists_FUN_0060f380
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_process.c_build_cmdline_FUN_00610258
;   crt_process.c_build_command_line_FUN_006103a4
;   crt_process.c_build_file_info_env_FUN_0060ffd0
;   crt_process.c_execv_FUN_006101f0
;   crt_process.c_execvp_FUN_00610790
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH 0xe4                           ; 0060f39c
        ;   Label: crt_process.c_spawnvp_FUN_0060f39c
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0060f3a1
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0060f3a6
    PUSH ESI                            ; 0060f3a7
    PUSH EDI                            ; 0060f3a8
    PUSH EBP                            ; 0060f3a9
    MOV EBP,ESP                         ; 0060f3aa
    SUB ESP,0xb4                        ; 0060f3ac
    SUB EBP,0x72                        ; 0060f3b2
    MOV EBX,dword ptr [EBP + 0x92]      ; 0060f3b5
    MOV ECX,dword ptr [0x006853e0]      ; 0060f3bb | g_ProcessSpawnEnabled
    XOR EDX,EDX                         ; 0060f3c1
    MOV ESI,EBX                         ; 0060f3c3
    MOV dword ptr [EBP + 0x62],EDX      ; 0060f3c5
    TEST ECX,ECX                        ; 0060f3c8
    JZ 0x0060f440                       ; 0060f3ca
        ;   XREF to: 0060f440 (CONDITIONAL_JUMP)  ; LAB_0060f440
    CALL crt_process.c_build_file_info_env_FUN_0060ffd0 ; 0060f3d0
        ;   XREF to: 0060ffd0 (UNCONDITIONAL_CALL)  ; undefined crt_process.c_build_file_info_env_FUN_0060ffd0()
    MOV dword ptr [EBP + 0x66],EAX      ; 0060f3d5
    TEST EAX,EAX                        ; 0060f3d8
    JZ 0x0060f440                       ; 0060f3da
        ;   XREF to: 0060f440 (CONDITIONAL_JUMP)  ; LAB_0060f440
    MOV EDX,0x1                         ; 0060f3dc
    MOV EDI,dword ptr [EBX]             ; 0060f3e1
    MOV EAX,EBX                         ; 0060f3e3
    TEST EDI,EDI                        ; 0060f3e5
    JZ 0x0060f3f4                       ; 0060f3e7
        ;   XREF to: 0060f3f4 (CONDITIONAL_JUMP)  ; LAB_0060f3f4
    MOV EBX,dword ptr [EAX + 0x4]       ; 0060f3e9
        ;   Label: LAB_0060f3e9
    ADD EAX,0x4                         ; 0060f3ec
    INC EDX                             ; 0060f3ef
    TEST EBX,EBX                        ; 0060f3f0
    JNZ 0x0060f3e9                      ; 0060f3f2
        ;   XREF to: 0060f3e9 (CONDITIONAL_JUMP)  ; LAB_0060f3e9
    INC EDX                             ; 0060f3f4
        ;   Label: LAB_0060f3f4
    LEA EDI,[EDX*0x4 + 0x0]             ; 0060f3f5
    PUSH EDI                            ; 0060f3fc
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060f3fd
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 0060f402
    ADD ESP,0x4                         ; 0060f404
    TEST EAX,EAX                        ; 0060f407
    JZ 0x0060f434                       ; 0060f409
        ;   XREF to: 0060f434 (CONDITIONAL_JUMP)  ; LAB_0060f434
    LEA EAX,[EDI + -0x4]                ; 0060f40b
    PUSH EAX                            ; 0060f40e
    PUSH ESI                            ; 0060f40f
    PUSH EBX                            ; 0060f410
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060f411
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
    MOV EAX,dword ptr [EBP + 0x66]      ; 0060f416
    MOV dword ptr [EDI + EBX*0x1 + -0x4],0x0 ; 0060f419
    MOV ESI,EBX                         ; 0060f421
    MOV dword ptr [EDI + EBX*0x1 + -0x8],EAX ; 0060f423
    MOV EDI,0x1                         ; 0060f427
    ADD ESP,0xc                         ; 0060f42c
    MOV dword ptr [EBP + 0x62],EDI      ; 0060f42f
    JMP 0x0060f440                      ; 0060f432
        ;   XREF to: 0060f440 (UNCONDITIONAL_JUMP)  ; LAB_0060f440
    MOV ECX,dword ptr [EBP + 0x66]      ; 0060f434
        ;   Label: LAB_0060f434
    PUSH ECX                            ; 0060f437
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f438
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f43d
    XOR AH,AH                           ; 0060f440
        ;   Label: LAB_0060f440
    MOV byte ptr [EBP + 0x6e],AH        ; 0060f442
    CMP dword ptr [EBP + 0x86],0x2      ; 0060f445
    JNZ 0x0060f48a                      ; 0060f44c
        ;   XREF to: 0060f48a (CONDITIONAL_JUMP)  ; LAB_0060f48a
    PUSH ESI                            ; 0060f44e
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0060f44f
    PUSH ECX                            ; 0060f455
    MOV EDI,dword ptr [EBP + 0x8a]      ; 0060f456
    PUSH EDI                            ; 0060f45c
    CALL crt_process.c_execv_FUN_006101f0 ; 0060f45d
        ;   XREF to: 006101f0 (UNCONDITIONAL_CALL)  ; int crt_process.c_execv_FUN_006101f0(int argc, char * program, char * * argv)
    MOV EBX,EAX                         ; 0060f462
    MOV EAX,dword ptr [EBP + 0x62]      ; 0060f464
    ADD ESP,0xc                         ; 0060f467
    TEST EAX,EAX                        ; 0060f46a
    JZ 0x0060f483                       ; 0060f46c
        ;   XREF to: 0060f483 (CONDITIONAL_JUMP)  ; LAB_0060f483
    PUSH ESI                            ; 0060f46e
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f46f
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f474
    MOV EDX,dword ptr [EBP + 0x66]      ; 0060f477
    PUSH EDX                            ; 0060f47a
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f47b
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f480
    MOV EAX,EBX                         ; 0060f483
        ;   Label: LAB_0060f483
    JMP 0x0060f85c                      ; 0060f485
        ;   XREF to: 0060f85c (UNCONDITIONAL_JUMP)  ; LAB_0060f85c
    PUSH 0x0                            ; 0060f48a
        ;   Label: LAB_0060f48a
    LEA EAX,[EBP + 0x3e]                ; 0060f48c
    PUSH EAX                            ; 0060f48f
    LEA EAX,[EBP + 0x42]                ; 0060f490
    PUSH EAX                            ; 0060f493
    LEA EAX,[EBP + 0x46]                ; 0060f494
    PUSH EAX                            ; 0060f497
    LEA EAX,[EBP + 0x4a]                ; 0060f498
    PUSH EAX                            ; 0060f49b
    PUSH ESI                            ; 0060f49c
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0060f49d
    PUSH EDX                            ; 0060f4a3
    CALL crt_process.c_build_cmdline_FUN_00610258 ; 0060f4a4
        ;   XREF to: 00610258 (UNCONDITIONAL_CALL)  ; int crt_process.c_build_cmdline_FUN_00610258(int argc, char * * argv, char * program, char * * out_cmdline, ...)
    ADD ESP,0x1c                        ; 0060f4a9
    MOV EDI,EAX                         ; 0060f4ac
    CMP EAX,-0x1                        ; 0060f4ae
    JNZ 0x0060f4db                      ; 0060f4b1
        ;   XREF to: 0060f4db (CONDITIONAL_JUMP)  ; LAB_0060f4db
    CMP dword ptr [EBP + 0x62],0x0      ; 0060f4b3
    JZ 0x0060f4ce                       ; 0060f4b7
        ;   XREF to: 0060f4ce (CONDITIONAL_JUMP)  ; LAB_0060f4ce
    PUSH ESI                            ; 0060f4b9
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f4ba
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f4bf
    MOV EBX,dword ptr [EBP + 0x66]      ; 0060f4c2
    PUSH EBX                            ; 0060f4c5
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f4c6
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f4cb
    MOV EAX,0xffffffff                  ; 0060f4ce
        ;   Label: LAB_0060f4ce
    LEA ESP,[EBP + 0x72]                ; 0060f4d3
    POP EBP                             ; 0060f4d6
    POP EDI                             ; 0060f4d7
    POP ESI                             ; 0060f4d8
    POP EBX                             ; 0060f4d9
    RET                                 ; 0060f4da
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0060f4db
        ;   Label: LAB_0060f4db
    PUSH EBX                            ; 0060f4e1
    CALL crt_string.c_strlen_FUN_0060f870 ; 0060f4e2
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    ADD ESP,0x4                         ; 0060f4e7
    ADD EAX,0x10e                       ; 0060f4ea
    PUSH EAX                            ; 0060f4ef
    MOV dword ptr [EBP + 0x5e],EAX      ; 0060f4f0
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 0060f4f3
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 0060f4f8
    MOV dword ptr [EBP + 0x52],EAX      ; 0060f4fb
    TEST EAX,EAX                        ; 0060f4fe
    JNZ 0x0060f55f                      ; 0060f500
        ;   XREF to: 0060f55f (CONDITIONAL_JUMP)  ; LAB_0060f55f
    MOV EBX,dword ptr [EBP + 0x5e]      ; 0060f502
    ADD EBX,0x3                         ; 0060f505
    AND BL,0xfc                         ; 0060f508
    CALL crt_stack.c_GetStackUsage_FUN_0060c260 ; 0060f50b
        ;   XREF to: 0060c260 (UNCONDITIONAL_CALL)  ; int crt_stack.c_GetStackUsage_FUN_0060c260()
    CMP EBX,EAX                         ; 0060f510
    JNC 0x0060f522                      ; 0060f512
        ;   XREF to: 0060f522 (CONDITIONAL_JUMP)  ; LAB_0060f522
    PUSH EBX                            ; 0060f514
    CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f ; 0060f515
        ;   XREF to: 005ffa2f (UNCONDITIONAL_CALL)  ; void crt_stack.c_ProbeStackSpace_FUN_005ffa2f(uint size)
    MOV EAX,EBX                         ; 0060f51a
    SUB ESP,EAX                         ; 0060f51c
    MOV EAX,ESP                         ; 0060f51e
    JMP 0x0060f524                      ; 0060f520
        ;   XREF to: 0060f524 (UNCONDITIONAL_JUMP)  ; LAB_0060f524
    XOR EAX,EAX                         ; 0060f522
        ;   Label: LAB_0060f522
    MOV EBX,EAX                         ; 0060f524
        ;   Label: LAB_0060f524
    TEST EAX,EAX                        ; 0060f526
    JNZ 0x0060f561                      ; 0060f528
        ;   XREF to: 0060f561 (CONDITIONAL_JUMP)  ; LAB_0060f561
    MOV ECX,dword ptr [EBP + 0x4a]      ; 0060f52a
    PUSH ECX                            ; 0060f52d
    MOV EDI,dword ptr [EBP + 0x62]      ; 0060f52e
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f531
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f536
    TEST EDI,EDI                        ; 0060f539
    JZ 0x0060f552                       ; 0060f53b
        ;   XREF to: 0060f552 (CONDITIONAL_JUMP)  ; LAB_0060f552
    PUSH ESI                            ; 0060f53d
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f53e
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f543
    MOV EAX,dword ptr [EBP + 0x66]      ; 0060f546
    PUSH EAX                            ; 0060f549
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f54a
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f54f
    MOV EAX,0xffffffff                  ; 0060f552
        ;   Label: LAB_0060f552
    LEA ESP,[EBP + 0x72]                ; 0060f557
    POP EBP                             ; 0060f55a
    POP EDI                             ; 0060f55b
    POP ESI                             ; 0060f55c
    POP EBX                             ; 0060f55d
    RET                                 ; 0060f55e
    MOV EBX,EAX                         ; 0060f55f
        ;   Label: LAB_0060f55f
    LEA EAX,[EBP + 0x2a]                ; 0060f561
        ;   Label: LAB_0060f561
    PUSH EAX                            ; 0060f564
    LEA EAX,[EBP + 0x2e]                ; 0060f565
    PUSH EAX                            ; 0060f568
    LEA EAX,[EBP + 0x32]                ; 0060f569
    PUSH EAX                            ; 0060f56c
    LEA EAX,[EBP + 0x36]                ; 0060f56d
    PUSH EAX                            ; 0060f570
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0060f571
    SUB EAX,0x107                       ; 0060f574
    ADD EAX,EBX                         ; 0060f579
    PUSH EAX                            ; 0060f57b
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0060f57c
    PUSH EAX                            ; 0060f582
    CALL crt_file.c_splitpath_s_FUN_00610460 ; 0060f583
        ;   XREF to: 00610460 (UNCONDITIONAL_CALL)  ; void crt_file.c_splitpath_s_FUN_00610460(char * path, char * buffer, char * drive, char * dir, ...)
    ADD ESP,0x18                        ; 0060f588
    LEA EAX,[EBP + -0x42]               ; 0060f58b
    PUSH EAX                            ; 0060f58e
    CALL dword ptr [0x00685464]         ; 0060f58f | PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464
    ADD ESP,0x4                         ; 0060f595
    MOV EDX,dword ptr [EBP + 0x3e]      ; 0060f598
    PUSH EDX                            ; 0060f59b
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 0060f59c
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 0060f5a1
    MOV dword ptr [EBP + 0x56],EAX      ; 0060f5a4
    TEST EAX,EAX                        ; 0060f5a7
    JNZ 0x0060f603                      ; 0060f5a9
        ;   XREF to: 0060f603 (CONDITIONAL_JUMP)  ; LAB_0060f603
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0060f5ab
    ADD EAX,0x3                         ; 0060f5ae
    AND AL,0xfc                         ; 0060f5b1
    MOV dword ptr [EBP + 0x4e],EAX      ; 0060f5b3
    CALL crt_stack.c_GetStackUsage_FUN_0060c260 ; 0060f5b6
        ;   XREF to: 0060c260 (UNCONDITIONAL_CALL)  ; int crt_stack.c_GetStackUsage_FUN_0060c260()
    CMP EAX,dword ptr [EBP + 0x4e]      ; 0060f5bb
    JBE 0x0060f5dc                      ; 0060f5be
        ;   XREF to: 0060f5dc (CONDITIONAL_JUMP)  ; LAB_0060f5dc
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0060f5c0
    ADD EAX,0x3                         ; 0060f5c3
    AND AL,0xfc                         ; 0060f5c6
    PUSH EAX                            ; 0060f5c8
    CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f ; 0060f5c9
        ;   XREF to: 005ffa2f (UNCONDITIONAL_CALL)  ; void crt_stack.c_ProbeStackSpace_FUN_005ffa2f(uint size)
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0060f5ce
    ADD EAX,0x3                         ; 0060f5d1
    AND AL,0xfc                         ; 0060f5d4
    SUB ESP,EAX                         ; 0060f5d6
    MOV EAX,ESP                         ; 0060f5d8
    JMP 0x0060f5de                      ; 0060f5da
        ;   XREF to: 0060f5de (UNCONDITIONAL_JUMP)  ; LAB_0060f5de
    XOR EAX,EAX                         ; 0060f5dc
        ;   Label: LAB_0060f5dc
    MOV dword ptr [EBP + 0x6a],EAX      ; 0060f5de
        ;   Label: LAB_0060f5de
    TEST EAX,EAX                        ; 0060f5e1
    JNZ 0x0060f606                      ; 0060f5e3
        ;   XREF to: 0060f606 (CONDITIONAL_JUMP)  ; LAB_0060f606
    PUSH 0x2                            ; 0060f5e5
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f5e7
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060f5ec
    PUSH 0xa                            ; 0060f5ef
    MOV EDI,0xffffffff                  ; 0060f5f1
    CALL crt_errno.c_SetWindowsError_FUN_006027c8 ; 0060f5f6
        ;   XREF to: 006027c8 (UNCONDITIONAL_CALL)  ; void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
    ADD ESP,0x4                         ; 0060f5fb
    JMP 0x0060f80e                      ; 0060f5fe
        ;   XREF to: 0060f80e (UNCONDITIONAL_JUMP)  ; LAB_0060f80e
    MOV dword ptr [EBP + 0x6a],EAX      ; 0060f603
        ;   Label: LAB_0060f603
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0060f606
        ;   Label: LAB_0060f606
    PUSH EAX                            ; 0060f609
    MOV EDX,dword ptr [EBP + 0x2e]      ; 0060f60a
    PUSH EDX                            ; 0060f60d
    MOV ECX,dword ptr [EBP + 0x32]      ; 0060f60e
    PUSH ECX                            ; 0060f611
    MOV EAX,dword ptr [EBP + 0x36]      ; 0060f612
    PUSH EAX                            ; 0060f615
    PUSH EBX                            ; 0060f616
    CALL crt_file.c_makepath_FUN_005febfc ; 0060f617
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0060f61c
    PUSH 0x1                            ; 0060f61f
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f621
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0060f626
    MOV DL,byte ptr [EAX]               ; 0060f629
    ADD ESP,0x4                         ; 0060f62b
    TEST DL,DL                          ; 0060f62e
    JZ 0x0060f687                       ; 0060f630
        ;   XREF to: 0060f687 (CONDITIONAL_JUMP)  ; LAB_0060f687
    PUSH 0x659758                       ; 0060f632 | = ".bat"
    PUSH EAX                            ; 0060f637
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0060f638
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0060f63d
    TEST EAX,EAX                        ; 0060f640
    JNZ 0x0060f65c                      ; 0060f642
        ;   XREF to: 0060f65c (CONDITIONAL_JUMP)  ; LAB_0060f65c
    PUSH EBX                            ; 0060f644
    MOV EDI,0xffffffff                  ; 0060f645
    CALL crt_io.c_exists_FUN_0060f380   ; 0060f64a
        ;   XREF to: 0060f380 (UNCONDITIONAL_CALL)  ; BOOL crt_io.c_exists_FUN_0060f380(char * filename)
    ADD ESP,0x4                         ; 0060f64f
    TEST EAX,EAX                        ; 0060f652
    JNZ 0x0060f79d                      ; 0060f654
        ;   XREF to: 0060f79d (CONDITIONAL_JUMP)  ; LAB_0060f79d
    JMP 0x0060f687                      ; 0060f65a
        ;   XREF to: 0060f687 (UNCONDITIONAL_JUMP)  ; LAB_0060f687
    PUSH 0x0                            ; 0060f65c
        ;   Label: LAB_0060f65c
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f65e
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060f663
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0060f666
    PUSH ECX                            ; 0060f66c
    MOV EDI,dword ptr [EBP + 0x4a]      ; 0060f66d
    PUSH EDI                            ; 0060f670
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0060f671
    PUSH EAX                            ; 0060f674
    PUSH EBX                            ; 0060f675
    MOV EDX,dword ptr [EBP + 0x86]      ; 0060f676
    PUSH EDX                            ; 0060f67c
    CALL crt_process.c_spawn_FUN_006105a0 ; 0060f67d
        ;   XREF to: 006105a0 (UNCONDITIONAL_CALL)  ; int crt_process.c_spawn_FUN_006105a0(int mode, char * cmdline, char * envblock, void * reserved)
    ADD ESP,0x14                        ; 0060f682
    MOV EDI,EAX                         ; 0060f685
    CALL dword ptr [0x00684ee4]         ; 0060f687 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060f687
    CMP dword ptr [EAX + 0x4],0x1       ; 0060f68d
    JZ 0x0060f6a3                       ; 0060f691
        ;   XREF to: 0060f6a3 (CONDITIONAL_JUMP)  ; LAB_0060f6a3
    CALL dword ptr [0x00684ee4]         ; 0060f693 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x9       ; 0060f699
    JNZ 0x0060f80e                      ; 0060f69d
        ;   XREF to: 0060f80e (CONDITIONAL_JUMP)  ; LAB_0060f80e
    PUSH EBX                            ; 0060f6a3
        ;   Label: LAB_0060f6a3
    CALL crt_string.c_strlen_FUN_0060f870 ; 0060f6a4
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    LEA EDX,[EBX + EAX*0x1]             ; 0060f6a9
    MOV dword ptr [EBP + 0x5a],EDX      ; 0060f6ac
    MOV DH,byte ptr [EBP + 0x6e]        ; 0060f6af
    ADD ESP,0x4                         ; 0060f6b2
    TEST DH,DH                          ; 0060f6b5
    JZ 0x0060f6c5                       ; 0060f6b7
        ;   XREF to: 0060f6c5 (CONDITIONAL_JUMP)  ; LAB_0060f6c5
    PUSH 0x1                            ; 0060f6b9
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f6bb
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060f6c0
    JMP 0x0060f701                      ; 0060f6c3
        ;   XREF to: 0060f701 (UNCONDITIONAL_JUMP)  ; LAB_0060f701
    PUSH 0x659760                       ; 0060f6c5 | = ".com"
        ;   Label: LAB_0060f6c5
    MOV ECX,dword ptr [EBP + 0x5a]      ; 0060f6ca
    PUSH ECX                            ; 0060f6cd
    CALL crt_string.c_strcpy_FUN_00610760 ; 0060f6ce
        ;   XREF to: 00610760 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_FUN_00610760(char * dest, char * src)
    ADD ESP,0x8                         ; 0060f6d3
    PUSH 0x0                            ; 0060f6d6
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f6d8
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060f6dd
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0060f6e0
    PUSH EDI                            ; 0060f6e6
    MOV EAX,dword ptr [EBP + 0x4a]      ; 0060f6e7
    PUSH EAX                            ; 0060f6ea
    MOV EDX,dword ptr [EBP + 0x6a]      ; 0060f6eb
    PUSH EDX                            ; 0060f6ee
    PUSH EBX                            ; 0060f6ef
    MOV ECX,dword ptr [EBP + 0x86]      ; 0060f6f0
    PUSH ECX                            ; 0060f6f6
    CALL crt_process.c_spawn_FUN_006105a0 ; 0060f6f7
        ;   XREF to: 006105a0 (UNCONDITIONAL_CALL)  ; int crt_process.c_spawn_FUN_006105a0(int mode, char * cmdline, char * envblock, void * reserved)
    ADD ESP,0x14                        ; 0060f6fc
    MOV EDI,EAX                         ; 0060f6ff
    CALL dword ptr [0x00684ee4]         ; 0060f701 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060f701
    CMP dword ptr [EAX + 0x4],0x1       ; 0060f707
    JZ 0x0060f71d                       ; 0060f70b
        ;   XREF to: 0060f71d (CONDITIONAL_JUMP)  ; LAB_0060f71d
    CALL dword ptr [0x00684ee4]         ; 0060f70d | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x9       ; 0060f713
    JNZ 0x0060f80e                      ; 0060f717
        ;   XREF to: 0060f80e (CONDITIONAL_JUMP)  ; LAB_0060f80e
    PUSH 0x0                            ; 0060f71d
        ;   Label: LAB_0060f71d
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f71f
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060f724
    PUSH 0x659768                       ; 0060f727 | = ".exe"
    MOV EDI,dword ptr [EBP + 0x5a]      ; 0060f72c
    PUSH EDI                            ; 0060f72f
    CALL crt_string.c_strcpy_FUN_00610760 ; 0060f730
        ;   XREF to: 00610760 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_FUN_00610760(char * dest, char * src)
    ADD ESP,0x8                         ; 0060f735
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0060f738
    PUSH EAX                            ; 0060f73e
    MOV EDX,dword ptr [EBP + 0x4a]      ; 0060f73f
    PUSH EDX                            ; 0060f742
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0060f743
    PUSH ECX                            ; 0060f746
    PUSH EBX                            ; 0060f747
    MOV EDI,dword ptr [EBP + 0x86]      ; 0060f748
    PUSH EDI                            ; 0060f74e
    CALL crt_process.c_spawn_FUN_006105a0 ; 0060f74f
        ;   XREF to: 006105a0 (UNCONDITIONAL_CALL)  ; int crt_process.c_spawn_FUN_006105a0(int mode, char * cmdline, char * envblock, void * reserved)
    ADD ESP,0x14                        ; 0060f754
    MOV EDI,EAX                         ; 0060f757
    CALL dword ptr [0x00684ee4]         ; 0060f759 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x1       ; 0060f75f
    JZ 0x0060f775                       ; 0060f763
        ;   XREF to: 0060f775 (CONDITIONAL_JUMP)  ; LAB_0060f775
    CALL dword ptr [0x00684ee4]         ; 0060f765 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x9       ; 0060f76b
    JNZ 0x0060f80e                      ; 0060f76f
        ;   XREF to: 0060f80e (CONDITIONAL_JUMP)  ; LAB_0060f80e
    PUSH 0x0                            ; 0060f775
        ;   Label: LAB_0060f775
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060f777
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060f77c
    PUSH 0x659758                       ; 0060f77f | = ".bat"
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0060f784
    PUSH EAX                            ; 0060f787
    CALL crt_string.c_strcpy_FUN_00610760 ; 0060f788
        ;   XREF to: 00610760 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_FUN_00610760(char * dest, char * src)
    ADD ESP,0x8                         ; 0060f78d
    PUSH EBX                            ; 0060f790
    CALL crt_io.c_exists_FUN_0060f380   ; 0060f791
        ;   XREF to: 0060f380 (UNCONDITIONAL_CALL)  ; BOOL crt_io.c_exists_FUN_0060f380(char * filename)
    ADD ESP,0x4                         ; 0060f796
    TEST EAX,EAX                        ; 0060f799
    JZ 0x0060f80e                       ; 0060f79b
        ;   XREF to: 0060f80e (CONDITIONAL_JUMP)  ; LAB_0060f80e
    MOV EDX,dword ptr [EBP + 0x4a]      ; 0060f79d
        ;   Label: LAB_0060f79d
    PUSH EDX                            ; 0060f7a0
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f7a1
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f7a6
    PUSH 0x1                            ; 0060f7a9
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0060f7ab
    PUSH EDI                            ; 0060f7ae
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0060f7af
    PUSH EAX                            ; 0060f7b5
    XOR ECX,ECX                         ; 0060f7b6
    PUSH EBX                            ; 0060f7b8
    MOV dword ptr [EBP + 0x4a],ECX      ; 0060f7b9
    CALL crt_process.c_build_command_line_FUN_006103a4 ; 0060f7bc
        ;   XREF to: 006103a4 (UNCONDITIONAL_CALL)  ; void crt_process.c_build_command_line_FUN_006103a4(char * program_name, char * * argv, char * buffer, int skip_program_name)
    ADD ESP,0x10                        ; 0060f7c1
    PUSH 0x0                            ; 0060f7c4
    PUSH EDI                            ; 0060f7c6
    XOR EAX,EAX                         ; 0060f7c7
    PUSH EBX                            ; 0060f7c9
    MOV AL,byte ptr [EBP + 0x6e]        ; 0060f7ca
    PUSH EAX                            ; 0060f7cd
    LEA EAX,[EBP + 0x3a]                ; 0060f7ce
    PUSH EAX                            ; 0060f7d1
    CALL crt_process.c_set_shell_execute_flag_FUN_00609c80 ; 0060f7d2
        ;   XREF to: 00609c80 (UNCONDITIONAL_CALL)  ; void crt_process.c_set_shell_execute_flag_FUN_00609c80(char * buffer)
    ADD ESP,0x8                         ; 0060f7d7
    MOV BL,byte ptr [EBP + 0x6e]        ; 0060f7da
    PUSH EAX                            ; 0060f7dd
    TEST BL,BL                          ; 0060f7de
    JZ 0x0060f7e9                       ; 0060f7e0
        ;   XREF to: 0060f7e9 (CONDITIONAL_JUMP)  ; LAB_0060f7e9
    MOV EAX,0x659778                    ; 0060f7e2 | = "CMD"
    JMP 0x0060f7ee                      ; 0060f7e7
        ;   XREF to: 0060f7ee (UNCONDITIONAL_JUMP)  ; LAB_0060f7ee
    MOV EAX,0x65977c                    ; 0060f7e9 | = "COMMAND"
        ;   Label: LAB_0060f7e9
    PUSH EAX                            ; 0060f7ee | = "CMD" | s_COMMAND_0065977c
        ;   Label: LAB_0060f7ee
    PUSH 0x659770                       ; 0060f7ef | = "COMSPEC"
    CALL crt_env.c_getenv_FUN_006013f0  ; 0060f7f4
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 0060f7f9
    PUSH EAX                            ; 0060f7fc
    MOV EBX,dword ptr [EBP + 0x86]      ; 0060f7fd
    PUSH EBX                            ; 0060f803
    CALL crt_process.c_execvp_FUN_00610790 ; 0060f804
        ;   XREF to: 00610790 (UNCONDITIONAL_CALL)  ; int crt_process.c_execvp_FUN_00610790(int argc, char * program, char * arg1, char * arg2)
    ADD ESP,0x1c                        ; 0060f809
    MOV EDI,EAX                         ; 0060f80c
    CMP dword ptr [EBP + 0x62],0x0      ; 0060f80e
        ;   Label: LAB_0060f80e
    JZ 0x0060f829                       ; 0060f812
        ;   XREF to: 0060f829 (CONDITIONAL_JUMP)  ; LAB_0060f829
    PUSH ESI                            ; 0060f814
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f815
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f81a
    MOV ESI,dword ptr [EBP + 0x66]      ; 0060f81d
    PUSH ESI                            ; 0060f820
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f821
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f826
    MOV EAX,dword ptr [EBP + 0x56]      ; 0060f829
        ;   Label: LAB_0060f829
    PUSH EAX                            ; 0060f82c
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 0060f82d
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    ADD ESP,0x4                         ; 0060f832
    MOV EDX,dword ptr [EBP + 0x52]      ; 0060f835
    PUSH EDX                            ; 0060f838
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 0060f839
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    ADD ESP,0x4                         ; 0060f83e
    MOV EBX,dword ptr [EBP + 0x4a]      ; 0060f841
    PUSH EBX                            ; 0060f844
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f845
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f84a
    LEA EAX,[EBP + -0x42]               ; 0060f84d
    PUSH EAX                            ; 0060f850
    CALL dword ptr [0x00685468]         ; 0060f851 | PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468
    ADD ESP,0x4                         ; 0060f857
    MOV EAX,EDI                         ; 0060f85a
    LEA ESP,[EBP + 0x72]                ; 0060f85c
        ;   Label: LAB_0060f85c
    POP EBP                             ; 0060f85f
    POP EDI                             ; 0060f860
    POP ESI                             ; 0060f861
    POP EBX                             ; 0060f862
    RET                                 ; 0060f863

