; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_process.c_build_cmdline_FUN_00610258(int argc, char * * argv, char * program, char * * out_cmdline, char * * out_environment, char * * out_buffer, int * out_bufsize, int copy_program_flag)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char * *         Stack[0x8]:4   argv
; char *           Stack[0xc]:4   program
; char * *         Stack[0x10]:4   out_cmdline
; char * *         Stack[0x14]:4   out_environment
; char * *         Stack[0x18]:4   out_buffer
; int *            Stack[0x1c]:4   out_bufsize
; int              Stack[0x20]:4   copy_program_flag
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f4a4
;
; Referenced Globals:
;   int g_HeapFlags = 0x10000
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_errno.c_SetWindowsError_FUN_006027c8
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c_strcpy_advance_FUN_00610240
;   crt_string.c_strcpy_FUN_00610760
;   crt_string.c_strlen_FUN_0060f870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610258
        ;   Label: crt_process.c_build_cmdline_FUN_00610258
    PUSH ESI                            ; 00610259
    PUSH EDI                            ; 0061025a
    PUSH EBP                            ; 0061025b
    SUB ESP,0x4                         ; 0061025c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0061025f
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00610263
    TEST EBP,EBP                        ; 00610267
    JNZ 0x00610271                      ; 00610269
        ;   XREF to: 00610271 (CONDITIONAL_JUMP)  ; LAB_00610271
    MOV EBP,dword ptr [0x03f9b864]      ; 0061026b | g_EnvironmentBlock
    XOR EDI,EDI                         ; 00610271
        ;   Label: LAB_00610271
    TEST EBP,EBP                        ; 00610273
    JZ 0x00610297                       ; 00610275
        ;   XREF to: 00610297 (CONDITIONAL_JUMP)  ; LAB_00610297
    MOV EDX,dword ptr [EBP]             ; 00610277
    MOV EBX,EBP                         ; 0061027a
    TEST EDX,EDX                        ; 0061027c
    JZ 0x00610297                       ; 0061027e
        ;   XREF to: 00610297 (CONDITIONAL_JUMP)  ; LAB_00610297
    MOV ECX,dword ptr [EBX]             ; 00610280
        ;   Label: LAB_00610280
    PUSH ECX                            ; 00610282
    CALL crt_string.c_strlen_FUN_0060f870 ; 00610283
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    INC EAX                             ; 00610288
    ADD EBX,0x4                         ; 00610289
    ADD EDI,EAX                         ; 0061028c
    MOV EAX,dword ptr [EBX]             ; 0061028e
    ADD ESP,0x4                         ; 00610290
    TEST EAX,EAX                        ; 00610293
    JNZ 0x00610280                      ; 00610295
        ;   XREF to: 00610280 (CONDITIONAL_JUMP)  ; LAB_00610280
    MOV EDX,dword ptr [ESP + 0x30]      ; 00610297
        ;   Label: LAB_00610297
    INC EDI                             ; 0061029b
    TEST EDX,EDX                        ; 0061029c
    JZ 0x006102b0                       ; 0061029e
        ;   XREF to: 006102b0 (CONDITIONAL_JUMP)  ; LAB_006102b0
    MOV EBX,dword ptr [ESI]             ; 006102a0
    PUSH EBX                            ; 006102a2
    CALL crt_string.c_strlen_FUN_0060f870 ; 006102a3
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    ADD EAX,0x3                         ; 006102a8
    ADD ESP,0x4                         ; 006102ab
    ADD EDI,EAX                         ; 006102ae
    MOV ECX,0x10                        ; 006102b0
        ;   Label: LAB_006102b0
    ADD EDI,0xf                         ; 006102b5
    MOV EAX,[0x006854f4]                ; 006102b8 | g_HeapFlags
    PUSH EDI                            ; 006102bd
    MOV dword ptr [ESP + 0x4],EAX       ; 006102be
    MOV dword ptr [0x006854f4],ECX      ; 006102c2 | g_HeapFlags
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 006102c8
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 006102cd
    TEST EAX,EAX                        ; 006102d0
    JNZ 0x00610307                      ; 006102d2
        ;   XREF to: 00610307 (CONDITIONAL_JUMP)  ; LAB_00610307
    PUSH EDI                            ; 006102d4
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 006102d5
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 006102da
    TEST EAX,EAX                        ; 006102dd
    JNZ 0x00610307                      ; 006102df
        ;   XREF to: 00610307 (CONDITIONAL_JUMP)  ; LAB_00610307
    PUSH 0x5                            ; 006102e1
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006102e3
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006102e8
    PUSH 0x8                            ; 006102eb
    CALL crt_errno.c_SetWindowsError_FUN_006027c8 ; 006102ed
        ;   XREF to: 006027c8 (UNCONDITIONAL_CALL)  ; void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
    ADD ESP,0x4                         ; 006102f2
    MOV EAX,dword ptr [ESP]             ; 006102f5
    MOV [0x006854f4],EAX                ; 006102f8 | g_HeapFlags
    MOV EAX,0xffffffff                  ; 006102fd
    JMP 0x0061039b                      ; 00610302
        ;   XREF to: 0061039b (UNCONDITIONAL_JUMP)  ; LAB_0061039b
    MOV EBX,dword ptr [ESP]             ; 00610307
        ;   Label: LAB_00610307
    MOV dword ptr [0x006854f4],EBX      ; 0061030a | g_HeapFlags
    MOV EBX,dword ptr [ESP + 0x20]      ; 00610310
    MOV dword ptr [EBX],EAX             ; 00610314
    MOV EBX,dword ptr [ESP + 0x28]      ; 00610316
    MOV dword ptr [EBX],0x0             ; 0061031a
    MOV EBX,dword ptr [ESP + 0x24]      ; 00610320
    MOV dword ptr [EBX],EAX             ; 00610324
    TEST EBP,EBP                        ; 00610326
    JZ 0x00610349                       ; 00610328
        ;   XREF to: 00610349 (CONDITIONAL_JUMP)  ; LAB_00610349
    MOV EDX,dword ptr [EBP]             ; 0061032a
    MOV EBX,EBP                         ; 0061032d
    TEST EDX,EDX                        ; 0061032f
    JZ 0x00610349                       ; 00610331
        ;   XREF to: 00610349 (CONDITIONAL_JUMP)  ; LAB_00610349
    MOV ECX,dword ptr [EBX]             ; 00610333
        ;   Label: LAB_00610333
    PUSH ECX                            ; 00610335
    PUSH EAX                            ; 00610336
    ADD EBX,0x4                         ; 00610337
    CALL crt_string.c_strcpy_advance_FUN_00610240 ; 0061033a
        ;   XREF to: 00610240 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_advance_FUN_00610240(char * dest, char * src)
    ADD ESP,0x8                         ; 0061033f
    MOV EBP,dword ptr [EBX]             ; 00610342
    INC EAX                             ; 00610344
    TEST EBP,EBP                        ; 00610345
    JNZ 0x00610333                      ; 00610347
        ;   XREF to: 00610333 (CONDITIONAL_JUMP)  ; LAB_00610333
    MOV EDX,dword ptr [ESP + 0x30]      ; 00610349
        ;   Label: LAB_00610349
    MOV byte ptr [EAX],0x0              ; 0061034d
    INC EAX                             ; 00610350
    TEST EDX,EDX                        ; 00610351
    JZ 0x00610364                       ; 00610353
        ;   XREF to: 00610364 (CONDITIONAL_JUMP)  ; LAB_00610364
    MOV EBX,dword ptr [ESI]             ; 00610355
    PUSH EBX                            ; 00610357
    ADD EAX,0x2                         ; 00610358
    PUSH EAX                            ; 0061035b
    CALL crt_string.c_strcpy_FUN_00610760 ; 0061035c
        ;   XREF to: 00610760 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_FUN_00610760(char * dest, char * src)
    ADD ESP,0x8                         ; 00610361
    MOV ECX,dword ptr [ESI]             ; 00610364
        ;   Label: LAB_00610364
    XOR EBX,EBX                         ; 00610366
    TEST ECX,ECX                        ; 00610368
    JZ 0x0061038a                       ; 0061036a
        ;   XREF to: 0061038a (CONDITIONAL_JUMP)  ; LAB_0061038a
    ADD ESI,0x4                         ; 0061036c
    JMP 0x00610384                      ; 0061036f
        ;   XREF to: 00610384 (UNCONDITIONAL_JUMP)  ; LAB_00610384
    TEST EBX,EBX                        ; 00610371
        ;   Label: LAB_00610371
    JZ 0x00610376                       ; 00610373
        ;   XREF to: 00610376 (CONDITIONAL_JUMP)  ; LAB_00610376
    INC EBX                             ; 00610375
    PUSH EAX                            ; 00610376
        ;   Label: LAB_00610376
    CALL crt_string.c_strlen_FUN_0060f870 ; 00610377
        ;   XREF to: 0060f870 (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_FUN_0060f870(char * str)
    ADD ESI,0x4                         ; 0061037c
    ADD ESP,0x4                         ; 0061037f
    ADD EBX,EAX                         ; 00610382
    MOV EAX,dword ptr [ESI]             ; 00610384
        ;   Label: LAB_00610384
    TEST EAX,EAX                        ; 00610386
    JNZ 0x00610371                      ; 00610388
        ;   XREF to: 00610371 (CONDITIONAL_JUMP)  ; LAB_00610371
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0061038a
        ;   Label: LAB_0061038a
    ADD EBX,0x108                       ; 0061038e
    MOV dword ptr [EAX],EBX             ; 00610394
    MOV EAX,EDI                         ; 00610396
    SHR EAX,0x4                         ; 00610398
    ADD ESP,0x4                         ; 0061039b
        ;   Label: LAB_0061039b
    POP EBP                             ; 0061039e
    POP EDI                             ; 0061039f
    POP ESI                             ; 006103a0
    POP EBX                             ; 006103a1
    RET                                 ; 006103a2

